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
	trainerbattle_single TRAINER_SHIRI_AND_BANJO_1, DurianGym_Text_ShiriAndBanjoIntro, DurianGym_Text_ShiriAndBanjoDefeat, DurianGym_EventScript_ShiriAndBanjoDefeated, NO_MUSIC
# 17 "data/maps/DurianGym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, DurianGym_EventScript_GiveRound
# 18 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Text_ShiriAndBanjoPostBattle, MSGBOX_DEFAULT
# 19 "data/maps/DurianGym/scripts.pory"
	release
# 20 "data/maps/DurianGym/scripts.pory"
	end
# 21 "data/maps/DurianGym/scripts.pory"

# 22 "data/maps/DurianGym/scripts.pory"
DurianGym_EventScript_ShiriAndBanjoDefeated::
# 23 "data/maps/DurianGym/scripts.pory"
	message DurianGym_Gym_Text_ReceivedLivehoodStamp
# 24 "data/maps/DurianGym/scripts.pory"
	waitmessage
# 25 "data/maps/DurianGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 26 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Text_ExplainStamp, MSGBOX_DEFAULT
# 27 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 28 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 29 "data/maps/DurianGym/scripts.pory"
	setvar VAR_0x8008, 1
# 30 "data/maps/DurianGym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 31 "data/maps/DurianGym/scripts.pory"
	call DurianGym_EventScript_GiveRound
# 32 "data/maps/DurianGym/scripts.pory"
	closemessage
# 33 "data/maps/DurianGym/scripts.pory"
	release
# 34 "data/maps/DurianGym/scripts.pory"
	end
# 35 "data/maps/DurianGym/scripts.pory"

# 36 "data/maps/DurianGym/scripts.pory"
DurianGym_EventScript_GiveRound::
# 37 "data/maps/DurianGym/scripts.pory"
	giveitem ITEM_TM_EARTHQUAKE
# 38 "data/maps/DurianGym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 39 "data/maps/DurianGym/scripts.pory"
	msgbox DurianGym_Text_ExplainTM, MSGBOX_DEFAULT
# 40 "data/maps/DurianGym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 41 "data/maps/DurianGym/scripts.pory"
	release
# 42 "data/maps/DurianGym/scripts.pory"
	end
# 43 "data/maps/DurianGym/scripts.pory"

# 44 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_JunichiIntro:
# 45 "data/maps/DurianGym/scripts.pory"
	.string "Tell me how handsome I am!$"
# 46 "data/maps/DurianGym/scripts.pory"

# 47 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_JunichiDefeat:
# 48 "data/maps/DurianGym/scripts.pory"
	.string "I forgot that the TEMPLE's in the dark…$"
# 49 "data/maps/DurianGym/scripts.pory"

# 50 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_JunichiPostBattle:
# 51 "data/maps/DurianGym/scripts.pory"
	.string "BANJO had this 'great idea' to turn the\n"
# 52 "data/maps/DurianGym/scripts.pory"
	.string "lights off as he couldn't think of a\p"
# 53 "data/maps/DurianGym/scripts.pory"
	.string "SOUND-type themed puzzle…$"
# 54 "data/maps/DurianGym/scripts.pory"

# 55 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_DarianIntro:
# 56 "data/maps/DurianGym/scripts.pory"
	.string "I will defeat lots of challengers so\n"
# 57 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI will notice me!$"
# 58 "data/maps/DurianGym/scripts.pory"

# 59 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_DarianDefeat:
# 60 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI!$"
# 61 "data/maps/DurianGym/scripts.pory"

# 62 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_DarianPostBattle:
# 63 "data/maps/DurianGym/scripts.pory"
	.string "She should be with me, not BANJO!\n"
# 64 "data/maps/DurianGym/scripts.pory"
	.string "What does she see in that airhead?$"
# 65 "data/maps/DurianGym/scripts.pory"

# 66 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_ShiriAndBanjoIntro:
# 67 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: RIRI, RIRI, we got a challenger!\p"
# 68 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: Yes, BANBAN, I can see that,\n"
# 69 "data/maps/DurianGym/scripts.pory"
	.string "even if the TEMPLE's lights are off…\p"
# 70 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Our first challenger together!\p"
# 71 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: Then focus, my sweet PSYDUCK!\n"
# 72 "data/maps/DurianGym/scripts.pory"
	.string "Introduce us!\p"
# 73 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Oh yeah! This is the FLASH\n"
# 74 "data/maps/DurianGym/scripts.pory"
	.string "of my life, my girl RIRI! (Kisses her.)\p"
# 75 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: My dear SLOWPOKE… (Sighs.)\n"
# 76 "data/maps/DurianGym/scripts.pory"
    .string "We are DURIAN TOWN’s PATH GUARDIANS.\l"
# 77 "data/maps/DurianGym/scripts.pory"
    .string "I am SHIRI, and this airheaded hunk…\p"
# 78 "data/maps/DurianGym/scripts.pory"
    .string "BANJO: Man, she called me a hunk!\p"
# 79 "data/maps/DurianGym/scripts.pory"
    .string "SHIRI: …WILL TELL YOU WHAT TYPE WE USE.\n"
# 80 "data/maps/DurianGym/scripts.pory"
    .string "(The girl is clearly getting annoyed.)p"
# 81 "data/maps/DurianGym/scripts.pory"
    .string "BANJO: Yes, ma’am! (Mockingly salutes her.)\n"
# 82 "data/maps/DurianGym/scripts.pory"
    .string "We use… ROCK-types, right?\p"
# 83 "data/maps/DurianGym/scripts.pory"
    .string "SHIRI: … (Explodes in a fit of rage.)\p"
# 84 "data/maps/DurianGym/scripts.pory"
    .string "WE USE SOUND-TYPES, SCATTERBUG BRAIN!\n"
# 85 "data/maps/DurianGym/scripts.pory"
    .string "UGH, that’s ENOUGH! Go, JIGGLYPUFF!$"
# 86 "data/maps/DurianGym/scripts.pory"

# 87 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_ShiriAndBanjoDefeat:
# 88 "data/maps/DurianGym/scripts.pory"
	.string "BANJO: Dude, that was sick!\n"
# 89 "data/maps/DurianGym/scripts.pory"
	.string "SHIRI: Tch… quit praising them, we LOST!\p"
# 90 "data/maps/DurianGym/scripts.pory"
    .string "BANJO: So… we give ‘em their STAMP, right?\n"
# 91 "data/maps/DurianGym/scripts.pory"
    .string "SHIRI: I can’t do this…\p"
# 92 "data/maps/DurianGym/scripts.pory"
    .string "(Yanks {PLAYER}’s TRAINER CARD\n"
# 93 "data/maps/DurianGym/scripts.pory"
    .string "and slaps the LIVEHOOD STAMP on it.)$"
# 94 "data/maps/DurianGym/scripts.pory"

# 95 "data/maps/DurianGym/scripts.pory"
DurianGym_Gym_Text_ReceivedLivehoodStamp:
# 96 "data/maps/DurianGym/scripts.pory"
	.string "{PLAYER} received the LIVEHOOD STAMP\n"
# 97 "data/maps/DurianGym/scripts.pory"
	.string "from SHIRI & BANJO.$"
# 98 "data/maps/DurianGym/scripts.pory"

# 99 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_ExplainStamp:
# 100 "data/maps/DurianGym/scripts.pory"
    .string "BANJO: With the LIVEHOOD STAMP, uh…\n"
# 101 "data/maps/DurianGym/scripts.pory"
    .string "you can use POKéMON up to… LV 30…?\p"
# 102 "data/maps/DurianGym/scripts.pory"
    .string "SHIRI: …LV 20. It's LV 20. Also…\n"
# 103 "data/maps/DurianGym/scripts.pory"
    .string "orders from the LEAGUE. Take this.$"
# 104 "data/maps/DurianGym/scripts.pory"

# 105 "data/maps/DurianGym/scripts.pory"
DurianGym_Text_ExplainTM:
# 106 "data/maps/DurianGym/scripts.pory"
    .string "SHIRI: It’s TM48, containing ROUND.\n"
# 107 "data/maps/DurianGym/scripts.pory"
    .string "You DO know what a TECHNICAL MACHINE is,\l"
# 108 "data/maps/DurianGym/scripts.pory"
    .string "yes? BANBAN is already too much for me.\p"
# 109 "data/maps/DurianGym/scripts.pory"
    .string "BANJO: He~he… I forgot to teach\n"
# 110 "data/maps/DurianGym/scripts.pory"
    .string "it to my NOIBAT…\p"
# 111 "data/maps/DurianGym/scripts.pory"
    .string "SHIRI: You WHAT?!\n"
# 112 "data/maps/DurianGym/scripts.pory"
    .string "(Whacks BANJO on the head.)\p"
# 113 "data/maps/DurianGym/scripts.pory"
    .string "ANYWAY! It will teach a POKéMON the move\n"
# 114 "data/maps/DurianGym/scripts.pory"
    .string "ROUND. Very strong… if two POKéMON use it.$"
# 115 "data/maps/DurianGym/scripts.pory"

# 116 "data/maps/DurianGym/scripts.pory"
 DurianGym_Text_ShiriAndBanjoPostBattle:
# 117 "data/maps/DurianGym/scripts.pory"
    .string "BANJO: 'Ya smashed us like a guitar!\p"
# 118 "data/maps/DurianGym/scripts.pory"
    .string "SHIRI: What SEEDOTCASE would smash one?$"
