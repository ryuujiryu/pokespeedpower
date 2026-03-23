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
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_FacePlayer
# 46 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 47 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_FacePlayer
# 48 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 49 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 50 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoCheckBadge_Text_1
# 51 "data/maps/DurianGym/scripts.pory"
	closemessage
# 52 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 53 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 54 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 55 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 56 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 57 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoCheckBadge_Text_3
DurianGym_ShiriAndBanjoCheckBadge_1:
# 59 "data/maps/DurianGym/scripts.pory"
	closemessage
# 60 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_ShiriAndBanjoCheckBadge_2:
# 43 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoBattle
	goto DurianGym_ShiriAndBanjoCheckBadge_1


DurianGym_ShiriAndBanjoBattle::
# 65 "data/maps/DurianGym/scripts.pory"
	lock
# 66 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_ExclamationMark
# 67 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 68 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 69 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 70 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 71 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_0
# 72 "data/maps/DurianGym/scripts.pory"
	closemessage
# 73 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 74 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_1
# 75 "data/maps/DurianGym/scripts.pory"
	closemessage
# 76 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 77 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_2
# 78 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 79 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_3
# 80 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 81 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_4
# 82 "data/maps/DurianGym/scripts.pory"
	closemessage
# 83 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Pensive
# 84 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 85 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 86 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 87 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 88 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_5
# 89 "data/maps/DurianGym/scripts.pory"
	closemessage
# 90 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Heart
# 91 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 92 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 93 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 94 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 95 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_6
# 96 "data/maps/DurianGym/scripts.pory"
	closemessage
# 97 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 98 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 99 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 100 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 101 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 102 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_7
# 103 "data/maps/DurianGym/scripts.pory"
	closemessage
# 104 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 105 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 106 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 107 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 108 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 109 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_8
# 110 "data/maps/DurianGym/scripts.pory"
	closemessage
# 111 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 112 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 113 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 114 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 115 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 116 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoBattle_Text_9
# 117 "data/maps/DurianGym/scripts.pory"
	closemessage
# 118 "data/maps/DurianGym/scripts.pory"
	trainerbattle_no_intro TRAINER_SP_SHIRI_AND_BANJO_1, DurianGym_ShiriAndBanjoBattle_Text_10
# 119 "data/maps/DurianGym/scripts.pory"
	call DurianGym_ShiriAndBanjoDefeated
	end


DurianGym_ShiriAndBanjoDefeated::
# 124 "data/maps/DurianGym/scripts.pory"
	lock
# 125 "data/maps/DurianGym/scripts.pory"
	message DurianGym_ShiriAndBanjoDefeated_Text_0
# 126 "data/maps/DurianGym/scripts.pory"
	waitmessage
# 127 "data/maps/DurianGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 128 "data/maps/DurianGym/scripts.pory"
	waitfanfare
# 129 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 130 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_1
# 131 "data/maps/DurianGym/scripts.pory"
	closemessage
# 132 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 133 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_2
# 134 "data/maps/DurianGym/scripts.pory"
	closemessage
# 135 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 136 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 137 "data/maps/DurianGym/scripts.pory"
	setvar VAR_0x8008, 1
# 138 "data/maps/DurianGym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 139 "data/maps/DurianGym/scripts.pory"
	giveitem ITEM_TM_ROUND
# 140 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 141 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 142 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_3
# 143 "data/maps/DurianGym/scripts.pory"
	closemessage
# 144 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Music
# 145 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 146 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 147 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 148 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 149 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_4
# 150 "data/maps/DurianGym/scripts.pory"
	closemessage
# 151 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Angry
# 152 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 153 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 154 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 155 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 156 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_5
# 157 "data/maps/DurianGym/scripts.pory"
	closemessage
# 158 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Movement_Punch
# 159 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 160 "data/maps/DurianGym/scripts.pory"
	playse SE_SUPER_EFFECTIVE
# 161 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Movement_Hit
# 162 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 163 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 164 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 165 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 166 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 167 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 168 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_6
# 169 "data/maps/DurianGym/scripts.pory"
	closemessage
# 170 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Poisoned
# 171 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 172 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_FaceLeft
# 173 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 174 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_Delay48
# 175 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 176 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 177 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_7
# 178 "data/maps/DurianGym/scripts.pory"
	closemessage
# 179 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Upset
# 180 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 181 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_FaceRight
# 182 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 183 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 184 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 185 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 186 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_8
# 187 "data/maps/DurianGym/scripts.pory"
	closemessage
# 188 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_0
# 189 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_9
# 190 "data/maps/DurianGym/scripts.pory"
	closemessage
# 191 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_ExclamationMark
# 192 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 193 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_FaceDown
# 194 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 195 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_SHIRI, Common_Movement_Delay48
# 196 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 197 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_DURIANGYM_BANJO, Common_Movement_FaceDown
# 198 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 199 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_ShiriAndBanjoCheckBadge_Text_2
# 200 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_ShiriAndBanjoDefeated_Text_10
# 201 "data/maps/DurianGym/scripts.pory"
	closemessage
# 202 "data/maps/DurianGym/scripts.pory"
	giveitem ITEM_TM_ROUND
# 203 "data/maps/DurianGym/scripts.pory"
	setvar VAR_RIVALS_STATE, 3
# 204 "data/maps/DurianGym/scripts.pory"
	release
	end


DurianGym_Guide::
# 209 "data/maps/DurianGym/scripts.pory"
	lock
# 210 "data/maps/DurianGym/scripts.pory"
	faceplayer
# 211 "data/maps/DurianGym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, DurianGym_Guide_2
# 213 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Guide_Text_0
DurianGym_Guide_1:
# 215 "data/maps/DurianGym/scripts.pory"
	closemessage
# 216 "data/maps/DurianGym/scripts.pory"
	release
	end

DurianGym_Guide_2:
# 211 "data/maps/DurianGym/scripts.pory"
	call DurianGym_GuideIntro
	goto DurianGym_Guide_1


DurianGym_GuideIntro::
# 221 "data/maps/DurianGym/scripts.pory"
	lock
# 222 "data/maps/DurianGym/scripts.pory"
	faceplayer
# 223 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_GuideIntro_Text_0
# 224 "data/maps/DurianGym/scripts.pory"
	closemessage
# 225 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 226 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 227 "data/maps/DurianGym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 228 "data/maps/DurianGym/scripts.pory"
	waitmovement 0
# 229 "data/maps/DurianGym/scripts.pory"
	setspeaker DurianGym_GuideIntro_Text_1
# 230 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_GuideIntro_Text_2
# 231 "data/maps/DurianGym/scripts.pory"
	closemessage
# 232 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_GuideIntro_Text_3
# 233 "data/maps/DurianGym/scripts.pory"
	closemessage
# 234 "data/maps/DurianGym/scripts.pory"
	release
	end


# 238 "data/maps/DurianGym/scripts.pory"
Movement_Punch:
# 239 "data/maps/DurianGym/scripts.pory"
	face_right
# 240 "data/maps/DurianGym/scripts.pory"
	lock_facing_direction
# 241 "data/maps/DurianGym/scripts.pory"
	lock_anim
# 242 "data/maps/DurianGym/scripts.pory"
	walk_faster_right
# 243 "data/maps/DurianGym/scripts.pory"
	walk_faster_left
# 244 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 245 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 246 "data/maps/DurianGym/scripts.pory"
	face_down
# 247 "data/maps/DurianGym/scripts.pory"
	step_end

# 250 "data/maps/DurianGym/scripts.pory"
Movement_Hit:
# 251 "data/maps/DurianGym/scripts.pory"
	disable_jump_landing_ground_effect
# 252 "data/maps/DurianGym/scripts.pory"
	jump_in_place_left
# 253 "data/maps/DurianGym/scripts.pory"
	emote_exclamation_mark
# 254 "data/maps/DurianGym/scripts.pory"
	unlock_facing_direction
# 255 "data/maps/DurianGym/scripts.pory"
	unlock_anim
# 256 "data/maps/DurianGym/scripts.pory"
	face_down
# 257 "data/maps/DurianGym/scripts.pory"
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
# 49 "data/maps/DurianGym/scripts.pory"
	.string "BANJO$"

DurianGym_ShiriAndBanjoCheckBadge_Text_1:
# 50 "data/maps/DurianGym/scripts.pory"
	.string "'Ya smashed us like a guitar!$"

DurianGym_ShiriAndBanjoCheckBadge_Text_2:
# 56 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI$"

DurianGym_ShiriAndBanjoCheckBadge_Text_3:
# 57 "data/maps/DurianGym/scripts.pory"
	.string "And what SEEDOTCASE would\n"
	.string "smash one to begin with?!$"

DurianGym_ShiriAndBanjoBattle_Text_0:
# 71 "data/maps/DurianGym/scripts.pory"
	.string "RIRI, RIRI, we got a challenger!$"

DurianGym_ShiriAndBanjoBattle_Text_1:
# 74 "data/maps/DurianGym/scripts.pory"
	.string "Yes, BANBAN, I can see that.\nMy eyes work very fine, thanks.$"

DurianGym_ShiriAndBanjoBattle_Text_2:
# 77 "data/maps/DurianGym/scripts.pory"
	.string "It's our first challenger\ntogether!$"

DurianGym_ShiriAndBanjoBattle_Text_3:
# 79 "data/maps/DurianGym/scripts.pory"
	.string "Then focus, my sweet PSYDUCK, we have\nto introduce ourselves!$"

DurianGym_ShiriAndBanjoBattle_Text_4:
# 81 "data/maps/DurianGym/scripts.pory"
	.string "Oh yeah! This is the FLASH of\nmy life, my girl RIRI!$"

DurianGym_ShiriAndBanjoBattle_Text_5:
# 88 "data/maps/DurianGym/scripts.pory"
	.string "My dear SLOWPOKE, that's not… Anyway. We\nare STRAWBERRY TOWN’s PATH GUARDIANS.\lI am SHIRI, and this airheaded hunk…$"

DurianGym_ShiriAndBanjoBattle_Text_6:
# 95 "data/maps/DurianGym/scripts.pory"
	.string "Man, she called me a hunk!$"

DurianGym_ShiriAndBanjoBattle_Text_7:
# 102 "data/maps/DurianGym/scripts.pory"
	.string "…WILL TELL YOU WHAT TYPE WE USE.$"

DurianGym_ShiriAndBanjoBattle_Text_8:
# 109 "data/maps/DurianGym/scripts.pory"
	.string "Yes, ma’am!\n"
	.string "We use… ROCK-types, right?$"

DurianGym_ShiriAndBanjoBattle_Text_9:
# 116 "data/maps/DurianGym/scripts.pory"
	.string "… … … … …\n"
	.string "… … … … …\l"
	.string "WE USE SOUND-TYPES, SCATTERBUG BRAIN!\p"
	.string "ENOUGH! Let's start the battle, c'mon!$"

DurianGym_ShiriAndBanjoBattle_Text_10:
# 118 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Dude, that was sick!\n"
	.string "SHIRI: Tch… quit praising 'em, we LOST!\p"
	.string "BANJO: So, we give ‘em their STAMP,\n"
	.string "right?\n"
	.string "SHIRI: I can’t do this…\p"
	.string "(Snatches {PLAYER}’s TRAINER CARD\n"
	.string "and slaps the LIVEHOOD STAMP on it.)$"

DurianGym_ShiriAndBanjoDefeated_Text_0:
# 125 "data/maps/DurianGym/scripts.pory"
	.string "{PLAYER} received the LIVEHOOD STAMP\nfrom SHIRI & BANJO.$"

DurianGym_ShiriAndBanjoDefeated_Text_1:
# 130 "data/maps/DurianGym/scripts.pory"
	.string "With the LIVEHOOD STAMP, uh…\n"
	.string "you can use POKéMON up to… LV 30…?\p$"

DurianGym_ShiriAndBanjoDefeated_Text_2:
# 133 "data/maps/DurianGym/scripts.pory"
	.string "…LV 20. It's LV 20. Also…\n"
	.string "orders from the LEAGUE. Take this.$"

DurianGym_ShiriAndBanjoDefeated_Text_3:
# 142 "data/maps/DurianGym/scripts.pory"
	.string "It’s TR48, containing ROUND.\n"
	.string "Unlike… someone, I hope you know what a\l"
	.string "TECHNICAL RECORD is, right…? …Right?$"

DurianGym_ShiriAndBanjoDefeated_Text_4:
# 149 "data/maps/DurianGym/scripts.pory"
	.string "Heh… I forgot to teach it\nto my NOIBAT…$"

DurianGym_ShiriAndBanjoDefeated_Text_5:
# 156 "data/maps/DurianGym/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "You… are… a total IDIOT!$"

DurianGym_ShiriAndBanjoDefeated_Text_6:
# 168 "data/maps/DurianGym/scripts.pory"
	.string "ANYWAY! It will teach a POKéMON the move\n"
	.string "ROUND. It gets stronger if a POKéMON\l"
	.string "uses it after its ally did…$"

DurianGym_ShiriAndBanjoDefeated_Text_7:
# 177 "data/maps/DurianGym/scripts.pory"
	.string "RI… RIRI…$"

DurianGym_ShiriAndBanjoDefeated_Text_8:
# 186 "data/maps/DurianGym/scripts.pory"
	.string "Hmm?!$"

DurianGym_ShiriAndBanjoDefeated_Text_9:
# 189 "data/maps/DurianGym/scripts.pory"
	.string "We have to give… two copies…\n"
	.string "of the TECHNICAL ROUND…$"

DurianGym_ShiriAndBanjoDefeated_Text_10:
# 200 "data/maps/DurianGym/scripts.pory"
	.string "…Well, surprisingly, he's right!\n"
	.string "Here, catch.$"

DurianGym_Guide_Text_0:
# 213 "data/maps/DurianGym/scripts.pory"
	.string "Huh. T'was beginner's luck.\n"
	.string "Still… … … not bad, bub.$"

DurianGym_GuideIntro_Text_0:
# 223 "data/maps/DurianGym/scripts.pory"
	.string "Hey, bub. Yer new there, arent'cha?\n"
	.string "Tell 'yuh what, just go home, bub.$"

DurianGym_GuideIntro_Text_1:
# 229 "data/maps/DurianGym/scripts.pory"
	.string "{PLAYER}$"

DurianGym_GuideIntro_Text_2:
# 230 "data/maps/DurianGym/scripts.pory"
	.string "Excuse me?!$"

DurianGym_GuideIntro_Text_3:
# 232 "data/maps/DurianGym/scripts.pory"
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
