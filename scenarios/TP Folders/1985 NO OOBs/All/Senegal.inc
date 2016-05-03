##################################
# Country definition for Senegal #
##################################
#Dar acesso militar à França.

country =
{ tag                 = U96
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 981
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 8
    freedom           = 3
    free_market       = 6
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 2
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	relation = { tag = FRA value = 150 access = yes }
	}
  headofstate            = {  type = 9 id = 1295001  } 
  headofgovernment       = {  type = 9 id = 1295002  } 
  foreignminister        = {  type = 9 id = 1295003  } 
  armamentminister       = {  type = 9 id = 1295004  } 
  ministerofsecurity     = {  type = 9 id = 1295005  } 
  ministerofintelligence = {  type = 9 id = 1295006  } 
  chiefofstaff           = {  type = 9 id = 1295007  } 
  chiefofarmy            = {  type = 9 id = 1295008  } 
  chiefofnavy            = {  type = 9 id = 1295009  } 
  chiefofair             = {  type = 9 id = 1295010  } 
  
  ownedprovinces      = { 981 2761 984
4456 4457 4458 4459 4460 4461 4462
	}
  controlledprovinces = { 981 2761 984
4456 4457 4458 4459 4460 4461 4462
	}
  nationalprovinces   = { 981 2761 984
4456 4457 4458 4459 4460 4461 4462
	}
  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 
   #Motorized
   1100 
   #Mountain
   1160 
   #Special Forces
   1250 
   #Mechanized
   1470
   #Irregular Infantry
   1360
   #Combat Engineers
   1830
   #Supply and Repair
   1990
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620
   #Armored Cars
   2860
   #Anti-Air
   2800
   #Armored Personnel Carriers
   2170
   #Field Artillery
   2290 
   #Self-Propelled Anti-Air
   2810
   #Man-Portable Air-Defense Systems
   3000
   #Self-Propelled Artillery
   2220
   #Self-Propelled Rocket Artillery
   2980 
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110
   #Submarines
   3010
   #Transport Ships
   3900
   ###################
   #    Aircraft     #
   ###################
   #Multi-Role
   4500
   #Air Transports
   4250
   ###################
   #    Industry     #
   ###################
   #Light Industry
   5810
   #Heavy Industry
   5130
   #Material Science
   53050
   #Construction Eng.
   5800
   #Agriculture
   5700
   #Oil
   5190
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6560 #Defensive
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200
   }
}