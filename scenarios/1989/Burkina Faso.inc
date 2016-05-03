
#######################################
# Country definition for Burkina Faso #
#######################################

country =
{ tag                 = U81
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 997
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 8
    freedom           = 2
    free_market       = 2
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 3
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = { 997 996 2784
4555 4556 4557 4558 4559 4560 4561 4562 4563 4564 4565
7903 7902
	}
  controlledprovinces = { 997 996 2784
4555 4556 4557 4558 4559 4560 4561 4562 4563 4564 4565
7903 7902
	}
  nationalprovinces   = { 997 996 2784
4555 4556 4557 4558 4559 4560 4561 4562 4563 4564 4565
7903 7902
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
  { id       = { type = 12254 id = 1 }
    location = 997 #957
    name     = "Burkina Faso Army"
    division =
    { id            = { type = 12254 id = 2 }
      name          = "1st Brigade"
      strength      = 100
      type          = d_06
      model         = 0
    }
  }
}