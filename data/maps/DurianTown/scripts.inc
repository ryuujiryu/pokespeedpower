DurianTown_MapScripts::
# 2 "data/maps/DurianTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DurianTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/DurianTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DurianTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DurianTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DurianTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_VISITED_DURIAN_TOWN
# 5 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
	end

DurianTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/DurianTown/scripts.pory"
	map_script_2 VAR_RIVALS_STATE, 3, DurianTown_Rival
	.2byte 0


DurianTown_GymSign::
# 14 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_GymSign_Text_0
# 15 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_CitySign::
# 20 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_CitySign_Text_0
# 21 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_KurtSign::
# 26 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_KurtSign_Text_0
	end


DurianTown_KurtApprentice::
# 31 "data/maps/DurianTown/scripts.pory"
	lock
# 32 "data/maps/DurianTown/scripts.pory"
	faceplayer
# 33 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_KurtApprentice_Text_0
# 34 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_LittleGirl::
# 39 "data/maps/DurianTown/scripts.pory"
	lock
# 40 "data/maps/DurianTown/scripts.pory"
	faceplayer
# 41 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_LITTLE_GIRL, Common_Movement_Pensive
# 42 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_LittleGirl_Text_0
# 44 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_Rival::
# 49 "data/maps/DurianTown/scripts.pory"
	lock
# 50 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 51 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 53 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 55 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/DurianTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_2
# 61 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_1
# 62 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_1:
# 64 "data/maps/DurianTown/scripts.pory"
	addobject LOCALID_DURIANTOWN_RIVAL
# 65 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_ComeToPlayer
# 66 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkInPlaceLeft
# 68 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_6
# 73 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_3
# 74 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_5:
# 76 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 77 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_10
# 81 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_5
DurianTown_Rival_9:
# 83 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_6
# 84 "data/maps/DurianTown/scripts.pory"
	closemessage
# 85 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Music
# 86 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 87 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Delay48
# 88 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_14
# 92 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_8
DurianTown_Rival_13:
# 94 "data/maps/DurianTown/scripts.pory"
	closemessage
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_18
# 98 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaFight
DurianTown_Rival_17:
# 100 "data/maps/DurianTown/scripts.pory"
	release
	end

DurianTown_Rival_2:
# 58 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_0
# 59 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_1

DurianTown_Rival_6:
# 70 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_2
# 71 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_5

DurianTown_Rival_10:
# 79 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_4
	goto DurianTown_Rival_9

DurianTown_Rival_14:
# 90 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_7
	goto DurianTown_Rival_13

DurianTown_Rival_18:
# 96 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaFight
	goto DurianTown_Rival_17


DurianTown_ShinyaFight::
# 105 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 106 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_ShinyaFight_2
# 109 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_ShinyaFight_3
# 112 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_ShinyaFight_4
	return

DurianTown_ShinyaFight_2:
# 107 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_GRA, DurianTown_ShinyaFight_Text_0
# 108 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_3:
# 110 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_FIR, DurianTown_ShinyaFight_Text_0
# 111 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_4:
# 113 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_WAT, DurianTown_ShinyaFight_Text_0
# 114 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return


DurianTown_FuukaFight::
# 119 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 120 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_FuukaFight_2
# 123 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_FuukaFight_3
# 126 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_FuukaFight_4
	return

DurianTown_FuukaFight_2:
# 121 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_GRA, DurianTown_FuukaFight_Text_0
# 122 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_3:
# 124 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_FIR, DurianTown_FuukaFight_Text_0
# 125 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_4:
# 127 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_WAT, DurianTown_FuukaFight_Text_0
# 128 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return


DurianTown_ShinyaDefeated::
# 133 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 134 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_0
# 136 "data/maps/DurianTown/scripts.pory"
	closemessage
# 137 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 138 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 139 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 141 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 143 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 144 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 145 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 146 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 147 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_FuukaDefeated::
# 152 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 153 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_FuukaDefeated_Text_0
# 155 "data/maps/DurianTown/scripts.pory"
	closemessage
# 156 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 157 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 158 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 160 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 162 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 163 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 164 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 165 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 166 "data/maps/DurianTown/scripts.pory"
	release
	end


# 170 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_GoToTemple:
# 171 "data/maps/DurianTown/scripts.pory"
	walk_left
# 172 "data/maps/DurianTown/scripts.pory"
	walk_up
# 172 "data/maps/DurianTown/scripts.pory"
	walk_up
	step_end

# 175 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_ComeToPlayer:
# 176 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 176 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 176 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 176 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 176 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 176 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
	step_end

DurianTown_GymSign_Text_0:
# 14 "data/maps/DurianTown/scripts.pory"
	.string "ELEMENTAL TEMPLE OF LIVEHOOD\n"
	.string "GUARDIANS: SHIRI&BANJO\l"
	.string "“The fearful harmony!”$"

DurianTown_CitySign_Text_0:
# 20 "data/maps/DurianTown/scripts.pory"
	.string "STRAWBERRY TOWN\n"
	.string "“United with nature and POKéMON”$"

DurianTown_KurtSign_Text_0:
# 26 "data/maps/DurianTown/scripts.pory"
	.string "KURT'S HOUSE$"

DurianTown_KurtApprentice_Text_0:
# 33 "data/maps/DurianTown/scripts.pory"
	.string "Are you a POKéMON TRAINER? Then come\n"
	.string "buy some handcrafted POKé BALLS!$"

DurianTown_LittleGirl_Text_0:
# 43 "data/maps/DurianTown/scripts.pory"
	.string "I'm pretending to be a gate guard like\n"
	.string "my grandpa when he was younger!$"

DurianTown_Rival_Text_0:
# 58 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Anegimi!$"

DurianTown_Rival_Text_1:
# 61 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: …Oh, anigimi.$"

DurianTown_Rival_Text_2:
# 70 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: I'm guessing you got the STAMP, right?\n"
	.string "I knew you would do it.$"

DurianTown_Rival_Text_3:
# 73 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: You got your STAMP, didn't you?\n"
	.string "That's great.$"

DurianTown_Rival_Text_4:
# 79 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Our first step in claiming\n"
	.string "back our birthright…$"

DurianTown_Rival_Text_5:
# 81 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: The first step in claiming\n"
	.string "the throne we deserve…$"

DurianTown_Rival_Text_6:
# 83 "data/maps/DurianTown/scripts.pory"
	.string "Anyway. Since we did not have that\n"
	.string "match back in CITRUS ISLAND,\l"
	.string "why don't we have it right here?$"

DurianTown_Rival_Text_7:
# 90 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Ready or not, here I come!$"

DurianTown_Rival_Text_8:
# 92 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: Throw your POKéMON out!$"

DurianTown_ShinyaFight_Text_0:
# 107 "data/maps/DurianTown/scripts.pory"
	.string "Oh yeah! Good job, anegimi!$"

DurianTown_FuukaFight_Text_0:
# 121 "data/maps/DurianTown/scripts.pory"
	.string "Nice fight.$"

DurianTown_ShinyaDefeated_Text_0:
# 135 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Good job, good job!\p"
	.string "But hey, even if you have got the STAMP\n"
	.string "first, I'll destroy the PATH GUARDIANS\l"
	.string "harder than you did!\p"
	.string "Let's meet in COCONUT CITY, m'kay?$"

DurianTown_FuukaDefeated_Text_0:
# 154 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: Nice fight, anigimi. I can only\n"
	.string "hope I'll grow this strong, too.\p"
	.string "Let's see if I can get the STAMP myself.\n"
	.string "Meanwhile, why don't you go to\l"
	.string "COCONUT CITY's TEMPLE first?$"
