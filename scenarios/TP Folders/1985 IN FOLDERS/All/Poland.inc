 ############################## 
 # Country definition for POL # 
 ############################## 
 
 province = { id = 208 air_base = { size = 5 current_size = 5 } } #Bydgoszcz
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { tag                    = POL 
   ai = "pol_1985.ai"
   capital                = 485
   manpower               = 130 
   # Resource Reserves 
   energy                 = 2460
   metal                  = 1230
   rare_materials         = 615
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 20 
   dissent				  = 10		#Solidarity (trade union) and dissent among the population.
   industrial_modifier 	  = 0.59	#Economic decline.
   
   diplomacy = {}
   
   SpyInfo                = {  country = "POL" NumberOfSpies = 9  } 
   nationalprovinces      = {
		485 2628 486 1595 482 473 1623 1400 3238 308 3258 302 1810 3259 1779
		303 306 3265 307 208 3264 483 3263 2647 304 3260 1811 3261 509 505 
		1875 3272 508 1876 305 222 211 481 3266 504 3270 1884 487 484
		3268 480 3267 3269 479 488 3271 489 6515 6516 6519
		7046 7177 7047 7262 7049 7050 7048 7335 7978 209 214 3277 7263
	}
   ownedprovinces         = {
		485 2628 486 1595 482 473 1623 1400 3238 308 3258 302 1810 3259 1779
		303 306 3265 307 208 3264 483 3263 2647 304 3260 1811 3261 509 505 
		1875 3272 508 1876 305 222 211 481 3266 504 3270 1884 487 484
		3268 480 3267 3269 479 488 3271 489 6515 6516 6519
		7046 7177 7047 7262 7049 7050 7048 7335 7978
	}
   controlledprovinces    = {
		485 2628 486 1595 482 473 1623 1400 3238 308 3258 302 1810 3259 1779
		303 306 3265 307 208 3264 483 3263 2647 304 3260 1811 3261 509 505 
		1875 3272 508 1876 305 222 211 481 3266 504 3270 1884 487 484
		3268 480 3267 3269 479 488 3271 489 6515 6516 6519
		7046 7177 7047 7262 7049 7050 7048 7335 7978
	}

   policy = 
   { date              = {  year = 0 month = january day = 0  } 
     democratic        = 1
     political_left    = 10
     freedom           = 3
     free_market       = 1
     professional_army = 3
     defense_lobby     = 8
     interventionism   = 7 
    }

   headofstate            = {  type = 9 id = 60001  }
   headofgovernment       = {  type = 9 id = 60002  }
   foreignminister        = {  type = 9 id = 60003  }
   armamentminister       = {  type = 9 id = 60004  }
   ministerofsecurity     = {  type = 9 id = 60005  }
   ministerofintelligence = {  type = 9 id = 60006  }
   chiefofstaff           = {  type = 9 id = 60007  }
   chiefofarmy            = {  type = 9 id = 60008  }
   chiefofnavy            = {  type = 9 id = 60009  }
   chiefofair             = {  type = 9 id = 60010  }
   
   dormant_ministers = { 60011 60022 60023 60024 } #Lech Walesa
   
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
   5560 5910 5410 53030 5450 5460 
   5426 5440 5430 #5476 Moon Landing
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
  
   # #####################################
   # ARMY
   # #####################################
	landunit = {
		id = { type = 18600 id = 0 }
		location = 485 #Warsaw
		name = "1st Polish Army"
		division = {
			id = { type = 18600 id = 1 }
			name     = "1st Polish Army HQ"
			strength = 100
			type     = hq
			model    = 5   
		}
		division = {
			id = { type = 18600 id = 2 }
			name     = "1st PVA Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5
			extra    = b_01
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 3 }
		location = 487 #Lublin
		name = "1st Polish Army"
		division = {
			id = { type = 18600 id = 4 }
			name     = "3rd PVA Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5   
			extra    = artillery
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 5 }
		location = 489 #Rzeszow
		name = "51st Polish Army"
		division = {
			id = { type = 18600 id = 6 }
			name     = "9th PVA (Dresden) Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5   
			extra    = artillery
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 7 }
		location = 208 #Bydgoszcz
		name = "2nd Polish Army"
		division = {
			id = { type = 18600 id = 8 }
			name     = "2nd Polish Army HQ"
			strength = 100
			type     = hq
			model    = 5 
		}
	}
	landunit = {
		id = { type = 18600 id = 9 }
		location = 1810 #Neustettin
		name = "2nd Polish Army"
		division = {
			id = { type = 18600 id = 10 }
			name     = "20th PVA Tank Division"
			strength = 100
			type     = armor
			model    = 5   
			extra    = engineer
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 11 }
		location = 304 #Elbing
		name = "2nd Polish Army"
		division = {
			id = { type = 18600 id = 12 }
			name     = "16th PVA Tank Division"
			strength = 100
			type     = armor
			model    = 5   
			extra    = engineer
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 13 }
		location = 3259 #Köslin
		name = "2nd Polish Army"
		division = {
			id = { type = 18600 id = 14 }
			name     = "8th PVA Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5   
			extra    = b_01
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 15 }
		location = 302 #Stettin
		name = "2nd Polish Army"
		division = {
			id = { type = 18600 id = 16 }
			name     = "12th PVA Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5    
			extra    = artillery
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 17 }
		location = 1811 #Allenstein
		name = "2nd Polish Army"
		division = {
			id = { type = 18600 id = 18 }
			name     = "15th PVA Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5    
			extra    = artillery
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 19 }
		location = 473 #Breslau
		name = "3rd Polish Army"
		division = {
			id = { type = 18600 id = 20 }
			name     = "3rd Polish Army HQ"
			strength = 100
			type     = hq
			model    = 5
		}
	}
	landunit = {
		id = { type = 18600 id = 21 }
		location = 3238 #Sagan
		name = "3rd Polish Army"
		division = {
			id = { type = 18600 id = 22 }
			name     = "5th PVA (Saxon) Tank Division"
			strength = 100
			type     = armor
			model    = 5    
			extra    = engineer
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
		division = {
			id = { type = 18600 id = 23 }
			name     = "11th PVA Tank Division"
			strength = 50
			type     = armor
			model    = 5    
			extra    = artillery
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
		division = {
			id = { type = 18600 id = 24 }
			name     = "2nd PVA (Warsaw) Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5    
			extra    = b_01
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 25 }
		location = 1595 #Gleiwitz
		name = "3rd Polish Army"
		division = {
			id = { type = 18600 id = 26 }
			name     = "10th PVA (Sudeten) Tank Division"
			strength = 50
			type     = armor
			model    = 5    
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 27 }
		location = 308 #Meseritz
		name = "3rd Polish Army"
		division = {
			id = { type = 18600 id = 28 }
			name     = "4th PVA (Pomeranian) Motorized Rifle Division"
			strength = 50
			type     = motorized
			model    = 5    
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 29 }
		location = 479 #Krakow
		name = "3rd Polish Army"
		division = {
			id = { type = 18600 id = 30 }
			name     = "6th PVA Airborne Division"
			strength = 50
			type     = paratrooper
			model    = 5    
		}
	}
	landunit = {
		id = { type = 18600 id = 31 }
		location = 303 #Danzig
		name = "3rd Polish Army"
		division = {
			id = { type = 18600 id = 32 }
			name     = "7th PVA (Lusatian) Naval Infantry Division"
			strength = 50
			type     = marine
			model    = 5    
		}
	}
	landunit = {
		id = { type = 18600 id = 33 }
		location = 308 #Meseritz
		name = "Polish Army Reserves"
		division = {
			id = { type = 18600 id = 34 }
			name     = "Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized
			model    = 5    
		}
		division = {
			id = { type = 18600 id = 35 }
			name     = "Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized
			model    = 5    
		}
	}
    # #####################################
	# AIRFORCE
	# #####################################
	airunit = {
		id = { type = 18600 id = 36 }
		name = "1st PVA Air Corps"
		location = 485 #Warsaw
		base = 485 #Warsaw
		division = {
			id = { type = 18600 id = 37 }
			name = "Fighter Division"
			strength = 100
			type = interceptor
			model = 4
		}
		division = {
			id = { type = 18600 id = 38 }
			name = "Fighter-Bomber Division"
			strength = 100
			type = multi_role
			model = 6
			extra    = b_02
			brigade_model = 1
		}
	}
	airunit = {
		id = { type = 18600 id = 39 }
		name = "2nd PVA Air Corps"
		location = 208 #Bydgoszcz
		base = 208 #Bydgoszcz
		division = {
			id = { type = 18600 id = 40 }
			name = "Fighter Division"
			strength = 100
			type = interceptor
			model = 4
		}
		division = {
			id = { type = 18600 id = 41 }
			name = "Fighter-Bomber Division"
			strength = 100
			type = multi_role
			model = 6
			extra    = b_02
			brigade_model = 1
		}
	}
	airunit = {
		id = { type = 18600 id = 42 }
		name = "3rd PVA Air Corps"
		location = 473 #Breslau
		base = 473 #Breslau
		division = {
			id = { type = 18600 id = 43 }
			name = "Fighter Division"
			strength = 100
			type = interceptor
			model = 4
		}
		division = {
			id = { type = 18600 id = 44 }
			name = "Fighter-Bomber Division"
			strength = 100
			type = multi_role
			model = 6
			extra    = b_02
			brigade_model = 1
		}
	}
} 
 
