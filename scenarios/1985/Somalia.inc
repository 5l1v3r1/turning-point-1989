
##################################
# Country definition for Somalia #
##################################

country =
{ tag                 = SOM
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 836
  manpower            = 100
  
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 9
    freedom           = 2
    free_market       = 1
    professional_army = 1
    defense_lobby     = 8
    interventionism   = 6
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
	
  nationalprovinces   = {
		1056 1058 1055 2916 2635 1035 1037 1053 1054 1050
4658 4659 4660 4661 4662
4683 4684 4685 4686 4687 4688 4689 4690 4691 4692 4693 4694 4695 4696 4697 4698 4699 4700 4701
4713 4714 2810 6539 6540 6541 6542 6543 6544 6545
6938 6939 6940 6941 6942 
7449 4664 7343 7344 7345 7442
	}
  ownedprovinces      = {
		1056 1058 1055 2916 2635 1035 
4683 4684 4685 4686 4687 4688 4689 4690 4691 4692 4693 4694 4695 4696 4697 4698 4699 4700 4701
6543 6544 6545
6938 6939 6940 6941 6942 
7343 7344 7345
	}
  controlledprovinces = {
		1056 1058 1055 2916 2635 1035 
4683 4684 4685 4686 4687 4688 4689 4690 4691 4692 4693 4694 4695 4696 4697 4698 4699 4700 4701
6543 6544 6545
6938 6939 6940 6941 6942 
7343 7344 7345
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
		id = { type = 12217 id = 1 }
		location = 1056 #836
		name = "Somali Army"
		division = {
			id = { type = 12217 id = 2 }
			name = "1st Division"
			strength = 60
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12217 id = 3 }
			name = "2nd Division"
			strength = 50
			type = motorized
			model = 1
		}
        division = {
			id = { type = 12217 id = 4 }
			name = "3rd Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12217 id = 5 }
			name = "4th Division"
			strength = 30
			type = militia
			model = 1
		}
        division = {
			id = { type = 12217 id = 6 }
			name = "5th Division"
			strength = 30
			type = militia
			model = 1
		}
		division = {
			id = { type = 12217 id = 7 }
			name = "6th Division"
			strength = 30
			type = militia
			model = 1
		}
        division = {
			id = { type = 12217 id = 8 }
			name = "8th Division"
			strength = 30
			type = militia
			model = 1
		}
		division = {
			id = { type = 12217 id = 9 }
			name = "9th Division"
			strength = 30
			type = militia
			model = 1
		}
        division = {
			id = { type = 12217 id = 10 }
			name = "10th Division"
			strength = 10
			type = militia
			model = 1
		}
        division = {
			id = { type = 12217 id = 11 }
			name = "11th Division"
			strength = 10
			type = militia
			model = 1
		}
		division = {
			id = { type = 12217 id = 12 }
			name = "12th Division"
			strength = 10
			type = militia
			model = 1
		}
	}
}