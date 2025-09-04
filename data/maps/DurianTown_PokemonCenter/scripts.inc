# 1 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 2 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_MapScripts::
# 3 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DurianTown_PokemonCenter_OnTransition
# 4 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.byte 0
# 6 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 7 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_OnTransition:
# 8 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_DURIAN_TOWN
# 9 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 10 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 11 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_Nurse::
# 12 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_DURIAN_NURSE
# 13 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
# 17 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 18 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 19 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_Boy::
# 20 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_Text_Grandpa, MSGBOX_NPC
# 21 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 22 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 23 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_ExpertM::
# 24 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_Text_OldTimes, MSGBOX_NPC
# 25 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 26 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 27 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_Woman::
# 28 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_Text_Banjo, MSGBOX_NPC
# 29 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 30 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 31 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_Girl::
# 32 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_Text_LikeHisLook, MSGBOX_NPC
# 33 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 34 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 35 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Text_Grandpa:
# 36 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "My grandpa only just woke up from\n"
# 37 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "a coma he got during the DARK DECADE…\p"
# 38 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "The shock of losing the war nearly took\n"
# 39 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "him to an early grave.$"
# 40 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 41 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Text_OldTimes:
# 42 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "At your age, I was a PATH DISCIPLE,\n"
# 43 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "and our TEMPLE trained ROCK-types,\l"
# 44 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "not any of this SOUND-type nonsense!\p"
# 45 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "And now, the darn UNOVANS said they’ll\n"
# 46 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "rename the ELEMENTAL CONQUEST to the\l"
# 47 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "GYM CHALLENGE after this edition!\p"
# 48 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "NIHON is doomed, I tell you!$"
# 49 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 50 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Text_Banjo:
# 51 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Till this year’s ELEMENTAL CONQUEST,\n"
# 52 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "BANJO was the respectable\p"
# 53 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "ISHIKI clan’s heir, musicians who\n"
# 54 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "always guarded our TEMPLE!\p"
# 55 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "But since he met that SHIRI girl…\p"
# 56 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Now he’s looking like a hooligan, and\n"
# 57 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "he plays those horrible UNOVAN noises!$"
# 58 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 59 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Text_LikeHisLook:
# 60 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "I think BANJO’s new look is cool!\n"
# 61 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "His new haircut is called…\l"
# 62 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "a “mostaraptor”, right?\p"
# 63 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Either way, SHIRI brought out\n"
# 64 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "the real him!$"
# 65 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 66 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_Clerk::
# 67 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 68 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 69 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	message gText_HowMayIServeYou
# 70 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitmessage
# 71 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	pokemart DurianTown_PokemonCenter_Pokemart
# 72 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 73 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
# 74 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 75 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 76 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.align 2
# 77 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Pokemart:
# 78 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 79 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_NEST_BALL
# 80 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 81 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 82 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 83 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 84 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 85 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 86 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_REPEL
# 87 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 88 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 89 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	pokemartlistend
