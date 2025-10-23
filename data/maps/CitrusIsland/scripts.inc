# 1 "data/maps/CitrusIsland/scripts.pory"

# 2 "data/maps/CitrusIsland/scripts.pory"
CitrusIsland_MapScripts::
# 3 "data/maps/CitrusIsland/scripts.pory"
	.byte 0

CitrusIsland_Samurai::
# 7 "data/maps/CitrusIsland/scripts.pory"
	lock
# 8 "data/maps/CitrusIsland/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Samurai_2
# 13 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Samurai_Text_1
# 14 "data/maps/CitrusIsland/scripts.pory"
	closemessage
CitrusIsland_Samurai_1:
# 16 "data/maps/CitrusIsland/scripts.pory"
	release
	end

CitrusIsland_Samurai_2:
# 10 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Samurai_Text_0
# 11 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	goto CitrusIsland_Samurai_1


CitrusIsland_Girl::
# 21 "data/maps/CitrusIsland/scripts.pory"
	lock
# 22 "data/maps/CitrusIsland/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/CitrusIsland/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_ne CitrusIsland_Girl_1
# 27 "data/maps/CitrusIsland/scripts.pory"
	release
# 28 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Girl_Text_1
# 29 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	end

CitrusIsland_Girl_1:
# 24 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_Girl_Text_0
# 25 "data/maps/CitrusIsland/scripts.pory"
	closemessage
	return


CitrusIsland_House::
# 35 "data/maps/CitrusIsland/scripts.pory"
	msgbox CitrusIsland_House_Text_0
# 36 "data/maps/CitrusIsland/scripts.pory"
	release
	end


CitrusIsland_Samurai_Text_0:
# 10 "data/maps/CitrusIsland/scripts.pory"
	.string "Fear not, FUUKA-denka!\n"
	.string "All of us have kept training, even\p"
	.string "after being sent here! We are ready\n"
	.string "to serve you forever!$"

CitrusIsland_Samurai_Text_1:
# 13 "data/maps/CitrusIsland/scripts.pory"
	.string "Fear not, SHIN'YA-denka!\n"
	.string "All of us have kept training, even\p"
	.string "after being sent here! We are ready\n"
	.string "to serve you forever!$"

CitrusIsland_Girl_Text_0:
# 24 "data/maps/CitrusIsland/scripts.pory"
	.string "FUUKA-denka, I have heard you are\n"
	.string "leaving for the mainland. Stay safe!$"

CitrusIsland_Girl_Text_1:
# 28 "data/maps/CitrusIsland/scripts.pory"
	.string "SHIN'YA-denka, I have heard you are\n"
	.string "leaving for the mainland. Stay safe!$"

CitrusIsland_House_Text_0:
# 35 "data/maps/CitrusIsland/scripts.pory"
	.string "SUMERAGI CASTLE$"
