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
# 76 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_6
# 82 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 83 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_5
# 84 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_Rival_5:
# 86 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 87 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_Rival_10
# 96 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 97 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_8
# 98 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_ExclamationMark
# 99 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 100 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_9
# 101 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaFight
DurianTown_Rival_9:
# 103 "data/maps/DurianTown/scripts.pory"
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
# 78 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 79 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_4
# 80 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_Rival_5

DurianTown_Rival_10:
# 89 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 90 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_6
# 91 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Music
# 92 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 93 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_7
# 94 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaFight
	goto DurianTown_Rival_9


DurianTown_ShinyaFight::
# 108 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 109 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_ShinyaFight_2
# 112 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_ShinyaFight_3
# 115 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_ShinyaFight_4
	return

DurianTown_ShinyaFight_2:
# 110 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_GRA, DurianTown_ShinyaFight_Text_0
# 111 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_3:
# 113 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_FIR, DurianTown_ShinyaFight_Text_0
# 114 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return

DurianTown_ShinyaFight_4:
# 116 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHINYA_DURIAN_WAT, DurianTown_ShinyaFight_Text_0
# 117 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaDefeated
	return


DurianTown_FuukaFight::
# 122 "data/maps/DurianTown/scripts.pory"
	switch VAR_STARTER_MON
# 123 "data/maps/DurianTown/scripts.pory"
	case 0, DurianTown_FuukaFight_2
# 126 "data/maps/DurianTown/scripts.pory"
	case 1, DurianTown_FuukaFight_3
# 129 "data/maps/DurianTown/scripts.pory"
	case 2, DurianTown_FuukaFight_4
	return

DurianTown_FuukaFight_2:
# 124 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_GRA, DurianTown_FuukaFight_Text_0
# 125 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_3:
# 127 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_FIR, DurianTown_FuukaFight_Text_0
# 128 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return

DurianTown_FuukaFight_4:
# 130 "data/maps/DurianTown/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_FUUKA_DURIAN_WAT, DurianTown_FuukaFight_Text_0
# 131 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaDefeated
	return


DurianTown_ShinyaDefeated::
# 136 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 137 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 138 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 139 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_0
# 140 "data/maps/DurianTown/scripts.pory"
	closemessage
# 141 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 142 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 143 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 145 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 146 "data/maps/DurianTown/scripts.pory"
	waitmovement 48
# 147 "data/maps/DurianTown/scripts.pory"
	opendoor 7, 9
# 148 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_ExclamationMark
# 149 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/DurianTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 151 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkDown
# 152 "data/maps/DurianTown/scripts.pory"
	waitmovement 48
# 153 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 154 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_1
# 155 "data/maps/DurianTown/scripts.pory"
	closemessage
# 156 "data/maps/DurianTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/DurianTown/scripts.pory"
	waitfanfare
# 158 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 159 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 160 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_2
# 161 "data/maps/DurianTown/scripts.pory"
	closemessage
# 162 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 163 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 164 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_ShinyaDefeated_Text_3
# 165 "data/maps/DurianTown/scripts.pory"
	waitmovement 48
# 166 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkUp
# 167 "data/maps/DurianTown/scripts.pory"
	opendoor 7, 9
# 168 "data/maps/DurianTown/scripts.pory"
	waitdooranim
# 169 "data/maps/DurianTown/scripts.pory"
	closedoor 7, 9
# 170 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 172 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 173 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 5
# 174 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 175 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_FuukaDefeated::
# 180 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 181 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 183 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_FuukaDefeated_Text_0
# 184 "data/maps/DurianTown/scripts.pory"
	closemessage
# 185 "data/maps/DurianTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 186 "data/maps/DurianTown/scripts.pory"
	waitfanfare
# 187 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 188 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 189 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_FuukaDefeated_Text_1
# 190 "data/maps/DurianTown/scripts.pory"
	closemessage
# 191 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 192 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 193 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 194 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_GoToTemple
# 195 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/DurianTown/scripts.pory"
	opendoor 7, 9
# 197 "data/maps/DurianTown/scripts.pory"
	waitdooranim
# 198 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkUp
# 199 "data/maps/DurianTown/scripts.pory"
	removeobject LOCALID_DURIANTOWN_RIVAL
# 200 "data/maps/DurianTown/scripts.pory"
	closedoor 7, 9
# 201 "data/maps/DurianTown/scripts.pory"
	fadedefaultbgm
# 202 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_HIDE_DURIAN_TOWN_RIVAL
# 203 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 5
# 204 "data/maps/DurianTown/scripts.pory"
	setvar VAR_ROUTE52_STATE, 1
# 205 "data/maps/DurianTown/scripts.pory"
	release
	end


# 209 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_GoToTemple:
# 210 "data/maps/DurianTown/scripts.pory"
	walk_left
# 211 "data/maps/DurianTown/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/DurianTown/scripts.pory"
DurianTown_Movement_ComeToPlayer:
# 215 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 215 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 215 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 215 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 215 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
# 215 "data/maps/DurianTown/scripts.pory"
	walk_fast_left
	step_end

DurianTown_RivalLoss::
# 219 "data/maps/DurianTown/scripts.pory"
	lock
# 220 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 221 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 223 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/DurianTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_RivalLoss_2
# 230 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 231 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_3
# 232 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_RivalLoss_1:
# 234 "data/maps/DurianTown/scripts.pory"
	addobject LOCALID_DURIANTOWN_RIVAL
# 235 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, DurianTown_Movement_ComeToPlayer
# 236 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_WalkInPlaceLeft
# 238 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/DurianTown/scripts.pory"
	setvar VAR_RIVALS_STATE, 4
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_RivalLoss_6
# 245 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 246 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_5
# 247 "data/maps/DurianTown/scripts.pory"
	closemessage
DurianTown_RivalLoss_5:
# 249 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Pensive
# 250 "data/maps/DurianTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/DurianTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne DurianTown_RivalLoss_10
# 259 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 260 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_8
# 261 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_ExclamationMark
# 262 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_2
# 263 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_9
# 264 "data/maps/DurianTown/scripts.pory"
	call DurianTown_FuukaFight
DurianTown_RivalLoss_9:
# 266 "data/maps/DurianTown/scripts.pory"
	release
	end

DurianTown_RivalLoss_2:
# 226 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 227 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_1
# 228 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_RivalLoss_1

DurianTown_RivalLoss_6:
# 241 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 242 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_4
# 243 "data/maps/DurianTown/scripts.pory"
	closemessage
	goto DurianTown_RivalLoss_5

DurianTown_RivalLoss_10:
# 252 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 253 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_6
# 254 "data/maps/DurianTown/scripts.pory"
	applymovement LOCALID_DURIANTOWN_RIVAL, Common_Movement_Music
# 255 "data/maps/DurianTown/scripts.pory"
	setspeaker DurianTown_Rival_Text_0
# 256 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Rival_Text_7
# 257 "data/maps/DurianTown/scripts.pory"
	call DurianTown_ShinyaFight
	goto DurianTown_RivalLoss_9


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
# 79 "data/maps/DurianTown/scripts.pory"
	.string "I'm guessing 'ya got the STAMP, right?\n"
	.string "I knew you could do it!$"

DurianTown_Rival_Text_5:
# 83 "data/maps/DurianTown/scripts.pory"
	.string "You got your STAMP, didn't you?\n"
	.string "That's great.$"

DurianTown_Rival_Text_6:
# 90 "data/maps/DurianTown/scripts.pory"
	.string "Our first step in claiming\n"
	.string "back our birthright…\p"
	.string "I'll make those UNOVANS pay for their\n"
	.string "actions, I swear to ALMIGHTY TENKEI!\p"
	.string "For our exile, their actions in CITRUS\n"
	.string "ISLAND, and for our parents' honor!$"

DurianTown_Rival_Text_7:
# 93 "data/maps/DurianTown/scripts.pory"
	.string "'Nyway. Since we did not have that\n"
	.string "match back in CITRUS ISLAND, why don't\l"
	.string "we have it right here?\p"
	.string "Ready or not, here I come!$"

DurianTown_Rival_Text_8:
# 97 "data/maps/DurianTown/scripts.pory"
	.string "The first step in claiming back\n"
	.string "the throne we deserve…\p"
	.string "We need to be strong if we want to free\n"
	.string "NIHON from the ARC.$"

DurianTown_Rival_Text_9:
# 100 "data/maps/DurianTown/scripts.pory"
	.string "That reminds me, as we did not battle\n"
	.string "back in CITRUS ISLAND, why don't we\l"
	.string "instead have a match right here?$"

DurianTown_ShinyaFight_Text_0:
# 110 "data/maps/DurianTown/scripts.pory"
	.string "Oh yeah! Good job, anegimi!$"

DurianTown_FuukaFight_Text_0:
# 124 "data/maps/DurianTown/scripts.pory"
	.string "Nice fight.$"

DurianTown_ShinyaDefeated_Text_0:
# 139 "data/maps/DurianTown/scripts.pory"
	.string "Good job, good job!\p"
	.string "But hey, even if you have got the STAMP\n"
	.string "first, I'll destroy the PATH GUARDIANS\l"
	.string "harder than you did!\p"
	.string "Let's meet in KIWANO CITY, m'kay?$"

DurianTown_ShinyaDefeated_Text_1:
# 154 "data/maps/DurianTown/scripts.pory"
	.string "Anegimi, I had forgot 'bout it!\n"
	.string "I got a gift for 'ya, hey!\l"
	.string "C'mon, put 'em on!$"

DurianTown_ShinyaDefeated_Text_2:
# 160 "data/maps/DurianTown/scripts.pory"
	.string "…RUNNING SHOES! 'Cause ya'll need 'em!\n"
	.string "'Ya didn't think of travelling all\l"
	.string "over TENKEI on… those shoes, yeah…?$"

DurianTown_ShinyaDefeated_Text_3:
# 164 "data/maps/DurianTown/scripts.pory"
	.string "…They're also to make up for not\n"
	.string "managin' to get 'ya a new PœDA.\p"
	.string "How did they work again… <<Press B to\n"
	.string "run!>>, but what is this B thing?!…\p"
	.string "…'Nyway! The TEMPLE! See ya!$"

DurianTown_FuukaDefeated_Text_0:
# 183 "data/maps/DurianTown/scripts.pory"
	.string "Nice fight, anigimi. I can only\n"
	.string "strive to grow this strong, too.\p"
	.string "Let us see if I can get the STAMP myself.\n"
	.string "By the way, anigimi, I got something\l"
	.string "I'm sure will be useful.$"

DurianTown_FuukaDefeated_Text_1:
# 189 "data/maps/DurianTown/scripts.pory"
	.string "It's a pair of RUNNING SHOES. Our\n"
	.string "journey will be long, so we should be\l"
	.string "prepared in every way.\p"
	.string "I tried getting you a new PœDA, too,\n"
	.string "but they did not have any.\p"
	.string "Maybe you could try searching for\n"
	.string "one in KIWANO CITY?\p"
	.string "The next ELEMENTAL TEMPLE is\n"
	.string "there, too. Good luck, anigimi.$"
