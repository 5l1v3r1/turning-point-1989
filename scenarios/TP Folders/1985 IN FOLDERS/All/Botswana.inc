
###################################
# Country definition for Botswana #
###################################

country =
{ tag                 = U41
  energy              = 1000
  metal               = 100
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  capital             = 1112
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = { 4983 4984 4985 4986 2800 1112 4987 4988 4990 1111 1105 4989 4991 }
  controlledprovinces = { 4983 4984 4985 4986 2800 1112 4987 4988 4990 1111 1105 4989 4991 }
  nationalprovinces   = { 4983 4984 4985 4986 2800 1112 4987 4988 4990 1111 1105 4989 4991 }

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
  { id       = { type = 12253 id = 1 }
    location = 1112 #870
    name     = "Botswana Ground Force"
    division =
    { id            = { type = 12253 id = 2 }
      name          = "1st Armoured Brigade"
      strength      = 100
      type          = light_armor
      model         = 0
    }
    division =
    { id            = { type = 12253 id = 3 }
      name          = "1st Infantry Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
    division =
    { id            = { type = 12253 id = 4 }
      name          = "2nd Infantry Brigade"
      strength      = 100
      type          = d_06
      model         = 1
    }
    division =
    { id            = { type = 12253 id = 5 }
      name          = "3rd Infantry Brigade"
      strength      = 100
      type          = d_06
      model         = 1
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 12253 id = 100 }
    location = 1112 #870
    base     = 1112 #870
    name     = "Botswana Defence Force Air Wing"
    division =
    { id       = { type = 12253 id = 101 }
      name     = "1st Air Wing"
      type     = interceptor
      strength = 20
      model    = 1
    }
  }
}