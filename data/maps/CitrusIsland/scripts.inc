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
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceRight
# 128 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 129 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Pensive
# 130 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 131 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 132 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 133 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_1
# 134 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 135 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 136 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 137 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 138 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 139 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkDown
# 140 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 141 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceUp
# 142 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 143 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 144 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 145 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkRight
# 146 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkRight
# 147 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 148 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceLeft
# 149 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 150 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 151 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 152 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_2
# 153 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 154 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 155 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_StarterEvent_2
# 159 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_4
CitrusIsland_StarterEvent_1:
# 161 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 162 "data/maps/CitrusIsland/scripts.pory"
	special ChooseStarter
# 163 "data/maps/CitrusIsland/scripts.pory"
	waitstate
# 164 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 166 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_5, MSGBOX_YESNO
# 167 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne CitrusIsland_StarterEvent_6
# 170 "data/maps/CitrusIsland/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
CitrusIsland_StarterEvent_5:
# 172 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 173 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Pokedex
	return

CitrusIsland_StarterEvent_2:
# 157 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_StarterEvent_Text_3
	goto CitrusIsland_StarterEvent_1

CitrusIsland_StarterEvent_6:
# 168 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_Pokedex
	goto CitrusIsland_StarterEvent_5


CitrusIsland_Pokedex::
# 177 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_WalkUpSlow
# 178 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 179 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FacePlayer
# 180 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 181 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 182 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 183 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 184 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_0
# 185 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 186 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 187 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 188 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 189 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 190 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_1
# 191 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_2
# 193 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 194 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_TC_GET
# 195 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 196 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_ExclamationMark
# 197 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 198 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkInPlaceUp
# 199 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 200 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkUp
# 201 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 202 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FacePlayer
# 203 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 204 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 205 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 206 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 207 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_3
# 208 "data/maps/CitrusIsland/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 209 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_4
# 210 "data/maps/CitrusIsland/scripts.pory"
	waitfanfare
# 211 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 212 "data/maps/CitrusIsland/scripts.pory"
	special SetUnlockedPokedexFlags
# 213 "data/maps/CitrusIsland/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 214 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 215 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 216 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 217 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 218 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 219 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_5
# 220 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 221 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 222 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 223 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 224 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 225 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceUp
# 226 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Pokedex_2
# 230 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_7
CitrusIsland_Pokedex_1:
# 232 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 233 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Music
# 234 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 235 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkUp
# 236 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 237 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_Delay48
# 238 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 239 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 240 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 241 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_8
# 242 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 243 "data/maps/CitrusIsland/scripts.pory"
	playse SE_SHIP
# 244 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 245 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 246 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_9
# 247 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 248 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUS_ARCSHIP
# 249 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUS_ARCSHIP, CitrusIsland_Movement_ARCShip
# 250 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 251 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_ExclamationMark
# 252 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 253 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceRight
# 254 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 255 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_ExclamationMark
# 256 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 257 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkUp
# 258 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 259 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceRight
# 260 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 261 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_ExclamationMark
# 262 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 263 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_FaceRight
# 264 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 265 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 266 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 267 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 268 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 269 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Pensive
# 270 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 271 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_FaceRight
# 272 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 273 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_10
# 274 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 275 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_DNIPRO
# 276 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, CitrusIsland_Movement_DniproShip
# 277 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 278 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_11
# 279 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 280 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_FaceUp
# 281 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 282 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_WalkUp
# 283 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 284 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_FaceDown
# 285 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 286 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_12
# 287 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 288 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_WalkLeft
# 289 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 290 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceUp
# 291 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 292 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_13
# 293 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 294 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceLeft
# 295 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 296 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_14
# 297 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 298 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_SOLDIER1
# 299 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, CitrusIsland_Movement_Soldier1
# 300 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 301 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, Common_Movement_Delay48
# 302 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 303 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 304 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 305 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 306 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 307 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 308 "data/maps/CitrusIsland/scripts.pory"
	addobject LOCALID_CITRUSISLAND_SOLDIER2
# 309 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, CitrusIsland_Movement_Soldier2
# 310 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 311 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, Common_Movement_Delay48
# 312 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 313 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceDown
# 314 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 315 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Angry
# 316 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 317 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_ZELKOVA, Common_Movement_Delay48
# 318 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 319 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_15
# 320 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 321 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceUp
# 322 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 323 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 324 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 325 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 326 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 327 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_16
# 328 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 329 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER2, Common_Movement_WalkInPlaceUp
# 330 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 331 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_17
# 332 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 333 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_FaceLeft
# 334 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 335 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 336 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 337 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 338 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 339 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_18
# 340 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_SOLDIER1, Common_Movement_WalkInPlaceDown
# 341 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 342 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_19
# 343 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 344 "data/maps/CitrusIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SOLDIER_ALPHA, CitrusIsland_Pokedex_Text_20
# 345 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_SoldierDefeated
	end

CitrusIsland_Pokedex_2:
# 228 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Pokedex_Text_6
	goto CitrusIsland_Pokedex_1


CitrusIsland_SoldierDefeated::
# 350 "data/maps/CitrusIsland/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 351 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 352 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 353 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 354 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 355 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_WalkInPlaceLeft
# 356 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 357 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_0
# 358 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 359 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Music
# 360 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 361 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 362 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 363 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_1
# 364 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 365 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_WalkInPlaceUp
# 366 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 367 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_MITSURU, Common_Movement_Delay48
# 368 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 369 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_2
# 370 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 371 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 372 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 373 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_GALLADE, CRY_MODE_NORMAL
# 374 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 375 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_3
# 376 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 377 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, CitrusIsland_Movement_Masamune
# 378 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 379 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 380 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 381 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_4
# 382 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 383 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_5
# 384 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 385 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_6
# 386 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 387 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_7
# 388 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 389 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 390 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 391 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 392 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 393 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_8
# 394 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 395 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_WalkInPlaceRight
# 396 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 397 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RAKAN, Common_Movement_Delay48
# 398 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_9
# 399 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 400 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 401 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 402 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_FLYGON, CRY_MODE_NORMAL
# 403 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 404 "data/maps/CitrusIsland/scripts.pory"
	playse SE_RG_BALL_CLICK
# 405 "data/maps/CitrusIsland/scripts.pory"
	waitse
# 406 "data/maps/CitrusIsland/scripts.pory"
	playmoncry SPECIES_XATU, CRY_MODE_NORMAL
# 407 "data/maps/CitrusIsland/scripts.pory"
	waitmoncry
# 408 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_SoldierDefeated_Text_10
# 409 "data/maps/CitrusIsland/scripts.pory"
	closemessage
# 410 "data/maps/CitrusIsland/scripts.pory"
	call CitrusIsland_RivalFlyAway
	return


CitrusIsland_RivalFlyAway::
# 414 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_RIVAL, Common_Movement_WalkInPlaceDown
# 415 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 416 "data/maps/CitrusIsland/scripts.pory"
	delay 50
# 417 "data/maps/CitrusIsland/scripts.pory"
	setfieldeffectargument 0, 1
# 418 "data/maps/CitrusIsland/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 419 "data/maps/CitrusIsland/scripts.pory"
	delay 15
# 420 "data/maps/CitrusIsland/scripts.pory"
	removeobject LOCALID_CITRUSISLAND_RIVAL
# 421 "data/maps/CitrusIsland/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 422 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Angry
# 423 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 424 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_CITRUSISLAND_DNIPRO, Common_Movement_Delay48
# 425 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 426 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_RivalFlyAway_Text_0
# 427 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 428 "data/maps/CitrusIsland/scripts.pory"
	waitmovement 0
# 429 "data/maps/CitrusIsland/scripts.pory"
	delay 50
# 430 "data/maps/CitrusIsland/scripts.pory"
	setfieldeffectargument 0, 1
# 431 "data/maps/CitrusIsland/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 432 "data/maps/CitrusIsland/scripts.pory"
	delay 15
# 433 "data/maps/CitrusIsland/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Invisible
# 434 "data/maps/CitrusIsland/scripts.pory"
	warp MAP_ROUTE1, 20, 39
# 435 "data/maps/CitrusIsland/scripts.pory"
	waitstate
# 436 "data/maps/CitrusIsland/scripts.pory"
	release
	end


# 440 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_EnterScene1:
# 441 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 441 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 441 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 441 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 441 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 441 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 442 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 442 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 442 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 442 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 442 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 442 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 442 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 443 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 446 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_EnterScene2:
# 447 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 447 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 447 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 447 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 447 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 447 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 448 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 448 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 448 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 448 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 448 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 448 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_down
# 449 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 452 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_WalkToPlayer:
# 453 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 454 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 457 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_MoveToRakan:
# 458 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 459 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 460 "data/maps/CitrusIsland/scripts.pory"
	walk_in_place_left
# 461 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 464 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_MoveToZelkova:
# 465 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 466 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 466 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 466 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 467 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 467 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 468 "data/maps/CitrusIsland/scripts.pory"
	face_left
# 469 "data/maps/CitrusIsland/scripts.pory"
	walk_in_place_left
# 470 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 473 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_WalkToPlayer2:
# 474 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 474 "data/maps/CitrusIsland/scripts.pory"
	walk_right
# 475 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 475 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 476 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 477 "data/maps/CitrusIsland/scripts.pory"
	face_left
# 478 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 481 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_ARCShip:
# 482 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 482 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 482 "data/maps/CitrusIsland/scripts.pory"
	walk_fast_left
# 483 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 486 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_DniproShip:
# 487 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 488 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 489 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 489 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 489 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 489 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 490 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 493 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Soldier1:
# 494 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 495 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 496 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 496 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 496 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 496 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 497 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 497 "data/maps/CitrusIsland/scripts.pory"
	walk_up
# 498 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 498 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 499 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 500 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 503 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Soldier2:
# 504 "data/maps/CitrusIsland/scripts.pory"
	set_visible
# 505 "data/maps/CitrusIsland/scripts.pory"
	jump_left
# 506 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 507 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 507 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 507 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 507 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 508 "data/maps/CitrusIsland/scripts.pory"
	walk_down
# 509 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 509 "data/maps/CitrusIsland/scripts.pory"
	walk_left
# 510 "data/maps/CitrusIsland/scripts.pory"
	face_up
# 511 "data/maps/CitrusIsland/scripts.pory"
	step_end

# 514 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_Movement_Masamune:
# 515 "data/maps/CitrusIsland/scripts.pory"
	emote_exclamation_mark
# 516 "data/maps/CitrusIsland/scripts.pory"
	disable_jump_landing_ground_effect
# 517 "data/maps/CitrusIsland/scripts.pory"
	jump_in_place_down
# 518 "data/maps/CitrusIsland/scripts.pory"
	unlock_facing_direction
# 519 "data/maps/CitrusIsland/scripts.pory"
	unlock_anim
# 520 "data/maps/CitrusIsland/scripts.pory"
	face_down
# 521 "data/maps/CitrusIsland/scripts.pory"
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
# 133 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: You are right,\n"
	.string "PEARL HEIR, sir. \p"
	.string "Let us ignore this… pathetic, sad\n"
	.string "excuse of a tactician.$"

CitrusIsland_StarterEvent_Text_2:
# 152 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: My lieges. I have three\n"
	.string "POKéMON for you to choose from. Please,\l"
	.string "decide which of you will choose first.$"

CitrusIsland_StarterEvent_Text_3:
# 157 "data/maps/CitrusIsland/scripts.pory"
	.string "SHIN'YA: Anegimi, you can choose first!$"

CitrusIsland_StarterEvent_Text_4:
# 159 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA: Why don't you go first, anigimi?$"

CitrusIsland_StarterEvent_Text_5:
# 166 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: Hey, 'cuz, why don't ya give\n"
	.string "it a nickname?$"

CitrusIsland_Pokedex_Text_0:
# 184 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN: My liege, did you choose your\n"
	.string "pseudonym for the CONQUEST?$"

CitrusIsland_Pokedex_Text_1:
# 190 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER}? That's a great name.\n"
	.string "Here are your TRAINER PASS.$"

CitrusIsland_Pokedex_Text_2:
# 192 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER} received the TRAINER PASS!$"

CitrusIsland_Pokedex_Text_3:
# 207 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: Well, I have a POKéDEX\n"
	.string "to give instead!\p"
	.string "That will be a lot more useful!$"

CitrusIsland_Pokedex_Text_4:
# 209 "data/maps/CitrusIsland/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

CitrusIsland_Pokedex_Text_5:
# 219 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN: Foolish woman, this is not a\n"
	.string "competition on which of us is the\l"
	.string "most loyal retainer.\p"
	.string "And do you recall that they cannot\n"
	.string "enter the ELEMENTAL CONQUEST\l"
	.string "without a TRAINER PASS?$"

CitrusIsland_Pokedex_Text_6:
# 228 "data/maps/CitrusIsland/scripts.pory"
	.string "SHIN'YA: What don't you two understand\n"
	.string "about calming down?!\p"
	.string "'Nyway, anegimi!$"

CitrusIsland_Pokedex_Text_7:
# 230 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA: As MITSURU said, calm down.\n"
	.string "Stop being so childish.\p"
	.string "'Nyway, anigimi!$"

CitrusIsland_Pokedex_Text_8:
# 241 "data/maps/CitrusIsland/scripts.pory"
	.string "Now that we both have a POKéMON, why\n"
	.string "don't we have a match…$"

CitrusIsland_Pokedex_Text_9:
# 246 "data/maps/CitrusIsland/scripts.pory"
	.string "???: Fwahaha! Move it, boys!\n"
	.string "Get off the damn boat!$"

CitrusIsland_Pokedex_Text_10:
# 273 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: The ARC…! But I made sure\n"
	.string "to cover my steps while coming here…!$"

CitrusIsland_Pokedex_Text_11:
# 278 "data/maps/CitrusIsland/scripts.pory"
	.string "???: Heh! Didn't hide 'em good enough,\n"
	.string "sweetheart.$"

CitrusIsland_Pokedex_Text_12:
# 286 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: GENERAL DNIPRO!$"

CitrusIsland_Pokedex_Text_13:
# 292 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: That's right, lady.\n"
	.string "GENERAL DNIPRO of the ALLIED REGIONS\l"
	.string "COALITION, LANDORUS PLATOON's leader!$"

CitrusIsland_Pokedex_Text_14:
# 296 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: 'Ya oughta know better\n"
	.string "than this, y'know?\p"
	.string "Good kids don't disobey. If they're\n"
	.string "told not 'ta leave this island, then…\l"
	.string "they don't leave, partner.$"

CitrusIsland_Pokedex_Text_15:
# 319 "data/maps/CitrusIsland/scripts.pory"
	.string "PROF. ZELKOVA: They have done nothing\n"
	.string "wrong, GENERAL!\p"
	.string "Why should two innocent kids\n"
	.string "pay for their parents' mistakes?$"

CitrusIsland_Pokedex_Text_16:
# 327 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Kids? Fwahaha! Didn't take\n"
	.string "'ya for a comedian. Love me a funny lady.\n"
	.string "'Nyway. They knew the deal. Also, innocent?\p"
	.string "'Ya were just crying about the ARC\n"
	.string "destroyin' the empire, hoping those two\l"
	.string "weaklings would somehow take it back.$"

CitrusIsland_Pokedex_Text_17:
# 331 "data/maps/CitrusIsland/scripts.pory"
	.string "ARC SOLDIER: GENERAL!\n"
	.string "This one is resisting arrest!$"

CitrusIsland_Pokedex_Text_18:
# 339 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Oh, they got teeth!\n"
	.string "Bless their heart. They think they can\l"
	.string "actually fight us.\p"
	.string "But y'know what? Sure! Have some fun,\n"
	.string "ALPHA, BRAVO! Destroy 'em!$"

CitrusIsland_Pokedex_Text_19:
# 342 "data/maps/CitrusIsland/scripts.pory"
	.string "ARC SOLDIER: Sir, yessir!$"

CitrusIsland_Pokedex_Text_20:
# 344 "data/maps/CitrusIsland/scripts.pory"
	.string "Forgive me, sir!$"

CitrusIsland_SoldierDefeated_Text_0:
# 357 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Tch.\n"
	.string "What the hell was that, huh?\p"
	.string "How can an elite squad lose against two\n"
	.string "twenty-somethings with hand-me down\l"
	.string "POKéMON they just got a minute ago?!$"

CitrusIsland_SoldierDefeated_Text_1:
# 363 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Oh, wait, lemme guess.\n"
	.string "'Ya two want 'ta see your GENERAL\l"
	.string "in battle, don'tcha?\p"
	.string "Fine, y'all want a show? Here!$"

CitrusIsland_SoldierDefeated_Text_2:
# 369 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: Easy there, big guy!\n"
	.string "Pick on someone your size!$"

CitrusIsland_SoldierDefeated_Text_3:
# 375 "data/maps/CitrusIsland/scripts.pory"
	.string "GALLADE, use MASAMUNE!$"

CitrusIsland_SoldierDefeated_Text_4:
# 381 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: 'Ya dare doin' that, PEARL?\n"
	.string "Hah! If 'ya want to protect 'em,\l"
	.string "prepare to pay for it!$"

CitrusIsland_SoldierDefeated_Text_5:
# 383 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: How about you relax and go\n"
	.string "back to where you came from, hmm?$"

CitrusIsland_SoldierDefeated_Text_6:
# 385 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: Mind your tone, boy!\n"
	.string "The orders came from high above.$"

CitrusIsland_SoldierDefeated_Text_7:
# 387 "data/maps/CitrusIsland/scripts.pory"
	.string "MITSURU: Yeah, see, here's the thing.\n"
	.string "I did not ask, nor do I care.\l"
	.string "Don't overstep your authority, UNOVAN.$"

CitrusIsland_SoldierDefeated_Text_8:
# 393 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: 'Ya wanna fight then, boy?\n"
	.string "'Ya better walk the talk then!$"

CitrusIsland_SoldierDefeated_Text_9:
# 398 "data/maps/CitrusIsland/scripts.pory"
	.string "RAKAN: Please do not stand there,\n"
	.string "my lieges.$"

CitrusIsland_SoldierDefeated_Text_10:
# 408 "data/maps/CitrusIsland/scripts.pory"
	.string "FLYGON, XATU, please. Take them to the\n"
	.string "next step of their journey.$"

CitrusIsland_RivalFlyAway_Text_0:
# 426 "data/maps/CitrusIsland/scripts.pory"
	.string "GEN. DNIPRO: You…!$"
