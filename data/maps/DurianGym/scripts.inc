# 1 "data/maps/DurianGym/scripts.pory"

# 2 "data/maps/DurianGym/scripts.pory"
DurianGym_MapScripts::
# 3 "data/maps/DurianGym/scripts.pory"
	.byte 0

DurianGym_Junichi::
# 8 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_SP_JUNICHI, DurianGym_Junichi_Text_0, DurianGym_Junichi_Text_1
# 9 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_JUNICHI, Common_Movement_Sad
# 10 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 11 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_JUNICHI, Common_Movement_Delay48
# 12 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 13 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Junichi_Text_2
# 14 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_Darian::
# 19 "data/maps/DurianGym/scripts.pory"
	trainerbattle_single TRAINER_SP_DARIAN, DurianGym_Darian_Text_0, DurianGym_Darian_Text_1
# 20 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_DARIAN, Common_Movement_Angry
# 21 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 22 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_DARIAN, Common_Movement_Delay48
# 23 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 24 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Darian_Text_2
# 25 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_ShiriAndBanjo::
# 30 "data/maps/DurianGym/scripts.pory"
	lock
# 31 "data/maps/DurianGym/scripts.pory"
	checktrainerflag TRAINER_SP_JUNICHI
	goto_if 1, DurianGym_ShiriAndBanjo_4
DurianGym_ShiriAndBanjo_3:
# 35 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjo_Text_0
DurianGym_ShiriAndBanjo_1:
# 37 "data/maps/DurianGym/scripts.pory"
	closemessage
# 38 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_ShiriAndBanjo_2:
# 32 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoCheckBadge
	goto DurianGym_ShiriAndBanjo_1

DurianGym_ShiriAndBanjo_4:
# 31 "data/maps/DurianGym/scripts.pory"
	checktrainerflag TRAINER_SP_DARIAN
	goto_if 1, DurianGym_ShiriAndBanjo_2
	goto DurianGym_ShiriAndBanjo_3


DurianGym_ShiriAndBanjoCheckBadge::
# 43 "data/maps/DurianGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, DurianGym_ShiriAndBanjoCheckBadge_2
# 45 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 46 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoCheckBadge_Text_1
# 47 "data/maps/DurianGym/scripts.pory"
	closemessage
# 48 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 49 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 50 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 51 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 52 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 53 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoCheckBadge_Text_3
DurianGym_ShiriAndBanjoCheckBadge_1:
# 55 "data/maps/DurianGym/scripts.pory"
	closemessage
# 56 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_ShiriAndBanjoCheckBadge_2:
# 43 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoBattle
	goto DurianGym_ShiriAndBanjoCheckBadge_1


DurianGym_ShiriAndBanjoBattle::
# 61 "data/maps/DurianGym/scripts.pory"
	lock
# 62 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_ExclamationMark
# 63 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 64 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 65 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 66 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 67 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_0
# 68 "data/maps/DurianGym/scripts.pory"
	closemessage
# 69 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 70 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_1
# 71 "data/maps/DurianGym/scripts.pory"
	closemessage
# 72 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 73 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_2
# 74 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 75 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_3
# 76 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 77 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_4
# 78 "data/maps/DurianGym/scripts.pory"
	closemessage
# 79 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Pensive
# 80 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 81 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 82 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 83 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 84 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_5
# 85 "data/maps/DurianGym/scripts.pory"
	closemessage
# 86 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Heart
# 87 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 88 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 89 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 90 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 91 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_6
# 92 "data/maps/DurianGym/scripts.pory"
	closemessage
# 93 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 94 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 95 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 96 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 97 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 98 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_7
# 99 "data/maps/DurianGym/scripts.pory"
	closemessage
# 100 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 101 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 102 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 103 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 104 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 105 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_8
# 106 "data/maps/DurianGym/scripts.pory"
	closemessage
# 107 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 108 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 109 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 110 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 111 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 112 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_9
# 113 "data/maps/DurianGym/scripts.pory"
	closemessage
# 114 "data/maps/DurianGym/scripts.pory"
	trainerbattle_no_intro TRAINER_SHIRI_AND_BANJO_1, DurianGym_ShiriAndBanjoBattle_Text_10
# 115 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoDefeated
	end


DurianGym_ShiriAndBanjoDefeated::
# 120 "data/maps/DurianGym/scripts.pory"
	lock
# 121 "data/maps/DurianGym/scripts.pory"
	message DurianGym_ShiriAndBanjoDefeated_Text_0
# 122 "data/maps/DurianGym/scripts.pory"
	waitmessage
# 123 "data/maps/DurianGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 124 "data/maps/DurianGym/scripts.pory"
	waitfanfare
# 125 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 126 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_1
# 127 "data/maps/DurianGym/scripts.pory"
	closemessage
# 128 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 129 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_2
# 130 "data/maps/DurianGym/scripts.pory"
	closemessage
# 131 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 132 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 133 "data/maps/DurianGym/scripts.pory"
	setvar VAR_0x8008, 1
# 134 "data/maps/DurianGym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 135 "data/maps/DurianGym/scripts.pory"
	giveitem ITEM_TM_ROUND
# 136 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 137 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 138 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_3
# 139 "data/maps/DurianGym/scripts.pory"
	closemessage
# 140 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 141 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 142 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 143 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 144 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 145 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_4
# 146 "data/maps/DurianGym/scripts.pory"
	closemessage
# 147 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 148 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 149 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 150 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 151 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 152 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_5
# 153 "data/maps/DurianGym/scripts.pory"
	closemessage
# 154 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Movement_Punch
# 155 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 156 "data/maps/DurianGym/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 157 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Movement_Hit
# 158 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 159 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 160 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 161 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 162 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 163 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 164 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_6
# 165 "data/maps/DurianGym/scripts.pory"
	closemessage
# 166 "data/maps/DurianGym/scripts.pory"
	setvar VAR_RIVALS_STATE, 3
# 167 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_Guide::
# 172 "data/maps/DurianGym/scripts.pory"
	lock
# 173 "data/maps/DurianGym/scripts.pory"
	faceplayer
# 174 "data/maps/DurianGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, DurianGym_Guide_2
# 176 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Guide_Text_0
DurianGym_Guide_1:
# 178 "data/maps/DurianGym/scripts.pory"
	closemessage
# 179 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_Guide_2:
# 174 "data/maps/DurianGym/scripts.pory"
	call DurianGym_GuideIntro
	goto DurianGym_Guide_1


DurianGym_GuideIntro::
# 184 "data/maps/DurianGym/scripts.pory"
	lock
# 185 "data/maps/DurianGym/scripts.pory"
	faceplayer
# 186 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_GuideIntro_Text_0
# 187 "data/maps/DurianGym/scripts.pory"
	closemessage
# 188 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 189 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 190 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 191 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 192 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_GuideIntro_Text_1
# 193 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_GuideIntro_Text_2
# 194 "data/maps/DurianGym/scripts.pory"
	closemessage
# 195 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_GuideIntro_Text_3
# 196 "data/maps/DurianGym/scripts.pory"
	closemessage
# 197 "data/maps/DurianGym/scripts.pory"
	release
	end


# 201 "data/maps/DurianGym/scripts.pory"
Movement_Punch:
# 202 "data/maps/DurianGym/scripts.pory"
	face_right
# 203 "data/maps/DurianGym/scripts.pory"
	lock_facing_direction
# 204 "data/maps/DurianGym/scripts.pory"
	lock_anim
# 205 "data/maps/DurianGym/scripts.pory"
	walk_faster_right
# 206 "data/maps/DurianGym/scripts.pory"
	walk_faster_left
# 207 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 208 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 209 "data/maps/DurianGym/scripts.pory"
	face_down
# 210 "data/maps/DurianGym/scripts.pory"
	step_end

# 213 "data/maps/DurianGym/scripts.pory"
Movement_Hit:
# 214 "data/maps/DurianGym/scripts.pory"
	disable_jump_landing_ground_effect
# 215 "data/maps/DurianGym/scripts.pory"
	jump_in_place_left
# 216 "data/maps/DurianGym/scripts.pory"
	emote_exclamation_mark
# 217 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 218 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 219 "data/maps/DurianGym/scripts.pory"
	face_down
# 220 "data/maps/DurianGym/scripts.pory"
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
# 13 "data/maps/DurianGym/scripts.pory"
	.string "She ruined it all! I miss when we played\ntraditional TENKEIAN music…$"

DurianGym_Darian_Text_0:
# 19 "data/maps/DurianGym/scripts.pory"
	.string "I'll show SHIRI how a real guitarist\n"
	.string "plays AND fights!$"

DurianGym_Darian_Text_1:
# 19 "data/maps/DurianGym/scripts.pory"
	.string "Not like this!$"

DurianGym_Darian_Text_2:
# 24 "data/maps/DurianGym/scripts.pory"
	.string "Someday she'll realize she's wasting\ntime with that airhead!$"

DurianGym_ShiriAndBanjo_Text_0:
# 35 "data/maps/DurianGym/scripts.pory"
	.string "The music is too loud!\n"
	.string "They cannot hear you!$"

DurianGym_ShiriAndBanjoCheckBadge_Text_0:
# 45 "data/maps/DurianGym/scripts.pory"
	.string "BANJO$"

DurianGym_ShiriAndBanjoCheckBadge_Text_1:
# 46 "data/maps/DurianGym/scripts.pory"
	.string "'Ya smashed us like a guitar!$"

DurianGym_ShiriAndBanjoCheckBadge_Text_2:
# 52 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI$"

DurianGym_ShiriAndBanjoCheckBadge_Text_3:
# 53 "data/maps/DurianGym/scripts.pory"
	.string "And what SEEDOTCASE would\n"
	.string "smash one to begin with?!$"

DurianGym_ShiriAndBanjoBattle_Text_0:
# 67 "data/maps/DurianGym/scripts.pory"
	.string "RIRI, RIRI, we got a challenger!$"

DurianGym_ShiriAndBanjoBattle_Text_1:
# 70 "data/maps/DurianGym/scripts.pory"
	.string "Yes, BANBAN, I can see that.\nMy eyes work very fine, thanks.$"

DurianGym_ShiriAndBanjoBattle_Text_2:
# 73 "data/maps/DurianGym/scripts.pory"
	.string "It's our first challenger\ntogether!$"

DurianGym_ShiriAndBanjoBattle_Text_3:
# 75 "data/maps/DurianGym/scripts.pory"
	.string "Then focus, my sweet PSYDUCK, we have\nto introduce ourselves!$"

DurianGym_ShiriAndBanjoBattle_Text_4:
# 77 "data/maps/DurianGym/scripts.pory"
	.string "Oh yeah! This is the FLASH of\nmy life, my girl RIRI!$"

DurianGym_ShiriAndBanjoBattle_Text_5:
# 84 "data/maps/DurianGym/scripts.pory"
	.string "My dear SLOWPOKE, that's not… Anyway. We\nare STRAWBERRY TOWN’s PATH GUARDIANS.\lI am SHIRI, and this airheaded hunk…$"

DurianGym_ShiriAndBanjoBattle_Text_6:
# 91 "data/maps/DurianGym/scripts.pory"
	.string "Man, she called me a hunk!$"

DurianGym_ShiriAndBanjoBattle_Text_7:
# 98 "data/maps/DurianGym/scripts.pory"
	.string "…WILL TELL YOU WHAT TYPE WE USE.$"

DurianGym_ShiriAndBanjoBattle_Text_8:
# 105 "data/maps/DurianGym/scripts.pory"
	.string "Yes, ma’am!\n"
	.string "We use… ROCK-types, right?$"

DurianGym_ShiriAndBanjoBattle_Text_9:
# 112 "data/maps/DurianGym/scripts.pory"
	.string "… … … … …\n"
	.string "… … … … …\l"
	.string "WE USE SOUND-TYPES, SCATTERBUG BRAIN!\p"
	.string "ENOUGH! Let's start the battle, c'mon!$"

DurianGym_ShiriAndBanjoBattle_Text_10:
# 114 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Dude, that was sick!\n"
	.string "SHIRI: Tch… quit praising 'em, we LOST!\p"
	.string "BANJO: So, we give ‘em their STAMP,\n"
	.string "right?\n"
	.string "SHIRI: I can’t do this…\p"
	.string "(Snatches {PLAYER}’s TRAINER CARD\n"
	.string "and slaps the LIVEHOOD STAMP on it.)$"

DurianGym_ShiriAndBanjoDefeated_Text_0:
# 121 "data/maps/DurianGym/scripts.pory"
	.string "{PLAYER} received the LIVEHOOD STAMP\nfrom SHIRI & BANJO.$"

DurianGym_ShiriAndBanjoDefeated_Text_1:
# 126 "data/maps/DurianGym/scripts.pory"
	.string "With the LIVEHOOD STAMP, uh…\n"
	.string "you can use POKéMON up to… LV 30…?\p$"

DurianGym_ShiriAndBanjoDefeated_Text_2:
# 129 "data/maps/DurianGym/scripts.pory"
	.string "…LV 20. It's LV 20. Also…\n"
	.string "orders from the LEAGUE. Take this.$"

DurianGym_ShiriAndBanjoDefeated_Text_3:
# 138 "data/maps/DurianGym/scripts.pory"
	.string "It’s TR48, containing ROUND.\n"
	.string "Unlike… someone, I hope you know what a\l"
	.string "TECHNICAL RECORD is, right…? …Right?$"

DurianGym_ShiriAndBanjoDefeated_Text_4:
# 145 "data/maps/DurianGym/scripts.pory"
	.string "Heh… I forgot to teach it\nto my NOIBAT…$"

DurianGym_ShiriAndBanjoDefeated_Text_5:
# 152 "data/maps/DurianGym/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "You… are… a total IDIOT!$"

DurianGym_ShiriAndBanjoDefeated_Text_6:
# 164 "data/maps/DurianGym/scripts.pory"
	.string "ANYWAY! It will teach a POKéMON the move\n"
	.string "ROUND. It gets stronger if a POKéMON\l"
	.string "uses it after its ally did.$"

DurianGym_Guide_Text_0:
# 176 "data/maps/DurianGym/scripts.pory"
	.string "Huh. T'was beginner's luck.\n"
	.string "Still… … … not bad, bub.$"

DurianGym_GuideIntro_Text_0:
# 186 "data/maps/DurianGym/scripts.pory"
	.string "Hey, bub. Yer new there, arent'cha?\n"
	.string "Tell 'yuh what, just go home, bub.$"

DurianGym_GuideIntro_Text_1:
# 192 "data/maps/DurianGym/scripts.pory"
	.string "{PLAYER}$"

DurianGym_GuideIntro_Text_2:
# 193 "data/maps/DurianGym/scripts.pory"
	.string "Excuse me?!$"

DurianGym_GuideIntro_Text_3:
# 195 "data/maps/DurianGym/scripts.pory"
	.string "C'mon, don't kid yerself, bub.\n"
	.string "Have 'yuh looked at yerself?\l"
	.string "… … … … … … … … … … … … … … … … … … … … … … …\p"
	.string "Fine… … … don't come blamin' me when\n"
	.string "those two destroy 'yuh, though.\p"
	.string "The duo on stage quickly jumped on\n"
	.string "this SOUND-type bandwagon.\p"
	.string "It's POKéMON are s'pposed to be weak to\n"
	.string "GROUND, GRASS, ELECTRIC and other\p"
	.string "SOUND-types' moves, while resistin'\n"
	.string "WATER, PSYCHIC and DRAGON types.\p"
	.string "I don't think yuh can do it, bub, but I'll\n"
	.string "watch yer loss anyway.$"
