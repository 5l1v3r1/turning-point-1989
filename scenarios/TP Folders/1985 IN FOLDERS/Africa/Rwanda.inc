#################################
# Country definition for Rwanda #
#################################

country =
{ tag                 = U95
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1063
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 2
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = { 4730 1063 7036 }
  controlledprovinces = { 4730 1063 7036 }
  nationalprovinces   = { 4730 1063 7036 }
  
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
		id = { type = 12242 id = 1 }
		location = 1063 #846
		name = "Cyangungu Military Camp"
		division = {
			id = { type = 12242 id = 2 }
			name = "17th Brigade"
			strength = 100
			type = militia
			model = 1
		}
		division = {
			id = { type = 12242 id = 3 }
			name = "9th Brigade"
			strength = 100
			type = militia
			model = 1
		}
	}
	landunit = {
		id = { type = 12242 id = 4 }
		location = 1063 #846
		name = "Rally for Congolese Democracy"
		division = {
			id = { type = 12242 id = 5 }
			name = "1st RCD Brigade"
			strength = 100
			type = garrison
			model = 1
		}
		division = {
			id = { type = 12242 id = 6 }
			name = "2nd RCD Brigade"
			strength = 100
			type = garrison
			model = 1
		}
	}
	landunit = {
		id = { type = 12242 id = 7 }
		location = 1063 #846
		name = "Rwanda Land Force"
		division = {
			id = { type = 12242 id = 8 }
			name = "201st Brigade"
			strength = 100
			type = d_06
			model = 1
		}
		division = {
			id = { type = 12242 id = 9 }
			name = "211th Brigade"
			strength = 100
			type = d_06
			model = 1
		}
		division = {
			id = { type = 12242 id = 10 }
			name = "301st Brigade"
			strength = 100
			type = militia
			model = 1
		}
		division = {
			id = { type = 12242 id = 11 }
			name = "305th Brigade"
			strength = 100
			type = militia
			model = 1
		}
        division = {
			id = { type = 12242 id = 12 }
			name = "402nd Brigade"
			strength = 100
			type = militia
			model = 1
		}
	}
}