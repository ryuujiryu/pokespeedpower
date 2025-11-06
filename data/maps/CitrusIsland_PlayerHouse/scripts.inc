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
	faceplayer
# 11 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_2
# 16 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_1
# 17 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
CitrusIsland_PlayerHouse_Rival_1:
# 19 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Music
# 20 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 21 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_2
# 22 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 23 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Pensive
# 24 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 25 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 26 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_3
# 28 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 29 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_ExclamationMark
# 30 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 31 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 32 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_4
# 34 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 35 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	call Common_EventScript_NamingScreenPlayer
# 36 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_5
# 37 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 38 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Pensive
# 39 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 40 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 41 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_PlayerHouse_Rival_6
# 45 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_7
CitrusIsland_PlayerHouse_Rival_5:
# 47 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 48 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, CitrusIsland_PlayerHouse_Movement_RivalLeave
# 49 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 50 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 51 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 52 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_ExclamationMark
# 53 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 54 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 55 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 56 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	call CitrusIsland_PlayerHouse_Outfit
	return

CitrusIsland_PlayerHouse_Rival_2:
# 13 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_0
# 14 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
	goto CitrusIsland_PlayerHouse_Rival_1

CitrusIsland_PlayerHouse_Rival_6:
# 43 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Rival_Text_6
	goto CitrusIsland_PlayerHouse_Rival_5


CitrusIsland_PlayerHouse_Outfit::
# 60 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Outfit_Text_0
# 61 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 62 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, CitrusIsland_PlayerHouse_Movement_RivalReturns
# 63 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 64 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	faceplayer
# 65 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Outfit_Text_1
# 66 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 67 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Angry
# 68 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, Common_Movement_Delay48
# 70 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 71 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Outfit_Text_2
# 72 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 73 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	giveitem ITEM_OUTFIT_BOX
# 75 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitfanfare
# 76 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	toggleoutfit OUTFIT_UNUSUAL_RED, 0
# 77 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	msgbox CitrusIsland_PlayerHouse_Outfit_Text_3
# 78 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	closemessage
# 79 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	applymovement LOCALID_CITRUS_RIVAL, CitrusIsland_PlayerHouse_Movement_RivalLeave
# 80 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	waitmovement 0
# 81 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	playse SE_DOOR
# 82 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	removeobject LOCALID_CITRUS_RIVAL
# 83 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	setflag FLAG_SYS_SAVE_GET
# 85 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	release
	end


# 89 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
CitrusIsland_PlayerHouse_Movement_RivalLeave:
# 90 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 90 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 90 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 90 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_right
# 91 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 91 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 91 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 91 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_down
# 92 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	step_end

# 95 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
CitrusIsland_PlayerHouse_Movement_RivalReturns:
# 96 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_up
# 96 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_up
# 96 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_up
# 96 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_up
# 97 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_left
# 97 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_left
# 97 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_left
# 97 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	walk_left
# 98 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	step_end

CitrusIsland_PlayerHouse_Rival_Text_0:
# 13 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "SHIN'YA: Anegimi, you finally woke up!\n"
	.string "Took you long enough.\p"
	.string "Come on. Let's go to the shore.$"

CitrusIsland_PlayerHouse_Rival_Text_1:
# 16 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "FUUKA: Anigimi, good morning!\n"
	.string "Get ready and let us make haste.\l"
	.string "We have to reach the shore.$"

CitrusIsland_PlayerHouse_Rival_Text_2:
# 21 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "After all, today is the day! Finally, we\n"
	.string "will leave CITRUS ISLAND!\p"
	.string "PROF. ZELKOVA will give us a POKéMON,\n"
	.string "and then we can take part in the\l"
	.string "ELEMENTAL CONQUEST!$"

CitrusIsland_PlayerHouse_Rival_Text_3:
# 27 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "I wish MOM and DAD could see us.\p"
	.string "But then, you could kinda say it is their\n"
	.string "fault we were stuck there.$"

CitrusIsland_PlayerHouse_Rival_Text_4:
# 33 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Hey, don't get angry now. T'was a joke.\n"
	.string "I have to deal with it somehow.\p"
	.string "I'll go first. I think MITSURU and\n"
	.string "RAKAN want to see us off, too.\p"
	.string "By the way, did 'ya decide what name\n"
	.string "you'll go by?$"

CitrusIsland_PlayerHouse_Rival_Text_5:
# 36 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "{PLAYER}, huh? … … …$"

CitrusIsland_PlayerHouse_Rival_Text_6:
# 43 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Well, I'll go by HECTOR.\n"
	.string "It fits me, right? … … …\p"
	.string " … … …'Nyway. I'm going, then!$"

CitrusIsland_PlayerHouse_Rival_Text_7:
# 45 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Maybe I'll choose IRENE as mine.\n"
	.string "It seems nice enough.\p"
	.string "… … …Anyway! We need to go!$"

CitrusIsland_PlayerHouse_Outfit_Text_0:
# 60 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Woah, I forgot!$"

CitrusIsland_PlayerHouse_Outfit_Text_1:
# 65 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "I know we need to wear those\n"
	.string "ALLIED-style clothes so that our\l"
	.string "fake identies are more believable…$"

CitrusIsland_PlayerHouse_Outfit_Text_2:
# 71 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "But I have packed our traditional\n"
	.string "pajamas anyway. Here, catch!$"

CitrusIsland_PlayerHouse_Outfit_Text_3:
# 77 "data/maps/CitrusIsland_PlayerHouse/scripts.pory"
	.string "Now, though, let's actually go!$"
