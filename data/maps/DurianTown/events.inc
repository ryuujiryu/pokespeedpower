@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/DurianTown/map.json
@

	.align 2

DurianTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY_1, 15, 19, 0, MOVEMENT_TYPE_WANDER_UP_AND_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_KurtApprentice, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_GIRL, 29, 8, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_LittleGirl, 0
	object_event 3, OBJ_EVENT_GFX_VAR_0, 14, 11, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, 0x0, FLAG_HIDE_DURIAN_TOWN_RIVAL
	object_event 4, OBJ_EVENT_GFX_ITEM_BALL, 14, 10, 0, MOVEMENT_TYPE_INVISIBLE, 0, 0, TRAINER_TYPE_NONE, APRICORN_TREE_ROUTE101_RED_TREE, ApricornTreeScript, 0

DurianTown_MapWarps:
	warp_def 9, 18, 0, 0, MAP_DURIAN_TOWN_POKEMON_CENTER
	warp_def 7, 9, 0, 0, MAP_DURIAN_GYM
	warp_def 16, 10, 0, 0, MAP_DURIAN_TOWN_HOUSE
	warp_def 22, 15, 0, 0, MAP_DURIAN_TOWN_KURTS_HOUSE

DurianTown_MapCoordEvents:
	coord_event 7, 10, 0, VAR_RIVALS_STATE, 0, DurianTown_Rival
	coord_event 26, 7, 0, VAR_TEMP_0, 0, NULL
	coord_event 27, 7, 0, VAR_TEMP_0, 0, NULL

DurianTown_MapBGEvents:
	bg_sign_event 20, 15, 0, BG_EVENT_PLAYER_FACING_ANY, DurianTown_KurtSign
	bg_sign_event 12, 17, 0, BG_EVENT_PLAYER_FACING_ANY, DurianTown_CitySign
	bg_sign_event 11, 10, 0, BG_EVENT_PLAYER_FACING_ANY, DurianTown_GymSign

DurianTown_MapEvents::
	map_events DurianTown_ObjectEvents, DurianTown_MapWarps, DurianTown_MapCoordEvents, DurianTown_MapBGEvents

