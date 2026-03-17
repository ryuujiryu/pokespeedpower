# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_YESNO
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove	
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "The name's JACK. You are not in for\n"
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a drink, are you?\p"
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach back any moves your POKéMON\n"
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "forgot for free. What do you say?$"
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that POKéMON.$"
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Well, if your POKéMON need to learn a\n"
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "move, come back anytime.$"
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I cs merely an EGG!$"
