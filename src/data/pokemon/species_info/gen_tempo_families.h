#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGenTempo[] =
{
#endif

    [SPECIES_LOTPOLE] =
    {
        .baseHP        = 48,
        .baseAttack    = 46,
        .baseDefense   = 39,
        .baseSpeed     = 55,
        .baseSpAttack  = 53,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_WATER, TYPE_GRASS),
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("LOTPOLE"),
        .cryId = CRY_LOTPOLE,
        .natDexNum = NATIONAL_DEX_LOTPOLE,
        .categoryName = _("Toad"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "It is often found either meditating\n"
            "or sleeping. If suddenly woken up,\n"
            "it will jump very high in response\n"
            "from fear, with its leaf standing up."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lotpole,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Lotpole,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lotpole,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Lotpole,
        .shinyPalette = gMonShinyPalette_Lotpole,
        .iconSprite = gMonIcon_Lotpole,
        .iconPalIndex = 4,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_Sliggoo,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            gOverworldPalette_Sliggoo,
            gShinyOverworldPalette_Sliggoo
        )
        .levelUpLearnset = sLotpoleLevelUpLearnset,
        .teachableLearnset = sLotpoleTeachableLearnset,
        .eggMoveLearnset = sSkiddoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_FLORAGATO}),
    },

#ifdef __INTELLISENSE__
};
#endif