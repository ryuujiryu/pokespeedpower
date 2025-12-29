CitrusIsland_MapScripts::
# 2 "data/maps/CitrusIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CitrusIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CitrusIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CitrusIsland/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end


CitrusIsland_Samurai::
# 9 "data/maps/CitrusIsland/scripts.pory"
	lock
# 10 "data/maps/CitrusIsland/scripts.pory"
	faceplayer
# 11 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Samurai_Text_0
# 12 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 13 "data/maps/CitrusIsland/scripts.pory"
	release
	end


CitrusIsland_Girl::
# 18 "data/maps/CitrusIsland/scripts.pory"
	lock
# 19 "data/maps/CitrusIsland/scripts.pory"
	faceplayer
# 20 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Girl_Text_0
# 21 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 22 "data/maps/CitrusIsland/scripts.pory"
	release
	end


CitrusIsland_House::
# 27 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_House_Text_0
# 28 "data/maps/CitrusIsland/scripts.pory"
	release
	end


CitrusIsland_Shore1::
# 33 "data/maps/CitrusIsland/scripts.pory"
	lockall
# 34 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 35 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Shore1_Text_1
# 36 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 37 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CitrusIsland_Movement_EnterScene1
# 38 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 39 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Intro
	return


CitrusIsland_Shore2::
# 43 "data/maps/CitrusIsland/scripts.pory"
	lockall
# 44 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 45 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Shore1_Text_1
# 46 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 47 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CitrusIsland_Movement_EnterScene2
# 48 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 49 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Intro
	return


CitrusIsland_Intro::
# 53 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FacePlayer
# 54 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FacePlayer
# 55 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_FacePlayer
# 56 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, CitrusIsland_Movement_WalkToPlayer
# 57 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 58 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Intro_2
# 64 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 65 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_1
# 66 "data/maps/CitrusIsland/scripts.pory"
	closemessage
CitrusIsland_Intro_1:
# 68 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Sad
# 69 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 70 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 71 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 72 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 73 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 74 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Delay48
# 75 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Intro_6
# 81 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_4
# 82 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_5
# 83 "data/maps/CitrusIsland/scripts.pory"
	closemessage
CitrusIsland_Intro_5:
# 85 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceDown
# 86 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 87 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_6
# 88 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 89 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 90 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 91 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 92 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 93 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 94 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_7
# 95 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 96 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Sad
# 97 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 98 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 99 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 100 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_8
# 101 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_9
# 102 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 103 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Music
# 104 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 105 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 106 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 107 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 108 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 109 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, CitrusIsland_Movement_MoveToRakan
# 110 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 111 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 112 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 113 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FaceRight
# 114 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 115 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 116 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 117 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 118 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_10
# 119 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 120 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, CitrusIsland_Movement_MoveToZelkova
# 121 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 122 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 123 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 124 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_StarterEvent
	return

CitrusIsland_Intro_2:
# 60 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 61 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_0
# 62 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	goto CitrusIsland_Intro_1

CitrusIsland_Intro_6:
# 77 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_2
# 78 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_3
# 79 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	goto CitrusIsland_Intro_5


CitrusIsland_StarterEvent::
# 128 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_StarterEvent_Text_0
# 129 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_1
# 130 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 131 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceRight
# 132 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 133 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Pensive
# 134 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 135 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 136 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 137 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 138 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_2
# 139 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 140 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 141 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 142 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 143 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 144 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkDown
# 145 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 146 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceUp
# 147 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 148 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 149 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 150 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkRight
# 151 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkRight
# 152 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 153 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceLeft
# 154 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 155 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 156 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 157 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 158 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_3
# 159 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 160 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 161 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_StarterEvent_2
# 166 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_4
# 167 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_5
CitrusIsland_StarterEvent_1:
# 169 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 170 "data/maps/CitrusIsland/scripts.pory"
	special ChooseStarter
# 171 "data/maps/CitrusIsland/scripts.pory"
	waitstate
# 172 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 174 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_StarterEvent_Text_0
# 175 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_6, MSGBOX_YESNO
# 176 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne CitrusIsland_StarterEvent_6
# 179 "data/maps/CitrusIsland/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
CitrusIsland_StarterEvent_5:
# 181 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 182 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Pokedex
	return

CitrusIsland_StarterEvent_2:
# 163 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_2
# 164 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_4
	goto CitrusIsland_StarterEvent_1

CitrusIsland_StarterEvent_6:
# 177 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Pokedex
	goto CitrusIsland_StarterEvent_5


CitrusIsland_Pokedex::
# 186 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_WalkUpSlow
# 187 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 188 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FacePlayer
# 189 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 190 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 191 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 192 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 193 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_8
# 194 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_0
# 195 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 196 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 197 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_1
# 198 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 199 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_TC_GET
# 200 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_SAVE_GET
# 201 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 202 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_ExclamationMark
# 203 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 204 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkInPlaceUp
# 205 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 206 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkUp
# 207 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 208 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FacePlayer
# 209 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 210 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 211 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 212 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 213 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 214 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_2
# 215 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 216 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 217 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_3
# 218 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 219 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 220 "data/maps/CitrusIsland/scripts.pory"
	special SetUnlockedPokedexFlags
# 221 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 222 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 223 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 224 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 225 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 226 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 227 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_8
# 228 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_4
# 229 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 230 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 231 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 232 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 233 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 234 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 235 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Pokedex_2
# 240 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_4
# 241 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_6
CitrusIsland_Pokedex_1:
# 243 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 244 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 245 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Music
# 246 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 247 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Delay48
# 248 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 249 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkUp
# 250 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 251 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Delay48
# 252 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 253 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 254 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Pokedex_6
# 259 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_4
# 260 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_8
CitrusIsland_Pokedex_5:
# 262 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 263 "data/maps/CitrusIsland/scripts.pory"
	playse SE_SHIP
# 264 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 265 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_AW2_405, FALSE
# 266 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_9
# 267 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_10
# 268 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 269 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUS_ARCSHIP
# 270 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUS_ARCSHIP, CitrusIsland_Movement_ARCShip
# 271 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 272 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_ExclamationMark
# 273 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 274 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceRight
# 275 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 276 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_ExclamationMark
# 277 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 278 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkUp
# 279 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 280 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceRight
# 281 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 282 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_ExclamationMark
# 283 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 284 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_FaceRight
# 285 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 286 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 287 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 288 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 289 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 290 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 291 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 292 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FaceRight
# 293 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 294 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 295 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_11
# 296 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 297 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_DNIPRO
# 298 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, CitrusIsland_Movement_DniproShip
# 299 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 300 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_9
# 301 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_12
# 302 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 303 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceUp
# 304 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 305 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkUp
# 306 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 307 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceDown
# 308 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 309 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 310 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_13
# 311 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 312 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_WalkLeft
# 313 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 314 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceUp
# 315 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 316 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 317 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_15
# 318 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 319 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceLeft
# 320 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 321 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 322 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_16
# 323 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 324 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_SOLDIER1
# 325 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, CitrusIsland_Movement_Soldier1
# 326 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 327 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, Common_Movement_Delay48
# 328 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 329 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 330 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 331 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 332 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 333 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 334 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_SOLDIER2
# 335 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, CitrusIsland_Movement_Soldier2
# 336 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 337 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, Common_Movement_Delay48
# 338 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 339 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceDown
# 340 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 341 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 342 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 343 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 344 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 345 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Shore1_Text_0
# 346 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_17
# 347 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 348 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceUp
# 349 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 350 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 351 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 352 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 353 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 354 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 355 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_18
# 356 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 357 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, Common_Movement_WalkInPlaceUp
# 358 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 359 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_19
# 360 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_20
# 361 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 362 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceLeft
# 363 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 364 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 365 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 366 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 367 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 368 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 369 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_21
# 370 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, Common_Movement_WalkInPlaceDown
# 371 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 372 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_19
# 373 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_22
# 374 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 375 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 376 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 377 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 378 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 379 "data/maps/CitrusIsland/scripts.pory"
	setflag B_FLAG_NO_WHITEOUT
# 380 "data/maps/CitrusIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SOLDIER_ALPHA, CitrusIsland_Pokedex_Text_23
# 381 "data/maps/CitrusIsland/scripts.pory"
	clearflag B_FLAG_NO_WHITEOUT
# 382 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_SoldierDefeated
	end

CitrusIsland_Pokedex_2:
# 237 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_2
# 238 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_5
	goto CitrusIsland_Pokedex_1

CitrusIsland_Pokedex_6:
# 256 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_2
# 257 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_7
	goto CitrusIsland_Pokedex_5


CitrusIsland_SoldierDefeated::
# 387 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_AW2_405, FALSE
# 388 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 389 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 390 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 391 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 392 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 393 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 394 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 395 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 396 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_WalkInPlaceLeft
# 397 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 398 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 399 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_0
# 400 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 401 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 402 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 403 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 404 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 405 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 406 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_1
# 407 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 408 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkInPlaceUp
# 409 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 410 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 411 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 412 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_StarterEvent_Text_0
# 413 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_2
# 414 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 415 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 416 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 417 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_GALLADE, CRY_MODE_NORMAL
# 418 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 419 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_StarterEvent_Text_0
# 420 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_3
# 421 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 422 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, CitrusIsland_Movement_Masamune
# 423 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 424 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 425 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 426 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 427 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_4
# 428 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 429 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_StarterEvent_Text_0
# 430 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_5
# 431 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 432 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 433 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_6
# 434 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 435 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_StarterEvent_Text_0
# 436 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_7
# 437 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 438 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_ExclamationMark
# 439 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 440 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 441 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 442 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Delay48
# 443 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_SoldierDefeated_2
# 449 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_4
# 450 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_9
# 451 "data/maps/CitrusIsland/scripts.pory"
	closemessage
CitrusIsland_SoldierDefeated_1:
# 453 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 454 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 455 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 456 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 457 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 458 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_10
# 459 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 460 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_WalkInPlaceRight
# 461 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 462 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 463 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 464 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 465 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 466 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 467 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_8
# 468 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_11
# 469 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 470 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 471 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 472 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_FLYGON, CRY_MODE_NORMAL
# 473 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 474 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 475 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 476 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
# 477 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 478 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_8
# 479 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_12
# 480 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 481 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_RivalFlyAway
	return

CitrusIsland_SoldierDefeated_2:
# 445 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Intro_Text_2
# 446 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_8
# 447 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	goto CitrusIsland_SoldierDefeated_1


CitrusIsland_RivalFlyAway::
# 485 "data/maps/CitrusIsland/scripts.pory"
	delay 50
# 486 "data/maps/CitrusIsland/scripts.pory"
	setfieldeffectargument 0, 1
# 487 "data/maps/CitrusIsland/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 488 "data/maps/CitrusIsland/scripts.pory"
	delay 15
# 489 "data/maps/CitrusIsland/scripts.pory"
	removeobject LOCALID_CITRUSISLAND_RIVAL
# 490 "data/maps/CitrusIsland/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 491 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 492 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 493 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 494 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 495 "data/maps/CitrusIsland/scripts.pory"
	setspeaker CitrusIsland_Pokedex_Text_14
# 496 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_RivalFlyAway_Text_0
# 497 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 498 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 499 "data/maps/CitrusIsland/scripts.pory"
	delay 50
# 500 "data/maps/CitrusIsland/scripts.pory"
	setfieldeffectargument 0, 1
# 501 "data/maps/CitrusIsland/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 502 "data/maps/CitrusIsland/scripts.pory"
	delay 15
# 503 "data/maps/CitrusIsland/scripts.pory"
	setvar VAR_RIVALS_STATE, 1
# 504 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Invisible
# 505 "data/maps/CitrusIsland/scripts.pory"
	warp MAP_ROUTE1, 15, 29
# 506 "data/maps/CitrusIsland/scripts.pory"
	waitstate
# 507 "data/maps/CitrusIsland/scripts.pory"
	release
	end


# 511 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_EnterScene1:
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 513 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 513 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 513 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 513 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 513 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 513 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 513 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 514 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 517 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_EnterScene2:
# 518 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 518 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 518 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 518 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 518 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 518 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 519 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 519 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 519 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 519 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 519 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 519 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 520 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 523 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_WalkToPlayer:
# 524 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 525 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 528 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_MoveToRakan:
# 529 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 530 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 531 "data/maps/CitrusIsland/scripts.pory"
	walk_in_place_left
# 532 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 535 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_MoveToZelkova:
# 536 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 537 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 537 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 537 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 538 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 538 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 539 "data/maps/CitrusIsland/scripts.pory"
	face_left
# 540 "data/maps/CitrusIsland/scripts.pory"
	walk_in_place_left
# 541 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 544 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_WalkToPlayer2:
# 545 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 545 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 546 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 546 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 547 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 548 "data/maps/CitrusIsland/scripts.pory"
	face_left
# 549 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 552 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_ARCShip:
# 553 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 553 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 553 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 554 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 557 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_DniproShip:
# 558 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 559 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 560 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 560 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 560 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 560 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 561 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 564 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Soldier1:
# 565 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 566 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 567 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 567 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 567 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 567 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 568 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 568 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 569 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 569 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 570 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 571 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 574 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Soldier2:
# 575 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 576 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 577 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 578 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 578 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 578 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 578 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 579 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 580 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 580 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 581 "data/maps/CitrusIsland/scripts.pory"
	face_up
# 582 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 585 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Masamune:
# 586 "data/maps/CitrusIsland/scripts.pory"
	emote_exclamation_mark
# 587 "data/maps/CitrusIsland/scripts.pory"
	disable_jump_landing_ground_effect
# 588 "data/maps/CitrusIsland/scripts.pory"
	jump_in_place_down
# 589 "data/maps/CitrusIsland/scripts.pory"
	unlock_facing_direction
# 590 "data/maps/CitrusIsland/scripts.pory"
	unlock_anim
# 591 "data/maps/CitrusIsland/scripts.pory"
	face_down
# 592 "data/maps/CitrusIsland/scripts.pory"
	step_end

CitrusIsland_Samurai_Text_0:
# 11 "data/maps/CitrusIsland/scripts.pory"
	.string "Fear not, {PLAYER}-denka!\n"
	.string "All of us have kept training, even\p"
	.string "after being sent here! We are ready\n"
	.string "to serve you forever!$"

CitrusIsland_Girl_Text_0:
# 20 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER}-denka, I have heard you are\n"
	.string "leaving for the mainland. Stay safe!$"

CitrusIsland_House_Text_0:
# 27 "data/maps/CitrusIsland/scripts.pory"
	.string "SUMERAGI CASTLE$"

CitrusIsland_Shore1_Text_0:
# 34 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA$"

CitrusIsland_Shore1_Text_1:
# 35 "data/maps/CitrusIsland/scripts.pory"
	.string "My liege!$"

CitrusIsland_Intro_Text_0:
# 61 "data/maps/CitrusIsland/scripts.pory"
	.string "It's an honor to meet\n"
	.string "you in person, {PLAYER}-denka.\p"
	.string "You look just like your late mother,\n"
	.string "our beloved JADE EMPERESS.$"

CitrusIsland_Intro_Text_1:
# 65 "data/maps/CitrusIsland/scripts.pory"
	.string "It's an honor to meet\n"
	.string "you in person, {PLAYER}-denka.\p"
	.string "You look just like your late father,\n"
	.string "our beloved JADE EMPEROR.$"

CitrusIsland_Intro_Text_2:
# 77 "data/maps/CitrusIsland/scripts.pory"
	.string "SHINYA$"

CitrusIsland_Intro_Text_3:
# 78 "data/maps/CitrusIsland/scripts.pory"
	.string "Kay, 'kay! Let's not\n"
	.string "think 'bout that!$"

CitrusIsland_Intro_Text_4:
# 81 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA$"

CitrusIsland_Intro_Text_5:
# 82 "data/maps/CitrusIsland/scripts.pory"
	.string "It's fine, PROFESSOR.\n"
	.string "Let us not ruin the mood.$"

CitrusIsland_Intro_Text_6:
# 87 "data/maps/CitrusIsland/scripts.pory"
	.string "You are right, my liege.\p"
	.string "We need to be strong as the loyalists'\n"
	.string "numbers keep on dwindling.$"

CitrusIsland_Intro_Text_7:
# 94 "data/maps/CitrusIsland/scripts.pory"
	.string "Those damned UNOVANS…\n"
	.string "the ARC's army is destroying NIHON!\p"
	.string "They've cut our empire to pieces,\n"
	.string "they're mocking our ancient rituals\l"
	.string "by reviving the ELEMENTAL CONQUEST\p"
	.string "just to elect a puppet ruler, and\n"
	.string "they even… our EMPEROR…$"

CitrusIsland_Intro_Text_8:
# 100 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN$"

CitrusIsland_Intro_Text_9:
# 101 "data/maps/CitrusIsland/scripts.pory"
	.string "Yes, that's what happens when you\n"
	.string "lose a war. The winners decide what\l"
	.string "will happen to the losing side.\p"
	.string "You're a smart one, ZELKOVA.$"

CitrusIsland_Intro_Text_10:
# 118 "data/maps/CitrusIsland/scripts.pory"
	.string "How can the empire's old tactician\n"
	.string "be so unbothered by this?!\p"
	.string "It's your fault we even lost the\n"
	.string "GREAT POKéMON WAR to begin with!$"

CitrusIsland_StarterEvent_Text_0:
# 128 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU$"

CitrusIsland_StarterEvent_Text_1:
# 129 "data/maps/CitrusIsland/scripts.pory"
	.string "Woah, woah. Let's calm down.\n"
	.string "Give those two their POKéMON.$"

CitrusIsland_StarterEvent_Text_2:
# 138 "data/maps/CitrusIsland/scripts.pory"
	.string "You are right, PEARL HEIR, sir.\p"
	.string "Let us ignore this… pathetic, sad\n"
	.string "excuse of a tactician.$"

CitrusIsland_StarterEvent_Text_3:
# 158 "data/maps/CitrusIsland/scripts.pory"
	.string "My lieges. I have three POKéMON for you\n"
	.string "to choose from. Please, decide\l"
	.string "which of you will choose first.$"

CitrusIsland_StarterEvent_Text_4:
# 164 "data/maps/CitrusIsland/scripts.pory"
	.string "Anegimi, you can choose first!$"

CitrusIsland_StarterEvent_Text_5:
# 167 "data/maps/CitrusIsland/scripts.pory"
	.string "Why don't you go first, anigimi?$"

CitrusIsland_StarterEvent_Text_6:
# 175 "data/maps/CitrusIsland/scripts.pory"
	.string "Hey, 'cuz, why don't ya give\n"
	.string "it a nickname?$"

CitrusIsland_Pokedex_Text_0:
# 194 "data/maps/CitrusIsland/scripts.pory"
	.string "My liege. I had to pull some strings,\n"
	.string "but I managed to get you an\l"
	.string "official TRAINER PASS.$"

CitrusIsland_Pokedex_Text_1:
# 197 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER} received the TRAINER PASS!$"

CitrusIsland_Pokedex_Text_2:
# 214 "data/maps/CitrusIsland/scripts.pory"
	.string "Well, I have a POKéDEX to give instead!\n"
	.string "That will be a lot more useful!$"

CitrusIsland_Pokedex_Text_3:
# 217 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

CitrusIsland_Pokedex_Text_4:
# 228 "data/maps/CitrusIsland/scripts.pory"
	.string "Foolish woman, this is not a competition\n"
	.string "on which one is the most loyal retainer.\p"
	.string "And do you recall that they cannot\n"
	.string "enter the ELEMENTAL CONQUEST\l"
	.string "without a TRAINER PASS?$"

CitrusIsland_Pokedex_Text_5:
# 238 "data/maps/CitrusIsland/scripts.pory"
	.string "What don'tcha two get\n"
	.string "'bout calming down?!\p"
	.string "'Nyway, anegimi!$"

CitrusIsland_Pokedex_Text_6:
# 241 "data/maps/CitrusIsland/scripts.pory"
	.string "As MITSURU said, calm down.\n"
	.string "Stop being so childish.\p"
	.string "Anyway, anigimi.$"

CitrusIsland_Pokedex_Text_7:
# 257 "data/maps/CitrusIsland/scripts.pory"
	.string "Now that we're POKéMON TRAINERS…\n"
	.string "well, I'm sure yanno the custom!\l"
	.string "We NEED to have a battle!\p"
	.string "Yanno, when two TRAINERS' eyes meet\n"
	.string "each other or something like that…$"

CitrusIsland_Pokedex_Text_8:
# 260 "data/maps/CitrusIsland/scripts.pory"
	.string "Now that we both got a POKéMON, why\n"
	.string "don't we have a match…$"

CitrusIsland_Pokedex_Text_9:
# 266 "data/maps/CitrusIsland/scripts.pory"
	.string "???$"

CitrusIsland_Pokedex_Text_10:
# 267 "data/maps/CitrusIsland/scripts.pory"
	.string "Fwahaha! Move it, boys!\n"
	.string "Get off the damn ship, NOW!$"

CitrusIsland_Pokedex_Text_11:
# 295 "data/maps/CitrusIsland/scripts.pory"
	.string "The ARC…! But I made sure to cover my\n"
	.string "steps while coming here…!$"

CitrusIsland_Pokedex_Text_12:
# 301 "data/maps/CitrusIsland/scripts.pory"
	.string "Heh! Didn't hide 'em good enough, m'lady.$"

CitrusIsland_Pokedex_Text_13:
# 310 "data/maps/CitrusIsland/scripts.pory"
	.string "GENERAL DNIPRO!$"

CitrusIsland_Pokedex_Text_14:
# 316 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO$"

CitrusIsland_Pokedex_Text_15:
# 317 "data/maps/CitrusIsland/scripts.pory"
	.string "That's right, m'lady.\n"
	.string "GENERAL DNIPRO of the ALLIED REGIONS\l"
	.string "COALITION, LANDORUS PLATOON's leader!$"

CitrusIsland_Pokedex_Text_16:
# 322 "data/maps/CitrusIsland/scripts.pory"
	.string "'Ya oughta know better than this.\p"
	.string "The deal the ARC made with your folks\n"
	.string "'fore they got what was comin' to 'em\p"
	.string "was that y'all would’ve been stuck on\n"
	.string "this forsaken island till ARCEUS comes.\p"
	.string "Good kids don't disobey. If they're told\n"
	.string "not 'ta leave this forsaken island,\l"
	.string "then… they don't leave, partner.\p"
	.string "And yet, 'ya two dare throwin' yer hats\n"
	.string "in the ELEMENTAL CONQUEST's ring.$"

CitrusIsland_Pokedex_Text_17:
# 346 "data/maps/CitrusIsland/scripts.pory"
	.string "They have done nothing wrong, GENERAL!\n"
	.string "Why should two innocent kids pay for\l"
	.string "their parents' mistakes?$"

CitrusIsland_Pokedex_Text_18:
# 355 "data/maps/CitrusIsland/scripts.pory"
	.string "Innocent? Fwahaha! Didn't take 'ya\n"
	.string "for a comedian. Love me a funny lady.\p"
	.string "'Nyway.\n"
	.string "They knew 'bout the deal.\p"
	.string "'N werent'ya just cryin' 'bout the ARC\n"
	.string "destroyin' the empire, hoping those two\l"
	.string "weaklings would somehow take it back?$"

CitrusIsland_Pokedex_Text_19:
# 359 "data/maps/CitrusIsland/scripts.pory"
	.string "ARC SOLDIER$"

CitrusIsland_Pokedex_Text_20:
# 360 "data/maps/CitrusIsland/scripts.pory"
	.string "GENERAL, sir!\n"
	.string "This one is resisting arrest!$"

CitrusIsland_Pokedex_Text_21:
# 369 "data/maps/CitrusIsland/scripts.pory"
	.string "Oh, they got teeth! Bless their heart.\n"
	.string "They think they can actually beat us.\p"
	.string "But y'know what? Sure! Have some fun,\n"
	.string "ALPHA, BRAVO! Destroy 'em!$"

CitrusIsland_Pokedex_Text_22:
# 373 "data/maps/CitrusIsland/scripts.pory"
	.string "Sir, yessir!$"

CitrusIsland_Pokedex_Text_23:
# 380 "data/maps/CitrusIsland/scripts.pory"
	.string "Forgive me, sir!$"

CitrusIsland_SoldierDefeated_Text_0:
# 399 "data/maps/CitrusIsland/scripts.pory"
	.string "Tch.\n"
	.string "What the hell was that, huh?\p"
	.string "How can an elite squad lose against two\n"
	.string "twenty-somethings with hand-me down\l"
	.string "POKéMON they just got a minute ago?!$"

CitrusIsland_SoldierDefeated_Text_1:
# 406 "data/maps/CitrusIsland/scripts.pory"
	.string "Oh, wait, lemme guess.\n"
	.string "'Ya two want 'ta see your GENERAL\l"
	.string "in battle, don'tcha?\p"
	.string "So 'ya two threw on purpose.\n"
	.string "I get it. I AM that cool, yeah.\l"
	.string "Fine, y'all want a show? Here!$"

CitrusIsland_SoldierDefeated_Text_2:
# 413 "data/maps/CitrusIsland/scripts.pory"
	.string "Easy there, big guy!\n"
	.string "Pick on someone your size!$"

CitrusIsland_SoldierDefeated_Text_3:
# 420 "data/maps/CitrusIsland/scripts.pory"
	.string "GALLADE, use RADIANT SLASH!$"

CitrusIsland_SoldierDefeated_Text_4:
# 427 "data/maps/CitrusIsland/scripts.pory"
	.string "'Ya dare doin' that, PEARL? Hah!\n"
	.string "If 'ya want to protect 'em,\l"
	.string "prepare to pay for it!$"

CitrusIsland_SoldierDefeated_Text_5:
# 430 "data/maps/CitrusIsland/scripts.pory"
	.string "How about you relax and go back\n"
	.string "to where you came from, hmm?$"

CitrusIsland_SoldierDefeated_Text_6:
# 433 "data/maps/CitrusIsland/scripts.pory"
	.string "Mind your tone, boy! The orders came\n"
	.string "from high above, 'n were as clear as an\l"
	.string "AMPHAROS' tail in the night, I'll tell 'ya.\p"
	.string "<<The two heirs will attempt to flee on\n"
	.string "April 7th. Stop them at any cost.>>$"

CitrusIsland_SoldierDefeated_Text_7:
# 436 "data/maps/CitrusIsland/scripts.pory"
	.string "Yeah, see, here's the thing.\n"
	.string "I did not ask, nor do I care.\l"
	.string "Don't overstep your authority, cowboy.$"

CitrusIsland_SoldierDefeated_Text_8:
# 446 "data/maps/CitrusIsland/scripts.pory"
	.string "Wait, wait… who told the ARC 'bout…$"

CitrusIsland_SoldierDefeated_Text_9:
# 450 "data/maps/CitrusIsland/scripts.pory"
	.string "…Hold on. Did you say… someone leaked…$"

CitrusIsland_SoldierDefeated_Text_10:
# 458 "data/maps/CitrusIsland/scripts.pory"
	.string "'Ya wanna fight then, hippie?\n"
	.string "'Ya better walk the talk then!$"

CitrusIsland_SoldierDefeated_Text_11:
# 468 "data/maps/CitrusIsland/scripts.pory"
	.string "Please do not stand there, my lieges.$"

CitrusIsland_SoldierDefeated_Text_12:
# 479 "data/maps/CitrusIsland/scripts.pory"
	.string "FLYGON, SKARMORY, please. Take them to\n"
	.string "the next step of their journey.$"

CitrusIsland_RivalFlyAway_Text_0:
# 496 "data/maps/CitrusIsland/scripts.pory"
	.string "You…!$"
