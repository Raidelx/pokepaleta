Route01_EventScript_Sign1::
# 2 "data/maps/Route01/scripts.pory"
	lockall
# 3 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Sign1_Text_0
# 4 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_EventScript_Sign2::
# 8 "data/maps/Route01/scripts.pory"
	lockall
# 9 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Sign2_Text_0
# 10 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_EventScript_Sign3::
# 14 "data/maps/Route01/scripts.pory"
	lockall
# 15 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Sign3_Text_0
# 16 "data/maps/Route01/scripts.pory"
	releaseall
	return


Route01_MapScripts::
	.byte 0


Route01_EventScript_JokeFisherman::
# 24 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_JokeFisherman_Text_0, MSGBOX_NPC
	return


Route01_EventScript_Boy1Battle::
# 29 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_BOY1_ROUTE_01, Route01_EventScript_Boy1Battle_Text_0, Route01_EventScript_Boy1Battle_Text_1
# 32 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Boy1Battle_Text_2, MSGBOX_AUTOCLOSE
	end


Route01_EventScript_Boy2Battle::
# 39 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_BOY2_ROUTE_01, Route01_EventScript_Boy2Battle_Text_0, Route01_EventScript_Boy2Battle_Text_1
# 42 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Boy2Battle_Text_2, MSGBOX_AUTOCLOSE
	end


Route01_EventScript_GirlBattle::
# 47 "data/maps/Route01/scripts.pory"
	trainerbattle_single TRAINER_GIRL_ROUTE_01, Route01_EventScript_GirlBattle_Text_0, Route01_EventScript_GirlBattle_Text_1
# 50 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_GirlBattle_Text_2, MSGBOX_AUTOCLOSE
	end


Route01_EventScript_Camper::
# 55 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Camper_Text_0, MSGBOX_NPC
	return


Route01_EventScript_Expert::
# 59 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Expert_Text_0, MSGBOX_NPC
	return


Route01_EventScript_Pikachu::
# 63 "data/maps/Route01/scripts.pory"
	msgbox Route01_EventScript_Pikachu_Text_0, MSGBOX_NPC
	return


Route01_EventScript_Item::
# 67 "data/maps/Route01/scripts.pory"
	giveitem ITEM_POTION
# 68 "data/maps/Route01/scripts.pory"
	removeobject 8
# 69 "data/maps/Route01/scripts.pory"
	setflag FLAG_ITEM_ROUTE01
	end


Route01_EventScript_Sign1_Text_0:
# 3 "data/maps/Route01/scripts.pory"
	.string "Mira, esta es la Ruta 1.\n Cuidado te ataca un Rattata!$"

Route01_EventScript_Sign2_Text_0:
# 9 "data/maps/Route01/scripts.pory"
	.string "¿Porqué el mar es azúl?\p Porque los peces hacen:\n Blu blu blu$"

Route01_EventScript_Sign3_Text_0:
# 15 "data/maps/Route01/scripts.pory"
	.string "Ciudad verde al norte, Pueblo paleta al sur$"

Route01_EventScript_JokeFisherman_Text_0:
# 24 "data/maps/Route01/scripts.pory"
	.string "Abajo escribí el secreto sobre el azul$"

Route01_EventScript_Boy1Battle_Text_0:
# 30 "data/maps/Route01/scripts.pory"
	.string "HOLA éste también es mi primer Pokémon$"

Route01_EventScript_Boy1Battle_Text_1:
# 31 "data/maps/Route01/scripts.pory"
	.string "No se vale, tu Pokémon es más fuerte$"

Route01_EventScript_Boy1Battle_Text_2:
# 32 "data/maps/Route01/scripts.pory"
	.string "Tendré que atrapar más Pokémon...$"

Route01_EventScript_Boy2Battle_Text_0:
# 40 "data/maps/Route01/scripts.pory"
	.string "Estoy perdido,\n ¿sabes hacia donde es Pueblo Paleta?$"

Route01_EventScript_Boy2Battle_Text_1:
# 41 "data/maps/Route01/scripts.pory"
	.string "Ah ya ví, hay un cartel allí$"

Route01_EventScript_Boy2Battle_Text_2:
# 42 "data/maps/Route01/scripts.pory"
	.string "No entiendo porqué ésta es la Ruta 1\n ¿Qué hace que sea la primera?$"

Route01_EventScript_GirlBattle_Text_0:
# 48 "data/maps/Route01/scripts.pory"
	.string "JAJA, otro ingenuo con su primer Pokémon$"

Route01_EventScript_GirlBattle_Text_1:
# 49 "data/maps/Route01/scripts.pory"
	.string "No es justo, ¿cómo eres tan fuerte?$"

Route01_EventScript_GirlBattle_Text_2:
# 50 "data/maps/Route01/scripts.pory"
	.string "Me quedo aquí para pelear con novatos desprevenidos.$"

Route01_EventScript_Camper_Text_0:
# 55 "data/maps/Route01/scripts.pory"
	.string "¿Sabías que el tipo Fuego hace daño al \n Planta, el Planta al Agua, y el Agua\l al Fuego?\p ¿Sí?\p Pues que sabelotodo.$"

Route01_EventScript_Expert_Text_0:
# 59 "data/maps/Route01/scripts.pory"
	.string "Me encanta mi Pikachu\n ¿A que está lindo?$"

Route01_EventScript_Pikachu_Text_0:
# 63 "data/maps/Route01/scripts.pory"
	.string "Pika pi.$"
