# 1 "data/maps/DurianGym/scripts.pory"

# 2 "data/maps/DurianGym/scripts.pory"
DurianGym_MapScripts::
# 3 "data/maps/DurianGym/scripts.pory"
	.byte 0

DurianGym_Junichi::
# 8 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_JUNICHI, DurianGym_Junichi_Text_0, DurianGym_Junichi_Text_1
# 9 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Junichi_Text_2
# 10 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_Darian::
# 15 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, DurianGym_Darian_Text_0, DurianGym_Darian_Text_1
# 16 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Darian_Text_2
# 17 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_ShiriAndBanjo::
# 22 "data/maps/DurianGym/scripts.pory"
	lock
# 23 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_ExclamationMark
# 24 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 25 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 26 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 27 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_0
# 28 "data/maps/DurianGym/scripts.pory"
	closemessage
# 29 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Pensive
# 30 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 31 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 32 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 33 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_1
# 34 "data/maps/DurianGym/scripts.pory"
	closemessage
# 35 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Heart
# 36 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 37 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 38 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 39 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_2
# 40 "data/maps/DurianGym/scripts.pory"
	closemessage
# 41 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 42 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 43 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 44 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 45 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_3
# 46 "data/maps/DurianGym/scripts.pory"
	closemessage
# 47 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 48 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 49 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 50 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 51 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_4
# 52 "data/maps/DurianGym/scripts.pory"
	closemessage
# 53 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 54 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 55 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 56 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 57 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_5
# 58 "data/maps/DurianGym/scripts.pory"
	closemessage
# 59 "data/maps/DurianGym/scripts.pory"
	trainerbattle_no_intro TRAINER_SHIRI_AND_BANJO_1, DurianGym_ShiriAndBanjo_Text_6
# 60 "data/maps/DurianGym/scripts.pory"
	goto_if_unset ! FLAG_RECEIVED_TM_ROCK_TOMB, DurianGym_ShiriAndBanjo_2
DurianGym_ShiriAndBanjo_1:
# 62 "data/maps/DurianGym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, DurianGym_ShiriAndBanjo_5
DurianGym_ShiriAndBanjo_4:
# 64 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_ShiriAndBanjo_2:
# 60 "data/maps/DurianGym/scripts.pory"
	goto DurianGym_ShiriAndBanjoDefeated
	goto DurianGym_ShiriAndBanjo_1

DurianGym_ShiriAndBanjo_5:
# 62 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_7
	goto DurianGym_ShiriAndBanjo_4


DurianGym_ShiriAndBanjoDefeated::
# 69 "data/maps/DurianGym/scripts.pory"
	lock
# 70 "data/maps/DurianGym/scripts.pory"
	message DurianGym_ShiriAndBanjoDefeated_Text_0
# 71 "data/maps/DurianGym/scripts.pory"
	waitmessage
# 72 "data/maps/DurianGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 73 "data/maps/DurianGym/scripts.pory"
	waitfanfare
# 74 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_1
# 75 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 76 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 77 "data/maps/DurianGym/scripts.pory"
	setvar VAR_0x8008, 1
# 78 "data/maps/DurianGym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 79 "data/maps/DurianGym/scripts.pory"
	giveitem ITEM_TM_SKILL_SWAP
# 80 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 81 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_2
# 82 "data/maps/DurianGym/scripts.pory"
	closemessage
# 83 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 84 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 85 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 86 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 87 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_3
# 88 "data/maps/DurianGym/scripts.pory"
	closemessage
# 89 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 90 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 91 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 92 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 93 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_4
# 94 "data/maps/DurianGym/scripts.pory"
	closemessage
# 95 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Movement_Punch
# 96 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 97 "data/maps/DurianGym/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 98 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Movement_Hit
# 99 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 100 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 101 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 102 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 103 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 104 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_5
# 105 "data/maps/DurianGym/scripts.pory"
	closemessage
# 106 "data/maps/DurianGym/scripts.pory"
	release
	end


# 110 "data/maps/DurianGym/scripts.pory"
Movement_Punch:
# 111 "data/maps/DurianGym/scripts.pory"
	face_right
# 112 "data/maps/DurianGym/scripts.pory"
	lock_facing_direction
# 113 "data/maps/DurianGym/scripts.pory"
	lock_anim
# 114 "data/maps/DurianGym/scripts.pory"
	walk_faster_right
# 115 "data/maps/DurianGym/scripts.pory"
	walk_faster_left
# 116 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 117 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 118 "data/maps/DurianGym/scripts.pory"
	face_down
# 119 "data/maps/DurianGym/scripts.pory"
	step_end

# 122 "data/maps/DurianGym/scripts.pory"
Movement_Hit:
# 123 "data/maps/DurianGym/scripts.pory"
	disable_jump_landing_ground_effect
# 124 "data/maps/DurianGym/scripts.pory"
	jump_in_place_left
# 125 "data/maps/DurianGym/scripts.pory"
	emote_exclamation_mark
# 126 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 127 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 128 "data/maps/DurianGym/scripts.pory"
	face_down
# 129 "data/maps/DurianGym/scripts.pory"
	step_end

DurianGym_Junichi_Text_0:
# 8 "data/maps/DurianGym/scripts.pory"
	.string "BANJO is wasting his time, playing for\n"
	.string "that UNOVAN's raspy voice! The\l"
	.string "spotlight should be on me!$"

DurianGym_Junichi_Text_1:
# 8 "data/maps/DurianGym/scripts.pory"
	.string "Why is the spotlight on you?!$"

DurianGym_Junichi_Text_2:
# 9 "data/maps/DurianGym/scripts.pory"
	.string "She ruined it all! I miss when we played\ntraditional TENKEIAN music…$"

DurianGym_Darian_Text_0:
# 15 "data/maps/DurianGym/scripts.pory"
	.string "I'll show SHIRI how a real guitarist\n"
	.string "plays AND fights!$"

DurianGym_Darian_Text_1:
# 15 "data/maps/DurianGym/scripts.pory"
	.string "Not like this!$"

DurianGym_Darian_Text_2:
# 16 "data/maps/DurianGym/scripts.pory"
	.string "Someday she'll realize she's wasting\ntime with that airhead!$"

DurianGym_ShiriAndBanjo_Text_0:
# 27 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: RIRI, RIRI, we got a challenger!\p"
	.string "SHIRI: Yes, BANBAN, I can see that.\nMy eyes work very fine, thanks.\p"
	.string "BANJO: It's our first challenger\ntogether!\p"
	.string "SHIRI: Then focus, my sweet PSYDUCK!\nYou have to introduce us!\p"
	.string "BANJO: Oh yeah! This is the FLASH of\nmy life, my girl RIRI!$"

DurianGym_ShiriAndBanjo_Text_1:
# 33 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: My dear SLOWPOKE… Anyway. We\nare STRAWBERRY TOWN’s PATH GUARDIANS.\lI am SHIRI, and this airheaded hunk…$"

DurianGym_ShiriAndBanjo_Text_2:
# 39 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Man, she called me a hunk!$"

DurianGym_ShiriAndBanjo_Text_3:
# 45 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: …WILL TELL YOU WHAT TYPE WE USE.$"

DurianGym_ShiriAndBanjo_Text_4:
# 51 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Yes, ma’am!\n"
	.string "We use… ROCK-types, right?$"

DurianGym_ShiriAndBanjo_Text_5:
# 57 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: … … … … …\n"
	.string "… … … … …\l"
	.string "WE USE SOUND-TYPES, SCATTERBUG BRAIN!\p"
	.string "ENOUGH! Let's start the battle, c'mon!$"

DurianGym_ShiriAndBanjo_Text_6:
# 59 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Dude, that was sick!\n"
	.string "SHIRI: Tch… quit praising 'em, we LOST!\p"
	.string "BANJO: So, we give ‘em their STAMP,\n"
	.string "right?\n"
	.string "SHIRI: I can’t do this…\p"
	.string "(Snatches {PLAYER}’s TRAINER CARD\n"
	.string "and slaps the LIVEHOOD STAMP on it.)$"

DurianGym_ShiriAndBanjo_Text_7:
# 62 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: 'Ya smashed us like a guitar!\p"
	.string "SHIRI: And what SEEDOTCASE would smash one?!$"

DurianGym_ShiriAndBanjoDefeated_Text_0:
# 70 "data/maps/DurianGym/scripts.pory"
	.string "{PLAYER} received the LIVEHOOD STAMP\nfrom SHIRI & BANJO.$"

DurianGym_ShiriAndBanjoDefeated_Text_1:
# 74 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: With the LIVEHOOD STAMP, uh…\n"
	.string "you can use POKéMON up to… LV 30…?\p"
	.string "SHIRI: …LV 20. It's LV 20. Also…\n"
	.string "orders from the LEAGUE. Take this.$"

DurianGym_ShiriAndBanjoDefeated_Text_2:
# 81 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: It’s TM48, containing ROUND.\n"
	.string "Unlike… someone, I hope you know what a\l"
	.string "TECHNICAL MACHINE is, right…? …Right?$"

DurianGym_ShiriAndBanjoDefeated_Text_3:
# 87 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Heh… I forgot to teach it\nto my NOIBAT…$"

DurianGym_ShiriAndBanjoDefeated_Text_4:
# 93 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: … … … … … …\n"
	.string "… … … … … …\p"
	.string "You… are… a total IDIOT!$"

DurianGym_ShiriAndBanjoDefeated_Text_5:
# 104 "data/maps/DurianGym/scripts.pory"
	.string "ANYWAY! It will teach a POKéMON the move\n"
	.string "ROUND. It gets stronger if a POKéMON\l"
	.string "uses it after its ally did.$"
