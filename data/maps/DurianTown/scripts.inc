DurianTown_MapScripts::
# 2 "data/maps/DurianTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DurianTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DurianTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DurianTown/scripts.pory"
	setflag FLAG_VISITED_DURIAN_TOWN
	end


DurianTown_GymSign::
# 9 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_GymSign_Text_0
# 10 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_CitySign::
# 15 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_CitySign_Text_0
# 16 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_KurtSign::
# 21 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_KurtSign_Text_0
	end


DurianTown_KurtApprentice::
# 26 "data/maps/DurianTown/scripts.pory"
	lock
# 27 "data/maps/DurianTown/scripts.pory"
	faceplayer
# 28 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_KurtApprentice_Text_0
# 29 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_LittleGirl::
# 34 "data/maps/DurianTown/scripts.pory"
	lock
# 35 "data/maps/DurianTown/scripts.pory"
	faceplayer
# 36 "data/maps/DurianTown/scripts.pory"
	msgbox DurianTown_LittleGirl_Text_0
# 37 "data/maps/DurianTown/scripts.pory"
	release
	end


DurianTown_GymSign_Text_0:
# 9 "data/maps/DurianTown/scripts.pory"
	.string "ELEMENTAL TEMPLE OF LIVEHOOD\n"
	.string "GUARDIANS: SHIRI&BANJO\l"
	.string "“The fearful harmony!”$"

DurianTown_CitySign_Text_0:
# 15 "data/maps/DurianTown/scripts.pory"
	.string "STRAWBERRY TOWN\n"
	.string "“United with nature and POKéMON”$"

DurianTown_KurtSign_Text_0:
# 21 "data/maps/DurianTown/scripts.pory"
	.string "KURT'S HOUSE$"

DurianTown_KurtApprentice_Text_0:
# 28 "data/maps/DurianTown/scripts.pory"
	.string "Are you a POKéMON WIELDER? Then come\n"
	.string "buy some handcrafted POKé BALLS!$"

DurianTown_LittleGirl_Text_0:
# 36 "data/maps/DurianTown/scripts.pory"
	.string "I'm pretending to be a gate guard like\n"
	.string "my grandpa when he was younger!$"
