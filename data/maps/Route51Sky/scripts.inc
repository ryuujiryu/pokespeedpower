Route51Sky_MapScripts::
# 2 "data/maps/Route51Sky/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route51Sky_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/Route51Sky/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route51Sky_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route51Sky_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route51Sky/scripts.pory"
	call SetMCInvisible
	end

Route51Sky_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Route51Sky/scripts.pory"
	map_script_2 VAR_RIVALS_STATE, 1, Route51Sky_Rival
	.2byte 0


Route51Sky_Rival::
# 12 "data/maps/Route51Sky/scripts.pory"
	faceplayer
# 13 "data/maps/Route51Sky/scripts.pory"
	release
	end


SetMCInvisible::
# 18 "data/maps/Route51Sky/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Invisible
	end

