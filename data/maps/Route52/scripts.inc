Route52_MapScripts::
	.byte 0


Route52_ReligiousDebate::
# 5 "data/maps/Route52/scripts.pory"
	lock
# 6 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 7 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 8 "data/maps/Route52/scripts.pory"
	playbgm MUS_TRICK_HOUSE, FALSE
# 9 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Angry
# 10 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 11 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_WalkInPlaceLeft
# 12 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 13 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Delay48
# 14 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_0
# 16 "data/maps/Route52/scripts.pory"
	closemessage
# 17 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Music
# 18 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Delay48
# 20 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_1
# 22 "data/maps/Route52/scripts.pory"
	closemessage
# 23 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Angry
# 24 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_WalkInPlaceRight
# 26 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Delay48
# 28 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_2
# 30 "data/maps/Route52/scripts.pory"
	closemessage
# 31 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 32 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 34 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route52/scripts.pory"
	setspeaker Route52_ReligiousDebate_Text_3
# 36 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_4
# 37 "data/maps/Route52/scripts.pory"
	closemessage
# 38 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Angry
# 39 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_WalkInPlaceLeft
# 41 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Delay48
# 43 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_5
# 45 "data/maps/Route52/scripts.pory"
	closemessage
# 46 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Angry
# 47 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_WalkInPlaceRight
# 49 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Delay48
# 51 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_6
# 53 "data/maps/Route52/scripts.pory"
	closemessage
# 54 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Pensive
# 55 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Delay48
# 57 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_7
# 59 "data/maps/Route52/scripts.pory"
	closemessage
# 60 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Pensive
# 61 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 63 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route52/scripts.pory"
	setspeaker Route52_ReligiousDebate_Text_3
# 65 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_8
# 66 "data/maps/Route52/scripts.pory"
	closemessage
# 67 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Music
# 68 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_Delay48
# 70 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_9
# 72 "data/maps/Route52/scripts.pory"
	closemessage
# 73 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Angry
# 74 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_WalkInPlaceLeft
# 76 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_Delay48
# 78 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_10
# 80 "data/maps/Route52/scripts.pory"
	closemessage
# 81 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Angry
# 82 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 84 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceUp
# 86 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route52/scripts.pory"
	setspeaker Route52_ReligiousDebate_Text_3
# 88 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_11
# 89 "data/maps/Route52/scripts.pory"
	closemessage
# 90 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_ExclamationMark
# 91 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_ExclamationMark
# 92 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_WalkInPlaceDown
# 94 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_WalkInPlaceDown
# 95 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route52/scripts.pory"
	msgbox Route52_ReligiousDebate_Text_12
# 97 "data/maps/Route52/scripts.pory"
	closemessage
# 98 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Angry
# 99 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 101 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 103 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_F, Common_Movement_FaceLeft
# 105 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_ROUTE52_RELIGIOUSNUTJOB_M, Common_Movement_FaceRight
# 106 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route52/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 108 "data/maps/Route52/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route52/scripts.pory"
	fadedefaultbgm
# 110 "data/maps/Route52/scripts.pory"
	release
	end


Route52_ReligiousDebate_Text_0:
# 15 "data/maps/Route52/scripts.pory"
	.string "One more word, and ALMIGHTY TENKEI\n"
	.string "will zap you right where you stand!$"

Route52_ReligiousDebate_Text_1:
# 21 "data/maps/Route52/scripts.pory"
	.string "Praise be to Her holy THUNDER, for\n"
	.string "it will punish all the heretics!$"

Route52_ReligiousDebate_Text_2:
# 29 "data/maps/Route52/scripts.pory"
	.string "I won't even tell you to get lost, for\n"
	.string "you are already lead astray by lies!\p"
	.string "Everyone knows that ALMIGHTY TENKEI\n"
	.string "punishes with His holy fists, not by\l"
	.string "some puny lightning attack!$"

Route52_ReligiousDebate_Text_3:
# 35 "data/maps/Route52/scripts.pory"
	.string "{PLAYER}$"

Route52_ReligiousDebate_Text_4:
# 36 "data/maps/Route52/scripts.pory"
	.string "Sorry, can I get through and then\n"
	.string "you can go back to arguing…?$"

Route52_ReligiousDebate_Text_5:
# 44 "data/maps/Route52/scripts.pory"
	.string "Don't you dare refer to Her like that\n"
	.string "again, you brutish bald man!$"

Route52_ReligiousDebate_Text_6:
# 52 "data/maps/Route52/scripts.pory"
	.string "I am not bald, you vain maiden!\p"
	.string "We monks of the TEKKEN GAKKAI have to\n"
	.string "part with all distractions which\l"
	.string "prevent us from honing our bodies!\p"
	.string "We focus on martial arts, not on\n"
	.string "playing with our hair!$"

Route52_ReligiousDebate_Text_7:
# 58 "data/maps/Route52/scripts.pory"
	.string "But it's my fault for expecting a weirdo\n"
	.string "from the KAMINARI-NO-IE to know\l"
	.string "anything about non-possession.$"

Route52_ReligiousDebate_Text_8:
# 65 "data/maps/Route52/scripts.pory"
	.string "I SAID, can I get through…?!$"

Route52_ReligiousDebate_Text_9:
# 71 "data/maps/Route52/scripts.pory"
	.string "After all, was KAMINARI-NO-IE's leader\n"
	.string "not recently found guilty by ATTORNEY\l"
	.string "GENERAL JUDY of stealing offerings?$"

Route52_ReligiousDebate_Text_10:
# 79 "data/maps/Route52/scripts.pory"
	.string "Oh, that's IT!\p"
	.string "Send your POKéMON out, you scum!$"

Route52_ReligiousDebate_Text_11:
# 88 "data/maps/Route52/scripts.pory"
	.string "LET ME GET THROUGH, YOU\n"
	.string "DAMNED MUKHEADS!$"

Route52_ReligiousDebate_Text_12:
# 96 "data/maps/Route52/scripts.pory"
	.string "Not till this heretic gets away first!$"
