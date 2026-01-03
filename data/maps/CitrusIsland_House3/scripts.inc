CitrusIsland_House3_MapScripts::
	.byte 0


CitrusIsland_House3_Kunoichi::
# 4 "data/maps/CitrusIsland_House3/scripts.pory"
	lock
# 5 "data/maps/CitrusIsland_House3/scripts.pory"
	faceplayer
# 6 "data/maps/CitrusIsland_House3/scripts.pory"
	goto_if_unset FLAG_TOWN_MAP_GET, CitrusIsland_House3_Kunoichi_2
# 8 "data/maps/CitrusIsland_House3/scripts.pory"
	msgbox CitrusIsland_House3_Kunoichi_Text_0
CitrusIsland_House3_Kunoichi_1:
# 10 "data/maps/CitrusIsland_House3/scripts.pory"
	closemessage
# 11 "data/maps/CitrusIsland_House3/scripts.pory"
	release
	end

CitrusIsland_House3_Kunoichi_2:
# 6 "data/maps/CitrusIsland_House3/scripts.pory"
	call CitrusIsland_House3_TownMap
	goto CitrusIsland_House3_Kunoichi_1


CitrusIsland_House3_TownMap::
# 16 "data/maps/CitrusIsland_House3/scripts.pory"
	lock
# 17 "data/maps/CitrusIsland_House3/scripts.pory"
	applymovement LOCALID_CITRUS_KUNOICHI, Common_Movement_Angry
# 18 "data/maps/CitrusIsland_House3/scripts.pory"
	waitmovement 48
# 19 "data/maps/CitrusIsland_House3/scripts.pory"
	msgbox CitrusIsland_House3_TownMap_Text_0
# 22 "data/maps/CitrusIsland_House3/scripts.pory"
	closemessage
# 23 "data/maps/CitrusIsland_House3/scripts.pory"
	applymovement LOCALID_CITRUS_KUNOICHI, Common_Movement_ExclamationMark
# 24 "data/maps/CitrusIsland_House3/scripts.pory"
	waitmovement 48
# 25 "data/maps/CitrusIsland_House3/scripts.pory"
	faceplayer
# 26 "data/maps/CitrusIsland_House3/scripts.pory"
	msgbox CitrusIsland_House3_TownMap_Text_1
# 29 "data/maps/CitrusIsland_House3/scripts.pory"
	closemessage
# 30 "data/maps/CitrusIsland_House3/scripts.pory"
	applymovement LOCALID_CITRUS_KUNOICHI, Common_Movement_Pensive
# 31 "data/maps/CitrusIsland_House3/scripts.pory"
	msgbox CitrusIsland_House3_TownMap_Text_2
# 35 "data/maps/CitrusIsland_House3/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 36 "data/maps/CitrusIsland_House3/scripts.pory"
	setflag FLAG_TOWN_MAP_GET
# 37 "data/maps/CitrusIsland_House3/scripts.pory"
	release
	end


CitrusIsland_House3_Kunoichi_Text_0:
# 8 "data/maps/CitrusIsland_House3/scripts.pory"
	.string "Good luck, {PLAYER}-denka…$"

CitrusIsland_House3_TownMap_Text_0:
# 19 "data/maps/CitrusIsland_House3/scripts.pory"
	.string "Tch… I wonder if it was worth it,\n"
	.string "being exhiled here just because I\l"
	.string "supported the SUMERAGI dynasty…$"

CitrusIsland_House3_TownMap_Text_1:
# 26 "data/maps/CitrusIsland_House3/scripts.pory"
	.string "ALMIGHTY TENKEI… {PLAYER}-denka,\n"
	.string "I beg your forgiveness for that…\l"
	.string "outburst… of mine…$"

CitrusIsland_House3_TownMap_Text_2:
# 31 "data/maps/CitrusIsland_House3/scripts.pory"
	.string "I have heard that you will be\n"
	.string "leaving the ISLAND, yes…?\p"
	.string "Then this TOWN MAP will be of great\n"
	.string "help in your journey…$"
