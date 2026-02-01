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
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_HEALER, ABILITY_KEEN_EYE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("SCAVULT"),
        .cryId = CRY_SCAVULT,
        .natDexNum = NATIONAL_DEX_SCAVULT,
        .categoryName = _("MISFORTUNE"),
        .height = 3,
        .weight = 23,
        .description = COMPOUND_STRING(
            "Said to have first appeared during\n"
            "a deadly plague in TENKEI, finding\n"
            "a SCAVULT is still considered a\n"
            "bad omen, even centuries later."),
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
        .backPicYOffset = 0,
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
        .teachableLearnset = sScavultTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_QUILLADIN}),
    },

    [SPECIES_MASALIZARD] =
    {
        .baseHP        = 35,
        .baseAttack    = 57,
        .baseDefense   = 31,
        .baseSpeed     = 75,
        .baseSpAttack  = 58,
        .baseSpDefense = 54,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FIRE), 
        .catchRate = 200,
        .expYield = 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("MASALIZARD"),
        .cryId = CRY_MASALIZARD,
        .natDexNum = NATIONAL_DEX_MASALIZARD,
        .categoryName = _("SPICY"),
        .height = 5,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It sneezes heavily from breathing\n"
            "the spicy powder on its leaves,\n"
            "which since millennia are harvested\n"
            "and used in TENKEI’s traditional cuisine."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Masalizard,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Masalizard,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Masalizard,
        .shinyPalette = gMonShinyPalette_Masalizard,
        .iconSprite = gMonIcon_Masalizard,
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
        .levelUpLearnset = sMasalizardLevelUpLearnset,
        .teachableLearnset = sMasalizardTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_QUILLADIN}),
    },

    [SPECIES_ELEPHLUSH] =
    {
        .baseHP        = 62,
        .baseAttack    = 57,
        .baseDefense   = 51,
        .baseSpeed     = 49,
        .baseSpAttack  = 41,
        .baseSpDefense = 53,
        .types = MON_TYPES(TYPE_FIRE, TYPE_WATER), 
        .catchRate = 200,
        .expYield = 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("ELEPHLUSH"),
        .cryId = CRY_ELEPHLUSH,
        .natDexNum = NATIONAL_DEX_ELEPHLUSH,
        .categoryName = _("TEAPOT"),
        .height = 5,
        .weight = 335,
        .description = COMPOUND_STRING(
            "The shell on its back hides a small\n"
            "flame, helping ELEPHLUSH regulate the\n"
            "temperature of the water coming\n"
            "out of its nose."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Elephlush,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Elephlush,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Elephlush,
        .shinyPalette = gMonShinyPalette_Elephlush,
        .iconSprite = gMonIcon_Elephlush,
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
        .levelUpLearnset = sElephlushLevelUpLearnset,
        .teachableLearnset = sElephlushTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_QUILLADIN}),
    },

    [SPECIES_LOTPOLE] =
    {
        .baseHP        = 48,
        .baseAttack    = 46,
        .baseDefense   = 39,
        .baseSpeed     = 55,
        .baseSpAttack  = 53,
        .baseSpDefense = 69,
        .types = MON_TYPES(TYPE_WATER, TYPE_GRASS), 
        .catchRate = 200,
        .expYield = 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("LOTPOLE"),
        .cryId = CRY_LOTPOLE,
        .natDexNum = NATIONAL_DEX_LOTPOLE,
        .categoryName = _("TOAD"),
        .height = 3,
        .weight = 23,
        .description = COMPOUND_STRING(
            "It is often found either sleeping or\n"
            "meditating, rolling its tail on itself.\n"
            "If woken up it will get startled and\n"
            "jump high from the fear."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lotpole,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Lotpole,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Lotpole,
        .shinyPalette = gMonShinyPalette_Lotpole,
        .iconSprite = gMonIcon_Lotpole,
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
        .levelUpLearnset = sLotpoleLevelUpLearnset,
        .teachableLearnset = sLotpoleTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_QUILLADIN}),
    },

    [SPECIES_TANOOK] =
    {
        .baseHP        = 44,
        .baseAttack    = 31,
        .baseDefense   = 40,
        .baseSpeed     = 53,
        .baseSpAttack  = 31,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_GRASS), 
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_PICKUP, ABILITY_PRANKSTER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("TANOOK"),
        .cryId = CRY_TANOOK,
        .natDexNum = NATIONAL_DEX_TANOOK,
        .categoryName = _("TRICKSTER"),
        .height = 3,
        .weight = 25,
        .description = COMPOUND_STRING(
            "While it loves to play tricks on\n"
            "people, especially ones wandering in\n"
            "forests, its actually very shy and will\n"
            "flee if its leaf mask is blown away."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Tanook,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Tanook,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Tanook,
        .shinyPalette = gMonShinyPalette_Tanook,
        .iconSprite = gMonIcon_Tanook,
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
        .levelUpLearnset = sTanookLevelUpLearnset,
        .teachableLearnset = sTanookTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_QUILLADIN}),
    },

    [SPECIES_PAWTRAIN] =
    {
        .baseHP        = 50,
        .baseAttack    = 44,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 41,
        .types = MON_TYPES(TYPE_NORMAL), 
        .catchRate = 190,
        .expYield = 90,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SCRAPPY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("PAWTRAIN"),
        .cryId = CRY_PAWTRAIN,
        .natDexNum = NATIONAL_DEX_PAWTRAIN,
        .categoryName = _("TRAINEE"),
        .height = 7,
        .weight = 190,
        .description = COMPOUND_STRING(
            "Clumsy but willing to put effort\n"
            "in training with its TRAINER, it's\n"
            "often gifted to cadets in TENKEI's police\n"
            "academy to celebrate their admission."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pawtrain,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Pawtrain,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Pawtrain,
        .shinyPalette = gMonShinyPalette_Pawtrain,
        .iconSprite = gMonIcon_Pawtrain,
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
        .levelUpLearnset = sPawtrainLevelUpLearnset,
        .teachableLearnset = sPawtrainTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_QUILLADIN}),
    },

    [SPECIES_KURSTRAW] =
    {
        .baseHP        = 49,
        .baseAttack    = 63,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 48,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GHOST), 
        .catchRate = 225,
        .expYield = 97,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_HEALER, ABILITY_PERISH_BODY, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("KURSTRAW"),
        .cryId = CRY_KURSTRAW,
        .natDexNum = NATIONAL_DEX_KURSTRAW,
        .categoryName = _("CURSED DOLL"),
        .height = 4,
        .weight = 10,
        .description = COMPOUND_STRING(
            "An old doll that gained consciousness\n"
            "after being tortured by a group of kids.\n"
            "The spite born from the nail driven into\n"
            "its body gave it dark powers for revenge."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kurstraw,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Kurstraw,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Kurstraw,
        .shinyPalette = gMonShinyPalette_Kurstraw,
        .iconSprite = gMonIcon_Kurstraw,
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
        .levelUpLearnset = sKurstrawLevelUpLearnset,
        .teachableLearnset = sKurstrawTeachableLearnset,
        .eggMoveLearnset = sChespinEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_QUILLADIN}),
    },

#ifdef __INTELLISENSE__
};
#endif