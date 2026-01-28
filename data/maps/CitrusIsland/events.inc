@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CitrusIsland/map.json
@

	.align 2

CitrusIsland_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY_3, 16, 13, 0, MOVEMENT_TYPE_WANDER_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, CitrusIsland_Samurai, 0
	object_event 2, OBJ_EVENT_GFX_GIRL_2, 30, 21, 0, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, CitrusIsland_Girl, 0
	object_event 3, OBJ_EVENT_GFX_ZELKOVA, 25, 33, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 4, OBJ_EVENT_GFX_DNIPRO, 30, 33, 0, MOVEMENT_TYPE_INVISIBLE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 5, OBJ_EVENT_GFX_MITSURU, 21, 35, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 6, OBJ_EVENT_GFX_JUAN, 22, 34, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 7, OBJ_EVENT_GFX_SS_TIDAL, 36, 34, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 8, OBJ_EVENT_GFX_VAR_0, 23, 35, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_RIVAL_CITRUSISLAND
	object_event 9, OBJ_EVENT_GFX_SOLDIER_M, 30, 33, 0, MOVEMENT_TYPE_INVISIBLE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 10, OBJ_EVENT_GFX_SOLDIER_F, 30, 33, 0, MOVEMENT_TYPE_INVISIBLE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 11, OBJ_EVENT_GFX_MR_BRINEYS_BOAT, 28, 31, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

CitrusIsland_MapWarps:
	warp_def 15, 20, 0, 0, MAP_CITRUS_ISLAND_HOUSE1
	warp_def 9, 12, 0, 0, MAP_CITRUS_ISLAND_HOUSE2
	warp_def 26, 20, 0, 0, MAP_CITRUS_ISLAND_HOUSE3
	warp_def 31, 12, 0, 0, MAP_CITRUS_ISLAND_MITSURU_HOUSE
	warp_def 21, 5, 0, 0, MAP_CITRUS_ISLAND_PLAYER_HOUSE
	warp_def 22, 5, 0, 0, MAP_CITRUS_ISLAND_PLAYER_HOUSE

CitrusIsland_MapCoordEvents:
	coord_event 29, 26, 0, VAR_TEMP_0, 0, CitrusIsland_Shore1
	coord_event 29, 27, 0, VAR_TEMP_0, 0, CitrusIsland_Shore2

CitrusIsland_MapBGEvents:
	bg_sign_event 24, 12, 0, BG_EVENT_PLAYER_FACING_ANY, CitrusIsland_House

CitrusIsland_MapEvents::
	map_events CitrusIsland_ObjectEvents, CitrusIsland_MapWarps, CitrusIsland_MapCoordEvents, CitrusIsland_MapBGEvents

