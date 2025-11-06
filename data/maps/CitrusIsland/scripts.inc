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
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Samurai_2
# 15 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Samurai_Text_1
# 16 "data/maps/CitrusIsland/scripts.pory"
	closemessage
CitrusIsland_Samurai_1:
# 18 "data/maps/CitrusIsland/scripts.pory"
	release
	end

CitrusIsland_Samurai_2:
# 12 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Samurai_Text_0
# 13 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	goto CitrusIsland_Samurai_1


CitrusIsland_Girl::
# 23 "data/maps/CitrusIsland/scripts.pory"
	lock
# 24 "data/maps/CitrusIsland/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Girl_1
# 29 "data/maps/CitrusIsland/scripts.pory"
	release
# 30 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Girl_Text_1
# 31 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	end

CitrusIsland_Girl_1:
# 26 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Girl_Text_0
# 27 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	return


CitrusIsland_House::
# 37 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_House_Text_0
# 38 "data/maps/CitrusIsland/scripts.pory"
	release
	end


CitrusIsland_Shore1::
# 43 "data/maps/CitrusIsland/scripts.pory"
	lockall
# 44 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Shore1_Text_0
# 45 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 46 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CitrusIsland_Movement_EnterScene1
# 47 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 48 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Intro
	return


CitrusIsland_Shore2::
# 52 "data/maps/CitrusIsland/scripts.pory"
	lockall
# 53 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Shore1_Text_0
# 54 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 55 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, CitrusIsland_Movement_EnterScene2
# 56 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 57 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Intro
	return


CitrusIsland_Intro::
# 61 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FacePlayer
# 62 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FacePlayer
# 63 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_FacePlayer
# 64 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, CitrusIsland_Movement_WalkToPlayer
# 65 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 66 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Intro_2
# 71 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_1
# 72 "data/maps/CitrusIsland/scripts.pory"
	closemessage
CitrusIsland_Intro_1:
# 74 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Sad
# 75 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 76 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 77 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 78 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 79 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Intro_6
# 84 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_3
# 85 "data/maps/CitrusIsland/scripts.pory"
	closemessage
CitrusIsland_Intro_5:
# 87 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceDown
# 88 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_4
# 89 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 90 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 91 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 92 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 93 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 94 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_5
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
	msgbox CitrusIsland_Intro_Text_6
# 101 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 102 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Music
# 103 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 104 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 105 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 106 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 107 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 108 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, CitrusIsland_Movement_MoveToRakan
# 109 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 110 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 111 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 112 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FaceRight
# 113 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 114 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 115 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 116 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_7
# 117 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 118 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, CitrusIsland_Movement_MoveToZelkova
# 119 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 120 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 121 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 122 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_StarterEvent
	return

CitrusIsland_Intro_2:
# 68 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_0
# 69 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	goto CitrusIsland_Intro_1

CitrusIsland_Intro_6:
# 81 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Intro_Text_2
# 82 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	goto CitrusIsland_Intro_5


CitrusIsland_StarterEvent::
# 126 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_0
# 127 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 128 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceRight
# 129 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 130 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Pensive
# 131 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 132 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 133 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 134 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_1
# 135 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 136 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 137 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 138 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 139 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 140 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkDown
# 141 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 142 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceUp
# 143 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 144 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 145 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 146 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkRight
# 147 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkRight
# 148 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 149 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceLeft
# 150 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 151 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 152 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 153 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_2
# 154 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 155 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 156 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_StarterEvent_2
# 160 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_4
CitrusIsland_StarterEvent_1:
# 162 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 163 "data/maps/CitrusIsland/scripts.pory"
	special ChooseStarter
# 164 "data/maps/CitrusIsland/scripts.pory"
	waitstate
# 165 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 167 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_5, MSGBOX_YESNO
# 168 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne CitrusIsland_StarterEvent_6
# 171 "data/maps/CitrusIsland/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
CitrusIsland_StarterEvent_5:
# 173 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 174 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Pokedex
	return

CitrusIsland_StarterEvent_2:
# 158 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_3
	goto CitrusIsland_StarterEvent_1

CitrusIsland_StarterEvent_6:
# 169 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Pokedex
	goto CitrusIsland_StarterEvent_5


CitrusIsland_Pokedex::
# 178 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_WalkUpSlow
# 179 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 180 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FacePlayer
# 181 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 182 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 183 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 184 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 185 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_0
# 186 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 187 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 188 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 189 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 190 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 191 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_1
# 192 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_2
# 194 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 195 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_TC_GET
# 196 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 197 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_ExclamationMark
# 198 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 199 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkInPlaceUp
# 200 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 201 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkUp
# 202 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 203 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FacePlayer
# 204 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 205 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 206 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 207 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 208 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_3
# 209 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 210 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_4
# 211 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 212 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 213 "data/maps/CitrusIsland/scripts.pory"
	special SetUnlockedPokedexFlags
# 214 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 215 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 216 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 217 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 218 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 219 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 220 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_5
# 221 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 222 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 223 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 224 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 225 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 226 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 227 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Pokedex_2
# 231 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_7
CitrusIsland_Pokedex_1:
# 233 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 234 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 235 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Music
# 236 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 237 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkUp
# 238 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 239 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Delay48
# 240 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 241 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 242 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 243 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_8
# 244 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 245 "data/maps/CitrusIsland/scripts.pory"
	playse SE_SHIP
# 246 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 247 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_AW2_405, FALSE
# 248 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_9
# 249 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 250 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUS_ARCSHIP
# 251 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUS_ARCSHIP, CitrusIsland_Movement_ARCShip
# 252 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 253 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_ExclamationMark
# 254 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 255 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceRight
# 256 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 257 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_ExclamationMark
# 258 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 259 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkUp
# 260 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 261 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceRight
# 262 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 263 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_ExclamationMark
# 264 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 265 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_FaceRight
# 266 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 267 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 268 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 269 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 270 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 271 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 272 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 273 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FaceRight
# 274 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 275 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_10
# 276 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 277 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_DNIPRO
# 278 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, CitrusIsland_Movement_DniproShip
# 279 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 280 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_11
# 281 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 282 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceUp
# 283 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 284 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkUp
# 285 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 286 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceDown
# 287 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 288 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_12
# 289 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 290 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_WalkLeft
# 291 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 292 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceUp
# 293 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 294 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_13
# 295 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 296 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceLeft
# 297 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 298 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_14
# 299 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 300 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_SOLDIER1
# 301 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, CitrusIsland_Movement_Soldier1
# 302 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 303 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, Common_Movement_Delay48
# 304 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 305 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 306 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 307 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 308 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 309 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 310 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_SOLDIER2
# 311 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, CitrusIsland_Movement_Soldier2
# 312 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 313 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, Common_Movement_Delay48
# 314 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 315 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceDown
# 316 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 317 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 318 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 319 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 320 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 321 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_15
# 322 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 323 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceUp
# 324 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 325 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 326 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 327 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 328 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 329 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_16
# 330 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 331 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, Common_Movement_WalkInPlaceUp
# 332 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 333 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_17
# 334 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 335 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceLeft
# 336 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 337 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 338 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 339 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 340 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 341 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_18
# 342 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, Common_Movement_WalkInPlaceDown
# 343 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 344 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_19
# 345 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 346 "data/maps/CitrusIsland/scripts.pory"
	setflag B_FLAG_NO_WHITEOUT
# 347 "data/maps/CitrusIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SOLDIER_ALPHA, CitrusIsland_Pokedex_Text_20
# 348 "data/maps/CitrusIsland/scripts.pory"
	clearflag B_FLAG_NO_WHITEOUT
# 349 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_SoldierDefeated
	end

CitrusIsland_Pokedex_2:
# 229 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_6
	goto CitrusIsland_Pokedex_1


CitrusIsland_SoldierDefeated::
# 354 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_AW2_405, FALSE
# 355 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 356 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 357 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 358 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 359 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_WalkInPlaceLeft
# 360 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 361 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_0
# 362 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 363 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 364 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 365 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 366 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 367 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_1
# 368 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 369 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkInPlaceUp
# 370 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 371 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 372 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 373 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_2
# 374 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 375 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 376 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 377 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_GALLADE, CRY_MODE_NORMAL
# 378 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 379 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_3
# 380 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 381 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, CitrusIsland_Movement_Masamune
# 382 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 383 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 384 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 385 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_4
# 386 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 387 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_5
# 388 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 389 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_6
# 390 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 391 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_7
# 392 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 393 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 394 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 395 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 396 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 397 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_8
# 398 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 399 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_WalkInPlaceRight
# 400 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 401 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 402 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_9
# 403 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 404 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 405 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 406 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_FLYGON, CRY_MODE_NORMAL
# 407 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 408 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 409 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 410 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_SKARMORY, CRY_MODE_NORMAL
# 411 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 412 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_10
# 413 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 414 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_RivalFlyAway
	return


CitrusIsland_RivalFlyAway::
# 418 "data/maps/CitrusIsland/scripts.pory"
	delay 50
# 419 "data/maps/CitrusIsland/scripts.pory"
	setfieldeffectargument 0, 1
# 420 "data/maps/CitrusIsland/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 421 "data/maps/CitrusIsland/scripts.pory"
	delay 15
# 422 "data/maps/CitrusIsland/scripts.pory"
	removeobject LOCALID_CITRUSISLAND_RIVAL
# 423 "data/maps/CitrusIsland/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 424 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 425 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 426 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 427 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 428 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_RivalFlyAway_Text_0
# 429 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 430 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 431 "data/maps/CitrusIsland/scripts.pory"
	delay 50
# 432 "data/maps/CitrusIsland/scripts.pory"
	setfieldeffectargument 0, 1
# 433 "data/maps/CitrusIsland/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 434 "data/maps/CitrusIsland/scripts.pory"
	delay 15
# 435 "data/maps/CitrusIsland/scripts.pory"
	setvar VAR_RIVALS_STATE, 1
# 436 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Invisible
# 437 "data/maps/CitrusIsland/scripts.pory"
	warp MAP_ROUTE1, 14, 33
# 438 "data/maps/CitrusIsland/scripts.pory"
	waitstate
# 439 "data/maps/CitrusIsland/scripts.pory"
	release
	end


# 443 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_EnterScene1:
# 444 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 444 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 444 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 444 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 444 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 444 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 445 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 445 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 445 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 445 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 445 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 445 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 445 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 446 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 449 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_EnterScene2:
# 450 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 450 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 450 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 450 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 450 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 450 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 451 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 451 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 451 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 451 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 451 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 451 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 452 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 455 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_WalkToPlayer:
# 456 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 457 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 460 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_MoveToRakan:
# 461 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 462 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 463 "data/maps/CitrusIsland/scripts.pory"
	walk_in_place_left
# 464 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 467 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_MoveToZelkova:
# 468 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 469 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 469 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 469 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 470 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 470 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 471 "data/maps/CitrusIsland/scripts.pory"
	face_left
# 472 "data/maps/CitrusIsland/scripts.pory"
	walk_in_place_left
# 473 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 476 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_WalkToPlayer2:
# 477 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 477 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 478 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 478 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 479 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 480 "data/maps/CitrusIsland/scripts.pory"
	face_left
# 481 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 484 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_ARCShip:
# 485 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 485 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 485 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 486 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 489 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_DniproShip:
# 490 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 491 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 492 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 492 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 492 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 492 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 493 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 496 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Soldier1:
# 497 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 498 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 499 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 499 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 499 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 499 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 500 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 500 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 501 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 501 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 502 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 503 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 506 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Soldier2:
# 507 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 508 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 509 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 510 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 510 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 510 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 510 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 511 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 512 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 513 "data/maps/CitrusIsland/scripts.pory"
	face_up
# 514 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 517 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Masamune:
# 518 "data/maps/CitrusIsland/scripts.pory"
	emote_exclamation_mark
# 519 "data/maps/CitrusIsland/scripts.pory"
	disable_jump_landing_ground_effect
# 520 "data/maps/CitrusIsland/scripts.pory"
	jump_in_place_down
# 521 "data/maps/CitrusIsland/scripts.pory"
	unlock_facing_direction
# 522 "data/maps/CitrusIsland/scripts.pory"
	unlock_anim
# 523 "data/maps/CitrusIsland/scripts.pory"
	face_down
# 524 "data/maps/CitrusIsland/scripts.pory"
	step_end

CitrusIsland_Samurai_Text_0:
# 12 "data/maps/CitrusIsland/scripts.pory"
	.string "Fear not, FUUKA-denka!\n"
	.string "All of us have kept training, even\p"
	.string "after being sent here! We are ready\n"
	.string "to serve you forever!$"

CitrusIsland_Samurai_Text_1:
# 15 "data/maps/CitrusIsland/scripts.pory"
	.string "Fear not, SHIN'YA-denka!\n"
	.string "All of us have kept training, even\p"
	.string "after being sent here! We are ready\n"
	.string "to serve you forever!$"

CitrusIsland_Girl_Text_0:
# 26 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA-denka, I have heard you are\n"
	.string "leaving for the mainland. Stay safe!$"

CitrusIsland_Girl_Text_1:
# 30 "data/maps/CitrusIsland/scripts.pory"
	.string "SHIN'YA-denka, I have heard you are\n"
	.string "leaving for the mainland. Stay safe!$"

CitrusIsland_House_Text_0:
# 37 "data/maps/CitrusIsland/scripts.pory"
	.string "SUMERAGI CASTLE$"

CitrusIsland_Shore1_Text_0:
# 44 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: My liege!$"

CitrusIsland_Intro_Text_0:
# 68 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: It's an honor to meet\n"
	.string "you in person, FUUKA-denka.\p"
	.string "You look just like your late mother,\n"
	.string "our beloved JADE EMPERESS.$"

CitrusIsland_Intro_Text_1:
# 71 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: It's an honor to meet\n"
	.string "you in person, SHIN'YA-denka.\p"
	.string "You look just like your late father,\n"
	.string "our beloved JADE EMPEROR.$"

CitrusIsland_Intro_Text_2:
# 81 "data/maps/CitrusIsland/scripts.pory"
	.string "SHIN'YA: 'Kay, 'kay! Let's not\n"
	.string "think 'bout that!$"

CitrusIsland_Intro_Text_3:
# 84 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA: It's fine, PROFESSOR.\n"
	.string "Let us not ruin the mood.$"

CitrusIsland_Intro_Text_4:
# 88 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: You are right, my liege.\p"
	.string "We need to be strong as the loyalists'\n"
	.string "numbers keep on dwindling.$"

CitrusIsland_Intro_Text_5:
# 94 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: Those damned UNOVANS…\n"
	.string "the ARC's army is destroying NIHON!\p"
	.string "They've cut our empire to pieces,\n"
	.string "they're mocking our ancient rituals\l"
	.string "by reviving the ELEMENTAL CONQUEST\p"
	.string "just to elect a puppet ruler, and\n"
	.string "they even… our EMPEROR…$"

CitrusIsland_Intro_Text_6:
# 100 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN: Yes, that's what happens when you\n"
	.string "lose a war. The winners decide what\l"
	.string "will happen to the losing side.\p"
	.string "You're a smart one, ZELKOVA.$"

CitrusIsland_Intro_Text_7:
# 116 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: How can the empire's old\n"
	.string "tactician be so unbothered by this?!\p"
	.string "It's your fault we even lost the\n"
	.string "GREAT POKéMON WAR to begin with!$"

CitrusIsland_StarterEvent_Text_0:
# 126 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: Woah, woah. Let's calm down.\n"
	.string "Give those two their POKéMON.$"

CitrusIsland_StarterEvent_Text_1:
# 134 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: You are right,\n"
	.string "PEARL HEIR, sir. \p"
	.string "Let us ignore this… pathetic, sad\n"
	.string "excuse of a tactician.$"

CitrusIsland_StarterEvent_Text_2:
# 153 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: My lieges. I have three\n"
	.string "POKéMON for you to choose from. Please,\l"
	.string "decide which of you will choose first.$"

CitrusIsland_StarterEvent_Text_3:
# 158 "data/maps/CitrusIsland/scripts.pory"
	.string "SHIN'YA: Anegimi, you can choose first!$"

CitrusIsland_StarterEvent_Text_4:
# 160 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA: Why don't you go first, anigimi?$"

CitrusIsland_StarterEvent_Text_5:
# 167 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: Hey, 'cuz, why don't ya give\n"
	.string "it a nickname?$"

CitrusIsland_Pokedex_Text_0:
# 185 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN: My liege, did you choose your\n"
	.string "pseudonym for the CONQUEST?$"

CitrusIsland_Pokedex_Text_1:
# 191 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER}? That's a great name.\n"
	.string "Here are your TRAINER PASS.$"

CitrusIsland_Pokedex_Text_2:
# 193 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER} received the TRAINER PASS!$"

CitrusIsland_Pokedex_Text_3:
# 208 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: Well, I have a POKéDEX\n"
	.string "to give instead!\p"
	.string "That will be a lot more useful!$"

CitrusIsland_Pokedex_Text_4:
# 210 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

CitrusIsland_Pokedex_Text_5:
# 220 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN: Foolish woman, this is not a\n"
	.string "competition on which of us is the\l"
	.string "most loyal retainer.\p"
	.string "And do you recall that they cannot\n"
	.string "enter the ELEMENTAL CONQUEST\l"
	.string "without a TRAINER PASS?$"

CitrusIsland_Pokedex_Text_6:
# 229 "data/maps/CitrusIsland/scripts.pory"
	.string "SHIN'YA: What don't you two understand\n"
	.string "about calming down?!\p"
	.string "'Nyway, anegimi!$"

CitrusIsland_Pokedex_Text_7:
# 231 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA: As MITSURU said, calm down.\n"
	.string "Stop being so childish.\p"
	.string "'Nyway, anigimi!$"

CitrusIsland_Pokedex_Text_8:
# 243 "data/maps/CitrusIsland/scripts.pory"
	.string "Now that we both have a POKéMON, why\n"
	.string "don't we have a match…$"

CitrusIsland_Pokedex_Text_9:
# 248 "data/maps/CitrusIsland/scripts.pory"
	.string "???: Fwahaha! Move it, boys!\n"
	.string "Get off the damn ship, NOW!$"

CitrusIsland_Pokedex_Text_10:
# 275 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: The ARC…! But I made sure\n"
	.string "to cover my steps while coming here…!$"

CitrusIsland_Pokedex_Text_11:
# 280 "data/maps/CitrusIsland/scripts.pory"
	.string "???: Heh! Didn't hide 'em good enough,\n"
	.string "sweetheart.$"

CitrusIsland_Pokedex_Text_12:
# 288 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: GENERAL DNIPRO!$"

CitrusIsland_Pokedex_Text_13:
# 294 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: That's right, lady.\n"
	.string "GENERAL DNIPRO of the ALLIED REGIONS\l"
	.string "COALITION, LANDORUS PLATOON's leader!$"

CitrusIsland_Pokedex_Text_14:
# 298 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: 'Ya oughta know better\n"
	.string "than this, y'know?\p"
	.string "Good kids don't disobey. If they're\n"
	.string "told not 'ta leave this island, then…\l"
	.string "they don't leave, partner.$"

CitrusIsland_Pokedex_Text_15:
# 321 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: They have done nothing\n"
	.string "wrong, GENERAL!\p"
	.string "Why should two innocent kids\n"
	.string "pay for their parents' mistakes?$"

CitrusIsland_Pokedex_Text_16:
# 329 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Kids? Fwahaha! Didn't take\n"
	.string "'ya for a comedian. Love me a funny lady.\n"
	.string "'Nyway. They knew the deal. Also, innocent?\p"
	.string "'Ya were just crying about the ARC\n"
	.string "destroyin' the empire, hoping those two\l"
	.string "weaklings would somehow take it back.$"

CitrusIsland_Pokedex_Text_17:
# 333 "data/maps/CitrusIsland/scripts.pory"
	.string "ARC SOLDIER: GENERAL!\n"
	.string "This one is resisting arrest!$"

CitrusIsland_Pokedex_Text_18:
# 341 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Oh, they got teeth!\n"
	.string "Bless their heart. They think they can\l"
	.string "actually fight us.\p"
	.string "But y'know what? Sure! Have some fun,\n"
	.string "ALPHA, BRAVO! Destroy 'em!$"

CitrusIsland_Pokedex_Text_19:
# 344 "data/maps/CitrusIsland/scripts.pory"
	.string "ARC SOLDIER: Sir, yessir!$"

CitrusIsland_Pokedex_Text_20:
# 347 "data/maps/CitrusIsland/scripts.pory"
	.string "Forgive me, sir!$"

CitrusIsland_SoldierDefeated_Text_0:
# 361 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Tch.\n"
	.string "What the hell was that, huh?\p"
	.string "How can an elite squad lose against two\n"
	.string "twenty-somethings with hand-me down\l"
	.string "POKéMON they just got a minute ago?!$"

CitrusIsland_SoldierDefeated_Text_1:
# 367 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Oh, wait, lemme guess.\n"
	.string "'Ya two want 'ta see your GENERAL\l"
	.string "in battle, don'tcha?\p"
	.string "Fine, y'all want a show? Here!$"

CitrusIsland_SoldierDefeated_Text_2:
# 373 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: Easy there, big guy!\n"
	.string "Pick on someone your size!$"

CitrusIsland_SoldierDefeated_Text_3:
# 379 "data/maps/CitrusIsland/scripts.pory"
	.string "GALLADE, use MASAMUNE!$"

CitrusIsland_SoldierDefeated_Text_4:
# 385 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: 'Ya dare doin' that, PEARL?\n"
	.string "Hah! If 'ya want to protect 'em,\l"
	.string "prepare to pay for it!$"

CitrusIsland_SoldierDefeated_Text_5:
# 387 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: How about you relax and go\n"
	.string "back to where you came from, hmm?$"

CitrusIsland_SoldierDefeated_Text_6:
# 389 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Mind your tone, boy!\n"
	.string "The orders came from high above.$"

CitrusIsland_SoldierDefeated_Text_7:
# 391 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: Yeah, see, here's the thing.\n"
	.string "I did not ask, nor do I care.\l"
	.string "Don't overstep your authority, UNOVAN.$"

CitrusIsland_SoldierDefeated_Text_8:
# 397 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: 'Ya wanna fight then, boy?\n"
	.string "'Ya better walk the talk then!$"

CitrusIsland_SoldierDefeated_Text_9:
# 402 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN: Please do not stand there,\n"
	.string "my lieges.$"

CitrusIsland_SoldierDefeated_Text_10:
# 412 "data/maps/CitrusIsland/scripts.pory"
	.string "FLYGON, SKARMORY, please. Take them to\n"
	.string "the next step of their journey.$"

CitrusIsland_RivalFlyAway_Text_0:
# 428 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: You…!$"
