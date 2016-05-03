	#####################
# Country main data #
#####################

country =
{ tag                    = BUL
  ai = "bul_1985.ai"
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  manpower               = 200
  capital                = 417
  transports             = 10
  escorts                = 4
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = { 
417 419 420 422 421 416 413 414 410 423 2323 2324 1911 
2612 2610 3374 3397 3352 3353 3354 435 6564 6563 6505 7337 6506 6507
  }
  ownedprovinces         = { 419 420 422 421 417 416 2323 2324 1911
2612
3352 3353 3354
6506 6507 6510 7337 423
  }
  controlledprovinces    = { 419 420 422 421 417 416 2323 2324 1911
2612
3352 3353 3354
6506 6507 6510 7337 423
  }
  claimedprovinces  	 = { 
1169 411 412 3055 3393 2321 2322 3398 436 2449 6510 1168 6562 6508 6511 7352 7055 7319 2319
  }

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030 #1040 1050
   #Motorized
   1100 1110 1120 #1130 1140
   #Mountain
   1160 1170 1180 #1190 1200
   #Special Forces
   1250 1260 1270 #1280 1290
   #Naval Infantry
   1560 1570 1580 #1590 1600
   #Airborne Infantry
   1670 1680 1690 #1700 1710
   #Air Cavalry
   1396 1400 1410 #1420
   #Armored Cavalry
   13060 13070 13080 #1310
   #Mechanized
   1470 1480 1490 #1500 1510
   #Irregular Infantry
   1360 1370 1380 #1390 1530
   #Combat Engineers
   1830 1840 1850 #1860 1870
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646 2650 2030
   #Infantry Fighting Vehicles
   2100 2110 2120
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450 21180 21190
   #Armored Personnel Carriers
   2170 2180 2850 2400 
   #Field Artillery
   2290 2300 2310 2900 
   #Self-Propelled Anti-Air
   2810 2820 2510 2520
   #Man-Portable Air-Defense Systems
   3000 3170 3180
   #Self-Propelled Artillery
   2220 2230 2240 2250 
   #Self-Propelled Rocket Artillery
   2980 2260 2270 2280 
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110 3120 3130 #3140 3150
   #Cruisers
   3410 3420 3430 3440 #3450 3456 3460
   #Nuclear Cruisers
   #3470 3480 12040 3770 3780
   #Destroyers
   3310 3320 3330 3340 #3350 12030 3710
   #Light Aircraft Carriers
   12100 #12110
   #Helicopter Carrier
   #3210 3220 3230
   #Aircraft Carriers
   #3510 #3520 3530 
   #Supercarriers
   #3540 3560 12060 3570
   #Submarines
   3010 3020 3030 #3060 3070 3090
   #Nuclear Submarines
   #12000 3080 3610 3680 3690
   #Nuclear Ballistic Submarines
   #3620 3630 3640 3650
   #Transport Ships
   3900 3910 3920 3930 3940 3950
   ###################
   #    Aircraft     #
   ###################
   #Attack Helicopter
   4900 4910 #4920 4930
   #Reconnaissance Aircraft
   4770 #4780
   #Strategic Bomber
   4800 #4810
   #Strike Bomber
   15040 15050 4360
   #Naval Patrol
   4610 #4620
   #ASW Bomber
   4230 #4240
   #Attack Aircraft
   4030 4060 4090 #15000 15010 15020
   #Multi-Role
   4500 4570 4530 4540 #4550 4010 4020
   #Air Superiority Fighter
   4510 4520 #4300 4310 4320
   #Carrier Air Groups
   #ACAG
   #2320 2330 2340 2350
   #MRCAG
   #2140 2150 2160 2190 2200
   #FCAG
   #2020 2070 2080 2090 2130
   #Air Transports
   4250 4260 4270 4290
   #AEW&C
   4450 4180
   #VTOL Aircraft
   #4350
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
   5810 5820 5050
   #Heavy Industry
   5130 5110 5120
   #Material Science
   53050 63160 63070 #63080
   #Construction Eng.
   5800 5080 5090
   #Rocketry

   #Agriculture
   5700 5710 5010
   #Oil
   5190 5220
   #Computing
   5310 54010 54020 54030 5320 53116 5330 53060 #5340 5920
   #Nuclear
   5470 5480 5490 5500 5510 5520 5530 5540
   #Research
   5316
   #Cryptography
   5350 5360 5370 5380
   #Medicine
   5600 5610 5680
   5630
   5660 5730
   #Renewable Energy
   5720
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1660
   6580 6730 6750 6310 6800 6300 6760 6320 6330 6340 6350
   ###################
   #  Secret Weapons #
   ###################
   #
   
   #
   
   #
   ###################
   # Naval Doctrines #
   ###################
   #Carrier Supremacy
   #8900 8910 8920 8930 8940 8950 8960
   #Surface Ship Role
   81050 81060 81070 81080 81090 81100 81110 81120
   #Naval Interdiction
   8500 8510 8520 8550 8560 8570 8600 8610 8620 #8630 8640 8650 8660 8700 8710 8720 8730 8740 8750
   #Naval Supremacy
   8100 8110 8150 8120 8160 8170 8200 8210 8220 #8230 8240 8250 8260 8300 8310 8320 8330 8340 8350
   #Logistics Support
   82500 82510 82520 82530
   #Naval Capability
   8010 #8020 8030
   #Amphibious Warfare
   82300 82310 82320 82330
   ###################
   #  Air Doctrines  #
   ###################
   9390 9260 9400 9410
   9090 9100 9110 9120 9050 9060 9070
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   9130 9420 9300
   27320 27330 27350 27360 27380 27390
   27000 27140 27150 27160 27170 27180 27190 27200
   9270 27070 27080 27090 27100 27110 27120 27130
   }
  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 10
     free_market       = 4
     freedom           = 3 
     professional_army = 3 
     defense_lobby     = 6 
     interventionism   = 6
  }
  headofstate            = { type = 9 id = 19001 }
  headofgovernment       = { type = 9 id = 19002 }
  foreignminister        = { type = 9 id = 19003 }
  armamentminister       = { type = 9 id = 19004 }
  ministerofsecurity     = { type = 9 id = 19005 }
  ministerofintelligence = { type = 9 id = 19006 }
  chiefofstaff           = { type = 9 id = 19007 }
  chiefofarmy            = { type = 9 id = 19008 }
  chiefofnavy            = { type = 9 id = 19009 }
  chiefofair             = { type = 9 id = 19010 }
  
  # #####################################
  # ARMY
  # #####################################
	landunit = {
		id = { type = 19000 id = 0 }
		location = 417 #Sofia
		name = "1st BKA Army"
		division = {
			id = { type = 19000 id = 1 }
			name     = "1st BKA Army HQ"
			strength = 100
			type     = hq
			model    = 5   
		}
		division = {
			id = { type = 19000 id = 2 }
			name     = "9th BKA Tank Brigade"
			strength = 100
			type     = light_armor
			model    = 5
			extra    = b_01
			brigade_model = 3
		}
		division = {
			id = { type = 19000 id = 3 }
			name     = "1st BKA Guards Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5
			extra    = artillery
			brigade_model = 3
		}
		division = {
			id = { type = 19000 id = 4 }
			name     = "28th BKA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5
			extra    = anti_air
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 19000 id = 5 }
		location = 421 #Plovdiv
		name = "2nd BKA Army"
		division = {
			id = { type = 19000 id = 6 }
			name     = "2nd BKA Army HQ"
			strength = 100
			type     = hq
			model    = 5   
		}
		division = {
			id = { type = 19000 id = 7 }
			name     = "2nd BKA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			extra    = artillery
			brigade_model = 3
		}
		division = {
			id = { type = 19000 id = 8 }
			name     = "19th BKA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			extra    = anti_air
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 19000 id = 9 }
		location = 3353 #Stara Zagora
		name = "2nd BKA Army"
		division = {
			id = { type = 19000 id = 10 }
			name     = "5th BKA Tank Brigade"
			strength = 100
			type     = light_armor
			model    = 5   
			#extra    = b_01
			#brigade_model = 3
		}
		division = {
			id = { type = 19000 id = 11 }
			name     = "17th BKA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			#extra    = b_01
			#brigade_model = 3
		}
	}
	landunit = {
		id = { type = 19000 id = 12 }
		location = 3354 #Sliven
		name = "2nd BKA Army"
		division = {
			id = { type = 19000 id = 13 }
			name     = "11th BKA Tank Brigade"
			strength = 100
			type     = light_armor
			model    = 5   
			extra    = anti_air
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 19000 id = 14 }
		location = 3354 #Sliven
		name = "3rd BKA Army"
		division = {
			id = { type = 19000 id = 15 }
			name     = "3rd BKA Army HQ"
			strength = 100
			type     = hq
			model    = 5   
			extra    = artillery
			brigade_model = 3
		}
		division = {
			id = { type = 19000 id = 16 }
			name     = "13th BKA Tank Brigade"
			strength = 100
			type     = light_armor #T-54/55 All of the brigades.
			model    = 5   
		}
	}
	landunit = {
		id = { type = 19000 id = 17 }
		location = 2324 #Varna
		name = "3rd BKA Army"
		division = {
			id = { type = 19000 id = 18 }
			name     = "24th BKA Tank Brigade"
			strength = 100
			type     = light_armor
			model    = 5   
		}
		division = {
			id = { type = 19000 id = 19 }
			name     = "3rd BKA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
		}
	}
	landunit = {
		id = { type = 19000 id = 20 }
		location = 422 #Burgas
		name = "3rd BKA Army"
		division = {
			id = { type = 19000 id = 21 }
			name     = "7th BKA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			#extra    = b_01
			#brigade_model = 3
		}
	}
	landunit = {
		id = { type = 19000 id = 22 }
		location = 6510 #Yambol
		name = "3rd BKA Army"
		division = {
			id = { type = 19000 id = 23 }
			name     = "18th BKA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			#extra    = b_01
			#brigade_model = 3
		}
	}
	landunit = {
		id = { type = 19000 id = 24 }
		location = 417 #Sofia
		name = "3rd BKA Army"
		division = {
			id = { type = 19000 id = 25 }
			name     = "1st BKA Air Assault Brigade"
			strength = 100
			type     = d_08
			model    = 5   
		}
	}
	landunit = {
		id = { type = 19000 id = 26 }
		location = 2324 #Varna
		name = "3rd BKA Army"
		division = {
			id = { type = 19000 id = 27 }
			name     = "1ST BKA Naval Infantry Battalion"
			strength = 25
			max_strength = 25
			type     = d_05
			model    = 2   
		}
	}
	landunit = {
		id = { type = 19000 id = 28 }
		location = 417 #Sofia
		name = "BKA Army Reserves"
		division = {
			id = { type = 19000 id = 29 }
			name     = "BKA Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized #Equip tank brigade
			model    = 5   
		}
		division = {
			id = { type = 19000 id = 30 }
			name     = "BKA Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized #Equip tank brigade
			model    = 5   
		}
		division = {
			id = { type = 19000 id = 31 }
			name     = "BKA Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized #Equip APC
			model    = 5   
		}
		division = {
			id = { type = 19000 id = 32 }
			name     = "BKA Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized
			model    = 5   
		}
	}
    # #####################################
	# AIRFORCE
	# #####################################
	airunit = {
		id = { type = 19000 id = 33 }
		name = "1st BKA Air Army"
		location = 417 #Sofia
		base = 417 #Sofia
		division = {
			id = { type = 19000 id = 34 }
			name = "Fighter Regiments"
			strength = 100
			type = multi_role
			model = 4
			extra    = b_02
			brigade_model = 1
		}
		division = {
			id = { type = 19000 id = 35 }
			name = "Fighter Regiments"
			strength = 100
			type = interceptor
			model = 3
		}
	}
} 
 