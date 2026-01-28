CitrusIsland_PlayerHouse_MapScripts::
# 2 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CitrusIsland_PlayerHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CitrusIsland_PlayerHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE1
	end


CitrusIsland_PlayerHouse_Rival::
# 10 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	lock
# 11 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playse SE_DOOR
# 12 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, CitrusIsland_PlayerHouse_Movement_RivalEnter
# 13 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 14 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	faceplayer
# 15 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_2
# 21 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 22 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_3
# 23 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
CitrusIsland_PlayerHouse_Rival_1:
# 25 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Music
# 26 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_6
# 31 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 32 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_5
CitrusIsland_PlayerHouse_Rival_5:
# 34 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 35 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Pensive
# 36 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 37 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 38 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_10
# 43 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 44 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_7
CitrusIsland_PlayerHouse_Rival_9:
# 46 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 47 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Angry
# 48 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 50 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 51 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_ExclamationMark
# 52 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 53 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 54 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_14
# 60 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 61 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_9
# 62 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
CitrusIsland_PlayerHouse_Rival_13:
# 64 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Pensive
# 65 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 66 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 67 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_18
# 72 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_2
# 73 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_11
CitrusIsland_PlayerHouse_Rival_17:
# 75 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 76 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, CitrusIsland_PlayerHouse_Movement_RivalLeave
# 77 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 78 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playse SE_DOOR
# 79 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	removeobject LOCALID_CITRUS_RIVAL
# 80 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	release
# 82 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setvar VAR_ROUTE102_STATE, 1
	end

CitrusIsland_PlayerHouse_Rival_2:
# 17 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 18 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_1
# 19 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
	goto CitrusIsland_PlayerHouse_Rival_1

CitrusIsland_PlayerHouse_Rival_6:
# 28 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 29 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_4
	goto CitrusIsland_PlayerHouse_Rival_5

CitrusIsland_PlayerHouse_Rival_10:
# 40 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 41 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_6
	goto CitrusIsland_PlayerHouse_Rival_9

CitrusIsland_PlayerHouse_Rival_14:
# 56 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 57 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_8
# 58 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
	goto CitrusIsland_PlayerHouse_Rival_13

CitrusIsland_PlayerHouse_Rival_18:
# 69 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setspeaker CitrusIsland_PlayerHouse_Rival_Text_0
# 70 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_10
	goto CitrusIsland_PlayerHouse_Rival_17


# 86 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
CitrusIsland_PlayerHouse_Movement_RivalEnter:
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 87 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_left
# 88 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_up
# 88 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_fast_up
# 89 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	step_end

# 92 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
CitrusIsland_PlayerHouse_Movement_RivalLeave:
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 93 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 94 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 95 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 95 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 95 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 95 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 95 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 96 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	step_end

CitrusIsland_PlayerHouse_Rival_Text_0:
# 17 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "SHINYA$"

CitrusIsland_PlayerHouse_Rival_Text_1:
# 18 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Anegimi, ya finally woke up!\n"
	.string "Took'ya long enough.\p"
	.string "C'mon. Let's go to the shore.$"

CitrusIsland_PlayerHouse_Rival_Text_2:
# 21 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "FUUKA$"

CitrusIsland_PlayerHouse_Rival_Text_3:
# 22 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Anigimi, good morning!\n"
	.string "Get ready and let us make haste.\l"
	.string "We have to reach the shore.$"

CitrusIsland_PlayerHouse_Rival_Text_4:
# 29 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "After all, today is the day!\n"
	.string "Finally, we'll leave CITRUS ISLAND!\p"
	.string "PROF. ZELKOVA'll give us a POKéMON,\n"
	.string "and then we can take part in the\l"
	.string "ELEMENTAL CONQUEST!$"

CitrusIsland_PlayerHouse_Rival_Text_5:
# 32 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "After all, today is the day! Finally, we\n"
	.string "will leave CITRUS ISLAND!\p"
	.string "PROF. ZELKOVA will give us a POKéMON,\n"
	.string "and then we can take part in the\l"
	.string "ELEMENTAL CONQUEST!$"

CitrusIsland_PlayerHouse_Rival_Text_6:
# 41 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "I wish MOM and DAD could see us.\p"
	.string "But then, ya could kinda say it's their\n"
	.string "fault we're stuck there.$"

CitrusIsland_PlayerHouse_Rival_Text_7:
# 44 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "I wish MOM and DAD could see us.\n"
	.string "Maybe if they did not start the WAR…\p"
	.string "We would not have been exiled\n"
	.string "to begin with.$"

CitrusIsland_PlayerHouse_Rival_Text_8:
# 57 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Hey, don't get angry at a joke now.\n"
	.string "I gotta deal with it somehow.\p"
	.string "I'll go first. I think MITSURU and\n"
	.string "RAKAN want to see us off, too.$"

CitrusIsland_PlayerHouse_Rival_Text_9:
# 61 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "…Sorry, anigimi, that was not a nice\n"
	.string "thing to say. You know what?\p"
	.string "I will go to the shore first. MITSURU and\n"
	.string "RAKAN want to see us off, too.$"

CitrusIsland_PlayerHouse_Rival_Text_10:
# 70 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "We ain't s'pos'ta leave this place, yeah.\n"
	.string "But once we do the ARC can't do a thing!\p"
	.string "If they try to, everyone'll know we're\n"
	.string "alive, so the convenient story of us\l"
	.string "being executed won't hold up!\p"
	.string "Now, let's go! Let's not make\n"
	.string "everyone keep on waiting!$"

CitrusIsland_PlayerHouse_Rival_Text_11:
# 73 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Theorically, we should not try to leave.\n"
	.string "But once we do, the ARC can't do a thing.\p"
	.string "If they try to, say, hurt us in any way,\n"
	.string "it destroys their propaganda of how\l"
	.string "we died and so can't rule NIHON.\p"
	.string "Now, let us go. We should not make\n"
	.string "everyone keep on waiting.$"
