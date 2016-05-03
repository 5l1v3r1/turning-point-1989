################################
# Country definition for Benin #
################################

country =
{ tag                 = BEN
  energy              = 100
  metal               = 100
  rare_materials      = 5000
  oil                 = 50
  supplies            = 500
  money               = 100
  capital             = 1006
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  headofstate            = {  type = 9 id = 565001  } 
  headofgovernment       = {  type = 9 id = 565002  } 
  foreignminister        = {  type = 9 id = 565003  } 
  armamentminister       = {  type = 9 id = 565004  } 
  ministerofsecurity     = {  type = 9 id = 565005  } 
  ministerofintelligence = {  type = 9 id = 565006  } 
  chiefofstaff           = {  type = 9 id = 565007  } 
  chiefofarmy            = {  type = 9 id = 565008  } 
  chiefofnavy            = {  type = 9 id = 565009  } 
  chiefofair             = {  type = 9 id = 565010  }
  
  ownedprovinces      = { 1006 1005
4505 4506 4507 4508 4509 767
	}
  controlledprovinces = { 1006 1005
4505 4506 4507 4508 4509 767
	}
  nationalprovinces   = { 1006 1005
4505 4506 4507 4508 4509 767
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
  # #####################################
  # ARMY
  # #####################################
  landunit = 
   {  location = 1456 
     id       = {  type = 16050 id = 4  } 
     name     = "Royal Bhutan Army" 
     Division = 
     {  id       = {  type = 16050 id = 5  } 
       name     = "Light Inf. Mobile Forze" 
       type     = bergsjaeger
       model    = 1
       strength = 10 
      } 
    } 
}