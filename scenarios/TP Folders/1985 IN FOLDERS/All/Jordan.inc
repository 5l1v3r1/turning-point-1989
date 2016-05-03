##############################
# Country definition for JOR #
##############################

country =
{ tag                 = JOR
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1796
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 7
  }
  diplomacy = { 
	relation = { tag = USA value = -25 }
	}
  headofstate            = {  type = 9 id = 370001  } 
  headofgovernment       = {  type = 9 id = 370002  } 
  foreignminister        = {  type = 9 id = 370003  } 
  armamentminister       = {  type = 9 id = 370004  } 
  ministerofsecurity     = {  type = 9 id = 370005  } 
  ministerofintelligence = {  type = 9 id = 370006  } 
  chiefofstaff           = {  type = 9 id = 370007  } 
  chiefofarmy            = {  type = 9 id = 370008  } 
  chiefofnavy            = {  type = 9 id = 370009  } 
  chiefofair             = {  type = 9 id = 370010  } 
  
  ownedprovinces      = {
1796 1882 1802 407 1803 4166 
	}
  controlledprovinces = {
1796 1882 1802 407 1803 4166 
	}
  nationalprovinces   = {
1796 1882 1802 407 1803 4166 4167 1797
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
	# #####################################
	# ARMY
	# #####################################
    landunit = {
		id = { type = 13300 id = 1 }
		location = 1796 #1022
		name = "Jordanian Army Headquarters"
		division = {
			id = { type = 13300 id = 2 }
			name = "Jordanian Army HQ"
			strength = 100
			type = hq
			model = 1
		}
        division = {
			id = { type = 13300 id = 3 }
			name = "Hamza Ibn Abd Al-Muttalib Royal Guard Brigade"
			strength = 100
			type = d_03
			model = 4
		}
	}
	landunit = {
		id = { type = 13300 id = 4 }
		location = 1796 #1023
		name = "Northern Command"
        division = {
			id = { type = 13300 id = 5 }
			name = "1st Princess Aliyah Brigade"
			strength = 60
			type = d_06
			model = 3
		}
		division = {
			id = { type = 13300 id = 6 }
			name = "3rd King Talal Brigade"
			strength = 60
			type = cavalry
			model = 3
		}
		division = {
			id = { type = 13300 id = 7 }
			name = "12th Al-Yarmouk Brigade"
			strength = 60
			type = cavalry
			model = 3
		}
        division = {
			id = { type = 13300 id = 8 }
			name = "2nd Border Guard Brigade"
			strength = 50
			type = garrison
			model = 3
		}
	}
	landunit = {
		id = { type = 13300 id = 9 }
		location = 1796 #1022
		name = "Central Command"
		division = {
			id = { type = 13300 id = 10 }
			name = "1st Royal Guard Brigade"
			strength = 70
			type = cavalry
			model = 3
		}
		division = {
			id = { type = 13300 id = 11 }
			name = "2nd Hashemite Brigade"
			strength = 60
			type = d_06
			model = 3
		}
	}
    landunit = {
		id = { type = 13300 id = 12 }
		location = 407 #1024
		name = "Eastern Command"
		division = {
			id = { type = 13300 id = 13 }
			name = "2nd Royal Guard Brigade"
			strength = 70
			type = cavalry
			model = 3
		}
		division = {
			id = { type = 13300 id = 14 }
			name = "90th King Abdullah I Brigade"
			strength = 60
			type = cavalry
			model = 3
		}
        division = {
			id = { type = 13300 id = 15 }
			name = "1st Border Guard Brigade"
			strength = 50
			type = garrison
			model = 3
		}
	}
    landunit = {
		id = { type = 13300 id = 16 }
		location = 1802 #1025
		name = "Southern Command"
		division = {
			id = { type = 13300 id = 17 }
			name = "99th Wasfi Al Tal Armoured Brigade"
			strength = 60
			type = light_armor
			model = 2
		}
		division = {
			id = { type = 13300 id = 18 }
			name = "Prince Zeid Bin Hussein Brigade"
			strength = 60
			type = d_06
			model = 3
		}
        division = {
			id = { type = 13300 id = 19 }
			name = "3rd Border Guard Brigade"
			strength = 50
			type = garrison
			model = 3
		}
	}
	landunit = {
		id = { type = 13300 id = 21 }
		location = 1796 #1022
		name = "King Abdullah II 3rd Armoured Division" #  strategic reserve
		division = {
			id = { type = 13300 id = 22 }
			name = "40th King Hussein Armoured Brigade"
			strength = 60
			type = light_armor
			model = 2
		}	
		division = {
			id = { type = 13300 id = 23 }
			name = "60th Prince Hassan Armoured Brigade"
			strength = 60
			type = light_armor
			model = 2
		}
		division = {
			id = { type = 13300 id = 24 }
			name = "91st Armoured Brigade"
			strength = 60
			type = light_armor
			model = 2
		}
	}
        landunit = {
		id = { type = 13300 id = 25 }
		location = 1882 #1026
		name = "Joint Special Operations Command"
            division = {
			id = { type = 13300 id = 26 }
			name = "28th Prince Hussein Rangers Brigade "
			strength = 80
			type = d_03
			model = 4
		}
		division = {
			id = { type = 13300 id = 27 }
			name = "30th Hussein Bin Ali Paratrooper Brigade"
			strength = 80
			type = d_08
			model = 3
		}
        division = {
			id = { type = 13300 id = 28 }
			name = "37th King Abdullah II Special Forces Brigade "
			strength = 80
			type = d_03
			model = 4
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 13300 id = 200 }
		location = 1796 #1022
		base = 1796 #1022
		name = "1st Air Force"
		division = {
			id = { type = 13300 id = 201 }
			name = "1st Squadron"
			type = interceptor
			strength = 75
			model = 3
		}
		division = {
			id = { type = 13300 id = 202 }
			name = "6th Squadron"
			type = interceptor
			strength = 75
			model = 3
		}
		division = {
			id = { type = 13300 id = 203 }
			name = "7th Squadron"
			type = interceptor
			strength = 75
			model = 3
		}
	}
	airunit = {
		id = { type = 13300 id = 204 }
		location = 1796 #1022
		base = 1796 #1022
		name = "2nd Air Force"
		division = {
			id = { type = 13300 id = 205 }
			name = "17th Squadron"
			type = interceptor
			strength = 50
			model = 3
		}
		division = {
			id = { type = 13300 id = 206 }
			name = "9th Squadron"
			type = interceptor
			strength = 50
			model = 3
		}
		division = {
			id = { type = 13300 id = 207 }
			name = "9th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
	}
}
