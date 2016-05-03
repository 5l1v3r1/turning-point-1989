#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 992
  manpower               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 4 
     political_left    = 5 
     freedom           = 3 
     free_market       = 4 
     professional_army = 3 
     defense_lobby     = 3 
     interventionism   = 1 
  }
  nationalprovinces      = { 992
2762
4476 4477 4478
  }
  ownedprovinces         = { 992
2762
4476 4477 4478
  }
  controlledprovinces    = { 992
2762
4476 4477 4478
  }

  diplomacy =
  { relation = { tag = PHI value = 200 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 69001 }
  headofgovernment       = { type = 9 id = 69002 }
  foreignminister        = { type = 9 id = 69003 }
  armamentminister       = { type = 9 id = 69004 }
  ministerofsecurity     = { type = 9 id = 69005 }
  ministerofintelligence = { type = 9 id = 69006 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69008 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }
  
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
  
  landunit = 
  { location = 992 #992 
    id       = {  type = 25500 id = 1  } 
    name     = "Army of Liberia" 
    Division = 
    {  id       = {  type = 25000 id = 2  } 
       name     = "1st Republican Guards Div." 
       type     = infantry 
	   model    = 3
       strength = 50 
    } 
  } 
} 
 
