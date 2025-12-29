DurianTown_PokemonCenter_MapScripts::
# 2 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DurianTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DurianTown_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_DURIAN_TOWN
	end


DurianTown_PokemonCenter_EventScript_Nurse::
# 9 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_DURIAN_NURSE
# 10 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 11 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitmessage
# 12 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 13 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


DurianTown_PokemonCenter_EventScript_Boy::
# 18 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 19 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 20 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Boy_Text_0
# 21 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


DurianTown_PokemonCenter_EventScript_ExpertM::
# 26 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 27 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 28 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_ExpertM_Text_0
# 29 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


DurianTown_PokemonCenter_EventScript_Woman::
# 34 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 35 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 36 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Woman_Text_0
# 37 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


DurianTown_PokemonCenter_EventScript_Girl::
# 42 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Girl_Text_0
# 45 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


DurianTown_PokemonCenter_EventScript_Clerk::
# 50 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 51 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 52 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox gText_HowMayIServeYou
# 53 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitmessage
# 54 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	pokemart DurianTown_PokemonCenter_Pokemart
# 55 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain
# 56 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


	.align 2
# 60 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Pokemart:
# 61 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POKE_BALL
# 62 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_POTION
# 63 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 64 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 65 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

DurianTown_PokemonCenter_EventScript_Jukebox::
# 69 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 70 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 71 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	showmoneybox 0, 0
# 72 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Jukebox_Text_0, MSGBOX_YESNO
# 73 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DurianTown_PokemonCenter_EventScript_Jukebox_1
# 78 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	checkmoney 200
# 79 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DurianTown_PokemonCenter_EventScript_Jukebox_4
# 84 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DurianTown_PokemonCenter_EventScript_Jukebox_5
	return

DurianTown_PokemonCenter_EventScript_Jukebox_1:
# 74 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	hidemoneybox
# 75 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end

DurianTown_PokemonCenter_EventScript_Jukebox_4:
# 80 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Jukebox_Text_1
# 81 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	hidemoneybox
# 82 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end

DurianTown_PokemonCenter_EventScript_Jukebox_5:
# 85 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	removemoney 200
# 86 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	updatemoneybox
# 87 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	hidemoneybox
# 88 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto DurianTown_PokemonCenter_EventScript_SongSelection
	return


DurianTown_PokemonCenter_EventScript_SongSelection::
# 95 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_SongSelection_Text_0
# 96 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_01_GET, DurianTown_PokemonCenter_EventScript_SongSelection_2
DurianTown_PokemonCenter_EventScript_SongSelection_1:
# 99 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_02_GET, DurianTown_PokemonCenter_EventScript_SongSelection_5
DurianTown_PokemonCenter_EventScript_SongSelection_4:
# 102 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_03_GET, DurianTown_PokemonCenter_EventScript_SongSelection_8
DurianTown_PokemonCenter_EventScript_SongSelection_7:
# 105 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_04_GET, DurianTown_PokemonCenter_EventScript_SongSelection_11
DurianTown_PokemonCenter_EventScript_SongSelection_10:
# 108 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_05_GET, DurianTown_PokemonCenter_EventScript_SongSelection_14
DurianTown_PokemonCenter_EventScript_SongSelection_13:
# 111 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_06_GET, DurianTown_PokemonCenter_EventScript_SongSelection_17
DurianTown_PokemonCenter_EventScript_SongSelection_16:
# 114 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_07_GET, DurianTown_PokemonCenter_EventScript_SongSelection_20
DurianTown_PokemonCenter_EventScript_SongSelection_19:
# 117 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_08_GET, DurianTown_PokemonCenter_EventScript_SongSelection_23
DurianTown_PokemonCenter_EventScript_SongSelection_22:
# 120 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_09_GET, DurianTown_PokemonCenter_EventScript_SongSelection_26
DurianTown_PokemonCenter_EventScript_SongSelection_25:
# 123 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_09_GET, DurianTown_PokemonCenter_EventScript_SongSelection_29
DurianTown_PokemonCenter_EventScript_SongSelection_28:
# 126 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_09_GET, DurianTown_PokemonCenter_EventScript_SongSelection_32
DurianTown_PokemonCenter_EventScript_SongSelection_31:
# 129 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_12, 11
# 130 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 131 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	switch VAR_RESULT
# 132 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 0, DurianTown_PokemonCenter_EventScript_SongSelection_36
# 134 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 1, DurianTown_PokemonCenter_EventScript_SongSelection_37
# 136 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 2, DurianTown_PokemonCenter_EventScript_SongSelection_38
# 138 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 3, DurianTown_PokemonCenter_EventScript_SongSelection_39
# 140 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 4, DurianTown_PokemonCenter_EventScript_SongSelection_40
# 142 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 5, DurianTown_PokemonCenter_EventScript_SongSelection_41
# 144 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 6, DurianTown_PokemonCenter_EventScript_SongSelection_42
# 146 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 7, DurianTown_PokemonCenter_EventScript_SongSelection_43
# 148 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 8, DurianTown_PokemonCenter_EventScript_SongSelection_44
# 150 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 9, DurianTown_PokemonCenter_EventScript_SongSelection_45
# 152 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 10, DurianTown_PokemonCenter_EventScript_SongSelection_46
# 154 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	case 11, DurianTown_PokemonCenter_EventScript_SongSelection_47
DurianTown_PokemonCenter_EventScript_SongSelection_34:
# 158 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 159 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	closemessage
# 160 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end

DurianTown_PokemonCenter_EventScript_SongSelection_2:
# 97 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_1, 0
	goto DurianTown_PokemonCenter_EventScript_SongSelection_1

DurianTown_PokemonCenter_EventScript_SongSelection_5:
# 100 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_2, 1
	goto DurianTown_PokemonCenter_EventScript_SongSelection_4

DurianTown_PokemonCenter_EventScript_SongSelection_8:
# 103 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_3, 2
	goto DurianTown_PokemonCenter_EventScript_SongSelection_7

DurianTown_PokemonCenter_EventScript_SongSelection_11:
# 106 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_4, 3
	goto DurianTown_PokemonCenter_EventScript_SongSelection_10

DurianTown_PokemonCenter_EventScript_SongSelection_14:
# 109 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_5, 4
	goto DurianTown_PokemonCenter_EventScript_SongSelection_13

DurianTown_PokemonCenter_EventScript_SongSelection_17:
# 112 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_6, 5
	goto DurianTown_PokemonCenter_EventScript_SongSelection_16

DurianTown_PokemonCenter_EventScript_SongSelection_20:
# 115 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_7, 6
	goto DurianTown_PokemonCenter_EventScript_SongSelection_19

DurianTown_PokemonCenter_EventScript_SongSelection_23:
# 118 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_8, 7
	goto DurianTown_PokemonCenter_EventScript_SongSelection_22

DurianTown_PokemonCenter_EventScript_SongSelection_26:
# 121 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_9, 8
	goto DurianTown_PokemonCenter_EventScript_SongSelection_25

DurianTown_PokemonCenter_EventScript_SongSelection_29:
# 124 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_10, 9
	goto DurianTown_PokemonCenter_EventScript_SongSelection_28

DurianTown_PokemonCenter_EventScript_SongSelection_32:
# 127 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	dynmultipush DurianTown_PokemonCenter_EventScript_SongSelection_Text_11, 10
	goto DurianTown_PokemonCenter_EventScript_SongSelection_31

DurianTown_PokemonCenter_EventScript_SongSelection_36:
# 133 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_AW2_211, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_37:
# 135 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_GS2_ISAAC_BATTLE, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_38:
# 137 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_AW2_212, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_39:
# 139 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_RG_VS_WILD, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_40:
# 141 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_AW2_209, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_41:
# 143 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_RG_VS_GYM_LEADER, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_42:
# 145 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_RG_VS_WILD, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_43:
# 147 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_RG_VS_WILD, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_44:
# 149 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_AW2_211, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_45:
# 151 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_AW2_418, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_46:
# 153 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playbgm MUS_RG_VS_WILD, FALSE
	goto DurianTown_PokemonCenter_EventScript_SongSelection_34

DurianTown_PokemonCenter_EventScript_SongSelection_47:
# 155 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


DurianTown_PokemonCenter_EventScript_Disc::
# 165 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_DISC_04_GET, DurianTown_PokemonCenter_EventScript_Disc_1
# 172 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 173 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 174 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Disc_Text_1
# 175 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Disc_Text_2
# 177 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitfanfare
# 178 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	setflag FLAG_DISC_04_GET
# 179 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end

DurianTown_PokemonCenter_EventScript_Disc_1:
# 166 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 167 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 168 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_EventScript_Disc_Text_0
# 169 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
	end


DurianTown_PokemonCenter_EventScript_Boy_Text_0:
# 20 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "My grandpa only just woke up from\n"
	.string "a coma he got during the DARK DECADE…\p"
	.string "The shock of losing the war nearly took\n"
	.string "him to an early grave.$"

DurianTown_PokemonCenter_EventScript_ExpertM_Text_0:
# 28 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "At your age, I was a PATH DISCIPLE,\n"
	.string "and our TEMPLE trained ROCK-types,\l"
	.string "not any of this SOUND-type nonsense!\p"
	.string "And now, the darn UNOVANS said they’ll\n"
	.string "rename the ELEMENTAL CONQUEST to the\l"
	.string "GYM CHALLENGE after this edition!\p"
	.string "NIHON is doomed, I tell you!$"

DurianTown_PokemonCenter_EventScript_Woman_Text_0:
# 36 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Till this year’s ELEMENTAL CONQUEST,\n"
	.string "BANJO was the respectable\p"
	.string "ISHIKI clan’s heir, musicians who\n"
	.string "always guarded our TEMPLE!\p"
	.string "But since he met that SHIRI girl…\p"
	.string "Now he’s looking like a hooligan, and\n"
	.string "he plays those horrible UNOVAN noises!$"

DurianTown_PokemonCenter_EventScript_Girl_Text_0:
# 44 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "I think BANJO’s new look is cool!\n"
	.string "His new haircut is called…\l"
	.string "a “MOSTARAPTOR”, right?\p"
	.string "Either way, SHIRI brought out\n"
	.string "the real him!$"

DurianTown_PokemonCenter_EventScript_Jukebox_Text_0:
# 72 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "It's a JUKEBOX, the new invention\n"
	.string "from the UNOVA region!\p"
	.string "Do you want to play a song?\n"
	.string "It's only ¥200!$"

DurianTown_PokemonCenter_EventScript_Jukebox_Text_1:
# 80 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "You don't have enough money!$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_0:
# 95 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Choose a song!$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_1:
# 97 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "CITRUS ISLAND$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_2:
# 100 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "BATTLE! WILD POKéMON$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_3:
# 103 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "STRAWBERRY TOWN$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_4:
# 106 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "BATTLE! TRAINER$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_5:
# 109 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "ELEMENTAL TEMPLE$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_6:
# 112 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "BATTLE! PATH GUARDIAN$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_7:
# 115 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "BATTLE! RIVAL$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_8:
# 118 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "COCONUT CITY$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_9:
# 121 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "BATTLE! ARC SOLDIER$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_10:
# 124 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "WATERMELON CITY$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_11:
# 127 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "LEMONSHORE CITY$"

DurianTown_PokemonCenter_EventScript_SongSelection_Text_12:
# 129 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "I changed my mind.$"

DurianTown_PokemonCenter_EventScript_Disc_Text_0:
# 168 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "I just don't think this whole disc\n"
	.string "business isn't a fad, you know.\p"
	.string "Why not going to a live concert with\n"
	.string "live musicians, instead?$"

DurianTown_PokemonCenter_EventScript_Disc_Text_1:
# 174 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Have you seen that weird machine\n"
	.string "in the corner?\p"
	.string "It seems that if you insert a record,\n"
	.string "that gizmo will somehow play a song?\p"
	.string "What a weird invention, tsk. Music is\n"
	.string "something you play live, it shouldn't\l"
	.string "be stored in some magical disc.\p"
	.string "I've been given one as a gift, but I'm\n"
	.string "not into this recording music fad.\l"
	.string "Why don't you take it instead?$"

DurianTown_PokemonCenter_EventScript_Disc_Text_2:
# 176 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "{PLAYER} obtained a DISC!\n"
	.string "It's DISC 04, <<BATTLE! TRAINER!>>!$"
