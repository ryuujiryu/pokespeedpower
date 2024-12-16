Zelkovalab_MapScripts::
	.byte 0


Zelkovalab_EventScript_Pokeball::
# 5 "data/maps/Zelkovalab/scripts.pory"
	lockall
# 6 "data/maps/Zelkovalab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 7 "data/maps/Zelkovalab/scripts.pory"
	msgbox Zelkovalab_EventScript_Pokeball_Text_0, MSGBOX_YESNO
# 8 "data/maps/Zelkovalab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Zelkovalab_EventScript_Pokeball_2
# 31 "data/maps/Zelkovalab/scripts.pory"
	hidemonpic
# 32 "data/maps/Zelkovalab/scripts.pory"
	msgbox Zelkovalab_NotChosen
Zelkovalab_EventScript_Pokeball_1:
# 34 "data/maps/Zelkovalab/scripts.pory"
	waitmessage
# 35 "data/maps/Zelkovalab/scripts.pory"
	releaseall
	end

Zelkovalab_EventScript_Pokeball_2:
# 9 "data/maps/Zelkovalab/scripts.pory"
	givemon SPECIES_CHIKORITA, 15, ITEM_MASTER_BALL
# 10 "data/maps/Zelkovalab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Zelkovalab_EventScript_Pokeball_5
# 18 "data/maps/Zelkovalab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Zelkovalab_EventScript_Pokeball_6
# 26 "data/maps/Zelkovalab/scripts.pory"
	hidemonpic
# 27 "data/maps/Zelkovalab/scripts.pory"
	msgbox Zelkovalab_EventScript_Pokeball_Text_2
	goto Zelkovalab_EventScript_Pokeball_1

Zelkovalab_EventScript_Pokeball_5:
# 11 "data/maps/Zelkovalab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/Zelkovalab/scripts.pory"
	msgbox Zelkovalab_EventScript_Pokeball_Text_1
# 13 "data/maps/Zelkovalab/scripts.pory"
	removeobject 1
# 14 "data/maps/Zelkovalab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 15 "data/maps/Zelkovalab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 16 "data/maps/Zelkovalab/scripts.pory"
	call NicknamePartyMon
	goto Zelkovalab_EventScript_Pokeball_1

Zelkovalab_EventScript_Pokeball_6:
# 19 "data/maps/Zelkovalab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/Zelkovalab/scripts.pory"
	msgbox Zelkovalab_EventScript_Pokeball_Text_1
# 21 "data/maps/Zelkovalab/scripts.pory"
	removeobject 1
# 22 "data/maps/Zelkovalab/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 23 "data/maps/Zelkovalab/scripts.pory"
	call NicknameBoxMon
	goto Zelkovalab_EventScript_Pokeball_1


NicknamePartyMon::
# 42 "data/maps/Zelkovalab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 43 "data/maps/Zelkovalab/scripts.pory"
	hidemonpic
# 44 "data/maps/Zelkovalab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 45 "data/maps/Zelkovalab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 46 "data/maps/Zelkovalab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 54 "data/maps/Zelkovalab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 55 "data/maps/Zelkovalab/scripts.pory"
	hidemonpic
# 56 "data/maps/Zelkovalab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 59 "data/maps/Zelkovalab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 57 "data/maps/Zelkovalab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Zelkovalab_EventScript_Pokeball_Text_0:
# 7 "data/maps/Zelkovalab/scripts.pory"
	.string "Do you want to choose CHIKORITA?$"

Zelkovalab_EventScript_Pokeball_Text_1:
# 12 "data/maps/Zelkovalab/scripts.pory"
	.string "Recieved CHIKORITA$"

Zelkovalab_EventScript_Pokeball_Text_2:
# 27 "data/maps/Zelkovalab/scripts.pory"
	.string "No More Room$"

NicknamePartyMon_Text_0:
# 42 "data/maps/Zelkovalab/scripts.pory"
	.string "Give it a nickname?$"

Zelkovalab_NotChosen::
# 63 "data/maps/Zelkovalab/scripts.pory"
	.string "You did not choose the Pokemon$"
