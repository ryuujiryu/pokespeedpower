# 1 "data/maps/DurianGym/scripts.pory"

# 2 "data/maps/DurianGym/scripts.pory"
DurianGym_MapScripts::
# 3 "data/maps/DurianGym/scripts.pory"
	.byte 0
# 4 "data/maps/DurianGym/scripts.pory"

# 5 "data/maps/DurianGym/scripts.pory"
DurianGym_EventScript_Junichi::
# 6 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_JUNICHI, DurianGym_Text_JunichiIntro, DurianGym_Text_JunichiDefeat
# 7 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Text_JunichiPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/DurianGym/scripts.pory"
	end
# 9 "data/maps/DurianGym/scripts.pory"

# 10 "data/maps/DurianGym/scripts.pory"
DurianGym_EventScript_Darian::
# 11 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, DurianGym_Text_DarianIntro, DurianGym_Text_DarianDefeat
# 12 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/DurianGym/scripts.pory"
	end
# 14 "data/maps/DurianGym/scripts.pory"

# 15 "data/maps/DurianGym/scripts.pory"
DurianGym_EventScript_ShiriAndBanjo::
# 16 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_SHIRI_AND_BANJO_1, DurianGym_Text_ShiriAndBanjoIntro, DurianGym_Text_ShiriAndBanjoDefeat
# 17 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Text_ShiriAndBanjoPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/DurianGym/scripts.pory"
	end
# 19 "data/maps/DurianGym/scripts.pory"

# 20 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_JunichiIntro:
# 21 "data/maps/DurianGym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 22 "data/maps/DurianGym/scripts.pory"
	.string "I'll show you why we're better!$"
# 23 "data/maps/DurianGym/scripts.pory"

# 24 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_JunichiDefeat:
# 25 "data/maps/DurianGym/scripts.pory"
	.string "You were too good for me…$"
# 26 "data/maps/DurianGym/scripts.pory"

# 27 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_JunichiPostBattle:
# 28 "data/maps/DurianGym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 29 "data/maps/DurianGym/scripts.pory"
	.string "type's terrifying power!$"
# 30 "data/maps/DurianGym/scripts.pory"

# 31 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_DarianIntro:
# 32 "data/maps/DurianGym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 33 "data/maps/DurianGym/scripts.pory"
	.string "I'll show you why we're better!$"
# 34 "data/maps/DurianGym/scripts.pory"

# 35 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_DarianDefeat:
# 36 "data/maps/DurianGym/scripts.pory"
	.string "You were too good for me…$"
# 37 "data/maps/DurianGym/scripts.pory"

# 38 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_DarianPostBattle:
# 39 "data/maps/DurianGym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 40 "data/maps/DurianGym/scripts.pory"
	.string "type's terrifying power!$"
# 41 "data/maps/DurianGym/scripts.pory"

# 42 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_ShiriAndBanjoIntro:
# 43 "data/maps/DurianGym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 44 "data/maps/DurianGym/scripts.pory"
	.string "I'll show you why we're better!$"
# 45 "data/maps/DurianGym/scripts.pory"

# 46 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_ShiriAndBanjoDefeat:
# 47 "data/maps/DurianGym/scripts.pory"
	.string "You were too good for me…$"
# 48 "data/maps/DurianGym/scripts.pory"

# 49 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_ShiriAndBanjoPostBattle:
# 50 "data/maps/DurianGym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 51 "data/maps/DurianGym/scripts.pory"
	.string "type's terrifying power!$"
