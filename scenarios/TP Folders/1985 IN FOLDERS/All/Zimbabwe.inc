###################################
# Country definition for Zimbabwe #
###################################

country =
{ tag                 = RHO
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 10
  capital             = 1125
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 7
    freedom           = 4
    free_market       = 4
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = { 4978 4980 4981 4982 4972 1124 4979 2799 4977 4975 4976 4973 4974 4971 4968 2921 1125 4969 4970 }
  controlledprovinces = { 4978 4980 4981 4982 4972 1124 4979 2799 4977 4975 4976 4973 4974 4971 4968 2921 1125 4969 4970 }
  nationalprovinces   = { 4978 4980 4981 4982 4972 1124 4979 2799 4977 4975 4976 4973 4974 4971 4968 2921 1125 4969 4970 }
  
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
	landunit = {
		id = { type = 12202 id = 1 }
		location = 1125 #867
		name = "Zimbabwe National Army"
        division = {
			id = { type = 12202 id = 2 }
			name = "Presidential Guard"
			strength = 100
			type = d_06
			model = 3
			experience = 5
		}
		division = {
			id = { type = 12202 id = 3 }
			name = "1st Brigade"
			strength = 50
			type = d_06
			model = 0
		}
        division = {
			id = { type = 12202 id = 4 }
			name = "2nd Brigade"
			strength = 50
			type = d_06
			model = 0
		}
        division = {
			id = { type = 12202 id = 5 }
			name = "3rd Brigade"
			strength = 50
			type = d_06
			model = 0
		}
        division = {
			id = { type = 12202 id = 6 }
			name = "4th Brigade"
			strength = 50
			type = d_06
			model = 0
		}
        division = {
			id = { type = 12202 id = 7 }
			name = "5th Brigade"
			strength = 50
			type = d_06
			model = 0
		}
		division = {
			id = { type = 12202 id = 8 }
			name = "Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 1
		}
	}
    landunit = {
		id = { type = 12202 id = 9 }
		location = 1125 #867
		name = "Special Forces of Zimbabwe"
		division = {
			id = { type = 12202 id = 10 }
			name = "Commando Brigade"
			strength = 50
			type = d_03
			model = 4
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 12202 id = 100 }
		location	= 1125 #867
		base		= 1125 #867
		name = "National Liberation Airforce"
		division = {
			id = { type = 12202 id = 101 }
			name = "1st Fighter Squadron"
			type = interceptor
			strength = 100
			model = 1
		}
	}
}