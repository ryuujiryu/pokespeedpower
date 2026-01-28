@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CitrusIsland_PlayerHouse/map.json
@

	.align 2

CitrusIsland_PlayerHouse_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_VAR_0, 9, 10, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, CitrusIsland_PlayerHouse_Rival, FLAG_HIDE_HOUSE_RIVAL

CitrusIsland_PlayerHouse_MapWarps:
	warp_def 8, 14, 0, 4, MAP_CITRUS_ISLAND

CitrusIsland_PlayerHouse_MapCoordEvents:
	coord_event 1, 7, 0, VAR_ROUTE102_STATE, 0, CitrusIsland_PlayerHouse_Rival

CitrusIsland_PlayerHouse_MapEvents::
	map_events CitrusIsland_PlayerHouse_ObjectEvents, CitrusIsland_PlayerHouse_MapWarps, CitrusIsland_PlayerHouse_MapCoordEvents, NULL

