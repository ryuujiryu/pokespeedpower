#include "constants/global.h"
#include "constants/event_objects.h"

#if MODERN == 0
static const u8 sText_OutfitName_UsualGreen[] = _("USUAL GREEN");
static const u8 sText_OutfitDesc_UsualGreen[] = _(
    "The usual, but basic OUTFIT.");

static const u8 sText_OutfitName_UnusualRed[] = _("UNUSUAL RED");
static const u8 sText_OutfitDesc_UnusualRed[] = _(
    "Rather unusual, but still basic OUTFIT.");
#endif

static const u16 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSMayGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.4bpp");

//! TODO: Should the gfx here be seperated?

static const u8 sFrontierPassPlayerIcons_BrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

static const u8 sFrontierPassPlayerIcons_RSBrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/rs_map_heads.4bpp");

#define TRAINER_ID(m, f) \
{ \
    [MALE] =   { TRAINER_PIC_ ## m, TRAINER_BACK_PIC_ ## m, }, \
    [FEMALE] = { TRAINER_PIC_ ## f, TRAINER_BACK_PIC_ ## f, }, \
}

#define AVATAR_GFX_ID(m, f) \
{ \
    [MALE] = { \
        [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_ ## m ## _NORMAL, \
        [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_ ## m ## _ACRO_BIKE, \
        [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_ ## m ## _SURFING, \
        [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_ ## m ## _UNDERWATER \
    }, \
    [FEMALE] = { \
        [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_ ## f ## _NORMAL, \
        [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_ ## f ## _ACRO_BIKE, \
        [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_ ## f ## _SURFING, \
        [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_ ## f ## _UNDERWATER \
    }, \
}

#define ANIM_GFX_ID(m, f) \
{ \
    [MALE] = { \
        [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_ ## m ## _FIELD_MOVE, \
        [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_ ## m ## _FISHING, \
        [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_ ## m ## _WATERING, \
        [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_ ## m ## _DECORATING, \
        [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_ ## m ## _FIELD_MOVE \
    }, \
    [FEMALE] = { \
        [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_ ## f ## _FIELD_MOVE, \
        [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_ ## f ## _FISHING, \
        [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_ ## f ## _WATERING, \
        [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_ ## f ## _DECORATING, \
        [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_ ## f ## _FIELD_MOVE \
    }, \
}

#define REGION_MAP_GFX(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

#define TRAINER_PIC_RUBY_SAPPHIRE_BRENDAN TRAINER_PIC_RS_BRENDAN
#define TRAINER_PIC_RUBY_SAPPHIRE_MAY     TRAINER_PIC_RS_MAY

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_NONE] = {
        .isHidden = TRUE
    },
    [OUTFIT_USUAL_GREEN] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! DESC: prices for purchasing them.
        .prices = { 0, 0 },

        //! agbcc doesnt like COMPOUND_STRING on my end
        //! DESC: outfit's name
        #if MODERN == 1
        .name = COMPOUND_STRING("USUAL GREEN"),
        #else
        .name = sText_OutfitName_UsualGreen,
        #endif

        //! DESC: outfit's description
        #if MODERN == 1
        .desc = COMPOUND_STRING("The usual, but basic OUTFIT."),
        #else
        .desc = sText_OutfitDesc_UsualGreen,
        #endif

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = TRAINER_ID(BRENDAN, MAY),

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = AVATAR_GFX_ID(BRENDAN, MAY),

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = ANIM_GFX_ID(BRENDAN, MAY),

        //! DESC: head icons gfx&pal for region map
        .iconsRM = REGION_MAP_GFX(Brendan, May),

        //! DESC: head icons gfx&pal for frontier pass
        //! note that frontier pass needs to be in one sprite instead of two,
        //! unlike region map. (probably should split them tbh)
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
    [OUTFIT_UNUSUAL_RED] = {
        .isHidden = FALSE,
        .prices = { 200, 500 },
        #if MODERN == 1
        .name = COMPOUND_STRING("UNUSUAL RED"),
        .desc = COMPOUND_STRING("Rather unusual, but still basic OUTFIT."),
        #else
        .name = sText_OutfitName_UnusualRed,
        .desc = sText_OutfitDesc_UnusualRed,
        #endif
        .trainerPics = TRAINER_ID(RUBY_SAPPHIRE_BRENDAN, RUBY_SAPPHIRE_MAY),
        .avatarGfxIds = AVATAR_GFX_ID(BRENDAN, MAY),
        .animGfxIds = ANIM_GFX_ID(BRENDAN, MAY),
        .iconsRM = REGION_MAP_GFX(RSBrendan, RSMay),
        .iconsFP = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
};
