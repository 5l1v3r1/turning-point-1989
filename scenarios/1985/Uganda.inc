	#################################
	# Country definition for Uganda #
	#################################

	country = { 
	tag                 = U70
	energy              = 100
	metal               = 100
	rare_materials      = 500
	oil                 = 50
	supplies            = 500
	money               = 10
	capital             = 1064
	manpower            = 0
	dissent				= 40
	policy =
	{ date              = { year = 0 month = january day = 0 }
		democratic        = 3
		political_left    = 7
		freedom           = 4
		free_market       = 5
		professional_army = 1
		defense_lobby     = 8
		interventionism   = 8
	}
	diplomacy = { 
		relation = { tag = USA value = 25 }
		}
	ownedprovinces      = { 1064 2284
	4718 4719 4720 4721 4722 4723 4724 4725 4726
	7035
		}
	controlledprovinces = { 1064 2284
	4718 4719 4720 4721 4722 4723 4724 4725 4726
	7035
		}
	nationalprovinces   = { 1064 2284
	4718 4719 4720 4721 4722 4723 4724 4725 4726
	7035 2813 4708 4703 4638 2816 4637 1065
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
	landunit = {
		id = { type = 12240 id = 1 }
		location = 1064 #844
		name = "People's Defence Force"
		division = {
			id = { type = 12240 id = 2 }
			name = "1st Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12240 id = 3 }
			name = "2nd Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12240 id = 4 }
			name = "3rd Division"
			strength = 100
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12240 id = 5 }
			name = "4th Division"
			strength = 100
			type = motorized
			model = 1
		} 
        division = {
			id = { type = 12240 id = 6 }
			name = "4th Division"
			strength = 100
			type = motorized
			model = 1
		} 
        division = {
			id = { type = 12240 id = 7 }
			name = "Armoured Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 12240 id = 100 }
		location = 1064 #844
		base = 1064 #844
		name = "1st Air Wing"
		division = {
			id = { type = 12240 id = 101 }
			name = "1st Squadron"
			type = interceptor
			strength = 60
			model = 1
		}
	}
}