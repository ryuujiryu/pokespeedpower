@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/DurianTown_House/map.json
@

	.align 2

DurianTown_House_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_LASS, 4, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_House_Lass, 0
	object_event 2, OBJ_EVENT_GFX_BEAUTY, 7, 3, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, DurianTown_House_Beauty, 0

DurianTown_House_MapWarps:
	warp_def 3, 7, 0, 2, MAP_DURIAN_TOWN
	warp_def 4, 7, 0, 2, MAP_DURIAN_TOWN

DurianTown_House_MapEvents::
	map_events DurianTown_House_ObjectEvents, DurianTown_House_MapWarps, NULL, NULL

