DarkRoom_MapScripts::
# 2 "data/maps/DarkRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DarkRoom_EventScript_HidePlayer
# 4 "data/maps/DarkRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DarkRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DarkRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/DarkRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, DarkRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DarkRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/DarkRoom/scripts.pory"
	callnative StartNewPokeballCaseUI
# 7 "data/maps/DarkRoom/scripts.pory"
	waitstate
	return


DarkRoom_EventScript_HidePlayer::
	return

