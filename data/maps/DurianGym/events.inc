@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/DurianGym/map.json
@

	.align 2

DurianGym_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_GUITARIST, 8, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NORMAL, 0, DurianGym_Darian, 0
	object_event 2, OBJ_EVENT_GFX_IDOL, 1, 3, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NORMAL, 0, DurianGym_Junichi, 0
	object_event 3, OBJ_EVENT_GFX_SHIRI, 4, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, DurianGym_ShiriAndBanjo, 0
	object_event 4, OBJ_EVENT_GFX_BANJO, 5, 4, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, DurianGym_ShiriAndBanjo, 0
	object_event 5, OBJ_EVENT_GFX_MAN_2, 3, 14, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, DurianGym_Guide, 0

DurianGym_MapWarps:
	warp_def 4, 16, 0, 1, MAP_DURIAN_TOWN
	warp_def 5, 16, 0, 1, MAP_DURIAN_TOWN

DurianGym_MapEvents::
	map_events DurianGym_ObjectEvents, DurianGym_MapWarps, NULL, NULL

