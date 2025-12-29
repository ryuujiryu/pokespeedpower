CitrusIsland_PlayerHouse_MapScripts::
# 2 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CitrusIsland_PlayerHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CitrusIsland_PlayerHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end


CitrusIsland_PlayerHouse_Rival::
# 9 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	lock
# 10 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playse SE_DOOR
# 11 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, CitrusIsland_PlayerHouse_Movement_RivalEnter
# 12 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	faceplayer
# 14 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_2
# 20 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 21 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_3
# 22 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
CitrusIsland_PlayerHouse_Rival_1:
# 24 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Music
# 25 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_6
# 30 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 31 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_5
CitrusIsland_PlayerHouse_Rival_5:
# 33 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 34 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Pensive
# 35 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 37 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_10
# 42 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 43 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_7
CitrusIsland_PlayerHouse_Rival_9:
# 45 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 46 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Angry
# 47 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 48 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 49 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 50 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_ExclamationMark
# 51 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 52 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 53 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_14
# 59 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 60 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_9
# 61 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
CitrusIsland_PlayerHouse_Rival_13:
# 63 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Pensive
# 64 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 65 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 66 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_18
# 71 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 72 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_11
CitrusIsland_PlayerHouse_Rival_17:
# 74 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 75 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, CitrusIsland_PlayerHouse_Movement_RivalLeave
# 76 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 77 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playse SE_DOOR
# 78 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	removeobject LOCALID_CITRUS_RIVAL
# 79 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	release
# 81 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setvar VAR_ROUTE102_STATE, 1
	end

CitrusIsland_PlayerHouse_Rival_2:
# 16 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 17 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_1
# 18 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
	goto CitrusIsland_PlayerHouse_Rival_1

CitrusIsland_PlayerHouse_Rival_6:
# 27 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 28 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_4
	goto CitrusIsland_PlayerHouse_Rival_5

CitrusIsland_PlayerHouse_Rival_10:
# 39 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 40 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_6
	goto CitrusIsland_PlayerHouse_Rival_9

CitrusIsland_PlayerHouse_Rival_14:
# 55 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 56 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_8
# 57 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
	goto CitrusIsland_PlayerHouse_Rival_13

CitrusIsland_PlayerHouse_Rival_18:
# 68 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 69 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_10
	goto CitrusIsland_PlayerHouse_Rival_17


# 85 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
CitrusIsland_PlayerHouse_Movement_RivalEnter:
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_up
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_up
# 88 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	step_end

# 91 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
CitrusIsland_PlayerHouse_Movement_RivalLeave:
# 92 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 92 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 95 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	step_end

CitrusIsland_PlayerHouse_Rival_Text_0:
# 16 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "SHINYA$"

CitrusIsland_PlayerHouse_Rival_Text_1:
# 17 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Anegimi, ya finally woke up!\n"
	.string "Took'ya long enough.\p"
	.string "C'mon. Let's go to the shore.$"

CitrusIsland_PlayerHouse_Rival_Text_2:
# 20 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "FUUKA$"

CitrusIsland_PlayerHouse_Rival_Text_3:
# 21 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Anigimi, good morning!\n"
	.string "Get ready and let us make haste.\l"
	.string "We have to reach the shore.$"

CitrusIsland_PlayerHouse_Rival_Text_4:
# 28 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "After all, today is the day!\n"
	.string "Finally, we'll leave CITRUS ISLAND!\p"
	.string "PROF. ZELKOVA'll give us a POKéMON,\n"
	.string "and then we can take part in the\l"
	.string "ELEMENTAL CONQUEST!$"

CitrusIsland_PlayerHouse_Rival_Text_5:
# 31 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "After all, today is the day! Finally, we\n"
	.string "will leave CITRUS ISLAND!\p"
	.string "PROF. ZELKOVA will give us a POKéMON,\n"
	.string "and then we can take part in the\l"
	.string "ELEMENTAL CONQUEST!$"

CitrusIsland_PlayerHouse_Rival_Text_6:
# 40 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "I wish MOM and DAD could see us.\p"
	.string "But then, ya could kinda say it's their\n"
	.string "fault we're stuck there.$"

CitrusIsland_PlayerHouse_Rival_Text_7:
# 43 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "I wish MOM and DAD could see us.\n"
	.string "Maybe if they did not start the WAR…\p"
	.string "We would not have been exiled\n"
	.string "to begin with.$"

CitrusIsland_PlayerHouse_Rival_Text_8:
# 56 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Hey, don't get angry at a joke now.\n"
	.string "I gotta deal with it somehow.\p"
	.string "I'll go first. I think MITSURU and\n"
	.string "RAKAN want to see us off, too.$"

CitrusIsland_PlayerHouse_Rival_Text_9:
# 60 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "…Sorry, anigimi, that was not a nice\n"
	.string "thing to say. You know what?\p"
	.string "I will go to the shore first. MITSURU and\n"
	.string "RAKAN want to see us off, too.$"

CitrusIsland_PlayerHouse_Rival_Text_10:
# 69 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "We ain't s'pos'ta leave this place, yeah.\n"
	.string "But once we do the ARC can't do a thing!\p"
	.string "If they try to, everyone'll know we're\n"
	.string "alive, so the convenient story of us\l"
	.string "being executed won't hold up!\p"
	.string "Now, let's go! Let's not make\n"
	.string "everyone keep on waiting!$"

CitrusIsland_PlayerHouse_Rival_Text_11:
# 72 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Theorically, we should not try to leave.\n"
	.string "But once we do, the ARC can't do a thing.\p"
	.string "If they try to, say, hurt us in any way,\n"
	.string "it destroys their propaganda of how\l"
	.string "we died and so can't rule NIHON.\p"
	.string "Now, let us go. We should not make\n"
	.string "everyone keep on waiting.$"
