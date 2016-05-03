##############################
# Country definition for SUD #
##############################

country =
{ tag                 = SUD
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1066
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 7
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = {
		1066 1028 1029 1067 1068 1069 1030 1031 1040 1041 1065 1032 2334 2633 2852 2817 2814 2815 2816
4618 4619 4620 4621 4622 4623 4624 4625 4626 4627 4628 4629 4630 4631 4632 4633 4634 4635 4636 4637 4638 4639 4640 4641 4642 4643 4644 4645 4646 4647 4648 4649 4650 4651 4652 4653 4654 4655 4656 4657
7455 7443 7347
	}
  controlledprovinces = {
		1066 1028 1029 1067 1068 1069 1030 1031 1040 1041 1065 1032 2334 2633 2852 2817 2814 2815 2816
4618 4619 4620 4621 4622 4623 4624 4625 4626 4627 4628 4629 4630 4631 4632 4633 4634 4635 4636 4637 4638 4639 4640 4641 4642 4643 4644 4645 4646 4647 4648 4649 4650 4651 4652 4653 4654 4655 4656 4657
7455 7443 7347
	}
  nationalprovinces   = {
		1066 1028 1029 1067 1068 1069 1030 1031 1040 1041 1065 1032 2334 2633 2852 2817 2814 2815 2816
4618 4619 4620 4621 4622 4623 4624 4625 4626 4627 4628 4629 4630 4631 4632 4633 4634 4635 4636 4637 4638 4639 4640 4641 4642 4643 4644 4645 4646 4647 4648 4649 4650 4651 4652 4653 4654 4655 4656 4657
7455 7443 7347 2886
	}
	techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020
   #Motorized
   1100 1110
   #Mountain
   1160 1170
   #Special Forces
   1250 1260
   #Naval Infantry
   1560 1570
   #Airborne Infantry
   1670 1680
   #Air Cavalry
   1396 #1400
   #Armored Cavalry
   13060
   #Mechanized
   1470 1480
   #Irregular Infantry
   1360 1370
   #Combat Engineers
   1830 1840
   #Supply and Repair
   1990 199100
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630
   #Infantry Fighting Vehicles	
   2100
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450
   #Armored Personnel Carriers
   2170 2180 2850
   #Field Artillery
   2290 2300 2310
   #Self-Propelled Anti-Air
   2810 2820 2510
   #Man-Portable Air-Defense Systems
   3000 3170
   #Self-Propelled Artillery
   2220 2230
   #Self-Propelled Rocket Artillery
   2980 2260 2270
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110 3120 3130
   #Cruisers
   3410 3420 3430 3440
   #Destroyers
   3310 3320 3330 3340
   #Light Aircraft Carriers
   12100
   #Submarines
   3010 3020 3030
   #Transport Ships
   3900 3910
   ###################
   #    Aircraft     #
   ###################
   #Attack Helicopter
   4900
   #Reconnaissance Aircraft
   4770
   #Strategic Bomber
   4800
   #Strike Bomber
   15040 15050 4360
   #Naval Patrol
   4610
   #ASW Bomber
   4230
   #Attack Aircraft
   4030 4060 4090
   #Multi-Role
   4500 4570 4530 4540
   #Air Superiority Fighter
   4510 4520
   #Air Transports
   4250 4260
   #AEW&C
   4450
   #Air-to-Ground Missiles
   4040
   #Air-to-Air Missiles
   4600
   #Air-to-Sea Missiles
   4740
   ###################
   #    Industry     #
   ###################
   #Light Industry
   5810
   #Heavy Industry
   5130
   #Material Science
   53050 63160
   #Construction Eng.
   5800
   #Rocketry

   #Agriculture
   5700 5710
   #Oil
   5190 5220
   #Computing
   5310 54010 54020
   #Nuclear
   5470 5480
   #Cryptography
   5350 5360
   #Medicine
   5600 5610
   #5630
   5660 5730
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   #6900 6730 6750 6820 6740 6810 6760 6210 6220 6230 6240 6250 6260 6270 6280 6290 14100 #NATO
   6560 #Defensive
   ###################
   # Naval Doctrines #
   ###################
   #Surface Ship Role
   81050 81060 81070 81080 81090 81100 81110 81120
   #Naval Interdiction
   8500 8510 8520 8550 8560 8570 8600 8610 8620
   #Naval Supremacy
   8100 8110 8150 8120 8160 8170 8200 8210 8220
   #Logistics Support
   82500 82510
   #Naval Capability
   8010
   #Amphibious Warfare
   82300 82310 
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   }
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 20400 id = 1 }
		location = 1068 #808
		name = "Central Command"
		division = {
			id = { type = 20400 id = 2 }
			name = "5th Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 3 }
		location = 1031 #814
		name = "Eastern Command"
		division = {
			id = { type = 20400 id = 4 }
			name = "2nd Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 5 }
		location = 1029 #804
		name = "Western Command"
		division = {
			id = { type = 20400 id = 6 }
			name = "6th Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 7 }
		location = 1030 #813
		name = "Southern Command"
		division = {
			id = { type = 20400 id = 8 }
			name = "1st Division"
			strength = 100
			type = infantry
			model = 1
		}
		division = {
			id = { type = 20400 id = 9 }
			name = "12th Division"
			strength = 100
			type = infantry
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 10 }
		location = 1066 #810
		name = "Khartoum Command"
                division = {
			id = { type = 20400 id = 11 }
			name = "1st Armored Division"
			strength = 100
			type = armor
			model = 1
		}
		division = {
			id = { type = 20400 id = 12 }
			name = "1st Airborne Division"
			strength = 100
			type = paratrooper
			model = 1
		}
	}
	landunit = {
		id = { type = 20400 id = 14 }
		location = 1066 #810
		name = "North Command"
		division = {
			id = { type = 20400 id = 15 }
			name = "3rd Division"
			strength = 100
			type = infantry
			model = 1
		}
		division = {
			id = { type = 20400 id = 16 }
			name = "15th Division"
			strength = 100
			type = infantry
			model = 1
		}
	}
        landunit = {
		id = { type = 20400 id = 17 }
		location = 1066 #810
		name = "Presidential Guard Brigade"
        division = {
			id = { type = 20400 id = 18 }
			name = "Presidential Guard Brigade"
			strength = 100
			type = cavalry
			model = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 20400 id = 200 }
		location = 1066 #810
		base = 1066 #810
		name = "Sudanese Air Force"
		division = {
			id = { type = 20400 id = 201 }
			name = "1st Squadron"
			type = interceptor
			strength = 50
			model = 2
		}
		division = {
			id = { type = 20400 id = 202 }
			name = "7th Squadron"
			type = interceptor
			strength = 100
			model = 2
		}
		division = {
			id = { type = 20400 id = 203 }
			name = "4th Squadron"
			type = interceptor
			strength = 50
			model = 2
		}
	}
	airunit = {
		id = { type = 20400 id = 204 }
		location = 1066 #810
		base = 1066 #810
		name = "Transport Command"
		division = {
			id = { type = 20400 id = 205 }
			name = "1st Transport Squadron"
			type     = transport_plane
			strength = 100
			model = 0
		}
	}
}