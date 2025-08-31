# 1 "data/maps/DurianTown/scripts.pory"

# 2 "data/maps/DurianTown/scripts.pory"
DurianTown_MapScripts::
# 3 "data/maps/DurianTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DurianTown_OnTransition
# 4 "data/maps/DurianTown/scripts.pory"
	.byte 0

# 6 "data/maps/DurianTown/scripts.pory"

# 7 "data/maps/DurianTown/scripts.pory"

# 8 "data/maps/DurianTown/scripts.pory"
DurianTown_OnTransition:
# 9 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_VISITED_DURIAN_TOWN
# 10 "data/maps/DurianTown/scripts.pory"
	end
# 11 "data/maps/DurianTown/scripts.pory"

# 12 "data/maps/DurianTown/scripts.pory"
DurianTown_EventScript_GymSign::
# 13 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Text_GymSign, MSGBOX_SIGN
# 14 "data/maps/DurianTown/scripts.pory"
	end
# 15 "data/maps/DurianTown/scripts.pory"

# 16 "data/maps/DurianTown/scripts.pory"
DurianTown_EventScript_CitySign::
# 17 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Text_CitySign, MSGBOX_SIGN
# 18 "data/maps/DurianTown/scripts.pory"
	end
# 19 "data/maps/DurianTown/scripts.pory"

# 20 "data/maps/DurianTown/scripts.pory"
DurianTown_EventScript_KurtHouseSign::
# 21 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_Text_KurtHouseSign, MSGBOX_SIGN
# 22 "data/maps/DurianTown/scripts.pory"
	end
# 23 "data/maps/DurianTown/scripts.pory"

# 24 "data/maps/DurianTown/scripts.pory"
DurianTown_Text_GymSign:
# 25 "data/maps/DurianTown/scripts.pory"
	.string "ELEMENTAL TEMPLE OF LIVEHOOD\n"
# 26 "data/maps/DurianTown/scripts.pory"
	.string "GUARDIANS: SHIRI&BANJO\l"
# 27 "data/maps/DurianTown/scripts.pory"
	.string "“The fearful harmony!”$"
# 28 "data/maps/DurianTown/scripts.pory"

# 29 "data/maps/DurianTown/scripts.pory"
DurianTown_Text_CitySign:
# 30 "data/maps/DurianTown/scripts.pory"
	.string "DURIAN TOWN\n"
# 31 "data/maps/DurianTown/scripts.pory"
	.string "“United with nature and POKéMON”$"
# 32 "data/maps/DurianTown/scripts.pory"

# 33 "data/maps/DurianTown/scripts.pory"
DurianTown_Text_KurtHouseSign:
# 34 "data/maps/DurianTown/scripts.pory"
	.string "KURT'S HOUSE$"
