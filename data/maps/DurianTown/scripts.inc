DurianTown_MapScripts::
# 2 "data/maps/DurianTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DurianTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/DurianTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DurianTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DurianTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DurianTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_VISITED_DURIAN_TOWN
	end

DurianTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/DurianTown/scripts.pory"
	map_script_2 VAR_RIVALS_STATE, 3, DurianTown_Rival
	.2byte 0


DurianTown_GymSign::
# 13 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_GymSign_Text_0
# 14 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_CitySign::
# 19 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_CitySign_Text_0
# 20 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_KurtSign::
# 25 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_KurtSign_Text_0
	end


DurianTown_KurtApprentice::
# 30 "data/maps/DurianTown/scripts.pory"
	lock
# 31 "data/maps/DurianTown/scripts.pory"
	faceplayer
# 32 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_KurtApprentice_Text_0
# 33 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_LittleGirl::
# 38 "data/maps/DurianTown/scripts.pory"
	lock
# 39 "data/maps/DurianTown/scripts.pory"
	faceplayer
# 40 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_LITTLE_GIRL, Common_Movement_Pensive
# 41 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_LittleGirl_Text_0
# 43 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_Rival::
# 48 "data/maps/DurianTown/scripts.pory"
	lock
# 49 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 50 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_ExclamationMark
# 52 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkInPlaceLeft
# 54 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/DurianTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_2
# 60 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_1
# 61 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_1:
# 63 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 64 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_6
# 68 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_3
DurianTown_Rival_5:
# 70 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_4
# 71 "data/maps/DurianTown/scripts.pory"
	closemessage
# 72 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Music
# 73 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Delay48
# 75 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_10
# 79 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_6
DurianTown_Rival_9:
# 81 "data/maps/DurianTown/scripts.pory"
	closemessage
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_14
# 85 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaFight
DurianTown_Rival_13:
# 87 "data/maps/DurianTown/scripts.pory"
	release
	end

DurianTown_Rival_2:
# 57 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_0
# 58 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_1

DurianTown_Rival_6:
# 66 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_2
	goto DurianTown_Rival_5

DurianTown_Rival_10:
# 77 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_5
	goto DurianTown_Rival_9

DurianTown_Rival_14:
# 83 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaFight
	goto DurianTown_Rival_13


DurianTown_ShinyaFight::
# 92 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 93 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_ShinyaFight_2
# 96 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_ShinyaFight_3
# 99 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_ShinyaFight_4
	return

DurianTown_ShinyaFight_2:
# 94 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_GRA, DurianTown_ShinyaFight_Text_0
# 95 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_3:
# 97 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_FIR, DurianTown_ShinyaFight_Text_0
# 98 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_4:
# 100 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_WAT, DurianTown_ShinyaFight_Text_0
# 101 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return


DurianTown_FuukaFight::
# 106 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 107 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_FuukaFight_2
# 110 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_FuukaFight_3
# 113 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_FuukaFight_4
	return

DurianTown_FuukaFight_2:
# 108 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_GRA, DurianTown_FuukaFight_Text_0
# 109 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_3:
# 111 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_FIR, DurianTown_FuukaFight_Text_0
# 112 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_4:
# 114 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_WAT, DurianTown_FuukaFight_Text_0
# 115 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return


DurianTown_ShinyaDefeated::
# 120 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 121 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_0
# 123 "data/maps/DurianTown/scripts.pory"
	closemessage
# 124 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 125 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 126 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 128 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 129 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_CITRUS_RIVAL
# 130 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 131 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 132 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 133 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_FuukaDefeated::
# 138 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 139 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_FuukaDefeated_Text_0
# 141 "data/maps/DurianTown/scripts.pory"
	closemessage
# 142 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 143 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 144 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 146 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_CITRUS_RIVAL
# 148 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 149 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 150 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 151 "data/maps/DurianTown/scripts.pory"
	release
	end


# 155 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_GoToTemple:
# 156 "data/maps/DurianTown/scripts.pory"
	walk_left
# 157 "data/maps/DurianTown/scripts.pory"
	walk_up
# 157 "data/maps/DurianTown/scripts.pory"
	walk_up
	step_end

DurianTown_GymSign_Text_0:
# 13 "data/maps/DurianTown/scripts.pory"
	.string "ELEMENTAL TEMPLE OF LIVEHOOD\n"
	.string "GUARDIANS: SHIRI&BANJO\l"
	.string "“The fearful harmony!”$"

DurianTown_CitySign_Text_0:
# 19 "data/maps/DurianTown/scripts.pory"
	.string "STRAWBERRY TOWN\n"
	.string "“United with nature and POKéMON”$"

DurianTown_KurtSign_Text_0:
# 25 "data/maps/DurianTown/scripts.pory"
	.string "KURT'S HOUSE$"

DurianTown_KurtApprentice_Text_0:
# 32 "data/maps/DurianTown/scripts.pory"
	.string "Are you a POKéMON TRAINER? Then come\n"
	.string "buy some handcrafted POKé BALLS!$"

DurianTown_LittleGirl_Text_0:
# 42 "data/maps/DurianTown/scripts.pory"
	.string "I'm pretending to be a gate guard like\n"
	.string "my grandpa when he was younger!$"

DurianTown_Rival_Text_0:
# 57 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Anegimi! I'm guessing you got\n"
	.string "the STAMP, right?\p"
	.string "I knew you would do it.$"

DurianTown_Rival_Text_1:
# 60 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: …Oh, anigimi.\n"
	.string "You got your STAMP, didn't you?\l"
	.string "That's great.$"

DurianTown_Rival_Text_2:
# 66 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Our first step in claiming\n"
	.string "back our birthright…$"

DurianTown_Rival_Text_3:
# 68 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: The first step in claiming\n"
	.string "the throne we deserve…$"

DurianTown_Rival_Text_4:
# 70 "data/maps/DurianTown/scripts.pory"
	.string "Anyway. Since we did not have that\n"
	.string "match back in CITRUS ISLAND,\l"
	.string "why don't we have it right here?$"

DurianTown_Rival_Text_5:
# 77 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Ready or not, here I come!$"

DurianTown_Rival_Text_6:
# 79 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: Throw your POKéMON out!$"

DurianTown_ShinyaFight_Text_0:
# 94 "data/maps/DurianTown/scripts.pory"
	.string "Oh yeah! Good job, anegimi!$"

DurianTown_FuukaFight_Text_0:
# 108 "data/maps/DurianTown/scripts.pory"
	.string "Nice fight.$"

DurianTown_ShinyaDefeated_Text_0:
# 122 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Good job, good job!\p"
	.string "But hey, even if you have got the STAMP\n"
	.string "first, I'll destroy the PATH GUARDIANS\l"
	.string "harder than you did!\p"
	.string "Let's meet in COCONUT CITY, m'kay?$"

DurianTown_FuukaDefeated_Text_0:
# 140 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: Nice fight, anigimi. I can only\n"
	.string "hope I'll grow this strong, too.\p"
	.string "Let's see if I can get the STAMP myself.\n"
	.string "Meanwhile, you can go to COCONUT CITY's\l"
	.string "temple first.$"
