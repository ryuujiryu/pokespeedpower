# 1 "data/maps/DurianGym/scripts.pory"

# 2 "data/maps/DurianGym/scripts.pory"
DurianGym_MapScripts::
# 3 "data/maps/DurianGym/scripts.pory"
	.byte 0

DurianGym_Junichi::
# 8 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_SP_JUNICHI, DurianGym_Junichi_Text_0, DurianGym_Junichi_Text_1
# 9 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Junichi_Text_2
# 10 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_Darian::
# 15 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_SP_DARIAN, DurianGym_Darian_Text_0, DurianGym_Darian_Text_1
# 16 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Darian_Text_2
# 17 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_ShiriAndBanjo::
# 22 "data/maps/DurianGym/scripts.pory"
	lock
# 23 "data/maps/DurianGym/scripts.pory"
	checktrainerflag TRAINER_SP_JUNICHI
	goto_if 1, DurianGym_ShiriAndBanjo_4
DurianGym_ShiriAndBanjo_3:
# 27 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_0
DurianGym_ShiriAndBanjo_1:
# 29 "data/maps/DurianGym/scripts.pory"
	closemessage
# 30 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_ShiriAndBanjo_2:
# 24 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoCheckBadge
	goto DurianGym_ShiriAndBanjo_1

DurianGym_ShiriAndBanjo_4:
# 23 "data/maps/DurianGym/scripts.pory"
	checktrainerflag TRAINER_SP_DARIAN
	goto_if 1, DurianGym_ShiriAndBanjo_2
	goto DurianGym_ShiriAndBanjo_3


DurianGym_ShiriAndBanjoCheckBadge::
# 35 "data/maps/DurianGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, DurianGym_ShiriAndBanjoCheckBadge_2
# 37 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoCheckBadge_Text_0
DurianGym_ShiriAndBanjoCheckBadge_1:
# 39 "data/maps/DurianGym/scripts.pory"
	closemessage
# 40 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_ShiriAndBanjoCheckBadge_2:
# 35 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoBattle
	goto DurianGym_ShiriAndBanjoCheckBadge_1


DurianGym_ShiriAndBanjoBattle::
# 45 "data/maps/DurianGym/scripts.pory"
	lock
# 46 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_ExclamationMark
# 47 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 48 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 49 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 50 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_0
# 51 "data/maps/DurianGym/scripts.pory"
	closemessage
# 52 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Pensive
# 53 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 54 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 55 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 56 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_1
# 57 "data/maps/DurianGym/scripts.pory"
	closemessage
# 58 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Heart
# 59 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 60 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 61 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 62 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_2
# 63 "data/maps/DurianGym/scripts.pory"
	closemessage
# 64 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 65 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 66 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 67 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 68 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_3
# 69 "data/maps/DurianGym/scripts.pory"
	closemessage
# 70 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 71 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 72 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 73 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 74 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_4
# 75 "data/maps/DurianGym/scripts.pory"
	closemessage
# 76 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 77 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 78 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 79 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 80 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_5
# 81 "data/maps/DurianGym/scripts.pory"
	closemessage
# 82 "data/maps/DurianGym/scripts.pory"
	trainerbattle_no_intro TRAINER_SHIRI_AND_BANJO_1, DurianGym_ShiriAndBanjoBattle_Text_6
# 83 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoDefeated
	end


DurianGym_ShiriAndBanjoDefeated::
# 88 "data/maps/DurianGym/scripts.pory"
	lock
# 89 "data/maps/DurianGym/scripts.pory"
	message DurianGym_ShiriAndBanjoDefeated_Text_0
# 90 "data/maps/DurianGym/scripts.pory"
	waitmessage
# 91 "data/maps/DurianGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 92 "data/maps/DurianGym/scripts.pory"
	waitfanfare
# 93 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_1
# 94 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 95 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 96 "data/maps/DurianGym/scripts.pory"
	setvar VAR_0x8008, 1
# 97 "data/maps/DurianGym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 98 "data/maps/DurianGym/scripts.pory"
	giveitem ITEM_TM_SKILL_SWAP
# 99 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 100 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_2
# 101 "data/maps/DurianGym/scripts.pory"
	closemessage
# 102 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 103 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 104 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 105 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 106 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_3
# 107 "data/maps/DurianGym/scripts.pory"
	closemessage
# 108 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 109 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 110 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 111 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 112 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_4
# 113 "data/maps/DurianGym/scripts.pory"
	closemessage
# 114 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Movement_Punch
# 115 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 116 "data/maps/DurianGym/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 117 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Movement_Hit
# 118 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 119 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 120 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 121 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 122 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 123 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_5
# 124 "data/maps/DurianGym/scripts.pory"
	closemessage
# 125 "data/maps/DurianGym/scripts.pory"
	setvar VAR_RIVALS_STATE, 3
# 126 "data/maps/DurianGym/scripts.pory"
	release
	end


# 130 "data/maps/DurianGym/scripts.pory"
Movement_Punch:
# 131 "data/maps/DurianGym/scripts.pory"
	face_right
# 132 "data/maps/DurianGym/scripts.pory"
	lock_facing_direction
# 133 "data/maps/DurianGym/scripts.pory"
	lock_anim
# 134 "data/maps/DurianGym/scripts.pory"
	walk_faster_right
# 135 "data/maps/DurianGym/scripts.pory"
	walk_faster_left
# 136 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 137 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 138 "data/maps/DurianGym/scripts.pory"
	face_down
# 139 "data/maps/DurianGym/scripts.pory"
	step_end

# 142 "data/maps/DurianGym/scripts.pory"
Movement_Hit:
# 143 "data/maps/DurianGym/scripts.pory"
	disable_jump_landing_ground_effect
# 144 "data/maps/DurianGym/scripts.pory"
	jump_in_place_left
# 145 "data/maps/DurianGym/scripts.pory"
	emote_exclamation_mark
# 146 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 147 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 148 "data/maps/DurianGym/scripts.pory"
	face_down
# 149 "data/maps/DurianGym/scripts.pory"
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
	.string "The music is too loud!\n"
	.string "They cannot hear you!$"

DurianGym_ShiriAndBanjoCheckBadge_Text_0:
# 37 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: 'Ya smashed us like a guitar!\p"
	.string "SHIRI: And what SEEDOTCASE would\n"
	.string "smash one to begin with?!$"

DurianGym_ShiriAndBanjoBattle_Text_0:
# 50 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: RIRI, RIRI, we got a challenger!\p"
	.string "SHIRI: Yes, BANBAN, I can see that.\nMy eyes work very fine, thanks.\p"
	.string "BANJO: It's our first challenger\ntogether!\p"
	.string "SHIRI: Then focus, my sweet PSYDUCK!\nYou have to introduce us!\p"
	.string "BANJO: Oh yeah! This is the FLASH of\nmy life, my girl RIRI!$"

DurianGym_ShiriAndBanjoBattle_Text_1:
# 56 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: My dear SLOWPOKE… Anyway. We\nare STRAWBERRY TOWN’s PATH GUARDIANS.\lI am SHIRI, and this airheaded hunk…$"

DurianGym_ShiriAndBanjoBattle_Text_2:
# 62 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Man, she called me a hunk!$"

DurianGym_ShiriAndBanjoBattle_Text_3:
# 68 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: …WILL TELL YOU WHAT TYPE WE USE.$"

DurianGym_ShiriAndBanjoBattle_Text_4:
# 74 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Yes, ma’am!\n"
	.string "We use… ROCK-types, right?$"

DurianGym_ShiriAndBanjoBattle_Text_5:
# 80 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: … … … … …\n"
	.string "… … … … …\l"
	.string "WE USE SOUND-TYPES, SCATTERBUG BRAIN!\p"
	.string "ENOUGH! Let's start the battle, c'mon!$"

DurianGym_ShiriAndBanjoBattle_Text_6:
# 82 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Dude, that was sick!\n"
	.string "SHIRI: Tch… quit praising 'em, we LOST!\p"
	.string "BANJO: So, we give ‘em their STAMP,\n"
	.string "right?\n"
	.string "SHIRI: I can’t do this…\p"
	.string "(Snatches {PLAYER}’s TRAINER CARD\n"
	.string "and slaps the LIVEHOOD STAMP on it.)$"

DurianGym_ShiriAndBanjoDefeated_Text_0:
# 89 "data/maps/DurianGym/scripts.pory"
	.string "{PLAYER} received the LIVEHOOD STAMP\nfrom SHIRI & BANJO.$"

DurianGym_ShiriAndBanjoDefeated_Text_1:
# 93 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: With the LIVEHOOD STAMP, uh…\n"
	.string "you can use POKéMON up to… LV 30…?\p"
	.string "SHIRI: …LV 20. It's LV 20. Also…\n"
	.string "orders from the LEAGUE. Take this.$"

DurianGym_ShiriAndBanjoDefeated_Text_2:
# 100 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: It’s TM48, containing ROUND.\n"
	.string "Unlike… someone, I hope you know what a\l"
	.string "TECHNICAL MACHINE is, right…? …Right?$"

DurianGym_ShiriAndBanjoDefeated_Text_3:
# 106 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Heh… I forgot to teach it\nto my NOIBAT…$"

DurianGym_ShiriAndBanjoDefeated_Text_4:
# 112 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: … … … … … …\n"
	.string "… … … … … …\p"
	.string "You… are… a total IDIOT!$"

DurianGym_ShiriAndBanjoDefeated_Text_5:
# 123 "data/maps/DurianGym/scripts.pory"
	.string "ANYWAY! It will teach a POKéMON the move\n"
	.string "ROUND. It gets stronger if a POKéMON\l"
	.string "uses it after its ally did.$"
