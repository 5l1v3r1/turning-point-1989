
################################
# Country definition for Ghana #
################################

country =
{ tag                 = GLD
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1002
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 10 }
	}
  headofstate            = {  type = 9 id = 660001  } 
  headofgovernment       = {  type = 9 id = 660002  } 
  foreignminister        = {  type = 9 id = 660003  } 
  armamentminister       = {  type = 9 id = 660004  } 
  ministerofsecurity     = {  type = 9 id = 660005  } 
  ministerofintelligence = {  type = 9 id = 660006  } 
  chiefofstaff           = {  type = 9 id = 660007  } 
  chiefofarmy            = {  type = 9 id = 660008  } 
  chiefofnavy            = {  type = 9 id = 660009  } 
  chiefofair             = {  type = 9 id = 660010  } 
   
  ownedprovinces      = {
		1002 1000 1001 2783 2763 2782
4492 4493 4494 4495 4496 4497 4498 4499 4500 4501 4502
	}
  controlledprovinces = {
		1002 1000 1001 2783 2763 2782
4492 4493 4494 4495 4496 4497 4498 4499 4500 4501 4502
	}
  nationalprovinces   = {
		1002 1000 1001 2783 2763 2782
4492 4493 4494 4495 4496 4497 4498 4499 4500 4501 4502
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