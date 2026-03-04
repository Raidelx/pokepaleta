PalletTown_EventScript_LittlerootSign::
# 3 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 4 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_LittlerootSign_Text_0
# 5 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	return


PalletTown_EventScript_RedHouseSign::
# 9 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 10 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_RedHouseSign_Text_0
# 11 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	return


PalletTown_EventScript_BlueHouseSign::
# 15 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 16 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_BlueHouseSign_Text_0
# 17 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	return


PalletTown_EventScript_Sign1::
# 21 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 22 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_Sign1_Text_0
# 23 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	return


PalletTown_EventScript_Sign2::
# 27 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 28 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_Sign2_Text_0
# 29 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	return


PalletTown_Pal_MapScripts::
	.byte 0


PalletTown_EventScript_Archie::
# 36 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_Archie_Text_0, MSGBOX_NPC
	return


PalletTown_EventScript_Girl::
# 40 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_Girl_Text_0, MSGBOX_NPC
	return


PalletTown_EventScript_Boy::
# 44 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_Boy_Text_0, MSGBOX_NPC
	return


PalletTown_EventScript_Dusclops::
# 48 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_Dusclops_Text_0, MSGBOX_NPC
	return


PalletTown_RedHouse_EventScript_Mom::
# 54 "data/maps/PalletTown_Pal/scripts.pory"
	goto_if_set FLAG_MET_MOM, PalletTown_RedHouse_EventScript_Mom_1
# 71 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_RedHouse_EventScript_Mom_Text_3, MSGBOX_NPC
# 77 "data/maps/PalletTown_Pal/scripts.pory"
	setflag FLAG_MET_MOM
	return

PalletTown_RedHouse_EventScript_Mom_1:
# 55 "data/maps/PalletTown_Pal/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_RedHouse_EventScript_Mom_4
# 66 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_RedHouse_EventScript_Mom_Text_2, MSGBOX_NPC
	return

PalletTown_RedHouse_EventScript_Mom_4:
# 56 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_RedHouse_EventScript_Mom_Text_0, MSGBOX_NPC
# 57 "data/maps/PalletTown_Pal/scripts.pory"
	playfanfare MUS_HEAL
# 58 "data/maps/PalletTown_Pal/scripts.pory"
	special HealPlayerParty
# 59 "data/maps/PalletTown_Pal/scripts.pory"
	setrespawn HEAL_LOCATION_RED_HOUSE_1F
# 60 "data/maps/PalletTown_Pal/scripts.pory"
	waitfanfare
# 61 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_RedHouse_EventScript_Mom_Text_1, MSGBOX_AUTOCLOSE
# 62 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	end


PalletTown_RedHouse_EventScript_Red::
# 81 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_RedHouse_EventScript_Red_Text_0, MSGBOX_NPC
	return


PalletTown_RedHouse_EventScript_Key::
# 89 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_RedHouse_EventScript_Key_Text_0, MSGBOX_NPC
	return


PalletTown_EventScript_BlockGrass::
# 99 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 101 "data/maps/PalletTown_Pal/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_EventScript_BlockGrass_2
# 106 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_EventScript_BlockGrass_Text_0, MSGBOX_DEFAULT
# 110 "data/maps/PalletTown_Pal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Back
# 111 "data/maps/PalletTown_Pal/scripts.pory"
	waitmovement 0
# 113 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	end

PalletTown_EventScript_BlockGrass_2:
# 102 "data/maps/PalletTown_Pal/scripts.pory"
	release
	end


# 117 "data/maps/PalletTown_Pal/scripts.pory"
Movement_Back:
# 118 "data/maps/PalletTown_Pal/scripts.pory"
	walk_down
	step_end

PalletTown_BlueHouse_EventScript_Blue::
# 124 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_BlueHouse_EventScript_Blue_Text_0, MSGBOX_NPC
	return


PalletTown_BlueHouse_EventScript_Dana::
# 137 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_BlueHouse_EventScript_Dana_Text_0, MSGBOX_NPC
	return


PalletTown_OakLab_EventScript_ProfOak::
# 150 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_ProfOak_Text_0, MSGBOX_NPC
	return


PalletTown_OakLab_EventScript_ProfMau::
# 156 "data/maps/PalletTown_Pal/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_OakLab_EventScript_ProfMau_1
# 179 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_ProfMau_Text_3, MSGBOX_NPC
	return

PalletTown_OakLab_EventScript_ProfMau_1:
# 157 "data/maps/PalletTown_Pal/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, PalletTown_OakLab_EventScript_ProfMau_4
# 175 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_ProfMau_Text_2, MSGBOX_NPC
	return

PalletTown_OakLab_EventScript_ProfMau_4:
# 158 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 159 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_ProfMau_Text_0, MSGBOX_NPC
# 160 "data/maps/PalletTown_Pal/scripts.pory"
	giveitem ITEM_POKE_BALL, 20
# 161 "data/maps/PalletTown_Pal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 162 "data/maps/PalletTown_Pal/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 164 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_ProfMau_Text_1, MSGBOX_NPC
# 165 "data/maps/PalletTown_Pal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 166 "data/maps/PalletTown_Pal/scripts.pory"
	special SetUnlockedPokedexFlags
# 167 "data/maps/PalletTown_Pal/scripts.pory"
	special EnableNationalPokedex
# 168 "data/maps/PalletTown_Pal/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 170 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_ProfMau_Text_2, MSGBOX_AUTOCLOSE
# 171 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	end


PalletTown_OakLab_EventScript_PokeballBulb::
# 191 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_CHOSEN_STARTER, SPECIES_BULBASAUR
# 193 "data/maps/PalletTown_Pal/scripts.pory"
	call PalletTown_OakLab_EventScript_Starter
	end


PalletTown_OakLab_EventScript_PokeballChar::
# 198 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_CHOSEN_STARTER, SPECIES_CHARMANDER
# 200 "data/maps/PalletTown_Pal/scripts.pory"
	call PalletTown_OakLab_EventScript_Starter
	end


PalletTown_OakLab_EventScript_PokeballSquir::
# 205 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_CHOSEN_STARTER, SPECIES_SQUIRTLE
# 207 "data/maps/PalletTown_Pal/scripts.pory"
	call PalletTown_OakLab_EventScript_Starter
	end


PalletTown_OakLab_EventScript_Starter::
# 212 "data/maps/PalletTown_Pal/scripts.pory"
	lockall
# 213 "data/maps/PalletTown_Pal/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_OakLab_EventScript_Starter_1
# 221 "data/maps/PalletTown_Pal/scripts.pory"
	showmonpic VAR_CHOSEN_STARTER, 10, 3
# 223 "data/maps/PalletTown_Pal/scripts.pory"
	switch VAR_CHOSEN_STARTER
# 225 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_BULBASAUR, PalletTown_OakLab_EventScript_Starter_6
# 231 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_CHARMANDER, PalletTown_OakLab_EventScript_Starter_7
# 237 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_SQUIRTLE, PalletTown_OakLab_EventScript_Starter_8
PalletTown_OakLab_EventScript_Starter_4:
# 244 "data/maps/PalletTown_Pal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_OakLab_EventScript_Starter_10
# 305 "data/maps/PalletTown_Pal/scripts.pory"
	hidemonpic
# 306 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_8
PalletTown_OakLab_EventScript_Starter_9:
# 307 "data/maps/PalletTown_Pal/scripts.pory"
	waitmessage
# 308 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	end

PalletTown_OakLab_EventScript_Starter_1:
# 214 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_0
# 215 "data/maps/PalletTown_Pal/scripts.pory"
	releaseall
	end

PalletTown_OakLab_EventScript_Starter_6:
# 226 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_1, MSGBOX_YESNO
	goto PalletTown_OakLab_EventScript_Starter_4

PalletTown_OakLab_EventScript_Starter_7:
# 232 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_2, MSGBOX_YESNO
	goto PalletTown_OakLab_EventScript_Starter_4

PalletTown_OakLab_EventScript_Starter_8:
# 238 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_3, MSGBOX_YESNO
	goto PalletTown_OakLab_EventScript_Starter_4

PalletTown_OakLab_EventScript_Starter_10:
# 245 "data/maps/PalletTown_Pal/scripts.pory"
	givemon VAR_CHOSEN_STARTER, 5, ITEM_NONE
# 246 "data/maps/PalletTown_Pal/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PalletTown_OakLab_EventScript_Starter_13
# 273 "data/maps/PalletTown_Pal/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PalletTown_OakLab_EventScript_Starter_14
# 300 "data/maps/PalletTown_Pal/scripts.pory"
	hidemonpic
# 301 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_7
	goto PalletTown_OakLab_EventScript_Starter_9

PalletTown_OakLab_EventScript_Starter_13:
# 247 "data/maps/PalletTown_Pal/scripts.pory"
	hidemonpic
# 248 "data/maps/PalletTown_Pal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 249 "data/maps/PalletTown_Pal/scripts.pory"
	switch VAR_CHOSEN_STARTER
# 251 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_BULBASAUR, PalletTown_OakLab_EventScript_Starter_20
# 257 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_CHARMANDER, PalletTown_OakLab_EventScript_Starter_21
# 263 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_SQUIRTLE, PalletTown_OakLab_EventScript_Starter_22
PalletTown_OakLab_EventScript_Starter_18:
# 269 "data/maps/PalletTown_Pal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 270 "data/maps/PalletTown_Pal/scripts.pory"
	call NicknamePartyMon
# 271 "data/maps/PalletTown_Pal/scripts.pory"
	setrespawn HEAL_LOCATION_RED_HOUSE_1F
	goto PalletTown_OakLab_EventScript_Starter_9

PalletTown_OakLab_EventScript_Starter_14:
# 274 "data/maps/PalletTown_Pal/scripts.pory"
	hidemonpic
# 275 "data/maps/PalletTown_Pal/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 276 "data/maps/PalletTown_Pal/scripts.pory"
	switch VAR_CHOSEN_STARTER
# 278 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_BULBASAUR, PalletTown_OakLab_EventScript_Starter_25
# 284 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_CHARMANDER, PalletTown_OakLab_EventScript_Starter_26
# 290 "data/maps/PalletTown_Pal/scripts.pory"
	case SPECIES_SQUIRTLE, PalletTown_OakLab_EventScript_Starter_27
PalletTown_OakLab_EventScript_Starter_23:
# 296 "data/maps/PalletTown_Pal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 297 "data/maps/PalletTown_Pal/scripts.pory"
	setrespawn HEAL_LOCATION_RED_HOUSE_1F
	goto PalletTown_OakLab_EventScript_Starter_9

PalletTown_OakLab_EventScript_Starter_20:
# 252 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_4
# 253 "data/maps/PalletTown_Pal/scripts.pory"
	removeobject 3
# 254 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PalletTown_OakLab_EventScript_Starter_18

PalletTown_OakLab_EventScript_Starter_21:
# 258 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_5
# 259 "data/maps/PalletTown_Pal/scripts.pory"
	removeobject 5
# 260 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto PalletTown_OakLab_EventScript_Starter_18

PalletTown_OakLab_EventScript_Starter_22:
# 264 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_6
# 265 "data/maps/PalletTown_Pal/scripts.pory"
	removeobject 4
# 266 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto PalletTown_OakLab_EventScript_Starter_18

PalletTown_OakLab_EventScript_Starter_25:
# 279 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_4
# 280 "data/maps/PalletTown_Pal/scripts.pory"
	removeobject 3
# 281 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_STARTER_MON, 0
	goto PalletTown_OakLab_EventScript_Starter_23

PalletTown_OakLab_EventScript_Starter_26:
# 285 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_5
# 286 "data/maps/PalletTown_Pal/scripts.pory"
	removeobject 5
# 287 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_STARTER_MON, 1
	goto PalletTown_OakLab_EventScript_Starter_23

PalletTown_OakLab_EventScript_Starter_27:
# 291 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox PalletTown_OakLab_EventScript_Starter_Text_6
# 292 "data/maps/PalletTown_Pal/scripts.pory"
	removeobject 4
# 293 "data/maps/PalletTown_Pal/scripts.pory"
	setvar VAR_STARTER_MON, 2
	goto PalletTown_OakLab_EventScript_Starter_23


NicknamePartyMon::
# 316 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 317 "data/maps/PalletTown_Pal/scripts.pory"
	hidemonpic
# 318 "data/maps/PalletTown_Pal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 319 "data/maps/PalletTown_Pal/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 320 "data/maps/PalletTown_Pal/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 328 "data/maps/PalletTown_Pal/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 329 "data/maps/PalletTown_Pal/scripts.pory"
	hidemonpic
# 330 "data/maps/PalletTown_Pal/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 333 "data/maps/PalletTown_Pal/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 331 "data/maps/PalletTown_Pal/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


PalletTown_EventScript_LittlerootSign_Text_0:
# 4 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Puerta para volver al juego original$"

PalletTown_EventScript_RedHouseSign_Text_0:
# 10 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Casa de Rojo$"

PalletTown_EventScript_BlueHouseSign_Text_0:
# 16 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Casa de Azul Oak$"

PalletTown_EventScript_Sign1_Text_0:
# 22 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Hola {PLAYER} :)$"

PalletTown_EventScript_Sign2_Text_0:
# 28 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Para arriba está el laboratorio.$"

PalletTown_EventScript_Archie_Text_0:
# 36 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Se me cayó el helado en el río.\p :($"

PalletTown_EventScript_Girl_Text_0:
# 40 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Que bonito Pokémon, verdad?$"

PalletTown_EventScript_Boy_Text_0:
# 44 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Me traje este Dusclops para\nimpresionar a las nenas$"

PalletTown_EventScript_Dusclops_Text_0:
# 48 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Duscloooops$"

PalletTown_RedHouse_EventScript_Mom_Text_0:
# 56 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Ay mi Rojo...\nDejame curar tus Pokémon, anda.$"

PalletTown_RedHouse_EventScript_Mom_Text_1:
# 61 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Suerte allí afuera, cariño.$"

PalletTown_RedHouse_EventScript_Mom_Text_2:
# 66 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Cuando tengas Pokémon ven a verme,\ncariño.$"

PalletTown_RedHouse_EventScript_Mom_Text_3:
# 71 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Hola, soy la mamá de Rojo.\p"
	.string "Mi hijo se la pasa en sus viajes y\n"
	.string "aventuras así que a veces se olvida\l"
	.string "de mi nieto, Key.\p"
	.string "Aún así, yo disfruto mucho mimándolo\n"
	.string "como a mi propio hijo.$"

PalletTown_RedHouse_EventScript_Red_Text_0:
# 81 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Sí sí, soy Rojo, el legendario entrenador\n"
	.string "Pokémon. Solo soy un tipo que le gustan\l"
	.string "las peleas. La fama puede ser tan\lmolesta.\p"
	.string "Además, temo que a Key se le sube mucho\n"
	.string "a la cabeza aveces.$"

PalletTown_RedHouse_EventScript_Key_Text_0:
# 89 "data/maps/PalletTown_Pal/scripts.pory"
	.string "¿Quien eres?\p"
	.string "No me importa, soy Keyden, el hijo\n"
	.string "del Legendario Entrenador Rojo de\l"
	.string "Pueblo Paleta.\p"
	.string "Algun dia sere tan increible como mi papá\n"
	.string "y derrotaré a la liga Pokémon, así que\l"
	.string "APARTATE DE MI CAMINO.$"

PalletTown_EventScript_BlockGrass_Text_0:
# 106 "data/maps/PalletTown_Pal/scripts.pory"
	.string "¡Es peligroso ir a la hierba alta\n"
	.string "sin un Pokémon!$"

PalletTown_BlueHouse_EventScript_Blue_Text_0:
# 124 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Hola, soy Azul, el nieto del Prof. Oak \p"
	.string "Soy el líder de gimnasio de Ciudad Verde,\n"
	.string "al final de la Ruta 01.\p"
	.string "Fuí campeón hace 20 años, pero mi\n"
	.string "victoria no duró mucho, jaja.\l"
	.string "Rojo me venció el mismo día.\p"
	.string "Solía ser un gruñón al respecto,\n"
	.string "pero nuestras aventuras nos han\l"
	.string "hecho inseparables...\p"
	.string "No le digas que dije eso.$"

PalletTown_BlueHouse_EventScript_Dana_Text_0:
# 137 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Hey! Qué haces en mi cuarto???\n"
	.string "Mm? No eres de por aquí? Me llamo Dana\l"
	.string "un gusto en conocerte\p"
	.string "Justo me agarraste desempacando mis\n"
	.string "cosas. Vengo de mi super-hiper-mega\l"
	.string "increíbles vacaciones a Alolaaa.\p"
	.string "Keyden va estar super celoso del\n"
	.string "Pokémon que me atrapó mi tito.$"

PalletTown_OakLab_EventScript_ProfOak_Text_0:
# 150 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Hola jóven promesa. Soy el Prof. Oak\p"
	.string "El avión aún me tiene sarandeado, pero\n"
	.string "puedes hablar con mi coléga.$"

PalletTown_OakLab_EventScript_ProfMau_Text_0:
# 159 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Toma, éstas son Pokéballs, para que\n"
	.string "atrapes todos los Pokémon que te\l"
	.string "encuentres en tu camino$"

PalletTown_OakLab_EventScript_ProfMau_Text_1:
# 164 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Ademas, ten tu primera Pokédex$"

PalletTown_OakLab_EventScript_ProfMau_Text_2:
# 170 "data/maps/PalletTown_Pal/scripts.pory"
	.string "¡Mucha suerte!$"

PalletTown_OakLab_EventScript_ProfMau_Text_3:
# 179 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Hola {PLAYER}! Kevin me habló de tí\p"
	.string "Soy el Prof. Mau! el Profesor Pokémon de\n"
	.string "la región de Cosra.\l"
	.string "Cualquier parecido con mi creador es pura\l"
	.string "coincidencia.\p"
	.string "Mira! Puedes tomar un Pokémon de la mesa,\n"
	.string "si quieres, y probarlo luchando contra\l"
	.string "Pokémon salvajes en la Ruta 1, al norte.$"

PalletTown_OakLab_EventScript_Starter_Text_0:
# 214 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Ya tienes un Pokémon inicial$"

PalletTown_OakLab_EventScript_Starter_Text_1:
# 226 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Bulbasaur es el inicial de Kanto de\n"
	.string "tipo planta, míralo que lindo\p"
	.string "Quieres tomar a Bulbasaur?$"

PalletTown_OakLab_EventScript_Starter_Text_2:
# 232 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Charmander es el inicial de Kanto de\n"
	.string "tipo fuego, míralo que lindo\p"
	.string "Quieres tomar a Charmander?$"

PalletTown_OakLab_EventScript_Starter_Text_3:
# 238 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Squirtle es el inicial de Kanto de\n"
	.string "tipo agua, míralo que lindo\p"
	.string "Quieres tomar a Squirtle?$"

PalletTown_OakLab_EventScript_Starter_Text_4:
# 252 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Has recibido un Bulbasaur$"

PalletTown_OakLab_EventScript_Starter_Text_5:
# 258 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Has recibido un Charmander$"

PalletTown_OakLab_EventScript_Starter_Text_6:
# 264 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Has recibido un Squirtle$"

PalletTown_OakLab_EventScript_Starter_Text_7:
# 301 "data/maps/PalletTown_Pal/scripts.pory"
	.string "No hay espacio en tu equipo$"

PalletTown_OakLab_EventScript_Starter_Text_8:
# 306 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Ta bien, puedes ver los demás.$"

NicknamePartyMon_Text_0:
# 316 "data/maps/PalletTown_Pal/scripts.pory"
	.string "Quieres darle un mote?$"
