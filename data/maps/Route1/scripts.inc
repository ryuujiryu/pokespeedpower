Route1_MapScripts::
# 2 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route1/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end

Route1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Route1/scripts.pory"
	map_script_2 VAR_RIVALS_STATE, 1, Route51_Rival
	.2byte 0


Route1_Isamu::
# 12 "data/maps/Route1/scripts.pory"
	checktrainerflag TRAINER_SP_ISAMU
	goto_if 1, Route1_Isamu_1
# 32 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Music
# 33 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Delay48
# 35 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_2
# 37 "data/maps/Route1/scripts.pory"
	closemessage
# 38 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 39 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 41 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 43 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_3
# 45 "data/maps/Route1/scripts.pory"
	closemessage
# 46 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 47 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_ExclamationMark
# 48 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_WalkInPlaceLeft
# 50 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Delay48
# 52 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_4
# 54 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_ISAMU, Route1_Isamu_Text_5
# 55 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Isamu_1:
# 13 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 14 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 16 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 18 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_0
# 20 "data/maps/Route1/scripts.pory"
	closemessage
# 21 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Angry
# 22 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_WalkInPlaceLeft
# 24 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Delay48
# 26 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_1
# 28 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Sign::
# 61 "data/maps/Route1/scripts.pory"
	msgbox Route51_Sign_Text_0
# 62 "data/maps/Route1/scripts.pory"
	release
	end


Route51_AromaGirl::
# 67 "data/maps/Route1/scripts.pory"
	lock
# 68 "data/maps/Route1/scripts.pory"
	faceplayer
# 69 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route51_AromaGirl_2
# 75 "data/maps/Route1/scripts.pory"
	msgbox Route51_AromaGirl_Text_1
Route51_AromaGirl_1:
# 77 "data/maps/Route1/scripts.pory"
	release
	end

Route51_AromaGirl_2:
# 70 "data/maps/Route1/scripts.pory"
	msgbox Route51_AromaGirl_Text_0
# 71 "data/maps/Route1/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 72 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 73 "data/maps/Route1/scripts.pory"
	waitfanfare
	goto Route51_AromaGirl_1


Route51_Kazuki::
# 82 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_SP_KAZUKI, Route51_Kazuki_Text_0, Route51_Kazuki_Text_1
# 83 "data/maps/Route1/scripts.pory"
	msgbox Route51_Kazuki_Text_2
# 84 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Kazuha::
# 89 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_SP_KAZUHA, Route51_Kazuha_Text_0, Route51_Kazuha_Text_1
# 90 "data/maps/Route1/scripts.pory"
	msgbox Route51_Kazuha_Text_2
# 91 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Chika::
# 96 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_SP_CHIKA, Route51_Chika_Text_0, Route51_Chika_Text_1
# 97 "data/maps/Route1/scripts.pory"
	msgbox Route51_Chika_Text_2
# 98 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Rival::
# 103 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 104 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 106 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 108 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 110 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_0
# 112 "data/maps/Route1/scripts.pory"
	closemessage
# 113 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 114 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 116 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 118 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route51_Movement_WalkToRival
# 120 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route1/scripts.pory"
	addobject LOCALID_ROUTE51_RIVAL
# 122 "data/maps/Route1/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_2
# 127 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_2
# 128 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_1:
# 130 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 131 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 133 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 135 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 137 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_3
# 139 "data/maps/Route1/scripts.pory"
	closemessage
# 140 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 141 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkInPlaceLeft
# 143 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 145 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_6
# 150 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_5
# 151 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_5:
# 153 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 154 "data/maps/Route1/scripts.pory"
	pokenavcall Route51_Rival_Text_6
# 155 "data/maps/Route1/scripts.pory"
	waitmessage
# 156 "data/maps/Route1/scripts.pory"
	fadenewbgm MUS_AW2_405
# 157 "data/maps/Route1/scripts.pory"
	playse SE_BANG
# 158 "data/maps/Route1/scripts.pory"
	waitse
# 159 "data/maps/Route1/scripts.pory"
	playse SE_M_EXPLOSION
# 160 "data/maps/Route1/scripts.pory"
	waitse
# 161 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 162 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 164 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_7
# 166 "data/maps/Route1/scripts.pory"
	closemessage
# 167 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 168 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkInPlaceLeft
# 170 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 172 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route1/scripts.pory"
	pokenavcall Route51_Rival_Text_8
# 174 "data/maps/Route1/scripts.pory"
	waitmessage
# 175 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 176 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_10
# 181 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_10
# 182 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_9:
# 184 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 185 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 187 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_11
# 189 "data/maps/Route1/scripts.pory"
	closemessage
# 190 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Angry
# 191 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkInPlaceLeft
# 193 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 195 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route1/scripts.pory"
	closemessage
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_14
# 201 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_13
# 202 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_13:
# 204 "data/maps/Route1/scripts.pory"
	pokenavcall Route51_Rival_Text_14
# 205 "data/maps/Route1/scripts.pory"
	waitmessage
# 206 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Pensive
# 207 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 209 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_18
# 216 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_16
# 217 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_17:
# 219 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkDownSlow
# 220 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_22
# 225 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_18
# 226 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_21:
# 228 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkDownSlow
# 229 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 231 "data/maps/Route1/scripts.pory"
	setvar VAR_RIVALS_STATE, 2
# 232 "data/maps/Route1/scripts.pory"
	release
	end

Route51_Rival_2:
# 124 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_1
# 125 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_1

Route51_Rival_6:
# 147 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_4
# 148 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_5

Route51_Rival_10:
# 178 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_9
# 179 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_9

Route51_Rival_14:
# 198 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_12
# 199 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_13

Route51_Rival_18:
# 211 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkInPlaceLeft
# 212 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_15
# 214 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_17

Route51_Rival_22:
# 222 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_17
# 223 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_21


Route51_Rival2::
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival2_2
# 246 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Pensive
# 247 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_2
# 249 "data/maps/Route1/scripts.pory"
	closemessage
# 250 "data/maps/Route1/scripts.pory"
	faceplayer
# 251 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_3
# 252 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival2_1:
# 254 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 255 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 257 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 259 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 261 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival2_6
# 266 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_5
# 267 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival2_5:
# 269 "data/maps/Route1/scripts.pory"
	faceplayer
# 270 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 271 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_6
# 272 "data/maps/Route1/scripts.pory"
	closemessage
# 273 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_FaceDown
# 274 "data/maps/Route1/scripts.pory"
	setflag FLAG_RIVAL_POKEBALLS
# 275 "data/maps/Route1/scripts.pory"
	release
	end

Route51_Rival2_2:
# 238 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Angry
# 239 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_0
# 241 "data/maps/Route1/scripts.pory"
	closemessage
# 242 "data/maps/Route1/scripts.pory"
	faceplayer
# 243 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_1
# 244 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival2_1

Route51_Rival2_6:
# 263 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_4
# 264 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival2_5


Route51_Rival3::
# 280 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_RIVAL_POKEBALLS, Route51_Rival3_2
# 282 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_FaceDown
# 283 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival3_Text_0
Route51_Rival3_1:
# 285 "data/maps/Route1/scripts.pory"
	closemessage
# 286 "data/maps/Route1/scripts.pory"
	release
	end

Route51_Rival3_2:
# 280 "data/maps/Route1/scripts.pory"
	call Route51_Rival2
	goto Route51_Rival3_1


# 290 "data/maps/Route1/scripts.pory"
Route51_Movement_WalkToRival:
# 291 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 291 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 291 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 291 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 292 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 293 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 293 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 293 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 294 "data/maps/Route1/scripts.pory"
	face_left
# 295 "data/maps/Route1/scripts.pory"
	step_end

Route1_Isamu_Text_0:
# 19 "data/maps/Route1/scripts.pory"
	.string "{PLAYER}: If the WINGULLs could talk with\n"
	.string "me, I'd like to exchange some news! œ$"

Route1_Isamu_Text_1:
# 27 "data/maps/Route1/scripts.pory"
	.string "I'm not in the mood for singing! Scram!$"

Route1_Isamu_Text_2:
# 36 "data/maps/Route1/scripts.pory"
	.string "Put your back into it!\n"
	.string "Heave, ho! Heave, ho! œ\p"
	.string ". . . . . . .\n"
	.string "Oh! A bite!$"

Route1_Isamu_Text_3:
# 44 "data/maps/Route1/scripts.pory"
	.string "{PLAYER}: Soran, soran, soran! Woo!$"

Route1_Isamu_Text_4:
# 53 "data/maps/Route1/scripts.pory"
	.string "Argh! You made me lose the fish!$"

Route1_Isamu_Text_5:
# 54 "data/maps/Route1/scripts.pory"
	.string "And i even lost the battle!$"

Route51_Sign_Text_0:
# 61 "data/maps/Route1/scripts.pory"
	.string "ROUTE 51\n"
	.string "{UP_ARROW} STRAWBERRY TOWN$"

Route51_AromaGirl_Text_0:
# 70 "data/maps/Route1/scripts.pory"
	.string "La-la-laœ… …\p"
	.string "Hmm…? Oh, hello!\n"
	.string "Are you into gardening, too?\p"
	.string "But I see that you don't have a\n"
	.string "WAILMER PAIL! Here, I got a spare!$"

Route51_AromaGirl_Text_1:
# 75 "data/maps/Route1/scripts.pory"
	.string "While BERRY plants are growing,\n"
	.string "water them with the WAILMER PAIL.\p"
	.string "Oh, another thing.\p"
	.string "If you don't pick BERRIES for a while,\n"
	.string "they'll drop off onto the ground.\l"
	.string "But they'll sprout again.\p"
	.string "Isn't that awesome?\n"
	.string "It's like they have the will to live.$"

Route51_Kazuki_Text_0:
# 82 "data/maps/Route1/scripts.pory"
	.string "Me and my girl are having a picnic.\n"
	.string "Don't dare interrupting us!$"

Route51_Kazuki_Text_1:
# 82 "data/maps/Route1/scripts.pory"
	.string "You made a fool of me in front of her…$"

Route51_Kazuki_Text_2:
# 83 "data/maps/Route1/scripts.pory"
	.string "Shoo, shoo! Leave us alone!$"

Route51_Kazuha_Text_0:
# 89 "data/maps/Route1/scripts.pory"
	.string "ALMIGHTY TENKEI, grant me strength!$"

Route51_Kazuha_Text_1:
# 89 "data/maps/Route1/scripts.pory"
	.string "I didn't gain enough strength…$"

Route51_Kazuha_Text_2:
# 90 "data/maps/Route1/scripts.pory"
	.string "Did I not pray enough…?$"

Route51_Chika_Text_0:
# 96 "data/maps/Route1/scripts.pory"
	.string "This place, is, like, so pink! It is\n"
	.string "perfect for, like, battling!$"

Route51_Chika_Text_1:
# 96 "data/maps/Route1/scripts.pory"
	.string "I wasn't ready for a defeat…$"

Route51_Chika_Text_2:
# 97 "data/maps/Route1/scripts.pory"
	.string "At least I lost in a pretty place…$"

Route51_Rival_Text_0:
# 111 "data/maps/Route1/scripts.pory"
	.string "Where the heck is…$"

Route51_Rival_Text_1:
# 124 "data/maps/Route1/scripts.pory"
	.string "SHIN'YA: So… … … wow. T'was a great way\n"
	.string "to start our journey, huh…? … … …\p"
	.string "But I trust that the tactician and\n"
	.string "MITSURU have kicked them out.\p"
	.string "Can you call 'em, actually?\n"
	.string "It's been hours, so all that mess\l"
	.string "should be over by now.$"

Route51_Rival_Text_2:
# 127 "data/maps/Route1/scripts.pory"
	.string "FUUKA: Nothing like nearly gettin’\n"
	.string "imprisoned to start a journey, huh.\p"
	.string "FUUKA: …Still. I trust that they\n"
	.string "took care of those UNOVANS by now.\p"
	.string "Say, why don't you call them?\n"
	.string "It’s been hours since we arrived.$"

Route51_Rival_Text_3:
# 138 "data/maps/Route1/scripts.pory"
	.string "That SOLDIER took my PŒDA from me\n"
	.string "during our fight… … …$"

Route51_Rival_Text_4:
# 147 "data/maps/Route1/scripts.pory"
	.string "SHIN'YA: …Uhm. Well, I'll call 'em on mine.\n"
	.string "And we shall buy a new one soon!\p"
	.string "Why don't you heal your POKéMON\n"
	.string "while I call 'em?$"

Route51_Rival_Text_5:
# 150 "data/maps/Route1/scripts.pory"
	.string "FUUKA: Well, just your luck.\n"
	.string "Alright, I’ll call ‘em on mine.\p"
	.string "We’ll buy you a new one when we get\n"
	.string "to a shop or something.\p"
	.string "Why don't you heal your POKéMON\n"
	.string "while I call them?$"

Route51_Rival_Text_6:
# 154 "data/maps/Route1/scripts.pory"
	.string "Bzzt… … … … … bzz… … … … … …$"

Route51_Rival_Text_7:
# 165 "data/maps/Route1/scripts.pory"
	.string "What the heck…$"

Route51_Rival_Text_8:
# 173 "data/maps/Route1/scripts.pory"
	.string "MITSURU: Bzz… … … 'cuz… bzz… … …\n"
	.string "ARC… … set … island ablaze…$"

Route51_Rival_Text_9:
# 178 "data/maps/Route1/scripts.pory"
	.string "SHIN'YA: What what what?! Anegimi!\n"
	.string "We have to go back and help them!\p"
	.string "FLYGON, SKARMORY, take us back!$"

Route51_Rival_Text_10:
# 181 "data/maps/Route1/scripts.pory"
	.string "FUUKA: No, no, no! Why would they do this?\n"
	.string "The civilians have no fault!\p"
	.string "We have to go back to help!$"

Route51_Rival_Text_11:
# 188 "data/maps/Route1/scripts.pory"
	.string "We cannot waste the chance they have\n"
	.string "given us to take back the throne!$"

Route51_Rival_Text_12:
# 198 "data/maps/Route1/scripts.pory"
	.string "SHIN'YA: Anegimi! FUUKA! Who cares about\n"
	.string "the throne now! We have to… we have…$"

Route51_Rival_Text_13:
# 201 "data/maps/Route1/scripts.pory"
	.string "FUUKA: What kinds of rulers would we be\n"
	.string "if we did not help our loyal subjects?!\p"
	.string "SKARMORY, take me back!$"

Route51_Rival_Text_14:
# 204 "data/maps/Route1/scripts.pory"
	.string "MITSURU: It's fine… … … we have… … …\n"
	.string "many FLYING… … …bzzt … and… …\l"
	.string "… WATER-types… … …to flee with…\p"
	.string "go… … …and free… … …NIHON…\p"
	.string "… … … … … … …$"

Route51_Rival_Text_15:
# 213 "data/maps/Route1/scripts.pory"
	.string "SHIN'YA: Cousin… was that supposed to\n"
	.string "calm me down…?$"

Route51_Rival_Text_16:
# 216 "data/maps/Route1/scripts.pory"
	.string "FUUKA: MITSURU… … … … … … … … Okay.$"

Route51_Rival_Text_17:
# 222 "data/maps/Route1/scripts.pory"
	.string "Or just make me worry more…$"

Route51_Rival_Text_18:
# 225 "data/maps/Route1/scripts.pory"
	.string "No matter their fate… … we have\n"
	.string "a throne to claim back.$"

Route51_Rival2_Text_0:
# 240 "data/maps/Route1/scripts.pory"
	.string "SHIN'YA: CITRUS ISLAND…\n"
	.string "We finally left it, but at what cost?$"

Route51_Rival2_Text_1:
# 243 "data/maps/Route1/scripts.pory"
	.string "Anegimi. Go to the ELEMENTAL TEMPLE.\n"
	.string "I'll fight the local PATH GUARDIANS\l"
	.string "later. I need to calm myself first…$"

Route51_Rival2_Text_2:
# 248 "data/maps/Route1/scripts.pory"
	.string "FUUKA: A ruler should be strong.\n"
	.string "For the sake of her subjects…$"

Route51_Rival2_Text_3:
# 251 "data/maps/Route1/scripts.pory"
	.string "Anigimi? Why are you still here? Go to\n"
	.string "the ELEMENTAL TEMPLE.\p"
	.string "I need to stay alone for a bit.\n"
	.string "I'll fight the PATH GUARDIANS later.$"

Route51_Rival2_Text_4:
# 263 "data/maps/Route1/scripts.pory"
	.string "SHIN'YA: What? I forgot something?\n"
	.string "Oh, you are right.$"

Route51_Rival2_Text_5:
# 266 "data/maps/Route1/scripts.pory"
	.string "FUUKA: Oh, yeah. The PROF. was\n"
	.string "supposed to give us those.$"

Route51_Rival2_Text_6:
# 271 "data/maps/Route1/scripts.pory"
	.string "I forgot, sorry… I'm not in the mood.$"

Route51_Rival3_Text_0:
# 283 "data/maps/Route1/scripts.pory"
	.string "… … … … … … …$"
