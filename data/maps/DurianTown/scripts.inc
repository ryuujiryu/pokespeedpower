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
# 67 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 68 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_3
# 69 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_1:
# 71 "data/maps/DurianTown/scripts.pory"
	addobject LOCALID_DURIANTOWN_RIVAL
# 72 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_ComeToPlayer
# 73 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkInPlaceLeft
# 75 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_6
# 81 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 82 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_5
# 83 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_5:
# 85 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 86 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_10
# 95 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 96 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_8
# 97 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_ExclamationMark
# 98 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 99 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_9
# 100 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaFight
DurianTown_Rival_9:
# 102 "data/maps/DurianTown/scripts.pory"
	release
	end

DurianTown_Rival_2:
# 63 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 64 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_1
# 65 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_1

DurianTown_Rival_6:
# 77 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 78 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_4
# 79 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_5

DurianTown_Rival_10:
# 88 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 89 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_6
# 90 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Music
# 91 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 92 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_7
# 93 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaFight
	goto DurianTown_Rival_9


DurianTown_ShinyaFight::
# 107 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 108 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_ShinyaFight_2
# 111 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_ShinyaFight_3
# 114 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_ShinyaFight_4
	return

DurianTown_ShinyaFight_2:
# 109 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_GRA, DurianTown_ShinyaFight_Text_0
# 110 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_3:
# 112 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_FIR, DurianTown_ShinyaFight_Text_0
# 113 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_4:
# 115 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_WAT, DurianTown_ShinyaFight_Text_0
# 116 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return


DurianTown_FuukaFight::
# 121 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 122 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_FuukaFight_2
# 125 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_FuukaFight_3
# 128 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_FuukaFight_4
	return

DurianTown_FuukaFight_2:
# 123 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_GRA, DurianTown_FuukaFight_Text_0
# 124 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_3:
# 126 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_FIR, DurianTown_FuukaFight_Text_0
# 127 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_4:
# 129 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_WAT, DurianTown_FuukaFight_Text_0
# 130 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return


DurianTown_ShinyaDefeated::
# 135 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 136 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 138 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_0
# 139 "data/maps/DurianTown/scripts.pory"
	closemessage
# 140 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 141 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 142 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 144 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 145 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 146 "data/maps/DurianTown/scripts.pory"
	opendoor 7, 9
# 147 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_ExclamationMark
# 148 "data/maps/DurianTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 149 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_Run
# 150 "data/maps/DurianTown/scripts.pory"
	waitmovement 48
# 151 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 152 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_1
# 153 "data/maps/DurianTown/scripts.pory"
	closemessage
# 154 "data/maps/DurianTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 155 "data/maps/DurianTown/scripts.pory"
	waitfanfare
# 156 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 157 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 158 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_2
# 159 "data/maps/DurianTown/scripts.pory"
	closemessage
# 160 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 161 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 162 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_3
# 163 "data/maps/DurianTown/scripts.pory"
	waitmovement 48
# 164 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 165 "data/maps/DurianTown/scripts.pory"
	opendoor 7, 9
# 166 "data/maps/DurianTown/scripts.pory"
	waitdooranim
# 167 "data/maps/DurianTown/scripts.pory"
	closedoor 7, 9
# 168 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 169 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 170 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 171 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 172 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 173 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_FuukaDefeated::
# 178 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 179 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 181 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_FuukaDefeated_Text_0
# 182 "data/maps/DurianTown/scripts.pory"
	closemessage
# 183 "data/maps/DurianTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data/maps/DurianTown/scripts.pory"
	waitfanfare
# 185 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 186 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 187 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_FuukaDefeated_Text_1
# 188 "data/maps/DurianTown/scripts.pory"
	closemessage
# 189 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 190 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 191 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 192 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 193 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 194 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 195 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 196 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 197 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
# 198 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 199 "data/maps/DurianTown/scripts.pory"
	release
	end


# 203 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_GoToTemple:
# 204 "data/maps/DurianTown/scripts.pory"
	walk_left
# 205 "data/maps/DurianTown/scripts.pory"
	walk_up
# 205 "data/maps/DurianTown/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_ComeToPlayer:
# 209 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 209 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 209 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 209 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 209 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 209 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
	step_end

# 212 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_Run:
# 213 "data/maps/DurianTown/scripts.pory"
	walk_fast_down
# 213 "data/maps/DurianTown/scripts.pory"
	walk_fast_down
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
	.string "SHINYA$"

DurianTown_Rival_Text_1:
# 64 "data/maps/DurianTown/scripts.pory"
	.string "Anegimi!$"

DurianTown_Rival_Text_2:
# 67 "data/maps/DurianTown/scripts.pory"
	.string "FUUKA$"

DurianTown_Rival_Text_3:
# 68 "data/maps/DurianTown/scripts.pory"
	.string "…Oh, anigimi.$"

DurianTown_Rival_Text_4:
# 78 "data/maps/DurianTown/scripts.pory"
	.string "I'm guessing 'ya got the STAMP, right?\n"
	.string "I knew you could do it!$"

DurianTown_Rival_Text_5:
# 82 "data/maps/DurianTown/scripts.pory"
	.string "You got your STAMP, didn't you?\n"
	.string "That's great.$"

DurianTown_Rival_Text_6:
# 89 "data/maps/DurianTown/scripts.pory"
	.string "Our first step in claiming\n"
	.string "back our birthright…\p"
	.string "I'll make those UNOVANS pay for their\n"
	.string "actions, I swear to ALMIGHTY TENKEI!\p"
	.string "For our exile, their actions in CITRUS\n"
	.string "ISLAND, and for our parents' honor!$"

DurianTown_Rival_Text_7:
# 92 "data/maps/DurianTown/scripts.pory"
	.string "'Nyway. Since we did not have that\n"
	.string "match back in CITRUS ISLAND, why don't\l"
	.string "we have it right here?\p"
	.string "Ready or not, here I come!$"

DurianTown_Rival_Text_8:
# 96 "data/maps/DurianTown/scripts.pory"
	.string "The first step in claiming back\n"
	.string "the throne we deserve…\p"
	.string "We need to be strong if we want to free\n"
	.string "NIHON from the ARC.$"

DurianTown_Rival_Text_9:
# 99 "data/maps/DurianTown/scripts.pory"
	.string "That reminds me, as we did not battle\n"
	.string "back in CITRUS ISLAND, why don't we\l"
	.string "instead have a match right here?$"

DurianTown_ShinyaFight_Text_0:
# 109 "data/maps/DurianTown/scripts.pory"
	.string "Oh yeah! Good job, anegimi!$"

DurianTown_FuukaFight_Text_0:
# 123 "data/maps/DurianTown/scripts.pory"
	.string "Nice fight.$"

DurianTown_ShinyaDefeated_Text_0:
# 138 "data/maps/DurianTown/scripts.pory"
	.string "Good job, good job!\p"
	.string "But hey, even if you have got the STAMP\n"
	.string "first, I'll destroy the PATH GUARDIANS\l"
	.string "harder than you did!\p"
	.string "Let's meet in KIWANO CITY, m'kay?$"

DurianTown_ShinyaDefeated_Text_1:
# 152 "data/maps/DurianTown/scripts.pory"
	.string "Anegimi, I had forgot 'bout it!\n"
	.string "I got a gift for 'ya, hey!\l"
	.string "C'mon, put 'em on!$"

DurianTown_ShinyaDefeated_Text_2:
# 158 "data/maps/DurianTown/scripts.pory"
	.string "…RUNNING SHOES! 'Cause ya'll need 'em!\n"
	.string "'Ya didn't think of travelling all\l"
	.string "over TENKEI on… those shoes, yeah…?$"

DurianTown_ShinyaDefeated_Text_3:
# 162 "data/maps/DurianTown/scripts.pory"
	.string "…They're also to make up for not\n"
	.string "managin' to get 'ya a new PœDA.\p"
	.string "'Nyway! The TEMPLE! See ya!$"

DurianTown_FuukaDefeated_Text_0:
# 181 "data/maps/DurianTown/scripts.pory"
	.string "Nice fight, anigimi. I can only\n"
	.string "strive to grow this strong, too.\p"
	.string "Let us see if I can get the STAMP myself.\n"
	.string "By the way, anigimi, I got something\l"
	.string "I'm sure will be useful.$"

DurianTown_FuukaDefeated_Text_1:
# 187 "data/maps/DurianTown/scripts.pory"
	.string "It's a pair of RUNNING SHOES. Our\n"
	.string "journey will be long, so we should be\l"
	.string "prepared in every way.\p"
	.string "I tried getting you a new PœDA, too,\n"
	.string "but they did not have any.\p"
	.string "Maybe you could try searching for\n"
	.string "one in KIWANO CITY?\p"
	.string "The next ELEMENTAL TEMPLE is\n"
	.string "there, too. Good luck, anigimi.$"
