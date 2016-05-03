##################################
# Country definition for VIETNAM #
##################################

province =
{ id         = 1395
  anti_air   = 4
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Hanoi

#####################
# Country main data #
#####################

country =
{ tag                 = VIE
  energy              = 100
  metal               = 100
  rare_materials      = 50
  oil                 = 50
  supplies            = 50
  money               = 10
  capital             = 1337
  manpower            = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 7
    freedom           = 1
    free_market       = 1
    professional_army = 1
    defense_lobby     = 6
    interventionism   = 4
  }
 
  ownedprovinces      = { 1337 1338 2943 2944 2945 2946 3129 1335 1333 1334 2947 2948 1328 1326 2949 7988 7989 7990 7027 7028 7029 7030 7031 7032 7907 7906 5873 5892 }
  controlledprovinces = { 1337 1338 2943 2944 2945 2946 3129 1335 1333 1334 2947 2948 1328 1326 2949 7988 7989 7990 7027 7028 7029 7030 7031 7032 7907 7906 5873 5892 }
  nationalprovinces   = { 1337 1338 2943 2944 2945 2946 3129 1335 1333 1334 2947 2948 1328 1326 2949 7988 7989 7990 7027 7028 7029 7030 7031 7032 7907 7906 }
  claimedprovinces	  = { 5872 5873 5892 5893 }
  
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
   5560 5910
   #5426 5440 5430
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
  
	# ####################################
	# ARMY
	# ####################################
	landunit = {
		id = { type = 22900 id = 1 }
		location = 1333 #1395
		name = "1st Corps"
		division = {
			id = { type = 22900 id = 2 }
			name = "308th Division"
			strength = 100
			type = infantry
			model = 4
		}
		division = {
			id = { type = 22900 id = 3 }
			name = "312th Division"
			strength = 100
			type = motorized
			model = 3
		}
        division = {
			id = { type = 22900 id = 4 }
			name = "390th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 5 }
			name = "202nd Tank Brigade"
			strength = 100
			type = light_armor
			model = 3
		}
	}
	landunit = {
		id = { type = 22900 id = 6 }
		location = 7027 #1392
		name = "2nd Corps"
		division = {
			id = { type = 22900 id = 7 }
			name = "304th Division"
			strength = 100
			type = infantry
			model = 4
		}
		division = {
			id = { type = 22900 id = 8 }
			name = "306th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 9 }
			name = "325th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 10 }
			name = "203rd Tank Brigade"
			strength = 100
			type = light_armor
			model = 4
            }
	}
	landunit = {
		id = { type = 22900 id = 11 }
		location = 1335 #1397
		name = "3rd Corps"
		division = {
			id = { type = 22900 id = 12 }
			name = "10th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 13 }
			name = "31st Division"
			strength = 100
			type = motorized
			model = 3
		}
        division = {
			id = { type = 22900 id = 14 }
			name = "320th Division"
			strength = 100
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 22900 id = 15 }
		location = 1337 #1399
		name = "4th Corps"
		division = {
			id = { type = 22900 id = 16 }
			name = "7th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 17 }
			name = "9th Division"
			strength = 100
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 18 }
			name = "324th Division"
			strength = 100
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 22900 id = 19 }
		location = 7027 #1392
		name = "1st Military Region"
		division = {
			id = { type = 22900 id = 20 }
			name = "3rd Division"
			strength = 10
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 21 }
			name = "346th Division"
			strength = 10
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 22900 id = 22 }
		location = 1328 #1393
		name = "2nd Military Region"
		division = {
			id = { type = 22900 id = 23 }
			name = "316th Division"
			strength = 10
			type = infantry
			model = 4       
		}
		division = {
			id = { type = 22900 id = 24 }
			name = "355th Division"
			strength = 10
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 22900 id = 25 }
		location = 1333 #1395
		name = "3rd Military Region"
		division = {
			id = { type = 22900 id = 26 }
			name = "350th Division"
			strength = 10
			type = motorized
			model = 3        
		}
		division = {
			id = { type = 22900 id = 27 }
			name = "395th Division"
			strength = 10
			type = motorized
			model = 3
		}
	}
        landunit = {
		id = { type = 22900 id = 28 }
		location = 1334 #1396
		name = "4th Military Region"
		division = {
			id = { type = 22900 id = 29 }
			name = "341st Division"
			strength = 10
			type = motorized
			model = 3                
		}
		division = {
			id = { type = 22900 id = 30 }
			name = "968th Division"
			strength = 10
			type = motorized
			model = 3                    
		}
	}
    landunit = {
		id = { type = 22900 id = 31 }
		location = 1335 #1397
		name = "5th Military Region"
		division = {
			id = { type = 22900 id = 32 }
			name = "2nd Division"
			strength = 10
			type = motorized
			model = 3
		}
		division = {
			id = { type = 22900 id = 33 }
			name = "305th Division"
			strength = 10
			type = motorized
			model = 3
		}
        division = {
			id = { type = 22900 id = 34 }
			name = "315th Division"
			strength = 10
			type = motorized
			model = 3
		}
	}
    landunit = {
		id = { type = 22900 id = 35 }
		location = 1337 #1399
		name = "7th Military Region"
		division = {
			id = { type = 22900 id = 36 }
			name = "5th Division"
			strength = 10
			type = motorized
			model = 3                
		}
		division = {
			id = { type = 22900 id = 37 }
			name = "6th Division"
			strength = 10
			type = motorized
			model = 3
		}
        division = {
			id = { type = 22900 id = 38 }
			name = "302nd Division"
			strength = 10
			type = motorized
			model = 3
		}
        division = {
			id = { type = 22900 id = 39 }
			name = "317th Division"
			strength = 10
			type = motorized
			model = 3
		}
	}
    landunit = {
		id = { type = 22900 id = 40 }
		location = 1338 #1403
		name = "9th Military Region"
		division = {
			id = { type = 22900 id = 41 }
			name = "4th Division"
			strength = 10
			type = motorized
			model = 3                    
		}
		division = {
			id = { type = 22900 id = 42 }
			name = "8th Division"
			strength = 10
			type = motorized
			model = 3
		}
        division = {
			id = { type = 22900 id = 43 }
			name = "330th Division"
			strength = 10
			type = motorized
			model = 3
		}
        division = {
			id = { type = 22900 id = 44 }
			name = "339th Division"
			strength = 10
			type = motorized
			model = 3
		}
	}
    landunit = {
		id = { type = 22900 id = 45 }
		location = 1333 #1395
		name = "High Command of Capital Hanoi"
		division = {
			id = { type = 22900 id = 46 }
			name = "301st Division"
			strength = 100
			type = motorized
			model = 3
		}
	}
    landunit = {
		id = { type = 22900 id = 47 }
		location = 1395
		name = "Vietnam People's Marines"
		division = {
			id = { type = 22900 id = 48 }
			name = "101st Brigade"
			strength = 100
			type = d_05
			model = 4
		}
		division = {
			id = { type = 22900 id = 49 }
			name = "147th Brigade"
			strength = 100
			type = d_05
			model = 4
		}
	}
	# ####################################
	# NAVY
	# ####################################
	navalunit = {
		id = { type = 22900 id = 200 }
		location = 1337 #1399
		base = 1337 #1399
		name = "1st Fleet"
		division = {
			id = { type = 22900 id = 201 }
			name = "HQ Pham Ngu Lao"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22900 id = 202 }
			name = "HQ FF-002"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22900 id = 203 }
			name = "HQ FF-003"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22900 id = 204 }
			name = "HQ FF-004"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22900 id = 205 }
			name = "HQ FF-005"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22900 id = 206 }
			name = "HQ FF-006"
			type = destroyer
			model = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 22900 id = 100 }
		location = 1333 #1395
		base = 1333 #1395
		name = "371st Air Force Division"
		division = {
			id = { type = 22900 id = 101 }
			name = "921st Fighter Regiment"
			type = tactical_bomber
			strength = 50
			model = 1
		}
		division = {
			id = { type = 22900 id = 102 }
			name = "923rd Fighter-bomber Regiment"
			type = multi_role
			strength = 65
			model = 4
		}
		division = {
			id = { type = 22900 id = 103 }
			name = "927th Fighter Regiment"
			type = interceptor
			strength = 65
			model = 3
		}
		division = {
			id = { type = 22900 id = 104 }
			name = "931st Fighter Regiment"
			type = tactical_bomber
			strength = 65
			model = 1
		}
            division = {
			id = { type = 22900 id = 105 }
			name = "918th Air Transport Regiment"
			type     = transport_plane
			strength = 100
			model = 1
		}
	}
	airunit = {
		id = { type = 22900 id = 106 }
		location = 1337 #1399
		base = 1337 #1399
		name = "372nd Air Force Division"
		division = {
			id = { type = 22900 id = 107 }
			name = "929th Fighter-Bomber Regiment"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 22900 id = 108 }
			name = "940th Fighter Regiment"
			type = multi_role
			strength = 100
			model = 4
		}
	}
	airunit = {
		id = { type = 22900 id = 109 }
		location = 1333 #1395
			base = 1333 #1395
		name = "370th Air Force Division"
		division = {
			id = { type = 22900 id = 110 }
			name = "937th Fighter-Bomber Regiment"
			type = tactical_bomber
			strength = 100
			model = 1
		}
		division = {
			id = { type = 22900 id = 111 }
			name = "935th Fighter Regiment"
			type = multi_role
			strength = 100
			model = 4
		}
	}
}
