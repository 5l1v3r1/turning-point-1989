##################################
# Country definition for Iceland #
##################################

country =
{ tag                 = ICL
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 500
  supplies            = 5000
  money               = 100
  capital             = 1
  manpower            = 100
  dissent             = 15
  
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 4
    freedom           = 10
    free_market       = 9
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 4
  }
  diplomacy = { 
	relation = { tag = USA value = 100 }
	}
  ownedprovinces      = { 1 7137 2632 7138 7139 }
  controlledprovinces = { 1 7137 2632 7138 7139 }
  nationalprovinces   = { 1 7137 2632 7138 7139 }
  
   headofstate            = {  type = 9 id = 360001  } 
   headofgovernment       = {  type = 9 id = 360002  } 
   foreignminister        = {  type = 9 id = 360003  } 
   armamentminister       = {  type = 9 id = 360004  } 
   ministerofsecurity     = {  type = 9 id = 360005  } 
   ministerofintelligence = {  type = 9 id = 360006  } 
   chiefofstaff           = {  type = 9 id = 360007  } 
   chiefofarmy            = {  type = 9 id = 360008  } 
   chiefofnavy            = {  type = 9 id = 360009  } 
   chiefofair             = {  type = 9 id = 360010  } 
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