@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/DurianTown_PokemonCenter/map.json
@

	.align 2

DurianTown_PokemonCenter_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 9, 3, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_Nurse, 0
	object_event 2, OBJ_EVENT_GFX_GIRL_3, 2, 3, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_Girl, 0
	object_event 3, OBJ_EVENT_GFX_EXPERT_M, 2, 6, 3, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_ExpertM, 0
	object_event 4, OBJ_EVENT_GFX_BOY_2, 2, 7, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_Boy, 0
	object_event 5, OBJ_EVENT_GFX_JACK, 15, 7, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner, 0
	object_event 6, OBJ_EVENT_GFX_WOMAN_4, 5, 3, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_Woman, 0
	object_event 7, OBJ_EVENT_GFX_TRICK_HOUSE_STATUE, 14, 2, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_Jukebox, 0
	object_event 8, OBJ_EVENT_GFX_BOY_3, 14, 4, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_Disc, 0
	object_event 9, OBJ_EVENT_GFX_ZIGZAG_CUSHION, 11, 8, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_PokemonCenter_EventScript_Ptest, 0

DurianTown_PokemonCenter_MapWarps:
	warp_def 9, 12, 3, 0, MAP_DURIAN_TOWN
	warp_def 0, 0, 4, 0, MAP_VERDANTURF_TOWN_POKEMON_CENTER_2F
	warp_def 1, 0, 3, 1, MAP_DURIAN_TOWN

DurianTown_PokemonCenter_MapEvents::
	map_events DurianTown_PokemonCenter_ObjectEvents, DurianTown_PokemonCenter_MapWarps, NULL, NULL

