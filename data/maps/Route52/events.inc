@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route52/map.json
@

	.align 2

Route52_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BUG_CATCHER, 12, 41, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 2, OBJ_EVENT_GFX_CAMPER, 18, 6, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 3, OBJ_EVENT_GFX_SHRINE_MAIDEN, 14, 30, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, Route52_ReligiousDebate, FLAG_BADGE01_GET
	object_event 4, OBJ_EVENT_GFX_MONK, 12, 30, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, Route52_ReligiousDebate, FLAG_BADGE01_GET

Route52_MapWarps:
	warp_def 13, 27, 0, 0, MAP_ROUTE51_GATEHOUSE
	warp_def 13, 13, 0, 1, MAP_ROUTE52_GATEHOUSE2

Route52_MapCoordEvents:
	coord_event 13, 31, 0, VAR_ROUTE52_STATE, 0, Route52_ReligiousDebate

Route52_MapEvents::
	map_events Route52_ObjectEvents, Route52_MapWarps, Route52_MapCoordEvents, NULL

