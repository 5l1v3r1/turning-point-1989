####################################
# Country definition for Sri Lanka #
####################################

country =
{ tag                 = U03
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1517
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 2
    freedom           = 5
    free_market       = 7
    professional_army = 7
    defense_lobby     = 4
    interventionism   = 5
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = { 1517 1516 1591 5175 5176 }
  controlledprovinces = { 1517 1516 1591 5175 5176 }
  nationalprovinces   = { 1517 1516 1591 5175 5176 }
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
		id = { type = 12232 id = 1 }
		location = 5176 #1509
		name = "Security Forces - Jaffna"
		division = {
			id = { type = 12232 id = 2 }
			name = "51st Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12232 id = 3 }
			name = "52nd Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12232 id = 4 }
			name = "55th Division"
			strength = 50
			type = motorized
			model = 1
		}
	} 
        landunit = {
		id = { type = 12232 id = 5 }
		location = 5175 #1510
		name = "Security Forces - Wanni"
		division = {
			id = { type = 12232 id = 6 }
			name = "21st Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12232 id = 7 }
			name = "56th Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12232 id = 8 }
			name = "61st Division"
			strength = 50
			type = motorized
			model = 1
		}
	}
        landunit = {
		id = { type = 12232 id = 9 }
		location = 5176 #1509
		name = "Security Forces - East"
		division = {
			id = { type = 12232 id = 10 }
			name = "22nd Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12232 id = 11 }
			name = "23rd Division"
			strength = 50
			type = motorized
			model = 1
		}
	}
        landunit = {
		id = { type = 12232 id = 12 }
		location = 5176 #1509
		name = "Security Forces - Kilinochchi"
		division = {
			id = { type = 12232 id = 13 }
			name = "57th Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12232 id = 14 }
			name = "66th Division"
			strength = 50
			type = motorized
			model = 1
		}                
                division = {
			id = { type = 12232 id = 15 }
			name = "68th Division"
			strength = 50
			type = motorized
			model = 1
		}
	}
        landunit = {
		id = { type = 12232 id = 16 }
		location = 5176 #1509
		name = "Security Forces - Mullaittivu"
		division = {
			id = { type = 12232 id = 17 }
			name = "59th Division"
			strength = 50
			type = motorized
			model = 1
		}
		division = {
			id = { type = 12232 id = 18 }
			name = "64th Division"
			strength = 50
			type = motorized
			model = 1
		}                
        division = {
			id = { type = 12232 id = 19 }
			name = "65th Division"
			strength = 50
			type = motorized
			model = 1
		}
	}
        landunit = {
		id = { type = 12232 id = 20 }
		location = 1517 #1511
		name = "Security Forces - South"
		division = {
			id = { type = 12232 id = 21 }
			name = "11th Division"
			strength = 100
			type = motorized
			model = 1
		}
	}
        landunit = {
		id = { type = 12232 id = 22 }
		location = 1517 #1511
		name = "Independent Divisions"
		division = {
			id = { type = 12232 id = 23 }
			name = "53rd Division"
			strength = 100
			type = motorized
			model = 1
		}
        division = {
			id = { type = 12232 id = 24 }
			name = "58th Division"
			strength = 100
			type = motorized
			model = 1
		}
	} 
        landunit = {
		id = { type = 12232 id = 25 }
		location = 1517 #1511
		name = "Independent Brigades"
		division = {
			id = { type = 12232 id = 26 }
			name = "Air Mobile Brigade"
			strength = 30
			type = d_08
			model = 2
		}
        division = {
			id = { type = 12232 id = 27 }
			name = "Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 2
		}
        division = {
			id = { type = 12232 id = 28 }
			name = "Armored Brigade"
			strength = 100
			type = light_armor
			model = 2
		}
        division = {
			id = { type = 12232 id = 29 }
			name = "Special Forces Brigade"
			strength = 100
			type = d_03
			model = 2
		}
        division = {
			id = { type = 12232 id = 30 }
			name = "Commando Brigade"
			strength = 100
			type = d_03
			model = 2
		}
	}
}