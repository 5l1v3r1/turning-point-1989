###################################
# Country definition for Cambodia #
###################################

country =
{ tag                 = CMB
  energy              = 1000
  metal               = 100
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  capital             = 1339
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 7
    freedom           = 2
    free_market       = 2
    professional_army = 1
    defense_lobby     = 6
    interventionism   = 3
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
	
	ownedprovinces =      { 1339 1340 1341 1336 3121 3120 3122 7025 7908 7026 7909 7910 }
	controlledprovinces = { 1339 1340 1341 1336 3121 3120 3122 7025 7908 7026 7909 7910 }
	nationalprovinces =   { 1339 1340 1341 1336 3121 3120 3122 7025 7908 7026 7909 7910 }
    claimedprovinces =    { 7906 }
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
  { id       = { type = 7500 id = 1 }
    location = 1339 #1400
    name     = "Royal Cambodian Army"
    division =
    { id       = { type = 7500 id = 2 }
      name     = "1st Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 7500 id = 3 }
      name     = "2nd Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 7500 id = 4 }
      name     = "3rd Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 7500 id = 5 }
      name     = "4th Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 7500 id = 6 }
      name     = "5th Division"
      strength = 100
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 7500 id = 7 }
    location = 1339 #1400
    name     = "Special Forces Airborne"
    division =
    { id       = { type = 7500 id = 8 }
      name     = "911st Para-Commando"
      strength = 60
      type     = bergsjaeger
      model    = 2
      extra         = engineer
      brigade_model = 2
    }
  }
}