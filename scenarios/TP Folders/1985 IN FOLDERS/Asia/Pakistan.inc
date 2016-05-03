##############################
# Country definition for PAK #
##############################

country =
{ tag                 = PAK
  energy              = 100
  metal               = 1000
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1533
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = {
	1482 2824 2826 2825 1494 2833 1481 1480 2834 1592 1475 2832
	2829 2830 2831 1483 2827
5344 5345 
5347 5348 5349 5350 5351 5352 5353 5354 5355 
5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 
5366 5367 5368 5369 5370 5371 5372 5373 5374 5375 
5376 5377 5378 
#Kashmir
1731 5341 5342 7904 2828 5343 5346
#Skardu
5340
	}
  controlledprovinces = {
	1482 2824 2826 2825 1494 2833 1481 1480 2834 1592 1475 2832
	2829 2830 2831 1483 2827
5344 5345 
5347 5348 5349 5350 5351 5352 5353 5354 5355 
5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 
5366 5367 5368 5369 5370 5371 5372 5373 5374 5375 
5376 5377 5378 
#Kashmir
1731 5341 5342 7904 2828 5343 5346
#Skardu
5340
	}
  nationalprovinces   = {
	1482 2824 2826 2825 1494 2833 1481 1480 2834 1592 1475 2832
	2829 2830 2831 1483 2827 1731 1474 2828 1728 1430 2835
	1705 1476 1288 1285 1286 1590
5336 5337 5338 5339 5340 5341 5342 5343 5344 5345 
5346 5347 5348 5349 5350 5351 5352 5353 5354 5355 
5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 
5366 5367 5368 5369 5370 5371 5372 5373 5374 5375 
5376 5377 5378 5195 5196 5197 5198 5207 5208
5249 5250 5251 5252 5253 5254 1477 1469 5256 1457 1519 5206 1456 5204
6920 7904 7192 7924 7925 7305 7926 7983
	}
  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030
   #Motorized
   1100 1110 1120
   #Mountain
   1160 1170 1180
   #Special Forces
   1250 1260 1270
   #Naval Infantry
   1560 1570 1580
   #Airborne Infantry
   1670 1680 1690
   #Air Cavalry
   1396 1400
   #Armored Cavalry
   13060 13070
   #Mechanized
   1470 1480 1490
   #Irregular Infantry
   1360 1370 1380
   #Combat Engineers
   1830 1840 1850
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646
   #Infantry Fighting Vehicles	
   2100
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450 21180
   #Armored Personnel Carriers
   2170 2180 2850 2400 
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
   3900 3910 3920
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
   15040
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
   4450 #4180
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
   5810 5820
   #Heavy Industry
   5130 5110
   #Material Science
   53050 63160 63070
   #Construction Eng.
   5800 5080
   #Rocketry
   5560 5910
   #Agriculture
   5700 5710 5010
   #Oil
   5190 5220
   #Computing
   5310 54010 54020
   #Nuclear
   5470 5480 5490
   #Research
   5316
   #Cryptography
   5350 5360
   #Medicine
   5600 5610
   5630
   5660 5730
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
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
   82500 82510 82520 82530
   #Naval Capability
   8010
   #Amphibious Warfare
   82300
   ###################
   #  Air Doctrines  #
   ###################
   9390 9260 9400 9410
   9090 9100 9110 9120 9050 9060 9070
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   9130 9420 9300
   }
  # #####################################
  # ARMY
  # #####################################
        landunit = {
		id = { type = 17400 id = 1 }
		location = 1731 #1539
		name = "Northern Command"
		division = {
			id = { type = 17400 id = 2 }
			name = "Northern Command HQ"
			strength = 100
			type = hq
			model = 1
		}
	}
        landunit = {
		id = { type = 17400 id = 3 }
		location = 2830 #1530
		name = "Central Command"
		division = {
			id = { type = 17400 id = 4 }
			name = "Central Command HQ"
			strength = 100
			type = hq
			model = 1
		}
	}
        landunit = {
		id = { type = 17400 id = 5 }
		location = 1481 #1533
		name = "Southern Command"
		division = {
			id = { type = 17400 id = 6 }
			name = "Southern Command HQ"
			strength = 100
			type = hq
			model = 1
		}
	}
	landunit = {
		id = { type = 17400 id = 7 }
		location = 1731 #1539
		name = "I Corps"
		division = {
			id = { type = 17400 id = 8 }
			name = "6th Armoured Division"
			strength = 100
			type = armor
			model = 4
		}
		division = {
			id = { type = 17400 id = 9 }
			name = "17th Infantry Division"
			strength = 100
			type = motorized
			model = 4  
		}
		division = {
			id = { type = 17400 id = 10 }
			name = "37th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
        division = {
			id = { type = 17400 id = 11 }
			name = "11th Armoured Brigade"
			strength = 100
			type = light_armor
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 12 }
		location = 2830 #1530
		name = "II Corps"
		division = {
			id = { type = 17400 id = 13 }
			name = "1st Armoured Division"
			strength = 100
			type = armor
			model = 4 
		}
		division = {
			id = { type = 17400 id = 14 }
			name = "14th Infantry Division"
			strength = 100
			type = motorized
			model = 4   
		}
		division = {
			id = { type = 17400 id = 15 }
			name = "40th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
        division = {
			id = { type = 17400 id = 16 }
			name = "5th Armuored Brigade"
			strength = 100
			type = light_armor
			model = 4
		}
        division = {
			id = { type = 17400 id = 17 }
			name = "32nd Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 18 }
		location = 2830 #1530
		name = "IV Corps"
        division = {
			id = { type = 17400 id = 20 }
			name = "10th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 21 }
			name = "11th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 22 }
			name = "3rd Armoured Brigade"
			strength = 30
			type = light_armor
			model = 4
		}
        division = {
			id = { type = 17400 id = 23 }
			name = "212th Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 24 }
		location = 1481 #1533
		name = "V Corps"
		division = {
			id = { type = 17400 id = 25 }
			name = "16th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 26 }
			name = "18th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
        division = {
			id = { type = 17400 id = 27 }
			name = "25th Mechanized Division"
			strength = 100
			type = infantry
			model = 4  
		}
        division = {
			id = { type = 17400 id = 28 }
			name = "9th Armoured Brigade"
			strength = 100
			type = light_armor
			model = 4
		}
        division = {
			id = { type = 17400 id = 29 }
			name = "31st Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 30 }
		location = 5344 #1534
		name = "X Corps"
        division = {
			id = { type = 17400 id = 31 }
			name = "12th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 32 }
			name = "19th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 33 }
			name = "23rd Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
        division = {
			id = { type = 17400 id = 34 }
			name = "8th Armoured Brigade"
			strength = 100
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 17400 id = 35 }
			name = "111th Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 36 }
		location = 1483 #1537
		name = "XI Corps"
		division = {
			id = { type = 17400 id = 37 }
			name = "7th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 38 }
			name = "9th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 39 }
		location = 1494 #1529
		name = "XII Corps"
		division = {
			id = { type = 17400 id = 40 }
			name = "33rd Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 41 }
			name = "41st Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 42 }
		location = 5344 #1534
		name = "XXX Corps"
		division = {
			id = { type = 17400 id = 43 }
			name = "8th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
		division = {
			id = { type = 17400 id = 44 }
			name = "15th Infantry Division"
			strength = 100
			type = motorized
			model = 4
		}
        division = {
			id = { type = 17400 id = 45 }
			name = "2nd Armoured Brigade"
			strength = 100
			type = light_armor
			model = 4
		}
	}
	landunit = {
		id = { type = 17400 id = 46 }
		location = 5345 #1536
		name = "XXXI Corps"
        division = {
			id = { type = 17400 id = 47 }
			name = "26th Mechanized Division"
			strength = 100
			type = infantry
			model = 4
		}
		division = {
			id = { type = 17400 id = 48 }
			name = "35th Infantry Division"
			strength = 100
			type = motorized
			model = 4
	 	}
		division = {
			id = { type = 17400 id = 49 }
			name = "13th Armoured Brigade"
			strength = 100
			type = light_armor
			model = 4
		}
        division = {
			id = { type = 17400 id = 50 }
			name = "101st Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}    
	}
	landunit = {
		id = { type = 17400 id = 51 }
		location = 1731 #1539
		name = "Force Command Northern Areas"
		division = {
			id = { type = 17400 id = 52 }
			name = "61st Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}   
        division = {
			id = { type = 17400 id = 53 }
			name = "62nd Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}   
        division = {
			id = { type = 17400 id = 54 }
			name = "80th Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}   
        division = {
			id = { type = 17400 id = 55 }
			name = "150th Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}   
        division = {
			id = { type = 17400 id = 56 }
			name = "323rd Infantry Brigade"
			strength = 100
			type = d_06
			model = 4
		}   
	}
    landunit = {
		id = { type = 17400 id = 57 }
		location = 5344 #1534
		name = "Special Services Group"
		division = {
			id = { type = 17400 id = 68 }
			name = "Special Services Group"
			strength = 100
			type = d_03
			model = 4
			extra = engineer
			brigade_model = 4
			experience = 15
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 17400 id = 300 }
		location = 1481 #1533
		base = 1481 #1533
		name = "Pakistani Navy"
		division = {
			id = { type = 17400 id = 301 }
			name = "PNS Tariq"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17400 id = 302 }
			name = "PNS Babur"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17400 id = 303 }
			name = "PNS Khaidar"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17400 id = 304 }
			name = "PNS Badr"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17400 id = 305 }
			name = "PNS Shah Jehan"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17400 id = 306 }
			name = "PNS Tippu Sultan"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17400 id = 307 }
			name = "PNS Zulfiquar"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 17400 id = 308 }
			name = "PNS Shamsher"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 17400 id = 309 }
		location = 1481 #1533
		base = 1481 #1533
		name = "Submarine Fleet"
		division = {
			id = { type = 17400 id = 310 }
			name = "PNS Khalid"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 311 }
			name = "PNS Saad"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 312 }
			name = "PNS Hashmat"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 313 }
			name = "PNS Hurmat"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 314 }
			name = "PNS Hangor"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 315 }
			name = "PNS Shushhuk"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 316 }
			name = "PNS Mangro"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 17400 id = 318 }
			name = "PNS Ghazi"
			type = submarine
			model = 5
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 17400 id = 200 }
		location = 1483 #1537
		base = 1483 #1537
		name = "32nd Wing"
		division = {
			id = { type = 17400 id = 202 }
			name = "2nd Squadron"
			type = tactical_bomber
			strength = 50
			model = 2
		}
		division = {
			id = { type = 17400 id = 203 }
			name = "7th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
	}
	airunit = {
		id = { type = 17400 id = 204 }
		location = 1494 #1529
		base = 1494 #1529
		name = "33rd Wing"
		division = {
			id = { type = 17400 id = 205 }
			name = "14th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 17400 id = 206 }
			name = "15th Squadron"
			type = tactical_bomber
			strength = 100
			model = 2
		}
		division = {
			id = { type = 17400 id = 208 }
			name = "20th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 17400 id = 210 }
			name = "16th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
	}
	#airunit = {
	#	id = { type = 17400 id = 211 }
	#	location = 1494 #1529
	#	base = 1494 #1529
	#	name = "Naval Patrol Wing"
	#	division = {
	#		id = { type = 17400 id = 212 }
	#		name = "Naval Squadron"
	#		type     = naval_bomber
	#		strength = 30
	#		model = 2
	#	}
	#}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 17400 id = 400 }
		name = "PNS Hamza"
		type = submarine
		model = 5
		cost = 5
		date = { day = 9 month = april year = 1989 }
	}
}