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
	closemessage
# 35 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_APPRENTICE, Common_Movement_Sad
# 36 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_KurtApprentice_Text_1
# 38 "data/maps/DurianTown/scripts.pory"
	closemessage
# 39 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_LittleGirl::
# 44 "data/maps/DurianTown/scripts.pory"
	lock
# 45 "data/maps/DurianTown/scripts.pory"
	faceplayer
# 46 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_LITTLE_GIRL, Common_Movement_Music
# 47 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_LittleGirl_Text_0
# 49 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_Rival::
# 54 "data/maps/DurianTown/scripts.pory"
	lock
# 55 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 56 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 58 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 60 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/DurianTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_2
# 66 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_1
# 67 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_1:
# 69 "data/maps/DurianTown/scripts.pory"
	addobject LOCALID_DURIANTOWN_RIVAL
# 70 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_ComeToPlayer
# 71 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 72 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkInPlaceLeft
# 73 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_6
# 78 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_3
# 79 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_5:
# 81 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 82 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_10
# 87 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_5
# 88 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_9:
# 90 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 91 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 92 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_6
# 93 "data/maps/DurianTown/scripts.pory"
	closemessage
# 94 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Music
# 95 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Delay48
# 97 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_14
# 101 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_8
DurianTown_Rival_13:
# 103 "data/maps/DurianTown/scripts.pory"
	closemessage
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_18
# 107 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaFight
DurianTown_Rival_17:
# 109 "data/maps/DurianTown/scripts.pory"
	release
	end

DurianTown_Rival_2:
# 63 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_0
# 64 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_1

DurianTown_Rival_6:
# 75 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_2
# 76 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_5

DurianTown_Rival_10:
# 84 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_4
# 85 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_9

DurianTown_Rival_14:
# 99 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_7
	goto DurianTown_Rival_13

DurianTown_Rival_18:
# 105 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaFight
	goto DurianTown_Rival_17


DurianTown_ShinyaFight::
# 114 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 115 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_ShinyaFight_2
# 118 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_ShinyaFight_3
# 121 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_ShinyaFight_4
	return

DurianTown_ShinyaFight_2:
# 116 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_GRA, DurianTown_ShinyaFight_Text_0
# 117 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_3:
# 119 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_FIR, DurianTown_ShinyaFight_Text_0
# 120 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_4:
# 122 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_WAT, DurianTown_ShinyaFight_Text_0
# 123 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return


DurianTown_FuukaFight::
# 128 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 129 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_FuukaFight_2
# 132 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_FuukaFight_3
# 135 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_FuukaFight_4
	return

DurianTown_FuukaFight_2:
# 130 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_GRA, DurianTown_FuukaFight_Text_0
# 131 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_3:
# 133 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_FIR, DurianTown_FuukaFight_Text_0
# 134 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_4:
# 136 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_WAT, DurianTown_FuukaFight_Text_0
# 137 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return


DurianTown_ShinyaDefeated::
# 142 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 143 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_0
# 145 "data/maps/DurianTown/scripts.pory"
	closemessage
# 146 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 147 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 148 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 150 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 151 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 152 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 153 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 154 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 155 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 156 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_FuukaDefeated::
# 161 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 162 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_FuukaDefeated_Text_0
# 164 "data/maps/DurianTown/scripts.pory"
	closemessage
# 165 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 166 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 167 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 169 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 171 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 172 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 173 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 174 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 175 "data/maps/DurianTown/scripts.pory"
	release
	end


# 179 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_GoToTemple:
# 180 "data/maps/DurianTown/scripts.pory"
	walk_left
# 181 "data/maps/DurianTown/scripts.pory"
	walk_up
# 181 "data/maps/DurianTown/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_ComeToPlayer:
# 185 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 185 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 185 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 185 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 185 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 185 "data/maps/DurianTown/scripts.pory"
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

DurianTown_KurtApprentice_Text_1:
# 37 "data/maps/DurianTown/scripts.pory"
	.string "Please… my mentor, KURT, is even\n"
	.string "thinking about leaving TENKEI with how\p"
	.string "quickly STRAWBERRY TOWN is being\n"
	.string "abandoned since the DARK DECADE's end…$"

DurianTown_LittleGirl_Text_0:
# 48 "data/maps/DurianTown/scripts.pory"
	.string "I'm pretending to be a gate guard like\n"
	.string "my grandma when she was younger!\p"
	.string "In the past, she welcomed  visitors from\n"
	.string "all over the world, especially from\l"
	.string "HOENN, as it's relatively close!\p"
	.string "Though, she keeps talking about how\n"
	.string "HOENN is a part of this 'NIHON' place…$"

DurianTown_Rival_Text_0:
# 63 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Anegimi!$"

DurianTown_Rival_Text_1:
# 66 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: …Oh, anigimi.$"

DurianTown_Rival_Text_2:
# 75 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: I'm guessing you got the STAMP,\n"
	.string "right? I knew you could do it!$"

DurianTown_Rival_Text_3:
# 78 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: You got your STAMP, didn't you?\n"
	.string "That's great.$"

DurianTown_Rival_Text_4:
# 84 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Our first step in claiming\n"
	.string "back our birthright…\p"
	.string "I'll make those UNOVANS pay for their\n"
	.string "actions, I swear to ALMIGHTY TENKEI!\p"
	.string "For our exile, their actions in CITRUS\n"
	.string "ISLAND, and for our parents' honor!$"

DurianTown_Rival_Text_5:
# 87 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: The first step in claiming\n"
	.string "the throne we deserve…\p"
	.string "We need to be strong if we want to free\n"
	.string "NIHON from the ARC.$"

DurianTown_Rival_Text_6:
# 92 "data/maps/DurianTown/scripts.pory"
	.string "Anyway. Since we did not have that\n"
	.string "match back in CITRUS ISLAND, why don't\l"
	.string "we have it right here?$"

DurianTown_Rival_Text_7:
# 99 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Ready or not, here I come!$"

DurianTown_Rival_Text_8:
# 101 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: Throw your POKéMON out!$"

DurianTown_ShinyaFight_Text_0:
# 116 "data/maps/DurianTown/scripts.pory"
	.string "Oh yeah! Good job, anegimi!$"

DurianTown_FuukaFight_Text_0:
# 130 "data/maps/DurianTown/scripts.pory"
	.string "Nice fight.$"

DurianTown_ShinyaDefeated_Text_0:
# 144 "data/maps/DurianTown/scripts.pory"
	.string "SHIN'YA: Good job, good job!\p"
	.string "But hey, even if you have got the STAMP\n"
	.string "first, I'll destroy the PATH GUARDIANS\l"
	.string "harder than you did!\p"
	.string "Let's meet in COCONUT CITY, m'kay?$"

DurianTown_FuukaDefeated_Text_0:
# 163 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA: Nice fight, anigimi. I can only\n"
	.string "hope I'll grow this strong, too.\p"
	.string "Let's see if I can get the STAMP myself.\n"
	.string "Meanwhile, why don't you go to\l"
	.string "COCONUT CITY's TEMPLE first?$"
