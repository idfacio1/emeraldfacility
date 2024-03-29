BirchsNewLab_MapScripts::
	.byte 0


BirchsNewLab_EventScript_StarterCase::
# 5 "data/maps/BirchsNewLab/scripts.pory"
	lockall
# 6 "data/maps/BirchsNewLab/scripts.pory"
	msgbox BirchsNewLab_EventScript_StarterCase_Text_0
# 7 "data/maps/BirchsNewLab/scripts.pory"
	callnative StartNewPokeballCaseUI
# 8 "data/maps/BirchsNewLab/scripts.pory"
	waitstate
# 9 "data/maps/BirchsNewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq BirchsNewLab_EventScript_StarterCase_2
BirchsNewLab_EventScript_StarterCase_1:
# 15 "data/maps/BirchsNewLab/scripts.pory"
	waitmessage
# 16 "data/maps/BirchsNewLab/scripts.pory"
	releaseall
	end

BirchsNewLab_EventScript_StarterCase_2:
# 10 "data/maps/BirchsNewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 11 "data/maps/BirchsNewLab/scripts.pory"
	msgbox BirchsNewLab_EventScript_StarterCase_Text_1
# 12 "data/maps/BirchsNewLab/scripts.pory"
	removeobject 1
# 13 "data/maps/BirchsNewLab/scripts.pory"
	setflag FLAG_UNUSED_0x020
	goto BirchsNewLab_EventScript_StarterCase_1


BirchsNewLab_EventScript_StarterCase_Text_0:
# 6 "data/maps/BirchsNewLab/scripts.pory"
	.string "Choose your starter.$"

BirchsNewLab_EventScript_StarterCase_Text_1:
# 11 "data/maps/BirchsNewLab/scripts.pory"
	.string "You have chosen your starter!$"
