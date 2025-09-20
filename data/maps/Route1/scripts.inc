# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"
 
# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_Teacher::
# 6 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RockyBeach, MSGBOX_NPC
# 7 "data/maps/Route1/scripts.pory"
	end
# 8 "data/maps/Route1/scripts.pory"

# 9 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSignPort::
# 10 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSignPort, MSGBOX_SIGN
# 11 "data/maps/Route1/scripts.pory"
	end
# 12 "data/maps/Route1/scripts.pory"

# 13 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSignDurian::
# 14 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSignDurian, MSGBOX_SIGN
# 15 "data/maps/Route1/scripts.pory"
	end
# 16 "data/maps/Route1/scripts.pory"

# 17 "data/maps/Route1/scripts.pory"
Route1_EventScript_AromaGirl::
# 18 "data/maps/Route1/scripts.pory"
	lock
# 19 "data/maps/Route1/scripts.pory"
	faceplayer
# 20 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route1_EventScript_GiveWailmerPail
# 21 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 22 "data/maps/Route1/scripts.pory"
	release
# 23 "data/maps/Route1/scripts.pory"
	end
# 24 "data/maps/Route1/scripts.pory"

# 25 "data/maps/Route1/scripts.pory"
Route1_EventScript_GiveWailmerPail::
# 26 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 27 "data/maps/Route1/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 28 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 29 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 30 "data/maps/Route1/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 31 "data/maps/Route1/scripts.pory"
	release
# 32 "data/maps/Route1/scripts.pory"
	end
# 33 "data/maps/Route1/scripts.pory"

# 34 "data/maps/Route1/scripts.pory"

# 35 "data/maps/Route1/scripts.pory"
Route1_EventScript_SodaPopShop::
# 36 "data/maps/Route1/scripts.pory"
	showmoneybox 0, 0
# 37 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WantToBuySodaPop, MSGBOX_YESNO
# 38 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route1_EventScript_BuySodaPop
# 39 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ThatsTooBad, MSGBOX_DEFAULT
# 40 "data/maps/Route1/scripts.pory"
	hidemoneybox
# 41 "data/maps/Route1/scripts.pory"
	release
# 42 "data/maps/Route1/scripts.pory"
	end
# 43 "data/maps/Route1/scripts.pory"

# 44 "data/maps/Route1/scripts.pory"

# 45 "data/maps/Route1/scripts.pory"
Route1_EventScript_BuySodaPop::
# 46 "data/maps/Route1/scripts.pory"
	checkmoney 300
# 47 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route1_EventScript_NotEnoughMoney
# 48 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 49 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route1_EventScript_NotEnoughSpace
# 50 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_HereYouGo, MSGBOX_DEFAULT
# 51 "data/maps/Route1/scripts.pory"
	removemoney 300
# 52 "data/maps/Route1/scripts.pory"
	updatemoneybox
# 53 "data/maps/Route1/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
# 54 "data/maps/Route1/scripts.pory"
	hidemoneybox
# 55 "data/maps/Route1/scripts.pory"
	giveitem ITEM_SODA_POP
# 56 "data/maps/Route1/scripts.pory"
.else
# 57 "data/maps/Route1/scripts.pory"
	giveitem ITEM_SODA_POP
# 58 "data/maps/Route1/scripts.pory"
	hidemoneybox
# 59 "data/maps/Route1/scripts.pory"
.endif
# 60 "data/maps/Route1/scripts.pory"
	release
# 61 "data/maps/Route1/scripts.pory"
	end
# 62 "data/maps/Route1/scripts.pory"

# 63 "data/maps/Route1/scripts.pory"
Route1_Text_YouCanHaveThis:
# 64 "data/maps/Route1/scripts.pory"
	.string "La-la-laœ… …\p"
# 65 "data/maps/Route1/scripts.pory"
	.string "Hmm…? Oh, hello!\n"
# 66 "data/maps/Route1/scripts.pory"
	.string "Are you into gardening, too?\p"
# 67 "data/maps/Route1/scripts.pory"
	.string "But I see that you don't have a\n"
# 68 "data/maps/Route1/scripts.pory"
	.string "WAILMER PAIL! Here, I got a spare!$"
# 69 "data/maps/Route1/scripts.pory"

# 70 "data/maps/Route1/scripts.pory"
Route1_Text_WailmerPailExplanation:
# 71 "data/maps/Route1/scripts.pory"
	.string "While BERRY plants are growing,\n"
# 72 "data/maps/Route1/scripts.pory"
	.string "water them with the WAILMER PAIL.\p"
# 73 "data/maps/Route1/scripts.pory"
	.string "Oh, another thing.\p"
# 74 "data/maps/Route1/scripts.pory"
	.string "If you don't pick BERRIES for a while,\n"
# 75 "data/maps/Route1/scripts.pory"
	.string "they'll drop off onto the ground.\l"
# 76 "data/maps/Route1/scripts.pory"
	.string "But they'll sprout again.\p"
# 77 "data/maps/Route1/scripts.pory"
	.string "Isn't that awesome?\n"
# 78 "data/maps/Route1/scripts.pory"
	.string "It's like they have the will to live.$"
# 79 "data/maps/Route1/scripts.pory"

# 80 "data/maps/Route1/scripts.pory"
Route1_Text_RockyBeach:
# 81 "data/maps/Route1/scripts.pory"
	.string "Get a vacation, they said!\n"
# 82 "data/maps/Route1/scripts.pory"
	.string "It will be fun, they said!\p"
# 83 "data/maps/Route1/scripts.pory"
	.string "I can't even swim with all\n"
# 84 "data/maps/Route1/scripts.pory"
	.string "these rocks!$"
# 85 "data/maps/Route1/scripts.pory"

# 86 "data/maps/Route1/scripts.pory"
Route1_Text_RouteSignPort:
# 87 "data/maps/Route1/scripts.pory"
	.string "ROUTE 51\n"
# 88 "data/maps/Route1/scripts.pory"
	.string "{DOWN_ARROW} ROUTE 51 PORT$"
# 89 "data/maps/Route1/scripts.pory"

# 90 "data/maps/Route1/scripts.pory"
Route1_Text_RouteSignDurian:
# 91 "data/maps/Route1/scripts.pory"
	.string "ROUTE 51\n"
# 92 "data/maps/Route1/scripts.pory"
	.string "{UP_ARROW} STRAWBERRY TOWN$"
# 93 "data/maps/Route1/scripts.pory"

# 94 "data/maps/Route1/scripts.pory"
Route1_Text_WantToBuySodaPop:
# 95 "data/maps/Route1/scripts.pory"
	.string "On such a hot beach, only a\n"
# 96 "data/maps/Route1/scripts.pory"
	.string "a SODA POP can quench your thirst!\p"
# 97 "data/maps/Route1/scripts.pory"
	.string "Just ¥300 a bottle!\n"
# 98 "data/maps/Route1/scripts.pory"
	.string "Buy some!$"
# 99 "data/maps/Route1/scripts.pory"

# 100 "data/maps/Route1/scripts.pory"
Route1_Text_ThatsTooBad:
# 101 "data/maps/Route1/scripts.pory"
	.string "No?\n"
# 102 "data/maps/Route1/scripts.pory"
	.string "That's too bad.$"
# 103 "data/maps/Route1/scripts.pory"

# 104 "data/maps/Route1/scripts.pory"
Route1_Text_HereYouGo:
# 105 "data/maps/Route1/scripts.pory"
	.string "Here you go!$"
# 106 "data/maps/Route1/scripts.pory"

# 107 "data/maps/Route1/scripts.pory"
Route1_EventScript_Tiana::
# 108 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route1_Text_TianaIntro, Route1_Text_TianaDefeated
# 109 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route1/scripts.pory"
	end
# 111 "data/maps/Route1/scripts.pory"

# 112 "data/maps/Route1/scripts.pory"
Route1_EventScript_Calvin::
# 113 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_CALVIN, Route1_Text_CalvinIntro, Route1_Text_CalvinDefeated
# 114 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route1/scripts.pory"
	end
# 116 "data/maps/Route1/scripts.pory"

# 117 "data/maps/Route1/scripts.pory"
Route1_EventScript_Ally::
# 118 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ALLY, Route1_Text_AllyIntro, Route1_Text_AllyDefeated
# 119 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_AllyPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route1/scripts.pory"
	end
# 121 "data/maps/Route1/scripts.pory"

# 122 "data/maps/Route1/scripts.pory"
Route1_EventScript_Rick::
# 123 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route1_Text_RickIntro, Route1_Text_RickDefeated
# 124 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route1/scripts.pory"
	end
# 126 "data/maps/Route1/scripts.pory"

# 127 "data/maps/Route1/scripts.pory"
Route1_EventScript_NotEnoughMoney::
# 128 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 129 "data/maps/Route1/scripts.pory"
	hidemoneybox
# 130 "data/maps/Route1/scripts.pory"
	release
# 131 "data/maps/Route1/scripts.pory"
	end
# 132 "data/maps/Route1/scripts.pory"

# 133 "data/maps/Route1/scripts.pory"
Route1_EventScript_NotEnoughSpace::
# 134 "data/maps/Route1/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 135 "data/maps/Route1/scripts.pory"
	hidemoneybox
# 136 "data/maps/Route1/scripts.pory"
	release
# 137 "data/maps/Route1/scripts.pory"
	end
# 138 "data/maps/Route1/scripts.pory"

# 139 "data/maps/Route1/scripts.pory"
Route1_Text_NotEnoughMoney:
# 140 "data/maps/Route1/scripts.pory"
	.string "You don't have the money.$"
