#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoTenkei[] =
{
#endif

    [SPECIES_SCAVULT] =
    {
        .baseHP        = 50,
        .baseAttack    = 44,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_FLYING, TYPE_GHOST), 
        .catchRate = 200,
        .expYield = 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("SCAVULT"),
        .cryId = CRY_SCAVULT,
        .natDexNum = NATIONAL_DEX_SCAVULT,
        .categoryName = _("Small Bird"),
        .height = 3,
        .weight = 23,
        .description = COMPOUND_STRING(
            "Said to have first appeared during\n"
            "a deadly plague in TENKEI, finding\n"
            "a SCAVULT is still considered a sign\n"
            "of misfortune, even centuries later."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Scavult,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Scavult,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Scavult,
        .shinyPalette = gMonShinyPalette_Scavult,
        .iconSprite = gMonIcon_Scavult,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chespin)
        OVERWORLD(
            sPicTable_Chespin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chespin,
            gShinyOverworldPalette_Chespin
        )
        .levelUpLearnset = sScavultLevelUpLearnset,
        .teachableLearnset = sChespinTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_QUILLADIN}),
    },

#ifdef __INTELLISENSE__
};
#endif