#include "global.h"
#include "bg.h"
#include "coins.h"
#include "data.h"
#include "decompress.h"
#include "decoration.h"
#include "decoration_inventory.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "frontier_util.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "list_menu.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "money.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "shop.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "text_window.h"
#include "tv.h"
#include "grid_menu.h"
#include "event_data.h"
#include "move.h"
#include "constants/decorations.h"
#include "constants/items.h"
#include "constants/metatile_behaviors.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/event_objects.h"

#ifdef MUDSKIP_SHOP_UI

#ifdef MUDSKIP_OUTFIT_SYSTEM
#include "outfit_menu.h"
#endif

#include "new_shop.h"
#include "constants/new_shop.h"

#define GFXTAG_CURSOR 0x1300
#define PALTAG_CURSOR 0x1300

#define GFXTAG_ITEM 0x1000
#define PALTAG_ITEM 0x2000

#define CURSOR_START_X 100 + 32
#define CURSOR_START_Y 4 + 32

#define RIGHT_ALIGNED_X -1

// the x is either 0 or RIGHT_ALIGNED_X
#define ITEM_NAME_Y   (0 * 16)
#define ITEM_PRICE_Y  (1 * 16)
#define ITEM_IN_BAG_Y (2 * 16)

#define MAX_ITEMS_SHOWN sShopData->gridItems->numItems

enum {
    WIN_BUY_SELL_QUIT,
    WIN_BUY_QUIT,
};

enum {
    WIN_MONEY,
    WIN_MULTI,
    WIN_ITEM_DESCRIPTION,
    WIN_QUANTITY_PRICE,
    WIN_MUGSHOT,
};

enum {
    COLORID_NORMAL,      // Money amount
    COLORID_BLACK,       // Item descriptions, quantity in bag, and quantity/price
};

// seller id
enum
{
    SELLER_NONE,
    SELLER_JERRY, // OBJ_EVENT_GFX_MART_EMPLOYEE
    SELLER_JENNIE, // OBJ_EVENT_GFX_WOMAN_3
    SELLER_COUNT,
};

enum Seller_MessageIds
{
    SELLER_MSG_RETURN_TO_FIELD = 0,
    SELLER_MSG_BUY_PROMPT,
    SELLER_MSG_BUY_COIN_PROMPT,
    SELLER_MSG_BUY_BP_PROMPT,
    SELLER_MSG_BUY_PROMPT_PLURAL,
    SELLER_MSG_BUY_CONFIRM,
    SELLER_MSG_BUY_COIN_CONFIRM,
    SELLER_MSG_BUY_POINT_CONFIRM,
    SELLER_MSG_BUY_SUCCESS,
    SELLER_MSG_BUY_FAIL_NO_SPACE,
    SELLER_MSG_BUY_FAIL_NO_MONEY,
    SELLER_MSG_BUY_FAIL_NO_COINS,
    SELLER_MSG_BUY_FAIL_NO_POINTS,
    SELLER_MSG_BUY_FAIL_SOLD_OUT,
    SELLER_MGS_BUY_PREMIER_BONUS,
    SELLER_MSG_BUY_PREMIER_BONUS_PLURAL,
    #ifdef MUDSKIP_OUTFIT_SYSTEM
    SELLER_MSG_BUY_OUTFIT_PROMPT,
    #endif // MUDSKIP_OUTFIT_SYSTEM
    SELLER_MSG_COUNT,
};

enum Seller_GraphicsIds
{
    SELLER_GFX_MUGSHOT_GFX = 0,
    SELLER_GFX_MUGSHOT_PAL,

    SELLER_GFX_MENU_GFX,
    SELLER_GFX_MENU_PAL,
    SELLER_GFX_MENU_MAP,

    SELLER_GFX_SCROLL_GFX,
    SELLER_GFX_SCROLL_PAL,
    SELLER_GFX_SCROLL_MAP,

    SELLER_GFX_CURSOR_GFX,
    SELLER_GFX_CURSOR_PAL,
};

struct MartInfo
{
    void (*callback)(void);
    const struct MenuAction *menuActions;
    const u16 *itemSource;
    u16 *itemList;
    u16 *itemPriceList;
    u16 itemCount;
    u8 windowId;
    u8 martType;
    u16 sellerId;
};

struct ShopData
{
    u16 tilemapBuffers[2][0x400];
    u32 totalCost;
    u16 maxQuantity;
    u8 gfxLoadState;
    u8 cursorSpriteId;
    u16 currentItemId;
    struct GridMenu *gridItems;
};

struct Seller
{
    // Add more id "param" on the union here
    union {
        u16 gfxId;
    } id;
    const u8 *mugshotGfx;
    const u16 *mugshotPal;

    u32 menuTileOffset;
    const u32 *menuGfx;
    const u32 *menuCoinGfx;
    const u32 *menuPointGfx;
    const u16 *menuPal;
    const u32 *menuMap;

    const u32 *scrollGfx;
    const u16 *scrollPal;
    const u32 *scrollMap;

    const u16 *cursorGfx;
    const u16 *cursorPal;

    const u8 *message[SELLER_MSG_COUNT];
};

static EWRAM_DATA struct MartInfo sMartInfo = {0};
static EWRAM_DATA struct ShopData *sShopData = NULL;
static EWRAM_DATA u8 sPurchaseHistoryId = 0;

static const u8 sText_SoldOut[] = _("Sold Out");

static const u8 sText_ThatItemIsSoldOut[] = _("I'm sorry, but\nthat item is\nsold out.");
static const u8 sText_Var1CertainlyHowMany[] = _("{STR_VAR_1}?\nCertainly. How\nmany?");
static const u8 sText_Var1AndYouWantedVar2[] = _("So you wanted\n{STR_VAR_2} {STR_VAR_1}?\nThat'll be ¥{STR_VAR_3}.");
static const u8 sText_Var1AndYouWantedVar2Coins[] = _("So you wanted\n{STR_VAR_2} {STR_VAR_1}?\nThat'll be {STR_VAR_3} Coins.");
static const u8 sText_Var1AndYouWantedVar2BP[] = _("So you wanted\n{STR_VAR_2} {STR_VAR_1}?\nThat'll be {STR_VAR_3} BP.");
static const u8 sText_YouWantedVar1ThatllBeVar2[] = _("You wanted the\n{STR_VAR_1}?\nThat'll be ¥{STR_VAR_2}.");
static const u8 sText_YouWantedVar1ThatllBeVar2Coins[] = _("You wanted the\n{STR_VAR_1}?\nThat'll be {STR_VAR_2} Coins.");
static const u8 sText_YouWantedVar1ThatllBeVar2BP[] = _("You wanted the\n{STR_VAR_1}?\nThat'll be {STR_VAR_2} BP.");
static const u8 sText_YouWantedVar1OutfitThatllBeVar2[] = _("You wanted that {STR_VAR_1} Outfit?\nThat'll be ¥{STR_VAR_2}. Will that be okay?");
static const u8 sText_HereYouGoThankYou[] = _("Here you go!\nThank you very much.");
static const u8 sText_ThankYouIllSendItHome[] = _("Thank you!\nI'll send it to\nyour home PC.");
static const u8 sText_ThanksIllSendItHome[] = _("Thanks!\nI'll send it to your\nPC at home.");
static const u8 sText_YouDontHaveMoney[] = _("You don't have\nenough money.");
static const u8 sText_YouDontHaveCoins[] = _("You don't have\nenough Coins.{PAUSE_UNTIL_PRESS}");
static const u8 sText_YouDontHaveBP[] = _("You don't have\nenough Battle Points.{PAUSE_UNTIL_PRESS}");
static const u8 sText_NoMoreRoomForThis[] = _("You have no more\nroom for this\nitem.");
static const u8 sText_SpaceForVar1Full[] = _("The space for\n{STR_VAR_1}\nis full.");
static const u8 sText_ThrowInPremierBall[] = _("I'll throw in\na PREMIER BALL,\ntoo.");
static const u8 sText_ThrowInPremierBalls[] = _("I'll throw in\n{STR_VAR_1} PREMIER BALLS,\ntoo.");

// default state if all seller-based graphics fails
static const u32 sNewShopMenu_DefaultMenuGfx[] = INCBIN_U32("graphics/new_shop/menu.4bpp.lz");
static const u32 sNewShopMenu_DefaultMenuCoinGfx[] = INCBIN_U32("graphics/new_shop/menu_coin.4bpp.lz");
static const u32 sNewShopMenu_DefaultMenuPointGfx[] = INCBIN_U32("graphics/new_shop/menu_bp.4bpp.lz");
static const u16 sNewShopMenu_DefaultMenuPal[] = INCBIN_U16("graphics/new_shop/menu.gbapal");
static const u32 sNewShopMenu_DefaultMenuTilemap[] = INCBIN_U32("graphics/new_shop/menu.bin.lz");
static const u32 sNewShopMenu_DefaultScrollGfx[] = INCBIN_U32("graphics/new_shop/scroll.4bpp.lz");
static const u32 sNewShopMenu_DefaultScrollTilemap[] = INCBIN_U32("graphics/new_shop/scroll.bin.lz");
static const u16 sNewShopMenu_DefaultCursorGfx[] = INCBIN_U16("graphics/new_shop/cursor.4bpp"); // uses the menu palette

static const u8 sNewShopMenu_SellerMugshotGfx_Jerry[] = INCBIN_U8("graphics/new_shop/sellers/jerry/mugshot.4bpp");
static const u16 sNewShopMenu_SellerMugshotPal_Jerry[] = INCBIN_U16("graphics/new_shop/sellers/jerry/mugshot.gbapal");
static const u32 sNewShopMenu_SellerMenuGfx_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu.4bpp.lz");
static const u32 sNewShopMenu_SellerMenuCoinGfx_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu_coin.4bpp.lz");
static const u32 sNewShopMenu_SellerMenuPointsGfx_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu_bp.4bpp.lz");
static const u16 sNewShopMenu_SellerMenuPal_Jerry[] = INCBIN_U16("graphics/new_shop/sellers/jerry/menu.gbapal");
static const u32 sNewShopMenu_SellerMenuMap_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/menu.bin.lz");
static const u32 sNewShopMenu_SellerScrollGfx_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/scroll.4bpp.lz");
static const u16 sNewShopMenu_SellerScrollPal_Jerry[] = INCBIN_U16("graphics/new_shop/sellers/jerry/scroll.gbapal");
static const u32 sNewShopMenu_SellerScrollMap_Jerry[] = INCBIN_U32("graphics/new_shop/sellers/jerry/scroll.bin.lz");
static const u16 sNewShopMenu_SellerCursorGfx_Jerry[] = INCBIN_U16("graphics/new_shop/sellers/jerry/cursor.4bpp");
static const u16 sNewShopMenu_SellerCursorPal_Jerry[] = INCBIN_U16("graphics/new_shop/sellers/jerry/cursor.gbapal");

static const u8 sNewShopMenu_SellerMugshotGfx_Jennie[] = INCBIN_U8("graphics/new_shop/sellers/jennie/mugshot.4bpp");
static const u16 sNewShopMenu_SellerMugshotPal_Jennie[] = INCBIN_U16("graphics/new_shop/sellers/jennie/mugshot.gbapal");
static const u32 sNewShopMenu_SellerMenuGfx_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu.4bpp.lz");
static const u32 sNewShopMenu_SellerMenuCoinGfx_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu_coin.4bpp.lz");
static const u32 sNewShopMenu_SellerMenuBpGfx_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu_bp.4bpp.lz");
static const u16 sNewShopMenu_SellerMenuPal_Jennie[] = INCBIN_U16("graphics/new_shop/sellers/jennie/menu.gbapal");
static const u32 sNewShopMenu_SellerMenuMap_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/menu.bin.lz");
static const u32 sNewShopMenu_SellerScrollGfx_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/scroll.4bpp.lz");
static const u16 sNewShopMenu_SellerScrollPal_Jennie[] = INCBIN_U16("graphics/new_shop/sellers/jennie/scroll.gbapal");
static const u32 sNewShopMenu_SellerScrollMap_Jennie[] = INCBIN_U32("graphics/new_shop/sellers/jennie/scroll.bin.lz");
static const u16 sNewShopMenu_SellerCursorGfx_Jennie[] = INCBIN_U16("graphics/new_shop/sellers/jennie/cursor.4bpp");
static const u16 sNewShopMenu_SellerCursorPal_Jennie[] = INCBIN_U16("graphics/new_shop/sellers/jennie/cursor.gbapal");

static void Task_ShopMenu(u8 taskId);
static void Task_HandleShopMenuQuit(u8 taskId);
static void CB2_InitBuyMenu(void);
static void Task_GoToBuyOrSellMenu(u8 taskId);
static void MapPostLoadHook_ReturnToShopMenu(void);
static void Task_ReturnToShopMenu(u8 taskId);
static void ShowShopMenuAfterExitingBuyOrSellMenu(u8 taskId);
static void BuyMenuDrawGraphics(void);
static void Task_BuyMenu(u8 taskId);
static void BuyMenuInitBgs(void);
static void BuyMenuInitWindows(void);
static void BuyMenuInitGrid(void);
static bool8 BuyMenuInitSprites(void);
static void BuyMenuDecompressBgGraphics(void);
static void BuyMenuPrint(u8 windowId, const u8 *text, u8 x, u8 y, s8 speed, u8 colorSet, bool32 copy);
static void Task_ExitBuyMenu(u8 taskId);
static void BuyMenuTryMakePurchase(u8 taskId);
static void BuyMenuReturnToItemList(u8 taskId);
static void Task_BuyHowManyDialogueInit(u8 taskId);
static void BuyMenuConfirmPurchase(u8 taskId);
static void BuyMenuPrintItemQuantityAndPrice(u8 taskId);
static void Task_BuyHowManyDialogueHandleInput(u8 taskId);
static void BuyMenuSubtractMoney(u8 taskId);
static void RecordItemPurchase(u8 taskId);
static void Task_ReturnToItemListAfterItemPurchase(u8 taskId);
static void Task_HandleShopMenuBuy(u8 taskId);
static void Task_HandleShopMenuSell(u8 taskId);
static void PrintMoneyLocal(u8 windowId, u32 x, u32 y, u32 amount, u8 colorIdx, u32 align, bool32 copy);
static void UpdateItemData(void);
static void Task_ReturnToItemListWaitMsg(u8 taskId);

static const u8 sGridPosX[] = { (120 + 16), (160 + 16), (200 + 16) };
static const u8 sGridPosY[] = { (24 + 16), (64 + 16) };

static const struct YesNoFuncTable sShopPurchaseYesNoFuncs =
{
    BuyMenuTryMakePurchase,
    BuyMenuReturnToItemList
};

static const struct MenuAction sShopMenuActions_BuySellQuit[] =
{
    { gText_ShopBuy, {.void_u8=Task_HandleShopMenuBuy} },
    { gText_ShopSell, {.void_u8=Task_HandleShopMenuSell} },
    { gText_ShopQuit, {.void_u8=Task_HandleShopMenuQuit} }
};

static const struct MenuAction sShopMenuActions_BuyQuit[] =
{
    { gText_ShopBuy, {.void_u8=Task_HandleShopMenuBuy} },
    { gText_ShopQuit, {.void_u8=Task_HandleShopMenuQuit} }
};

static const struct WindowTemplate sShopMenuWindowTemplates[] =
{
    [WIN_BUY_SELL_QUIT] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 9,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x0008,
    },
    // Separate shop menu window for decorations, which can't be sold
    [WIN_BUY_QUIT] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 9,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x0008,
    }
};

static const struct BgTemplate sShopBuyMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    }
};

static const struct WindowTemplate sBuyMenuWindowTemplates[] =
{
    [WIN_MONEY] = {
        .bg = 0,
        .tilemapLeft = 19,
        .tilemapTop = 0,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x001E,
    },
    [WIN_MULTI] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 13,
        .width = 10,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x0032,
    },
    [WIN_ITEM_DESCRIPTION] = {
        .bg = 0,
        .tilemapLeft = 11,
        .tilemapTop = 13,
        .width = 14,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x0122,
    },
    [WIN_QUANTITY_PRICE] = {
        .bg = 0,
        .tilemapLeft = 22,
        .tilemapTop = 14,
        .width = 7,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x018E,
    },
    [WIN_MUGSHOT] = {
        .bg = 1,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 13,
        .height = 12,
        .paletteNum = 2,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sShopBuyMenuYesNoWindowTemplates =
{
    .bg = 0,
    .tilemapLeft = 25,
    .tilemapTop = 14,
    .width = 4,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x020E,
};

static const u8 sShopBuyMenuTextColors[][3] =
{
    [COLORID_NORMAL]      = {0, 1, 2},
    [COLORID_BLACK]       = {0, 2, 3},
};

static const struct SpriteSheet sDefaultCursor_SpriteSheet = {
    .data = sNewShopMenu_DefaultCursorGfx,
    .size = 64*64*2,
    .tag = GFXTAG_CURSOR,
};

static const struct SpritePalette sDefaultCursor_SpritePalette = {
    .data = sNewShopMenu_DefaultMenuPal,
    .tag = PALTAG_CURSOR,
};

static const union AnimCmd sCursorAnim[] =
{
    ANIMCMD_FRAME(0, 30),
    ANIMCMD_FRAME(64, 30),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sCursorAnims[] = { sCursorAnim };

static const struct OamData sCursor_SpriteOamData = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1,
};

static const struct SpriteTemplate sCursor_SpriteTemplate = {
    .tileTag = GFXTAG_CURSOR,
    .paletteTag = PALTAG_CURSOR,
    .callback = SpriteCallbackDummy,
    .anims = sCursorAnims,
    .affineAnims = gDummySpriteAffineAnimTable,
    .images = NULL,
    .oam = &sCursor_SpriteOamData,
};

static const struct Seller sSellers[] = {
    // this is THE default seller id that the code will use as
    // a last resort, so try not to delete any of the already
    // set fields here.
    [SELLER_JERRY] = {
        { .gfxId = OBJ_EVENT_GFX_MART_EMPLOYEE },
        .mugshotGfx = sNewShopMenu_SellerMugshotGfx_Jerry,
        .mugshotPal = sNewShopMenu_SellerMugshotPal_Jerry,
        .menuTileOffset = 9,
        .menuGfx = sNewShopMenu_SellerMenuGfx_Jerry,
        .menuCoinGfx = sNewShopMenu_SellerMenuCoinGfx_Jerry,
        .menuPointGfx = sNewShopMenu_SellerMenuPointsGfx_Jerry,
        .menuPal = sNewShopMenu_SellerMenuPal_Jerry,
        .menuMap = sNewShopMenu_SellerMenuMap_Jerry,
        .scrollGfx = sNewShopMenu_SellerScrollGfx_Jerry,
        .scrollPal = sNewShopMenu_SellerScrollPal_Jerry,
        .scrollMap = sNewShopMenu_SellerScrollMap_Jerry,
        .cursorGfx = sNewShopMenu_SellerCursorGfx_Jerry,
        .cursorPal = sNewShopMenu_SellerCursorPal_Jerry,

        .message = {
            [SELLER_MSG_RETURN_TO_FIELD]   = gText_AnythingElseICanHelp,
            [SELLER_MSG_BUY_PROMPT]        = sText_YouWantedVar1ThatllBeVar2,
            [SELLER_MSG_BUY_COIN_PROMPT]   = sText_YouWantedVar1ThatllBeVar2Coins,
            [SELLER_MSG_BUY_BP_PROMPT]     = sText_YouWantedVar1ThatllBeVar2BP,
            [SELLER_MSG_BUY_PROMPT_PLURAL] = sText_Var1CertainlyHowMany,
            [SELLER_MSG_BUY_CONFIRM]       = sText_Var1AndYouWantedVar2,
            [SELLER_MSG_BUY_COIN_CONFIRM]  = sText_Var1AndYouWantedVar2Coins,
            [SELLER_MSG_BUY_POINT_CONFIRM] = sText_Var1AndYouWantedVar2BP,
            [SELLER_MSG_BUY_SUCCESS]       = sText_HereYouGoThankYou,
            [SELLER_MSG_BUY_FAIL_NO_SPACE] = sText_NoMoreRoomForThis,
            [SELLER_MSG_BUY_FAIL_NO_MONEY] = sText_YouDontHaveMoney,
            [SELLER_MSG_BUY_FAIL_NO_COINS] = sText_YouDontHaveCoins,
            [SELLER_MSG_BUY_FAIL_NO_POINTS] = sText_YouDontHaveBP,
            [SELLER_MSG_BUY_FAIL_SOLD_OUT] = sText_ThatItemIsSoldOut,
            [SELLER_MGS_BUY_PREMIER_BONUS] = sText_ThrowInPremierBall,
            [SELLER_MSG_BUY_PREMIER_BONUS_PLURAL] = sText_ThrowInPremierBalls,
            #ifdef MUDSKIP_OUTFIT_SYSTEM
            [SELLER_MSG_BUY_OUTFIT_PROMPT] = sText_YouWantedVar1OutfitThatllBeVar2,
            #endif // MUDSKIP_OUTFIT_SYSTEM
        },
    },
    [SELLER_JENNIE] = {
        { .gfxId = OBJ_EVENT_GFX_WOMAN_3 },
        .mugshotGfx = sNewShopMenu_SellerMugshotGfx_Jennie,
        .mugshotPal = sNewShopMenu_SellerMugshotPal_Jennie,
        .menuTileOffset = 9,
        .menuGfx = sNewShopMenu_SellerMenuGfx_Jennie,
        .menuCoinGfx = sNewShopMenu_SellerMenuCoinGfx_Jennie,
        .menuPointGfx = sNewShopMenu_SellerMenuBpGfx_Jennie,
        .menuPal = sNewShopMenu_SellerMenuPal_Jennie,
        .menuMap = sNewShopMenu_SellerMenuMap_Jennie,
        .scrollGfx = sNewShopMenu_SellerScrollGfx_Jennie,
        .scrollPal = sNewShopMenu_SellerScrollPal_Jennie,
        .scrollMap = sNewShopMenu_SellerScrollMap_Jennie,
        .cursorGfx = sNewShopMenu_SellerCursorGfx_Jennie,
        .cursorPal = sNewShopMenu_SellerCursorPal_Jennie,
    },
};

static inline bool32 IsMartTypePoints(u8 martType)
{
    return martType == NEW_SHOP_TYPE_POINTS;
}

static inline bool32 IsMartTypeCoin(u8 martType)
{
    return martType == NEW_SHOP_TYPE_COINS;
}

static inline bool32 IsMartTypeMoney(u8 martType)
{
    return !IsMartTypePoints(martType) && !IsMartTypeCoin(martType);
}

static inline bool32 IsMartTypeItem(u8 martType)
{
    return martType <= NEW_SHOP_TYPE_POINTS;
}

#ifdef MUDSKIP_OUTFIT_SYSTEM
static inline bool32 IsMartTypeOutfit(u8 martType)
{
    return martType == NEW_SHOP_TYPE_OUTFIT;
}
#endif // MUDSKIP_OUTFIT_SYSTEM

// This only exist because of the Slateport sale
static inline bool32 IsMartTypeMoneyItem(u8 martType)
{
    return martType == NEW_SHOP_TYPE_NORMAL
        || martType == NEW_SHOP_TYPE_VARIABLE;
}

static u8 CreateShopMenu(u8 martType)
{
    int numMenuItems;

    LockPlayerFieldControls();
    sMartInfo.martType = martType;

    switch (martType)
    {
        default:
        {
            struct WindowTemplate winTemplate = sShopMenuWindowTemplates[WIN_BUY_QUIT];
            winTemplate.width = GetMaxWidthInMenuTable(sShopMenuActions_BuyQuit, ARRAY_COUNT(sShopMenuActions_BuyQuit));
            sMartInfo.windowId = AddWindow(&winTemplate);
            sMartInfo.menuActions = sShopMenuActions_BuyQuit;
            numMenuItems = ARRAY_COUNT(sShopMenuActions_BuyQuit);
            break;
        }
        case NEW_SHOP_TYPE_NORMAL:
        case NEW_SHOP_TYPE_VARIABLE:
        {
            struct WindowTemplate winTemplate = sShopMenuWindowTemplates[WIN_BUY_SELL_QUIT];
            winTemplate.width = GetMaxWidthInMenuTable(sShopMenuActions_BuySellQuit, ARRAY_COUNT(sShopMenuActions_BuySellQuit));
            sMartInfo.windowId = AddWindow(&winTemplate);
            sMartInfo.menuActions = sShopMenuActions_BuySellQuit;
            numMenuItems = ARRAY_COUNT(sShopMenuActions_BuySellQuit);
            break;
        }
    }

    SetStandardWindowBorderStyle(sMartInfo.windowId, FALSE);
    PrintMenuTable(sMartInfo.windowId, numMenuItems, sMartInfo.menuActions);
    InitMenuInUpperLeftCornerNormal(sMartInfo.windowId, numMenuItems, 0);
    PutWindowTilemap(sMartInfo.windowId);
    CopyWindowToVram(sMartInfo.windowId, COPYWIN_MAP);

    return CreateTask(Task_ShopMenu, 8);
}

static void SetShopMenuCallback(void (* callback)(void))
{
    sMartInfo.callback = callback;
}

static void SetShopItemsForSale(const u16 *items)
{
    u32 i = 0;

    sMartInfo.itemSource = items;
    sMartInfo.itemCount = 0;

    // Read items until ITEM_NONE / DECOR_NONE is reached
    while (items[i])
    {
        sMartInfo.itemCount++;
        i++;

        if (sMartInfo.martType == NEW_SHOP_TYPE_VARIABLE)
        {
            i++;
        }
    }
    sMartInfo.itemCount++; // for ITEM_NONE / DECOR_NONE
}

static void InitShopItemsForSale(void)
{
    u32 i = 0, j = 0;
    u16 *itemList;
    u16 *itemPriceList;

    sMartInfo.itemList = AllocZeroed(sMartInfo.itemCount * sizeof(u16));
    sMartInfo.itemPriceList = AllocZeroed(sMartInfo.itemCount * sizeof(u16));

    itemList = (sMartInfo.itemList);
    itemPriceList = (sMartInfo.itemPriceList);

    while (sMartInfo.itemSource[i])
    {
        *itemList = sMartInfo.itemSource[i];
        i++;
        itemList++;
        j++;

        if (sMartInfo.martType == NEW_SHOP_TYPE_VARIABLE)
        {
            *itemPriceList = sMartInfo.itemSource[i];
            i++;
            itemPriceList++;
        }
    }

    *itemList = ITEM_NONE;
    *itemPriceList = ITEM_NONE;
}

static u32 SearchItemListForPrice(u32 itemId)
{
    u32 i;
    u16 *itemList = sMartInfo.itemList;
    u16 *itemPriceList = sMartInfo.itemPriceList;

    for (i = 0; i < sMartInfo.itemCount; i++)
    {
        if (*itemList == itemId)
        {
            return *itemPriceList;
        }

        itemList++;
        itemPriceList++;
    }

    return 0;
}

void SetShopSellerId(void)
{
    u32 i;
    u32 objId = GetObjectEventIdByLocalIdAndMap(gSpecialVar_LastTalked,
                                                    gSaveBlock1Ptr->location.mapNum,
                                                    gSaveBlock1Ptr->location.mapGroup);
    u32 gfxId = gObjectEvents[objId].graphicsId;

    if (gSpecialVar_LastTalked == 0) // failsafe
    {
        sMartInfo.sellerId = SELLER_NONE;
        return;
    }

    if (gfxId >= OBJ_EVENT_GFX_VAR_0 && gfxId <= OBJ_EVENT_GFX_VAR_F)
    {
        gfxId = VarGetObjectEventGraphicsId(gfxId);
    }

    // loop over all of the sellers
    for (i = SELLER_NONE; i < SELLER_COUNT; i++)
    {
        if (gfxId == sSellers[i].id.gfxId)
        {
            sMartInfo.sellerId = i;
            break;
        }
    }
}

static inline const u8 *Shop_GetSellerMessage(enum Seller_MessageIds msgId)
{
    u32 sellerId = sMartInfo.sellerId;

    if (sSellers[sellerId].message[msgId] == NULL)
    {
        sellerId = SELLER_NONE + 1;
    }

    return sSellers[sellerId].message[msgId];
}

static const void *Shop_GetSellerGraphics(enum Seller_GraphicsIds gfxId)
{
    u32 sellerId = sMartInfo.sellerId;
    const struct Seller *seller = &sSellers[sellerId];

    switch (gfxId)
    {
    case SELLER_GFX_MUGSHOT_GFX:
        return seller->mugshotGfx != NULL ? seller->mugshotGfx : sNewShopMenu_SellerMugshotGfx_Jerry;
        break;
    case SELLER_GFX_MUGSHOT_PAL:
        return seller->mugshotPal != NULL ? seller->mugshotPal : sNewShopMenu_SellerMugshotPal_Jerry;
        break;

    case SELLER_GFX_MENU_GFX:
        if (IsMartTypeCoin(sMartInfo.martType))
            return seller->menuCoinGfx != NULL ? seller->menuCoinGfx : sNewShopMenu_DefaultMenuCoinGfx;
        else if (IsMartTypePoints(sMartInfo.martType))
            return seller->menuPointGfx != NULL ? seller->menuPointGfx : sNewShopMenu_DefaultMenuPointGfx;
        else // if (IsMartTypeMoney(sMartInfo.martType))
            return seller->menuGfx != NULL ? seller->menuGfx : sNewShopMenu_DefaultMenuGfx;
    case SELLER_GFX_MENU_PAL:
        return seller->menuPal != NULL ? seller->menuPal : sNewShopMenu_DefaultMenuPal;
        break;
    case SELLER_GFX_MENU_MAP:
        return seller->menuMap != NULL ? seller->menuMap : sNewShopMenu_DefaultMenuTilemap;
        break;

    case SELLER_GFX_SCROLL_GFX:
        return seller->scrollGfx != NULL ? seller->scrollGfx : sNewShopMenu_DefaultScrollGfx;
        break;
    case SELLER_GFX_SCROLL_PAL:
        return seller->scrollPal != NULL ? seller->scrollPal : sNewShopMenu_DefaultMenuPal;
        break;
    case SELLER_GFX_SCROLL_MAP:
        return seller->scrollMap != NULL ? seller->scrollMap : sNewShopMenu_DefaultScrollTilemap;
        break;

    case SELLER_GFX_CURSOR_GFX:
        return seller->cursorGfx != NULL ? seller->cursorGfx : sNewShopMenu_DefaultCursorGfx;
        break;
    case SELLER_GFX_CURSOR_PAL:
        return seller->cursorPal != NULL ? seller->cursorPal : sNewShopMenu_DefaultMenuPal;
        break;

    }

    return NULL;
}

static void Task_ShopMenu(u8 taskId)
{
    s8 inputCode = Menu_ProcessInputNoWrap();
    switch (inputCode)
    {
    case MENU_NOTHING_CHOSEN:
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        Task_HandleShopMenuQuit(taskId);
        break;
    default:
        sMartInfo.menuActions[inputCode].func.void_u8(taskId);
        break;
    }
}

#define tItemCount  data[1]
#define tCallbackHi data[8]
#define tCallbackLo data[9]

static void Task_HandleShopMenuBuy(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    tCallbackHi = (u32)CB2_InitBuyMenu >> 16;
    tCallbackLo = (u32)CB2_InitBuyMenu;
    gTasks[taskId].func = Task_GoToBuyOrSellMenu;
    FadeScreen(FADE_TO_BLACK, 0);
}

static void Task_HandleShopMenuSell(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    tCallbackHi = (u32)CB2_GoToSellMenu >> 16;
    tCallbackLo = (u32)CB2_GoToSellMenu;
    gTasks[taskId].func = Task_GoToBuyOrSellMenu;
    FadeScreen(FADE_TO_BLACK, 0);
}

void CB2_ExitSellNewShopMenu(void)
{
    gFieldCallback = MapPostLoadHook_ReturnToShopMenu;
    SetMainCallback2(CB2_ReturnToField);
}

static void Task_HandleShopMenuQuit(u8 taskId)
{
    ClearStdWindowAndFrameToTransparent(sMartInfo.windowId, COPYWIN_FULL);
    RemoveWindow(sMartInfo.windowId);
    TryPutSmartShopperOnAir();
    UnlockPlayerFieldControls();
    DestroyTask(taskId);

    if (sMartInfo.callback)
        sMartInfo.callback();
}

static void Task_GoToBuyOrSellMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        SetMainCallback2((void *)((u16)tCallbackHi << 16 | (u16)tCallbackLo));
    }
}

static void MapPostLoadHook_ReturnToShopMenu(void)
{
    FadeInFromBlack();
    CreateTask(Task_ReturnToShopMenu, 8);
}

static void Task_ReturnToShopMenu(u8 taskId)
{
    if (IsWeatherNotFadingIn() == TRUE)
    {
        DisplayItemMessageOnField(taskId, Shop_GetSellerMessage(SELLER_MSG_RETURN_TO_FIELD), ShowShopMenuAfterExitingBuyOrSellMenu);
    }
}

static void ShowShopMenuAfterExitingBuyOrSellMenu(u8 taskId)
{
    CreateShopMenu(sMartInfo.martType);
    DestroyTask(taskId);
}

static void CB2_BuyMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_BuyMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgX(3, 96, BG_COORD_SUB);
}

static void Task_BuyMenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_BuyMenu;
}

static void CB2_InitBuyMenu(void)
{
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000);
        ResetVramOamAndBgCntRegs();
        SetVBlankHBlankCallbacksToNull();
        CpuFastFill(0, (void *)OAM, OAM_SIZE);
        ScanlineEffect_Stop();
        ResetTempTileDataBuffers();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        ClearScheduledBgCopiesToVram();
        sShopData = AllocZeroed(sizeof(struct ShopData));
        InitShopItemsForSale();
        SetShopSellerId();
        BuyMenuInitBgs();
        BuyMenuInitGrid();
        BuyMenuInitWindows();
        BuyMenuDecompressBgGraphics();
        gMain.state++;
        break;
    case 1:
        if (BuyMenuInitSprites())
            gMain.state++;
        break;
    case 2:
        if (!FreeTempTileDataBuffersIfPossible())
            gMain.state++;
        break;
    default:
        BuyMenuDrawGraphics();
        CreateTask(Task_BuyMenuWaitFadeIn, 8);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB_BuyMenu);
        SetMainCallback2(CB2_BuyMenu);
        break;
    }
}

static void BuyMenuFreeMemory(void)
{
    GridMenu_Destroy(sShopData->gridItems);
    Free(sShopData);
    // they're better freed here since
    // this is only used in the buy menu
    Free(sMartInfo.itemPriceList);
    Free(sMartInfo.itemList);
    FreeAllWindowBuffers();
}

static void ForEachCB_PopulateItemIcons(u32 idx, u32 col, u32 row)
{
    u32 i = sShopData->gridItems->topLeftItemIndex + idx, x, y;

    if (i >= sMartInfo.itemCount)
    {
        return;
    }

    x = (((col % 3) < ARRAY_COUNT(sGridPosX)) ? sGridPosX[col] : sGridPosX[0]);
    y = (((row % 2) < ARRAY_COUNT(sGridPosY)) ? sGridPosY[row] : sGridPosY[0]);

    switch (sMartInfo.martType)
    {
        case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
        {
            // DECOR_NONE has the same value as ITEM_NONE but this is for clarity
            if (sMartInfo.itemList[i] == DECOR_NONE)
            {
                sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, ITEM_LIST_END);
                gSprites[sShopData->gridItems->iconSpriteIds[idx]].x = x;
                gSprites[sShopData->gridItems->iconSpriteIds[idx]].y = y;
            }
            else
            {
                x -= 4;
                y -= 4;
                sShopData->gridItems->iconSpriteIds[idx] = AddDecorationIconObject(sMartInfo.itemList[i], x, y, 2, GFXTAG_ITEM + idx, PALTAG_ITEM + idx);
            }
            break;
        }
        default:
        {
            if (sMartInfo.itemList[i] == ITEM_NONE)
            {
                sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, ITEM_LIST_END);
            }
            else
            {
                sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, sMartInfo.itemList[i]);
            }

            gSprites[sShopData->gridItems->iconSpriteIds[idx]].x = x;
            gSprites[sShopData->gridItems->iconSpriteIds[idx]].y = y;
            break;
        }
        // custom
        #ifdef MUDSKIP_OUTFIT_SYSTEM
        case NEW_SHOP_TYPE_OUTFIT:
        {
            //! TODO: Fix coord of this
            u16 gfxId = GetPlayerAvatarGraphicsIdByOutfitStateIdAndGender(sMartInfo.itemList[i], PLAYER_AVATAR_STATE_NORMAL, gSaveBlock2Ptr->playerGender);

            if (sMartInfo.itemList[i] == OUTFIT_NONE) // is 0 as DECOR/ITEM_NONE
            {
                sShopData->gridItems->iconSpriteIds[idx] = AddItemIconSprite(GFXTAG_ITEM + idx, PALTAG_ITEM + idx, ITEM_LIST_END);
            }
            else
            {
                x -= 40, y -= 36;
                sShopData->gridItems->iconSpriteIds[idx] = CreateObjectGraphicsSprite(gfxId, SpriteCallbackDummy, x, y, 0);
            }

            gSprites[sShopData->gridItems->iconSpriteIds[idx]].x = x;
            gSprites[sShopData->gridItems->iconSpriteIds[idx]].y = y;
            break;
        }
        #endif // MUDSKIP_OUTFIT_SYSTEM
    }
}

static void ForAllCB_FreeItemIcons(u32 idx, u32 col, u32 row)
{
    if (sShopData->gridItems->iconSpriteIds[idx] == SPRITE_NONE)
        return;

    if (gSprites[sShopData->gridItems->iconSpriteIds[idx]].inUse)
    {
        FreeSpriteTilesByTag(idx + GFXTAG_ITEM);
        FreeSpritePaletteByTag(idx + PALTAG_ITEM);
        DestroySprite(&gSprites[sShopData->gridItems->iconSpriteIds[idx]]);
    }

    sShopData->gridItems->iconSpriteIds[idx] = SPRITE_NONE;
}

static void InputCB_UpDownScroll(void)
{
    GridMenu_ForAll(sShopData->gridItems, ForAllCB_FreeItemIcons);
    GridMenu_ForEach(sShopData->gridItems, ForEachCB_PopulateItemIcons);
    UpdateItemData();
    if (!IsSEPlaying())
        PlaySE(SE_RG_BAG_CURSOR);
}

static void InputCB_Move(void)
{
    UpdateItemData();
    if (!IsSEPlaying())
        PlaySE(SE_RG_BAG_CURSOR);
}

static void InputCB_Fail(void)
{
    if (!IsSEPlaying())
        PlaySE(SE_BOO);
}

static void BuyMenuInitGrid(void)
{
    sShopData->gridItems = GridMenu_Init(3, 2, sMartInfo.itemCount);
    GridMenu_ForEach(sShopData->gridItems, ForEachCB_PopulateItemIcons);
    // we're doing this so that when the grid menu input function "fails", the item data wont flickers
    // it'll flicker when we call UpdateItemData on the main input task func
    // UPDATE: Not exactly true, it flickers when the printing func always immediately copy to vram
    // for good measure though, i'll keep it.
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_UP, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_DOWN, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_LEFT, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Move, DIRECTION_RIGHT, TYPE_MOVE);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_UP, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_DOWN, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_LEFT, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_Fail, DIRECTION_RIGHT, TYPE_FAIL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_UpDownScroll, DIRECTION_UP, TYPE_SCROLL);
    GridMenu_SetInputCallback(sShopData->gridItems, InputCB_UpDownScroll, DIRECTION_DOWN, TYPE_SCROLL);
}

static void BuyMenuInitBgs(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sShopBuyMenuBgTemplates, ARRAY_COUNT(sShopBuyMenuBgTemplates));
    SetBgTilemapBuffer(2, sShopData->tilemapBuffers[0]);
    SetBgTilemapBuffer(3, sShopData->tilemapBuffers[1]);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG3HOFS, 0);
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
    ShowBg(3);
}

#define DEFAULT_MENU_TILE_OFFSET 9
static void BuyMenuDecompressBgGraphics(void)
{
    u32 i = sMartInfo.sellerId;
    if (gSpecialVar_LastTalked == 0 || i == SELLER_NONE)
    {
        if (IsMartTypeCoin(sMartInfo.martType))
            DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultMenuCoinGfx, 0, DEFAULT_MENU_TILE_OFFSET, 0);
        else if (IsMartTypePoints(sMartInfo.martType))
            DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultMenuPointGfx, 0, DEFAULT_MENU_TILE_OFFSET, 0);
        else // if (IsMartTypeMoney(sMartInfo.martType))
            DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultMenuGfx, 0, DEFAULT_MENU_TILE_OFFSET, 0);
        DecompressAndCopyTileDataToVram(2, sNewShopMenu_DefaultScrollGfx, 0, 0, 0);
        LZDecompressWram(sNewShopMenu_DefaultMenuTilemap, sShopData->tilemapBuffers[0]);
        LZDecompressWram(sNewShopMenu_DefaultScrollTilemap, sShopData->tilemapBuffers[1]);
        LoadPalette(sNewShopMenu_DefaultMenuPal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(sNewShopMenu_DefaultMenuPal, BG_PLTT_ID(1), PLTT_SIZE_4BPP);
        return;
    }
    DecompressAndCopyTileDataToVram(2, Shop_GetSellerGraphics(SELLER_GFX_MENU_GFX), 0, sSellers[i].menuTileOffset != 0 ? sSellers[i].menuTileOffset : DEFAULT_MENU_TILE_OFFSET, 0);
    DecompressAndCopyTileDataToVram(2, Shop_GetSellerGraphics(SELLER_GFX_SCROLL_GFX), 0, 0, 0);

    LZDecompressWram(Shop_GetSellerGraphics(SELLER_GFX_MENU_MAP), sShopData->tilemapBuffers[0]);
    LZDecompressWram(Shop_GetSellerGraphics(SELLER_GFX_SCROLL_MAP), sShopData->tilemapBuffers[1]);

    LoadPalette(Shop_GetSellerGraphics(SELLER_GFX_MENU_PAL), BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(Shop_GetSellerGraphics(SELLER_GFX_SCROLL_PAL), BG_PLTT_ID(1), PLTT_SIZE_4BPP);
}

static inline void SpawnWindow(u8 winId)
{
    FillWindowPixelBuffer(winId, 0);
    PutWindowTilemap(winId);
    CopyWindowToVram(winId, COPYWIN_FULL);
}

static inline const u8 *BuyMenuGetItemName(u32 id)
{
    switch (sMartInfo.martType)
    {
        case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
            return gDecorations[sMartInfo.itemList[id]].name;
        default:
            return GetItemName(sMartInfo.itemList[id]);
        // custom
    #ifdef MUDSKIP_OUTFIT_SYSTEM
        case NEW_SHOP_TYPE_OUTFIT:
            return gOutfits[sMartInfo.itemList[id]].name;
    #endif // MUDSKIP_OUTFIT_SYSTEM
    }
}

static inline const u8 *BuyMenuGetItemDesc(u32 id)
{
    switch (sMartInfo.martType)
    {
        case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
            return gDecorations[sMartInfo.itemList[id]].description;
        default:
            return GetItemDescription(sMartInfo.itemList[id]);
        // custom
    #ifdef MUDSKIP_OUTFIT_SYSTEM
        case NEW_SHOP_TYPE_OUTFIT:
            return gOutfits[sMartInfo.itemList[id]].desc;
    #endif // MUDSKIP_OUTFIT_SYSTEM
    }
}

static inline u32 BuyMenuGetItemPrice(u32 id)
{
    switch (sMartInfo.martType)
    {
        case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
            return gDecorations[sMartInfo.itemList[id]].price;
        default:
            return GetItemPrice(sMartInfo.itemList[id]);
        // custom
        case NEW_SHOP_TYPE_VARIABLE:
            return SearchItemListForPrice(sMartInfo.itemList[id]);
        case NEW_SHOP_TYPE_COINS:
            return GetItemCoinPrice(sMartInfo.itemList[id]);
        case NEW_SHOP_TYPE_POINTS:
            return GetItemBpPrice(sMartInfo.itemList[id]);
    #ifdef MUDSKIP_OUTFIT_SYSTEM
        case NEW_SHOP_TYPE_OUTFIT:
            return GetOutfitPrice(sMartInfo.itemList[id]);
    #endif // MUDSKIP_OUTFIT_SYSTEM
    }
}

static void LoadSellerMugshot(const u8 *gfx, const u16 *pal)
{
    CopyToWindowPixelBuffer(WIN_MUGSHOT, gfx, 4992, 0);
    LoadPalette(pal, BG_PLTT_ID(2), PLTT_SIZE_4BPP);
    PutWindowTilemap(WIN_MUGSHOT);
    CopyWindowToVram(WIN_MUGSHOT, COPYWIN_FULL);
}

// credit to Vexx on PRET Discord
static void FormatTextByWidth(u8 *result, s32 maxWidth, u8 fontId, const u8 *str, s16 letterSpacing)
{
    u8 *end, *ptr, *curLine, *lastSpace;

    end = result;
    // copy string, replacing all space and line breaks with EOS
    while (*str != EOS)
    {
        if (*str == CHAR_SPACE || *str == CHAR_NEWLINE)
            *end = EOS;
        else
            *end = *str;

        end++;
        str++;
    }
    *end = EOS; // now end points to the true end of the string

    ptr = result;
    curLine = ptr;

    while (*ptr != EOS)
        ptr++;
    // now ptr is the first EOS char

    while (ptr != end)
    {
        // all the EOS chars (except *end) must be replaced by either ' ' or '\n'
        lastSpace = ptr++; // this points at the EOS

        // check that adding the next word this line still fits
        *lastSpace = CHAR_SPACE;
        if (GetStringWidth(fontId, curLine, letterSpacing) > maxWidth)
        {
            *lastSpace = CHAR_NEWLINE;

            curLine = ptr;
        }

        while (*ptr != EOS)
            ptr++;
        // now ptr is the next EOS char
    }
}

static void BuyMenuInitWindows(void)
{
    InitWindows(sBuyMenuWindowTemplates);
    DeactivateAllTextPrinters();

    SpawnWindow(WIN_MONEY);
    SpawnWindow(WIN_MUGSHOT);
    SpawnWindow(WIN_ITEM_DESCRIPTION);

    BuyMenuPrint(WIN_MULTI, COMPOUND_STRING("PRICE"), 0, ITEM_PRICE_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
    if (IsMartTypeItem(sMartInfo.martType))
    {
        BuyMenuPrint(WIN_MULTI, COMPOUND_STRING("IN BAG"), 0, ITEM_IN_BAG_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
    }

    UpdateItemData();

    LoadSellerMugshot(Shop_GetSellerGraphics(SELLER_GFX_MUGSHOT_GFX), Shop_GetSellerGraphics(SELLER_GFX_MUGSHOT_PAL));
}

static bool32 LoadSellerCursor(void)
{
    u32 i = sMartInfo.sellerId;
    struct SpriteSheet gfx = {
        .data = Shop_GetSellerGraphics(SELLER_GFX_CURSOR_GFX),
        .size = 64*64*2,
        .tag = GFXTAG_CURSOR,
    };
    struct SpritePalette pal = {
        .data = Shop_GetSellerGraphics(SELLER_GFX_CURSOR_PAL),
        .tag = PALTAG_CURSOR
    };

    if (gSpecialVar_LastTalked == 0 || i == 0)
    {
        LoadSpriteSheet(&sDefaultCursor_SpriteSheet);
        LoadSpritePalette(&sDefaultCursor_SpritePalette);
        return FALSE;
    }

    LoadSpriteSheet(&gfx);
    LoadSpritePalette(&pal);
    return TRUE;
}

static bool8 BuyMenuInitSprites(void)
{
    switch (sShopData->gfxLoadState)
    {
    case 0:
        LoadSellerCursor();
        sShopData->gfxLoadState++;
        break;
    case 1:
        sShopData->cursorSpriteId = CreateSprite(&sCursor_SpriteTemplate, CURSOR_START_X, CURSOR_START_Y, 0);
        StartSpriteAnim(&gSprites[sShopData->cursorSpriteId], 0);
        sShopData->gfxLoadState++;
        break;
    case 2:
        sShopData->gfxLoadState = 0;
        return TRUE;
        break;
    }
    return FALSE;
}

static void BuyMenuPrint(u8 windowId, const u8 *text, u8 x, u8 y, s8 speed, u8 colorSet, bool32 copy)
{
    AddTextPrinterParameterized4(windowId, FONT_SMALL, x, y, 0, 0, sShopBuyMenuTextColors[colorSet], speed, text);
    PutWindowTilemap(windowId);
    if (copy)
        CopyWindowToVram(windowId, COPYWIN_FULL);
}

static const u8 sText_CoinsVar1[] = _("{STR_VAR_1}");
static const u8 sText_PokedollarVar1[] = _("¥{STR_VAR_1}");
static const u8 sText_BattlePointsVar1[] = _("BP {STR_VAR_1}");
static void PrintMoneyLocal(u8 windowId, u32 x, u32 y, u32 amount, u8 colorIdx, u32 align, bool32 copy)
{
    u8 *txtPtr = gStringVar1;
    u32 numDigits = CountDigits(amount);
    u32 width = sBuyMenuWindowTemplates[windowId].width * 8;

    if (IsMartTypePoints(sMartInfo.martType))
    {
        numDigits = 5;
    }

    // CountDigits uses (value > 0) to count, so we'll need to set this explicitly
    // otherwise, it'll just show as a blank/space in the string
    if (amount == 0)
    {
        numDigits = 1;
    }

    ConvertIntToDecimalStringN(txtPtr, amount, align, numDigits);

    if (IsMartTypeCoin(sMartInfo.martType))
        StringExpandPlaceholders(gStringVar4, sText_CoinsVar1);
    else if (IsMartTypePoints(sMartInfo.martType))
        StringExpandPlaceholders(gStringVar4, sText_BattlePointsVar1);
    else
        StringExpandPlaceholders(gStringVar4, sText_PokedollarVar1);

    if (numDigits > 7)
        PrependFontIdToFit(gStringVar4, gStringVar4 + 1 + numDigits, FONT_SMALL, width);

    if (x == RIGHT_ALIGNED_X)
        x = GetStringRightAlignXOffset(GetFontIdToFit(gStringVar4, FONT_SMALL, 0, width), gStringVar4, width);

    AddTextPrinterParameterized4(windowId, FONT_SMALL, x, y, 0, 0, sShopBuyMenuTextColors[colorIdx], TEXT_SKIP_DRAW, gStringVar4);
    PutWindowTilemap(windowId);
    if (copy)
        CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void BuyMenuDrawGraphics(void)
{
    if (IsMartTypeCoin(sMartInfo.martType))
        PrintMoneyLocal(WIN_MONEY, RIGHT_ALIGNED_X, 0, GetCoins(), COLORID_NORMAL, STR_CONV_MODE_RIGHT_ALIGN, TRUE);
    else if (IsMartTypePoints(sMartInfo.martType))
        PrintMoneyLocal(WIN_MONEY, RIGHT_ALIGNED_X, 0, GetBattlePoints(), COLORID_NORMAL, STR_CONV_MODE_RIGHT_ALIGN, TRUE);
    else // if (IsMartTypeMoney(sMartInfo.martType))
        PrintMoneyLocal(WIN_MONEY, RIGHT_ALIGNED_X, 0, GetMoney(&gSaveBlock1Ptr->money), COLORID_NORMAL, STR_CONV_MODE_RIGHT_ALIGN, TRUE);

    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    ScheduleBgCopyTilemapToVram(2);
    ScheduleBgCopyTilemapToVram(3);
}

static void UpdateItemData(void)
{
    const u8 strip[] = _("-");
    if (GridMenu_SelectedIndex(sShopData->gridItems) >= sMartInfo.itemCount)
        return;

    FillWindowPixelRect(WIN_MULTI, PIXEL_FILL(0), 0,  ITEM_NAME_Y, 84, 16);
    FillWindowPixelRect(WIN_MULTI, PIXEL_FILL(0), 24, ITEM_PRICE_Y, 84, 16);
    FillWindowPixelRect(WIN_MULTI, PIXEL_FILL(0), 32, ITEM_IN_BAG_Y, 84, 16);
    if (sMartInfo.itemList[GridMenu_SelectedIndex(sShopData->gridItems)] == ITEM_NONE)
    {
        BuyMenuPrint(WIN_MULTI, COMPOUND_STRING("Return to Field"), 0, 0, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
        BuyMenuPrint(WIN_MULTI, strip, GetStringRightAlignXOffset(FONT_SMALL, strip, 80), ITEM_PRICE_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);

        if (IsMartTypeItem(sMartInfo.martType))
        {
            BuyMenuPrint(WIN_MULTI, strip, GetStringRightAlignXOffset(FONT_SMALL, strip, 80), ITEM_IN_BAG_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
        }

        FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
        BuyMenuPrint(WIN_ITEM_DESCRIPTION, gText_QuitShopping, 8, 0, TEXT_SKIP_DRAW, COLORID_BLACK, TRUE);
    }
    else
    {
        u32 i = GridMenu_SelectedIndex(sShopData->gridItems);
        u32 item = sMartInfo.itemList[i];
        u32 price = BuyMenuGetItemPrice(i);
        const u8 *desc = BuyMenuGetItemDesc(i);

        BuyMenuPrint(WIN_MULTI, BuyMenuGetItemName(i), 0, ITEM_NAME_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);

        switch (sMartInfo.martType)
        {
            default:
            {
                u16 quantity = CountTotalItemQuantityInBag(item);
                if (GetItemPocket(item) == POCKET_TM_HM && item != ITEM_NONE)
                {
                    const u8 *move = GetMoveName(ItemIdToBattleMoveId(item));
                    FormatTextByWidth(gStringVar2, 80, FONT_SMALL, GetItemDescription(sMartInfo.itemList[i]), 0);
                    desc = gStringVar2;
                    BuyMenuPrint(WIN_MULTI, move, GetStringRightAlignXOffset(FONT_SMALL, move, 80), 0, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
                }

                if (GetItemImportance(item) && (CheckBagHasItem(item, 1) || CheckPCHasItem(item, 1)))
                    BuyMenuPrint(WIN_MULTI, sText_SoldOut, GetStringRightAlignXOffset(FONT_SMALL, sText_SoldOut, 80), ITEM_PRICE_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
                else
                    PrintMoneyLocal(WIN_MULTI, RIGHT_ALIGNED_X, ITEM_PRICE_Y, price, COLORID_BLACK, STR_CONV_MODE_LEFT_ALIGN, FALSE);

                ConvertIntToDecimalStringN(gStringVar3, quantity, STR_CONV_MODE_RIGHT_ALIGN, 10);
                BuyMenuPrint(WIN_MULTI, gStringVar3, GetStringRightAlignXOffset(FONT_SMALL, gStringVar3, 80), ITEM_IN_BAG_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
                break;
            }
        #ifdef MUDSKIP_OUTFIT_SYSTEM
            case NEW_SHOP_TYPE_OUTFIT:
            {
                u32 outfit = item;
                if (GetOutfitStatus(outfit))
                    BuyMenuPrint(WIN_MULTI, sText_SoldOut, GetStringRightAlignXOffset(FONT_SMALL, sText_SoldOut, 80), ITEM_PRICE_Y, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);
                else
                    PrintMoneyLocal(WIN_MULTI, RIGHT_ALIGNED_X, ITEM_PRICE_Y, price, COLORID_BLACK, STR_CONV_MODE_LEFT_ALIGN, FALSE);
                break;
            }
        #endif // MUDSKIP_OUTFIT_SYSTEM
            case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
            {
                PrintMoneyLocal(WIN_MULTI, RIGHT_ALIGNED_X, ITEM_PRICE_Y, price, COLORID_BLACK, STR_CONV_MODE_LEFT_ALIGN, FALSE);
                break;
            }
        }

        FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
        FormatTextByWidth(gStringVar2, 104, FONT_SMALL, desc, 0);
        BuyMenuPrint(WIN_ITEM_DESCRIPTION, gStringVar2, 8, 0, TEXT_SKIP_DRAW, COLORID_BLACK, TRUE);
    }
    CopyWindowToVram(WIN_MULTI, COPYWIN_FULL);
}

static void UpdateCursorPosition(void)
{
    u32 row = sShopData->gridItems->selectedItem / sShopData->gridItems->maxCols;
    u32 col = sShopData->gridItems->selectedItem % sShopData->gridItems->maxCols;
    // 8 because tile is 8px wide/tall, 5 because gridbox is 4 tiles plus 1 empty space
    u32 x = CURSOR_START_X + (col * (8 * 5));
    u32 y = CURSOR_START_Y + (row * (8 * 5));
    gSprites[sShopData->cursorSpriteId].x = x;
    gSprites[sShopData->cursorSpriteId].y = y;
}

static void BuyMenuDisplayMessage(u8 taskId, const u8 *str, TaskFunc nextFunc)
{
    StringExpandPlaceholders(gStringVar4, str);
    BuyMenuPrint(WIN_ITEM_DESCRIPTION, gStringVar4, 8, 0, TEXT_SKIP_DRAW, COLORID_BLACK, TRUE);
    gTasks[taskId].func = nextFunc;
}

static void Task_BuyMenuTryBuyingItem(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u32 cost = BuyMenuGetItemPrice(GridMenu_SelectedIndex(sShopData->gridItems));
    const u8 *str;
    if (IsMartTypeMoneyItem(sMartInfo.martType))
        sShopData->totalCost = (cost >> IsPokeNewsActive(POKENEWS_SLATEPORT));
    else
        sShopData->totalCost = cost;

    FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));

    if (IsMartTypeItem(sMartInfo.martType))
    {
        if (GetItemImportance(sShopData->currentItemId) && (CheckBagHasItem(sShopData->currentItemId, 1) || CheckPCHasItem(sShopData->currentItemId, 1)))
        {
            PlaySE(SE_BOO);
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_SOLD_OUT);
            BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
            return;
        }
    }

    #ifdef MUDSKIP_OUTFIT_SYSTEM
    if (IsMartTypeOutfit(sMartInfo.martType))
    {
        if (GetOutfitStatus(sShopData->currentItemId))
        {
            PlaySE(SE_BOO);
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_SOLD_OUT);
            BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
            return;
        }
    }
    #endif // MUDSKIP_OUTFIT_SYSTEM

    if (!IsEnoughMoney(&gSaveBlock1Ptr->money, sShopData->totalCost) && IsMartTypeMoney(sMartInfo.martType))
    {
        PlaySE(SE_BOO);
        str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_MONEY);
        BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
    }
    else if (!IsEnoughCoins(sShopData->totalCost) && IsMartTypeCoin(sMartInfo.martType))
    {
        PlaySE(SE_BOO);
        str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_COINS);
        BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
    }
    else if (!IsEnoughBattlePoints(sShopData->totalCost) && IsMartTypePoints(sMartInfo.martType))
    {
        PlaySE(SE_BOO);
        str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_POINTS);
        BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
    }
    else
    {
        if (IsMartTypeCoin(sMartInfo.martType))
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_COIN_PROMPT);
        else if (IsMartTypePoints(sMartInfo.martType))
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_BP_PROMPT);
        else // if (IsMartTypeMoney(sMartInfo.martType))
            str = Shop_GetSellerMessage(SELLER_MSG_BUY_PROMPT);
        PlaySE(SE_SELECT);
        switch (sMartInfo.martType)
        {
            default:
            {
                CopyItemName(sShopData->currentItemId, gStringVar1);
                if (GetItemImportance(sShopData->currentItemId))
                {
                    if (IsMartTypeMoney(sMartInfo.martType))
                    {
                        u32 price = BuyMenuGetItemPrice(GridMenu_SelectedIndex(sShopData->gridItems));
                        ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
                        tItemCount = 1;
                        sShopData->totalCost = (price >> IsPokeNewsActive(POKENEWS_SLATEPORT)) * tItemCount;
                        BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
                    }
                    else
                    {
                        ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, 6);
                        tItemCount = 1;
                        BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
                    }
                }
                else
                {
                    str = Shop_GetSellerMessage(SELLER_MSG_BUY_PROMPT_PLURAL);
                    BuyMenuDisplayMessage(taskId, str, Task_BuyHowManyDialogueInit);
                }
                break;
            }
            case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
            {
                StringCopy(gStringVar1, gDecorations[sShopData->currentItemId].name);
                ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
                BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
                break;
            }
        #ifdef MUDSKIP_OUTFIT_SYSTEM
            case NEW_SHOP_TYPE_OUTFIT:
            {
                BufferOutfitStrings(gStringVar1, sShopData->currentItemId, OUTFIT_BUFFER_NAME);
                ConvertIntToDecimalStringN(gStringVar2, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
                str = Shop_GetSellerMessage(SELLER_MSG_BUY_OUTFIT_PROMPT);
                BuyMenuDisplayMessage(taskId, str, BuyMenuConfirmPurchase);
                break;
            }
        #endif // MUDSKIP_OUTFIT_SYSTEM
        }
    }
}

static inline void ExitBuyMenu(u8 taskId)
{
    gFieldCallback = MapPostLoadHook_ReturnToShopMenu;
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_ExitBuyMenu;
}

static void Task_BuyMenu(u8 taskId)
{
    GridMenu_HandleInput(sShopData->gridItems);
    if (JOY_NEW(B_BUTTON))
    {
        ExitBuyMenu(taskId);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        sShopData->currentItemId = sMartInfo.itemList[GridMenu_SelectedIndex(sShopData->gridItems)];
        if (sShopData->currentItemId == ITEM_NONE)
        {
            ExitBuyMenu(taskId);
        }
        else
        {
            gTasks[taskId].func = Task_BuyMenuTryBuyingItem;
        }

    }
    UpdateCursorPosition();
}

static void Task_BuyHowManyDialogueInit(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    u16 maxQuantity;

    tItemCount = 1;
    BuyMenuPrintItemQuantityAndPrice(taskId);
    ScheduleBgCopyTilemapToVram(0);

    // Avoid division by zero in-case something costs 0 pokedollars.
    if (sShopData->totalCost == 0)
        maxQuantity = MAX_BAG_ITEM_CAPACITY;
    else if (IsMartTypeCoin(sMartInfo.martType))
        maxQuantity = GetCoins() / sShopData->totalCost;
    else if (IsMartTypePoints(sMartInfo.martType))
        maxQuantity = GetBattlePoints() / sShopData->totalCost;
    else // if (IsMartTypeMoney(sMartInfo.martType))
        maxQuantity = GetMoney(&gSaveBlock1Ptr->money) / sShopData->totalCost;

    if (maxQuantity > MAX_BAG_ITEM_CAPACITY)
        sShopData->maxQuantity = MAX_BAG_ITEM_CAPACITY;
    else
        sShopData->maxQuantity = maxQuantity;

    gTasks[taskId].func = Task_BuyHowManyDialogueHandleInput;
}

static void Task_BuyHowManyDialogueHandleInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (AdjustQuantityAccordingToDPadInput(&tItemCount, sShopData->maxQuantity) == TRUE)
    {
        u32 price = BuyMenuGetItemPrice(GridMenu_SelectedIndex(sShopData->gridItems));
        if (IsMartTypeMoneyItem(sMartInfo.martType))
            sShopData->totalCost = (price >> IsPokeNewsActive(POKENEWS_SLATEPORT)) * tItemCount;
        else
            sShopData->totalCost = price * tItemCount;
        BuyMenuPrintItemQuantityAndPrice(taskId);
    }
    else
    {
        if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            ClearWindowTilemap(WIN_QUANTITY_PRICE);
            CopyItemName(sShopData->currentItemId, gStringVar1);
            ConvertIntToDecimalStringN(gStringVar2, tItemCount, STR_CONV_MODE_LEFT_ALIGN, MAX_ITEM_DIGITS);
            ConvertIntToDecimalStringN(gStringVar3, sShopData->totalCost, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
            FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
            if (tItemCount >= 2)
                CopyItemNameHandlePlural(sShopData->currentItemId, gStringVar1, tItemCount);
            else
                CopyItemName(sShopData->currentItemId, gStringVar1);

            if (IsMartTypeCoin(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, Shop_GetSellerMessage(SELLER_MSG_BUY_COIN_CONFIRM), BuyMenuConfirmPurchase);
            else if (IsMartTypePoints(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, Shop_GetSellerMessage(SELLER_MSG_BUY_POINT_CONFIRM), BuyMenuConfirmPurchase);
            else // if (IsMartTypeMoney(sMartInfo.martType))
                BuyMenuDisplayMessage(taskId, Shop_GetSellerMessage(SELLER_MSG_BUY_CONFIRM), BuyMenuConfirmPurchase);
        }
        else if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            ClearWindowTilemap(WIN_QUANTITY_PRICE);
            BuyMenuReturnToItemList(taskId);
        }
    }
}

static void BuyMenuConfirmPurchase(u8 taskId)
{
    CreateYesNoMenuWithCallbacks(taskId, &sShopBuyMenuYesNoWindowTemplates, 1, 0, 0, 1, 13, &sShopPurchaseYesNoFuncs);
}

static void BuyMenuTryMakePurchase(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));

    switch (sMartInfo.martType)
    {
        default:
        {
            const u8 *str;
            if (AddBagItem(sShopData->currentItemId, tItemCount) == TRUE)
            {
                str = Shop_GetSellerMessage(SELLER_MSG_BUY_SUCCESS);
                GetSetItemObtained(sShopData->currentItemId, FLAG_SET_ITEM_OBTAINED);
                BuyMenuDisplayMessage(taskId, str, BuyMenuSubtractMoney);
                RecordItemPurchase(taskId);
            }
            else
            {
                str = Shop_GetSellerMessage(SELLER_MSG_BUY_FAIL_NO_SPACE);
                BuyMenuDisplayMessage(taskId, str, Task_ReturnToItemListWaitMsg);
            }
            break;
        }
        case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
        {
            if (DecorationAdd(sShopData->currentItemId))
            {
                const u8 *str = sText_ThankYouIllSendItHome;
                if (sMartInfo.martType == NEW_SHOP_TYPE_DECOR2)
                {
                    str = sText_ThanksIllSendItHome;
                }

                BuyMenuDisplayMessage(taskId, str, BuyMenuSubtractMoney);
            }
            else
            {
                BuyMenuDisplayMessage(taskId, sText_SpaceForVar1Full, Task_ReturnToItemListWaitMsg);
            }
            break;
        }
    #ifdef MUDSKIP_OUTFIT_SYSTEM
        case NEW_SHOP_TYPE_OUTFIT:
        {
            UnlockOutfit(sShopData->currentItemId);
            BuyMenuDisplayMessage(taskId, gText_HereIsTheOutfitThankYou, BuyMenuSubtractMoney);
            break;
        }
    #endif // MUDSKIP_OUTFIT_SYSTEM
    }
}

static void BuyMenuSubtractMoney(u8 taskId)
{
    IncrementGameStat(GAME_STAT_SHOPPED);
    if (IsMartTypeCoin(sMartInfo.martType))
    {
        RemoveCoins(sShopData->totalCost);
        PlaySE(SE_SHOP);
        FillWindowPixelBuffer(WIN_MONEY, PIXEL_FILL(0));
        PrintMoneyLocal(WIN_MONEY, RIGHT_ALIGNED_X, 0, GetCoins(), COLORID_NORMAL, STR_CONV_MODE_RIGHT_ALIGN, TRUE);
    }
    else if (IsMartTypePoints(sMartInfo.martType))
    {
        RemoveBattlePoints(sShopData->totalCost);
        PlaySE(SE_SHOP);
        FillWindowPixelBuffer(WIN_MONEY, PIXEL_FILL(0));
        PrintMoneyLocal(WIN_MONEY, RIGHT_ALIGNED_X, 0, GetBattlePoints(), COLORID_NORMAL, STR_CONV_MODE_RIGHT_ALIGN, TRUE);
    }
    else //if (IsMartTypeMoney(sMartInfo.martType))
    {
        RemoveMoney(&gSaveBlock1Ptr->money, sShopData->totalCost);
        PlaySE(SE_SHOP);
        FillWindowPixelBuffer(WIN_MONEY, PIXEL_FILL(0));
        PrintMoneyLocal(WIN_MONEY, RIGHT_ALIGNED_X, 0, GetMoney(&gSaveBlock1Ptr->money), COLORID_NORMAL, STR_CONV_MODE_RIGHT_ALIGN, TRUE);
    }

    switch (sMartInfo.martType)
    {
        default:
            gTasks[taskId].func = Task_ReturnToItemListAfterItemPurchase;
            break;
    #ifdef MUDSKIP_OUTFIT_SYSTEM
        case NEW_SHOP_TYPE_OUTFIT:
    #endif // MUDSKIP_OUTFIT_SYSTEM
        case NEW_SHOP_TYPE_DECOR ... NEW_SHOP_TYPE_DECOR2:
            gTasks[taskId].func = Task_ReturnToItemListWaitMsg;
            break;
    }

}

static void Task_ReturnToItemListWaitMsg(u8 taskId)
{
    if (!IsTextPrinterActive(WIN_ITEM_DESCRIPTION))
    {
        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            if (!IsSEPlaying())
            {
                PlaySE(SE_SELECT);
            }
            BuyMenuReturnToItemList(taskId);
        }
    }
}

static void Task_ReturnToItemListAfterItemPurchase(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (GetItemPocket(sShopData->currentItemId) == POCKET_POKE_BALLS)
    {
        if (IsTextPrinterActive(WIN_ITEM_DESCRIPTION))
        {
            return;
        }

        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            // credit to pokeemerald-expansion
            u16 premierBallsToAdd = tItemCount / 10;

            if (premierBallsToAdd >= 1
             && ((I_PREMIER_BALL_BONUS <= GEN_7 && sShopData->currentItemId == ITEM_POKE_BALL)
             || (I_PREMIER_BALL_BONUS >= GEN_8 && (GetItemPocket(sShopData->currentItemId) == POCKET_POKE_BALLS))))
            {
                u32 spaceAvailable = GetFreeSpaceForItemInBag(ITEM_PREMIER_BALL);
                if (spaceAvailable < premierBallsToAdd)
                {
                    premierBallsToAdd = spaceAvailable;
                }
            }
            else
            {
                premierBallsToAdd = 0;
            }

            AddBagItem(ITEM_PREMIER_BALL, premierBallsToAdd);
            if (premierBallsToAdd > 0)
            {
                const u8 *str = Shop_GetSellerMessage(premierBallsToAdd >= 2 ? SELLER_MSG_BUY_PREMIER_BONUS_PLURAL : SELLER_MGS_BUY_PREMIER_BONUS);
                PlaySE(SE_SELECT);
                FillWindowPixelBuffer(WIN_ITEM_DESCRIPTION, PIXEL_FILL(0));
                ConvertIntToDecimalStringN(gStringVar1, premierBallsToAdd, STR_CONV_MODE_LEFT_ALIGN, MAX_ITEM_DIGITS);
                StringExpandPlaceholders(gStringVar2, str);
                BuyMenuPrint(WIN_ITEM_DESCRIPTION, gStringVar2, 8, 0, TEXT_SKIP_DRAW, COLORID_BLACK, TRUE);
                gTasks[taskId].func = Task_ReturnToItemListWaitMsg;
            }
            else
            {
                gTasks[taskId].func = BuyMenuReturnToItemList;
            }
        }
    }
    else
    {
        gTasks[taskId].func = Task_ReturnToItemListWaitMsg;
    }
}

static void BuyMenuReturnToItemList(u8 taskId)
{
    UpdateItemData();
    gTasks[taskId].func = Task_BuyMenu;
}

static void BuyMenuPrintItemQuantityAndPrice(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u32 x;

    FillWindowPixelBuffer(WIN_QUANTITY_PRICE, PIXEL_FILL(0));

    ConvertIntToDecimalStringN(gStringVar1, tItemCount, STR_CONV_MODE_LEADING_ZEROS, MAX_ITEM_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_xVar1);
    x = GetStringRightAlignXOffset(FONT_SMALL, gStringVar4, sBuyMenuWindowTemplates[WIN_QUANTITY_PRICE].width * 8);
    BuyMenuPrint(WIN_QUANTITY_PRICE, gStringVar4, x, 2, TEXT_SKIP_DRAW, COLORID_BLACK, FALSE);

    PrintMoneyLocal(WIN_QUANTITY_PRICE, RIGHT_ALIGNED_X, 14, sShopData->totalCost, COLORID_BLACK, STR_CONV_MODE_LEFT_ALIGN, FALSE);

    CopyWindowToVram(WIN_QUANTITY_PRICE, COPYWIN_FULL);
}

static void Task_ExitBuyMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        BuyMenuFreeMemory();
        SetMainCallback2(CB2_ReturnToField);
        DestroyTask(taskId);
    }
}

static void ClearItemPurchases(void)
{
    sPurchaseHistoryId = 0;
    memset(gMartPurchaseHistory, 0, sizeof(gMartPurchaseHistory));
}

static void RecordItemPurchase(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    u16 i;

    for (i = 0; i < ARRAY_COUNT(gMartPurchaseHistory); i++)
    {
        if (gMartPurchaseHistory[i].itemId == sShopData->currentItemId && gMartPurchaseHistory[i].quantity != 0)
        {
            if (gMartPurchaseHistory[i].quantity + tItemCount > 255)
                gMartPurchaseHistory[i].quantity = 255;
            else
                gMartPurchaseHistory[i].quantity += tItemCount;
            return;
        }
    }

    if (sPurchaseHistoryId < ARRAY_COUNT(gMartPurchaseHistory))
    {
        gMartPurchaseHistory[sPurchaseHistoryId].itemId = sShopData->currentItemId;
        gMartPurchaseHistory[sPurchaseHistoryId].quantity = tItemCount;
        sPurchaseHistoryId++;
    }
}

#undef tItemCount
#undef tCallbackHi
#undef tCallbackLo

void NewShop_CreatePokemartMenu(const u16 *itemsForSale)
{
    CreateShopMenu(NEW_SHOP_TYPE_NORMAL);
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateDecorationShop1Menu(const u16 *itemsForSale)
{
    CreateShopMenu(NEW_SHOP_TYPE_DECOR);
    SetShopItemsForSale(itemsForSale);
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateDecorationShop2Menu(const u16 *itemsForSale)
{
    CreateShopMenu(NEW_SHOP_TYPE_DECOR2);
    SetShopItemsForSale(itemsForSale);
    SetShopMenuCallback(ScriptContext_Enable);
}

#ifdef MUDSKIP_OUTFIT_SYSTEM
void NewShop_CreateOutfitShopMenu(const u16 *itemsForSale)
{
    CreateShopMenu(NEW_SHOP_TYPE_OUTFIT);
    SetShopItemsForSale(itemsForSale);
    SetShopMenuCallback(ScriptContext_Enable);
}
#endif // MUDSKIP_OUTFIT_SYSTEM

void NewShop_CreateVariablePokemartMenu(const u16 *itemsForSale)
{
    CreateShopMenu(NEW_SHOP_TYPE_VARIABLE);
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreateCoinPokemartMenu(const u16 *itemsForSale)
{
    CreateShopMenu(NEW_SHOP_TYPE_COINS);
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    SetShopMenuCallback(ScriptContext_Enable);
}

void NewShop_CreatePointsPokemartMenu(const u16 *itemsForSale)
{
    CreateShopMenu(NEW_SHOP_TYPE_POINTS);
    SetShopItemsForSale(itemsForSale);
    ClearItemPurchases();
    SetShopMenuCallback(ScriptContext_Enable);
}

#endif // MUDSKIP_SHOP_UI
