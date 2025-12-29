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
# 34 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Music
# 35 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Delay48
# 37 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_2
# 39 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_4
# 40 "data/maps/Route1/scripts.pory"
	closemessage
# 41 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Music
# 42 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 44 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 46 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_0
# 48 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_5
# 49 "data/maps/Route1/scripts.pory"
	closemessage
# 50 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_HIKER, FALSE
# 51 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_ExclamationMark
# 52 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_WalkInPlaceLeft
# 54 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Delay48
# 56 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_2
# 58 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_6
# 59 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_ISAMU, Route1_Isamu_Text_7
# 60 "data/maps/Route1/scripts.pory"
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
	setspeaker Route1_Isamu_Text_0
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_1
# 21 "data/maps/Route1/scripts.pory"
	closemessage
# 22 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Angry
# 23 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_WalkInPlaceLeft
# 25 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_ISAMU, Common_Movement_Delay48
# 27 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_2
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_Isamu_Text_3
# 30 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Sign::
# 66 "data/maps/Route1/scripts.pory"
	msgbox Route51_Sign_Text_0
# 67 "data/maps/Route1/scripts.pory"
	release
	end


Route51_AromaGirl::
# 72 "data/maps/Route1/scripts.pory"
	lock
# 73 "data/maps/Route1/scripts.pory"
	faceplayer
# 74 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route51_AromaGirl_2
# 80 "data/maps/Route1/scripts.pory"
	msgbox Route51_AromaGirl_Text_1
Route51_AromaGirl_1:
# 82 "data/maps/Route1/scripts.pory"
	release
	end

Route51_AromaGirl_2:
# 75 "data/maps/Route1/scripts.pory"
	msgbox Route51_AromaGirl_Text_0
# 76 "data/maps/Route1/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 77 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/Route1/scripts.pory"
	waitfanfare
	goto Route51_AromaGirl_1


Route51_Kazuki::
# 87 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_SP_KAZUKI, Route51_Kazuki_Text_0, Route51_Kazuki_Text_1
# 88 "data/maps/Route1/scripts.pory"
	msgbox Route51_Kazuki_Text_2
# 89 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Kazuha::
# 94 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_SP_KAZUHA, Route51_Kazuha_Text_0, Route51_Kazuha_Text_1
# 95 "data/maps/Route1/scripts.pory"
	msgbox Route51_Kazuha_Text_2
# 96 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Chika::
# 101 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_SP_CHIKA, Route51_Chika_Text_0, Route51_Chika_Text_1
# 102 "data/maps/Route1/scripts.pory"
	msgbox Route51_Chika_Text_2
# 103 "data/maps/Route1/scripts.pory"
	release
	end


Route51_Rival::
# 108 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 109 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 111 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 113 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 115 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_0
# 117 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_0
# 118 "data/maps/Route1/scripts.pory"
	closemessage
# 119 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 120 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 122 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 124 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route51_Movement_WalkToRival
# 126 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route1/scripts.pory"
	addobject LOCALID_ROUTE51_RIVAL
# 128 "data/maps/Route1/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_2
# 134 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 135 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_4
# 136 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_1:
# 138 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 139 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 141 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 143 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 145 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_0
# 147 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_5
# 148 "data/maps/Route1/scripts.pory"
	closemessage
# 149 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 150 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkInPlaceLeft
# 152 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 154 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_6
# 160 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 161 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_7
# 162 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_5:
# 164 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 165 "data/maps/Route1/scripts.pory"
	pokenavcall Route51_Rival_Text_8
# 166 "data/maps/Route1/scripts.pory"
	waitmessage
# 167 "data/maps/Route1/scripts.pory"
	fadenewbgm MUS_AW2_405
# 168 "data/maps/Route1/scripts.pory"
	playse SE_BANG
# 169 "data/maps/Route1/scripts.pory"
	waitse
# 170 "data/maps/Route1/scripts.pory"
	playse SE_M_EXPLOSION
# 171 "data/maps/Route1/scripts.pory"
	waitse
# 172 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceRight
# 173 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 175 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_0
# 177 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_9
# 178 "data/maps/Route1/scripts.pory"
	closemessage
# 179 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 180 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkInPlaceLeft
# 182 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 184 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_10
# 186 "data/maps/Route1/scripts.pory"
	pokenavcall Route51_Rival_Text_11
# 187 "data/maps/Route1/scripts.pory"
	waitmessage
# 188 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 189 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_10
# 195 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 196 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_13
# 197 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_9:
# 199 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 200 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 202 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route1/scripts.pory"
	setspeaker Route1_Isamu_Text_0
# 204 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_14
# 205 "data/maps/Route1/scripts.pory"
	closemessage
# 206 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Angry
# 207 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 208 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkInPlaceLeft
# 209 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 211 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route1/scripts.pory"
	closemessage
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_14
# 218 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 219 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_16
# 220 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_13:
# 222 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_10
# 223 "data/maps/Route1/scripts.pory"
	pokenavcall Route51_Rival_Text_17
# 224 "data/maps/Route1/scripts.pory"
	waitmessage
# 225 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Pensive
# 226 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 228 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_18
# 234 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 235 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_19
# 236 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_17:
# 238 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkDownSlow
# 239 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival_22
# 245 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 246 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_21
# 247 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival_21:
# 249 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_WalkDownSlow
# 250 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 252 "data/maps/Route1/scripts.pory"
	setvar VAR_RIVALS_STATE, 2
# 253 "data/maps/Route1/scripts.pory"
	release
	end

Route51_Rival_2:
# 130 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 131 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_2
# 132 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_1

Route51_Rival_6:
# 156 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 157 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_6
# 158 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_5

Route51_Rival_10:
# 191 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 192 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_12
# 193 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_9

Route51_Rival_14:
# 214 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 215 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_15
# 216 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_13

Route51_Rival_18:
# 230 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 231 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_18
# 232 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_17

Route51_Rival_22:
# 241 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 242 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival_Text_20
# 243 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival_21


Route51_Rival2::
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival2_2
# 269 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Pensive
# 270 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 272 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_2
# 273 "data/maps/Route1/scripts.pory"
	closemessage
# 274 "data/maps/Route1/scripts.pory"
	faceplayer
# 275 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 276 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_3
# 277 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival2_1:
# 279 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 280 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 281 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 282 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 283 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_ExclamationMark
# 284 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Delay48
# 286 "data/maps/Route1/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival2_6
# 292 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 293 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_5
# 294 "data/maps/Route1/scripts.pory"
	closemessage
Route51_Rival2_5:
# 296 "data/maps/Route1/scripts.pory"
	faceplayer
# 297 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 298 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_FaceDown
# 299 "data/maps/Route1/scripts.pory"
	setflag FLAG_RIVAL_POKEBALLS
# 300 "data/maps/Route1/scripts.pory"
	release
	end

Route51_Rival2_2:
# 259 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_Angry
# 260 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 262 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_0
# 263 "data/maps/Route1/scripts.pory"
	closemessage
# 264 "data/maps/Route1/scripts.pory"
	faceplayer
# 265 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 266 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_1
# 267 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival2_1

Route51_Rival2_6:
# 288 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 289 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival2_Text_4
# 290 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route51_Rival2_5


Route51_Rival3::
# 305 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_RIVAL_POKEBALLS, Route51_Rival3_1
# 307 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE51_RIVAL, Common_Movement_FaceDown
	checkplayergender
# 0 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne Route51_Rival3_5
# 312 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_3
# 313 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival3_Text_0
Route51_Rival3_4:
# 315 "data/maps/Route1/scripts.pory"
	closemessage
# 316 "data/maps/Route1/scripts.pory"
	release
	end

Route51_Rival3_1:
# 305 "data/maps/Route1/scripts.pory"
	call Route51_Rival2
	return

Route51_Rival3_5:
# 309 "data/maps/Route1/scripts.pory"
	setspeaker Route51_Rival_Text_1
# 310 "data/maps/Route1/scripts.pory"
	msgbox Route51_Rival3_Text_0
	goto Route51_Rival3_4


# 321 "data/maps/Route1/scripts.pory"
Route51_Movement_WalkToRival:
# 322 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 322 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 322 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 322 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 323 "data/maps/Route1/scripts.pory"
	walk_fast_up
# 324 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 324 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 324 "data/maps/Route1/scripts.pory"
	walk_fast_right
# 325 "data/maps/Route1/scripts.pory"
	face_left
# 326 "data/maps/Route1/scripts.pory"
	step_end

Route1_Isamu_Text_0:
# 19 "data/maps/Route1/scripts.pory"
	.string "{PLAYER}$"

Route1_Isamu_Text_1:
# 20 "data/maps/Route1/scripts.pory"
	.string "If the WINGULLs could talk with\n"
	.string "me, I'd like to exchange some news! œ$"

Route1_Isamu_Text_2:
# 28 "data/maps/Route1/scripts.pory"
	.string "ISAMU$"

Route1_Isamu_Text_3:
# 29 "data/maps/Route1/scripts.pory"
	.string "I'm not in the mood for singing! Scram!$"

Route1_Isamu_Text_4:
# 39 "data/maps/Route1/scripts.pory"
	.string "Put your back into it!\n"
	.string "Heave, ho! Heave, ho! œ\p"
	.string ". . . . . . .\n"
	.string "Oh! A bite!$"

Route1_Isamu_Text_5:
# 48 "data/maps/Route1/scripts.pory"
	.string "Soran, soran, soran! Woo!$"

Route1_Isamu_Text_6:
# 58 "data/maps/Route1/scripts.pory"
	.string "Argh! You made me lose the fish!$"

Route1_Isamu_Text_7:
# 59 "data/maps/Route1/scripts.pory"
	.string "And i even lost the battle!$"

Route51_Sign_Text_0:
# 66 "data/maps/Route1/scripts.pory"
	.string "ROUTE 51\n"
	.string "{UP_ARROW} STRAWBERRY TOWN$"

Route51_AromaGirl_Text_0:
# 75 "data/maps/Route1/scripts.pory"
	.string "La-la-laœ… …\p"
	.string "Hmm…? Oh, hello!\n"
	.string "Are you into gardening, too?\p"
	.string "But I see that you don't have a\n"
	.string "WAILMER PAIL! Here, I got a spare!$"

Route51_AromaGirl_Text_1:
# 80 "data/maps/Route1/scripts.pory"
	.string "While BERRY plants are growing,\n"
	.string "water them with the WAILMER PAIL.\p"
	.string "Oh, another thing.\p"
	.string "If you don't pick BERRIES for a while,\n"
	.string "they'll drop off onto the ground.\l"
	.string "But they'll sprout again.\p"
	.string "Isn't that awesome?\n"
	.string "It's like they have the will to live.$"

Route51_Kazuki_Text_0:
# 87 "data/maps/Route1/scripts.pory"
	.string "Me and my girl are having a picnic.\n"
	.string "Don't dare interrupting us!$"

Route51_Kazuki_Text_1:
# 87 "data/maps/Route1/scripts.pory"
	.string "You made a fool of me in front of her…$"

Route51_Kazuki_Text_2:
# 88 "data/maps/Route1/scripts.pory"
	.string "Shoo, shoo! Leave us alone!$"

Route51_Kazuha_Text_0:
# 94 "data/maps/Route1/scripts.pory"
	.string "ALMIGHTY TENKEI, grant me strength!$"

Route51_Kazuha_Text_1:
# 94 "data/maps/Route1/scripts.pory"
	.string "I didn't gain enough strength…$"

Route51_Kazuha_Text_2:
# 95 "data/maps/Route1/scripts.pory"
	.string "Did I not pray enough…?$"

Route51_Chika_Text_0:
# 101 "data/maps/Route1/scripts.pory"
	.string "This place, is, like, so pink! It is\n"
	.string "perfect for, like, battling!$"

Route51_Chika_Text_1:
# 101 "data/maps/Route1/scripts.pory"
	.string "I wasn't ready for a defeat…$"

Route51_Chika_Text_2:
# 102 "data/maps/Route1/scripts.pory"
	.string "At least I lost in a pretty place…$"

Route51_Rival_Text_0:
# 117 "data/maps/Route1/scripts.pory"
	.string "Where the heck is…$"

Route51_Rival_Text_1:
# 130 "data/maps/Route1/scripts.pory"
	.string "SHINYA$"

Route51_Rival_Text_2:
# 131 "data/maps/Route1/scripts.pory"
	.string "So… … … wow. T'was a great way 'ta start\n"
	.string "our journey, huh…? … … …\p"
	.string "But I'm sure they've kicked the ARC away.\n"
	.string "Can 'ya call MITSURU, actually?\n"
	.string "It's been hours, so all that mess\n"
	.string "should be over by now.$"

Route51_Rival_Text_3:
# 134 "data/maps/Route1/scripts.pory"
	.string "FUUKA$"

Route51_Rival_Text_4:
# 135 "data/maps/Route1/scripts.pory"
	.string "Nothing like nearly getting imprisoned\n"
	.string "to start a journey, huh.\p"
	.string "…Still. I trust that they took care of\n"
	.string "those ARC soldiers by now.\p"
	.string "Say, why don't you call them?\n"
	.string "It’s been hours since we arrived.$"

Route51_Rival_Text_5:
# 147 "data/maps/Route1/scripts.pory"
	.string "That SOLDIER took my PŒDA from me\n"
	.string "during our fight… … …$"

Route51_Rival_Text_6:
# 157 "data/maps/Route1/scripts.pory"
	.string "…Uhm. Well, I'll call 'em on mine.\n"
	.string "And we'll buy 'ya a new one soon!\p"
	.string "Why don'tcha heal your POKéMON\n"
	.string "while I call 'em?$"

Route51_Rival_Text_7:
# 161 "data/maps/Route1/scripts.pory"
	.string "Well, just your luck.\n"
	.string "No problem, I’ll call them on mine.\p"
	.string "We’ll buy you a new one when we get\n"
	.string "to a shop or something.\p"
	.string "Why don't you heal your POKéMON\n"
	.string "while I call them?$"

Route51_Rival_Text_8:
# 165 "data/maps/Route1/scripts.pory"
	.string "Bzzt… … … … … bzz… … … … … …$"

Route51_Rival_Text_9:
# 177 "data/maps/Route1/scripts.pory"
	.string "What the heck…$"

Route51_Rival_Text_10:
# 185 "data/maps/Route1/scripts.pory"
	.string "MITSURU$"

Route51_Rival_Text_11:
# 186 "data/maps/Route1/scripts.pory"
	.string "Bzz… … … 'cuz… bzz… … …\n"
	.string "ARC… … set … island ablaze…$"

Route51_Rival_Text_12:
# 192 "data/maps/Route1/scripts.pory"
	.string "What what what?! Anegimi!\n"
	.string "We have to go back and help them!\p"
	.string "FLYGON, SKARMORY, take us back!$"

Route51_Rival_Text_13:
# 196 "data/maps/Route1/scripts.pory"
	.string "No, no, no! Why would they do this?\n"
	.string "The civilians have no fault!\p"
	.string "We have to go back to help!$"

Route51_Rival_Text_14:
# 204 "data/maps/Route1/scripts.pory"
	.string "We cannot waste the chance they have\n"
	.string "given us to take back the throne!$"

Route51_Rival_Text_15:
# 215 "data/maps/Route1/scripts.pory"
	.string "Anegimi! Who cares 'bout that now!?\n"
	.string "We have to… we have… to help…$"

Route51_Rival_Text_16:
# 219 "data/maps/Route1/scripts.pory"
	.string "What kinds of rulers would we be if we\n"
	.string "did not help our loyal subjects?!\p"
	.string "SKARMORY, take me back!$"

Route51_Rival_Text_17:
# 223 "data/maps/Route1/scripts.pory"
	.string "It's fine… … … we are… … …\n"
	.string "fighting back… … …bzz …  if needed… …\l"
	.string "… got POKéMON… … …to flee with…\p"
	.string "Go… … …and free… … …NIHON…\p"
	.string "… … … … … … …$"

Route51_Rival_Text_18:
# 231 "data/maps/Route1/scripts.pory"
	.string "Cousin… was that supposed to\n"
	.string "calm me down…?$"

Route51_Rival_Text_19:
# 235 "data/maps/Route1/scripts.pory"
	.string "MITSURU… … … … … … … … Okay.$"

Route51_Rival_Text_20:
# 242 "data/maps/Route1/scripts.pory"
	.string "Or just make me worry more…$"

Route51_Rival_Text_21:
# 246 "data/maps/Route1/scripts.pory"
	.string "No matter their fate… … we have\n"
	.string "a throne to claim back.$"

Route51_Rival2_Text_0:
# 262 "data/maps/Route1/scripts.pory"
	.string "CITRUS ISLAND… we finally left it,\n"
	.string "but at what cost?$"

Route51_Rival2_Text_1:
# 266 "data/maps/Route1/scripts.pory"
	.string "Anegimi. Go to the ELEMENTAL TEMPLE.\n"
	.string "I'll fight the local PATH GUARDIANS\l"
	.string "later. I need to calm myself first…$"

Route51_Rival2_Text_2:
# 272 "data/maps/Route1/scripts.pory"
	.string "A ruler has to be strong.\n"
	.string "For the sake of her subjects…$"

Route51_Rival2_Text_3:
# 276 "data/maps/Route1/scripts.pory"
	.string "Anigimi? Why are you still here? Go to\n"
	.string "the ELEMENTAL TEMPLE.\p"
	.string "I need to stay alone for a bit.\n"
	.string "I'll fight the PATH GUARDIANS later.$"

Route51_Rival2_Text_4:
# 289 "data/maps/Route1/scripts.pory"
	.string "What? I forgot something?\n"
	.string "Oh, 'ya right…\p"
	.string "I forgot, sorry… I'm not in the mood.$"

Route51_Rival2_Text_5:
# 293 "data/maps/Route1/scripts.pory"
	.string "Oh, true. The PROFESSOR was\n"
	.string "supposed to give us those.\p"
	.string "You sure could have waited a better\n"
	.string "moment to remind me, though…$"

Route51_Rival3_Text_0:
# 310 "data/maps/Route1/scripts.pory"
	.string "… … … … … … …$"
