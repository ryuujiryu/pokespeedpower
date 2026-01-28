@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/CitrusIsland_House1/map.json
@

	.align 2

CitrusIsland_House1_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_WOMAN_3, 2, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, CitrusIsland_House1_EventScript_Woman, 0
	object_event 2, OBJ_EVENT_GFX_LITTLE_BOY, 5, 3, 0, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, CitrusIsland_House1_EventScript_LittleBoy, 0

CitrusIsland_House1_MapWarps:
	warp_def 4, 8, 0, 0, MAP_CITRUS_ISLAND

CitrusIsland_House1_MapEvents::
	map_events CitrusIsland_House1_ObjectEvents, CitrusIsland_House1_MapWarps, NULL, NULL

