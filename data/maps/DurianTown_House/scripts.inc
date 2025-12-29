DurianTown_House_MapScripts::
	.byte 0


DurianTown_House_Lass::
# 4 "data/maps/DurianTown_House/scripts.pory"
	lock
# 5 "data/maps/DurianTown_House/scripts.pory"
	faceplayer
# 6 "data/maps/DurianTown_House/scripts.pory"
	msgbox DurianTown_House_Lass_Text_0
# 9 "data/maps/DurianTown_House/scripts.pory"
	release
	end


DurianTown_House_Beauty::
# 14 "data/maps/DurianTown_House/scripts.pory"
	lock
# 15 "data/maps/DurianTown_House/scripts.pory"
	faceplayer
# 16 "data/maps/DurianTown_House/scripts.pory"
	msgbox DurianTown_House_Beauty_Text_0
# 17 "data/maps/DurianTown_House/scripts.pory"
	closemessage
# 18 "data/maps/DurianTown_House/scripts.pory"
	applymovement LOCALID_DURIANTOWN_WOMAN, Common_Movement_Angry
# 19 "data/maps/DurianTown_House/scripts.pory"
	msgbox DurianTown_House_Beauty_Text_1
# 20 "data/maps/DurianTown_House/scripts.pory"
	waitmovement 0
# 21 "data/maps/DurianTown_House/scripts.pory"
	release
	end


DurianTown_House_Lass_Text_0:
# 6 "data/maps/DurianTown_House/scripts.pory"
	.string "This town may be pretty, but there\n"
	.string "is nothing to do here!\p"
	.string "I wish I had a permit to move to\n"
	.string "WATERMELON CITY instead.$"

DurianTown_House_Beauty_Text_0:
# 16 "data/maps/DurianTown_House/scripts.pory"
	.string "We tried to move to WATERMELON CITY,\n"
	.string "but were automatically refused from\l"
	.string "the good neighbourhoods, forcing us\p"
	.string "to spend ¥350.000 in an attempt to at\n"
	.string "least get a permit to move to the\l"
	.string "SWORD ALLEY or VIOLET STREET…$"

DurianTown_House_Beauty_Text_1:
# 19 "data/maps/DurianTown_House/scripts.pory"
	.string "We had to sell all our property to\n"
	.string "afford the fee, too… … …\p"
	.string "Only to be refused on the basis that if\n"
	.string "we did not own any business, etc… then\l"
	.string "we couldn't afford living there anyway…$"
