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
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
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
DurianTown_PokemonCenter_EventScript_Gentleman::
# 20 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_Text_FaithInYourPokemon, MSGBOX_NPC
# 21 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 22 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 23 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_ExpertM::
# 24 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox DurianTown_PokemonCenter_Text_VisitForBattleTent, MSGBOX_NPC
# 25 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 26 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 27 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Text_FaithInYourPokemon:
# 28 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "You can't consider yourself a real\n"
# 29 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "TRAINER if you don't have faith\l"
# 30 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "in your POKéMON.\p"
# 31 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Only those people who can believe\n"
# 32 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "in their battling POKéMON can win\l"
# 33 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "through to the very end.$"
# 34 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 35 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Text_VisitForBattleTent:
# 36 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "The reason why anyone would visit\n"
# 37 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "VERDANTURF…\p"
# 38 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "It's the BATTLE TENT. It goes without\n"
# 39 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "saying.\p"
# 40 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "Or is there somebody here that you\n"
# 41 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.string "came to see?$"
# 42 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 43 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_EventScript_Clerk::
# 44 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	lock
# 45 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	faceplayer
# 46 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	message gText_HowMayIServeYou
# 47 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	waitmessage
# 48 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	pokemart DurianTown_PokemonCenter_Pokemart
# 49 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 50 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	release
# 51 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	end
# 52 "data/maps/DurianTown_PokemonCenter/scripts.pory"

# 53 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.align 2
# 54 "data/maps/DurianTown_PokemonCenter/scripts.pory"
DurianTown_PokemonCenter_Pokemart:
# 55 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 56 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 57 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 58 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 59 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 60 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_AWAKENING
# 61 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 62 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 63 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_REPEL
# 64 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 65 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 66 "data/maps/DurianTown_PokemonCenter/scripts.pory"
	pokemartlistend
