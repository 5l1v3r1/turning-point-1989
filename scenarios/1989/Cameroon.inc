
##############################
# Country definition for CAM #
##############################

country =
{ tag                 = CAM
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 2764
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 100 }
	}
  headofstate            = {  type = 9 id = 580001  } 
  headofgovernment       = {  type = 9 id = 580002  } 
  foreignminister        = {  type = 9 id = 580003  } 
  armamentminister       = {  type = 9 id = 580004  } 
  ministerofsecurity     = {  type = 9 id = 580005  } 
  ministerofintelligence = {  type = 9 id = 580006  } 
  chiefofstaff           = {  type = 9 id = 580007  } 
  chiefofarmy            = {  type = 9 id = 580008  } 
  chiefofnavy            = {  type = 9 id = 580009  } 
  chiefofair             = {  type = 9 id = 580010  } 
  
  ownedprovinces      = { 2764 1077 1088 1126 1087 1086 1089
4802 4803 4804 4805 4806 4807 4808 4809 4810 4811 
	}
  controlledprovinces = { 2764 1077 1088 1126 1087 1086 1089
4802 4803 4804 4805 4806 4807 4808 4809 4810 4811 
	}
  nationalprovinces   = { 2764 1077 1088 1126 1087 1086 1089
4802 4803 4804 4805 4806 4807 4808 4809 4810 4811 7348 2743 2744 7923
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
  { id       = { type = 13550 id = 101 }
    location = 2764 #909
    name     = "Cameroon Army"
    division =
    { id            = { type = 13550 id = 2 }
      name          = "1st Brigade"
      strength      = 100
      type          = d_06
      model         = 2
    }
    division =
    { id            = { type = 13550 id = 3 }
      name          = "2nd Brigade"
      strength      = 100
      type          = d_06
      model         = 2
    }
    division =
    { id            = { type = 13550 id = 4 }
      name          = "3rd Brigade"
      strength      = 100
      type          = d_06
      model         = 2
    }
  }
}