############################## 
# Country definition for CZE # 
############################## 
 
province = { id = 468 air_base = { size = 5 current_size = 5 } } #Hradec
 
#####################
# Country main data #
#####################

country =
{ tag                    = CZE
  ai = "cze_1985.ai"
  ai_settings = {flags = {
			MOB1 = yes
			MOB2 = yes
			MOB3 = yes
			MOB4 = yes
		}
  }
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 200
  capital                = 469
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = { 470 469 468 474 475 478 477 476 1888 1887 2296 3228 3229 3232 7261
  }
  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 476
							1888 1889 1887 53 2296
							3228	3229	3230	3231	3232	
							3262
6518
7261
  }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 476
							1888 1889 1887 53 2296
							3228	3229	3230	3231	3232	
							3262
6518
7261
  }
  claimedprovinces = { 2628 472 471 3262 466 53 467 1889 490 2302 3231 3230 3233 499 6518 7177 }

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
  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 3
     political_left    = 10
     free_market       = 1 
     freedom           = 1
     professional_army = 5 
     defense_lobby     = 8
     interventionism   = 6
  }
  headofstate            = { type = 9 id = 24001 }
  headofgovernment       = { type = 9 id = 24002 }
  foreignminister        = { type = 9 id = 24003 }
  armamentminister       = { type = 9 id = 24004 }
  ministerofsecurity     = { type = 9 id = 24005 }
  ministerofintelligence = { type = 9 id = 24006 }
  chiefofstaff           = { type = 9 id = 24007 }
  chiefofarmy            = { type = 9 id = 24008 }
  chiefofnavy            = { type = 9 id = 24009 }
  chiefofair             = { type = 9 id = 24010 }

  # #####################################
  # ARMY
  # #####################################
	landunit = {
		id = { type = 26000 id = 0 }
		location = 1888 #Tabor
		name = "Western Army Group"
		division = {
			id = { type = 26000 id = 1 }
			name     = "Western Army Group HQ"
			strength = 100
			type     = hq
			model    = 5   
		}
		division = {
			id = { type = 26000 id = 2 }
			name     = "9th CVA Tank Division"
			strength = 100
			type     = armor
			model    = 5
			extra    = b_01
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 3 }
		location = 470 #Plzen
		name = "1st Czech Army"
		division = {
			id = { type = 26000 id = 4 }
			name     = "1st Czech Army HQ"
			strength = 100
			type     = hq
			model    = 5
			extra1    = anti_air
			brigade_model1 = 3
		}
		division = {
			id = { type = 26000 id = 5 }
			name     = "19th CVA Mot Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			extra    = artillery
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 6 }
		location = 3228 #Kladno
		name = "1st Czech Army"
		division = {
			id = { type = 26000 id = 7 }
			name     = "1st CVA Tank Division"
			strength = 100
			type     = armor
			model    = 5
			extra    = b_01
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 8 }
		location = 53 #Prachatice
		name = "1st Czech Army"
		division = {
			id = { type = 26000 id = 9 }
			name     = "2nd CVA Mot Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			extra    = artillery
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 10 }
		location = 466 #Karlovy Vary
		name = "1st Czech Army"
		division = {
			id = { type = 26000 id = 11 }
			name     = "20th CVA Mot Rifle Division"
			strength = 100
			type     = motorized
			model    = 5   
			extra    = artillery
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 12 }
		location = 470 #Plzen
		name = "4th Czech Army"
		division = {
			id = { type = 26000 id = 13 }
			name     = "4th Czech Army HQ"
			strength = 100
			type     = hq
			model    = 5   
			extra    = anti_air
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 14 }
		location = 3229 #Jihlava
		name = "4th Czech Army"
		division = {
			id = { type = 26000 id = 15 }
			name     = "4th CVA Tank Division"
			strength = 100
			type     = armor
			model    = 5   
			extra    = b_01
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 16 }
		location = 474 #Ostrava
		name = "4th Czech Army"
		division = {
			id = { type = 26000 id = 17 }
			name     = "3rd CVA Mot Rifle Division"
			strength = 100
			type     = motorized
			model    = 5    
			extra    = artillery
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 18 }
		location = 1888 #Ceske Budejovice
		name = "4th Czech Army"
		division = {
			id = { type = 26000 id = 19 }
			name     = "15th PVA Motorized Rifle Division"
			strength = 100
			type     = motorized
			model    = 5    
			extra    = artillery
			brigade_model = 3
			extra1    = engineer
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 20 }
		location = 478 #Trencin
		name = "Eastern Army"
		division = {
			id = { type = 26000 id = 21 }
			name     = "Eastern Army HQ"
			strength = 100
			type     = hq
			model    = 5
		}
	}
	landunit = {
		id = { type = 26000 id = 22 }
		location = 7261 #Nitra
		name = "Eastern Army"
		division = {
			id = { type = 26000 id = 23 }
			name     = "13th CVA Tank Division"
			strength = 30
			type     = armor
			model    = 5    
			extra    = engineer
			brigade_model = 3
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 24 }
		location = 1887 #Presov
		name = "Eastern Army"
		division = {
			id = { type = 26000 id = 25 }
			name     = "14th CVA Tank Division"
			strength = 30
			type     = armor
			model    = 5   
			extra    = b_01
			brigade_model = 3			
			extra1    = anti_air
			brigade_model1 = 3
		}
	}
	landunit = {
		id = { type = 26000 id = 26 }
		location = 475 #Brno
		name = "Eastern Army"
		division = {
			id = { type = 26000 id = 27 }
			name     = "22nd CVA Airborne Regiment"
			strength = 50
			max_strength = 50
			type     = paratrooper
			model    = 5    
		}
	}
	landunit = {
		id = { type = 26000 id = 28 }
		location = 469 #Prague/Praha
		name = "Czech Army Reserves"
		division = {
			id = { type = 26000 id = 29 }
			name     = "Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized
			model    = 5    
			extra    = artillery
			brigade_model = 3
		}
		division = {
			id = { type = 26000 id = 30 }
			name     = "Motorized Rifle Division Reserve"
			strength = 1
			type     = motorized
			model    = 5    
		}
		division = {
			id = { type = 26000 id = 31 }
			name     = "Air Assault Brigade Reserve"
			strength = 1
			type     = paratrooper
			model    = 5    
		}
	}
    # #####################################
	# AIRFORCE
	# #####################################
	airunit = {
		id = { type = 26000 id = 32 }
		name = "7th CVA Air Army"
		location = 469 #Prague/Praha
		base = 469 #Prague/Praha
		division = {
			id = { type = 26000 id = 33 }
			name = "Fighter Regiments"
			strength = 100
			type = interceptor
			model = 4
		}
		division = {
			id = { type = 26000 id = 34 }
			name = "Fighter-Bomber Regiments"
			strength = 100
			type = multi_role
			model = 6
			extra    = b_02
			brigade_model = 1
		}
	}
	airunit = {
		id = { type = 26000 id = 35 }
		name = "10th CVA Air Army"
		location = 468 #Hradec
		base = 468 #Hradec
		division = {
			id = { type = 26000 id = 36 }
			name = "Fighter Regiments"
			strength = 100
			type = interceptor
			model = 4
		}
		division = {
			id = { type = 26000 id = 37 }
			name = "Fighter-Bomber Regiments"
			strength = 100
			type = multi_role
			model = 6
			extra    = b_02
			brigade_model = 1
		}
	}
} 
 