 
 ############################## 
 # Country definition for DDR # 
 ############################## 
 
 province = { id = 157	air_base = { size =	5 current_size = 5 } }
#province = { id = 2763 air_base = { size =	5 current_size = 5 } }
 province = { id = 309 air_base = { size = 5 current_size = 5 } } #Cottbus
 #Fortified Border
 province = { id = 296 landfort = { size =	3 current_size = 3 } }
 province = { id = 297 landfort = { size =	3 current_size = 3 } }
 province = { id = 3244 landfort = { size =	3 current_size = 3 } }
 province = { id = 3243 landfort = { size =	3 current_size = 3 } }
 province = { id = 7182 landfort = { size =	3 current_size = 3 } }
 province = { id = 3242 landfort = { size =	3 current_size = 3 } }
 province = { id = 84 landfort = { size =	3 current_size = 3 } }
 province = { id = 3241 landfort = { size =	3 current_size = 3 } }
 province = { id = 311 landfort = { size =	3 current_size = 3 } }
 #Berlin Wall
 province = { id = 546 landfort = { size =	1 current_size = 1 } }
 province = { id = 7266 landfort = { size =	1 current_size = 1 } }
 province = { id = 299 landfort = { size =	1 current_size = 1 } }

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { tag                    = DDR 
   intrinsic_gov_type     = stalinist
   capital                = 7266
   ai = "DDR_1985.ai"
   ai_settings = {flags = {
			MOB1 = yes
			MOB2 = yes
			MOB3 = yes
			MOB4 = yes
		}
   }
   # Resource Reserves 
   energy                 = 9000
   metal                  = 4500
   rare_materials         = 2250
   oil                    = 500 
   supplies               = 500 
   money                  = 70 
   manpower               = 215 
   transports             = 450 
   escorts                = 23 
   
   research_mod = 0.75
   industrial_modifier 	  = 0.70	#Stagnation.
   #peacetime_ic_mod	= 0.8 
   #wartime_ic_mod	= 0.8
	
   diplomacy = {}
   
   SpyInfo                = {  country = "DDR" NumberOfSpies = 7  } 
   
   nationalprovinces      = { 84 296 297 298 299 301 309 310 311 546 3239 3240 3241 3243 3244 3245 6520 6917 7181 7182 7190 7260 7266
							#WEST GERMANY
							75 300 80 81 82 83 85 86 87 88 89 90 312 313 314 315 375 376 374 76 67 74 66
							3248 3247 3246 3249 547 989 2597 3250 1014 3251 970 2627 3252 1015 1016 1018 1904 3253 1405 3257 3256 3255 2381
							3254 2370 3242 6500 6521
							7179 7178 7180 7189 7188 7187 7185 7184 7186 7183 7986 7045
		#BELGIUM
		2292
		#SWITZERLAND
		532 533 3214 3215 3216
		#FRANCE
		#72 73 316
		#LIECHTENSTEIN
		2273
   
   } 
   ownedprovinces         = { 84 296 297 298 299 301 309 310 311 546 3239 3240 3241 3242 3243 3244 3245 6520 6917 7181 7182 7190 7260 7266 } 
   controlledprovinces    = { 84 296 297 298 299 301 309 310 311 546 3239 3240 3241 3242 3243 3244 3245 6520 6917 7181 7182 7190 7260 7266 } 
   claimedprovinces = { }

   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     free_market       = 1 
     freedom           = 1 
     professional_army = 4 
     defense_lobby     = 10 
     interventionism   = 7 
   } 
   
   headofstate            = {  type = 9 id = 625001  } 
   headofgovernment       = {  type = 9 id = 625002  } 
   foreignminister        = {  type = 9 id = 625003  } 
   armamentminister       = {  type = 9 id = 625004  } 
   ministerofsecurity     = {  type = 9 id = 625005  } 
   ministerofintelligence = {  type = 9 id = 625006  } 
   chiefofstaff           = {  type = 9 id = 625007  } 
   chiefofarmy            = {  type = 9 id = 625008  } 
   chiefofnavy            = {  type = 9 id = 625009  } 
   chiefofair             = {  type = 9 id = 625010  }
   
   dormant_ministers = { 
   625014 #Sabine Bergmann-Pohl
   625015 #Lothar de MaiziÃ¨re
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
   
   # #####################################
   # ARMY
   # #####################################
	landunit = {
		id = { type = 5000 id = 0 }
		location = 3245 #Neubrandenburg
		leader = 625050 #Grapentin
		name = "Militärbezirk V"
		division = {
			id = { type = 5000 id = 1 }
			name     = "Militärbezirk V"
			strength = 100
			type     = hq
			model    = 5   
		}
		division = {
			id = { type = 5000 id = 2 }
			name     = "9. Panzerdivison"
			strength = 100
			type     = armor
			model    = 5
		}
	}
	landunit = {
		id = { type = 5000 id = 3 }
		location = 299 #Potsdam
		leader = 625101 #Löffler
		name = "1. Mot.-Schützendivision"
		division = {
			id = { type = 5000 id = 4 }
			name     = "1. Mot.-Schützendivision"
			strength = 100
			type     = motorized
			model    = 5   
		}
	}
	landunit = {
		id = { type = 5000 id = 5 }
		location = 3244 #Schwerin
		leader = 625184 #Unterdörfler
		name = "8. Mot.Schützendivision"
		division = {
			id = { type = 5000 id = 6 }
			name     = "8. Mot.-Schützendivision"
			strength = 100
			type     = motorized
			model    = 5   
			extra    = b_01
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 5000 id = 7 }
		location = 310 #Leipzig
		leader = 625125 #Ölschläger
		name = "Militärbezirk III"
		division = {
			id = { type = 5000 id = 8 }
			name     = "Militärbezirk III"
			strength = 100
			type     = hq
			model    = 5   
		}
	}
	landunit = {
		id = { type = 5000 id = 9 }
		location = 311 #Dresden
		leader = 625111 #Möckel
		name = "7. Panzerdivision"
		division = {
			id = { type = 5000 id = 10 }
			name     = "7. Panzerdivision"
			strength = 100
			type     = armor
			model    = 5   
		}
	}
	landunit = {
		id = { type = 5000 id = 11 }
		location = 3242 #Erfurt
		leader = 625154 #Schulze
		name = "4. Mot.-Schützendivision"
		division = {
			id = { type = 5000 id = 12 }
			name     = "4. Mot.-Schützendivision"
			strength = 100
			type     = motorized
			model    = 5   
		}
	}
	landunit = {
		id = { type = 5000 id = 13 }
		location = 298 #Halle
		leader = 625193 #Wiegand
		name = "11. Mot.-Schützendivision"
		division = {
			id = { type = 5000 id = 14 }
			name     = "11. Mot.-Schützendivision"
			strength = 100
			type     = motorized
			model    = 5   
			extra    = b_01
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 5000 id = 15 }
		location = 299 #Potsdam
		leader = 625166 #Stechbarth
		name = "Kommando Landstreitkräfte"
		division = {
			id = { type = 5000 id = 40 }
			name     = "Kommando Landstreitkräfte"
			strength = 100
			type     = hq
			model    = 5   
		}
		division = {
			id = { type = 5000 id = 16 }
			name     = "Luftsturmregiment 40"
			strength = 50
			max_strength = 50
			type     = d_08
			model    = 5   
		}
	}
	
	# #####################################
	# AIRFORCE
	# #####################################
	airunit = {
		id = { type = 5000 id = 22 }
		name = "1. Luftverteidigungsdivision"
		leader = 625204 #Zieris
		location = 309 #Cottbus
		base = 309 #Cottbus
		division = {
			id = { type = 5000 id = 23 }
			name = "JG-1 'Fritz Schmenkel'"
			strength = 100
			type = multi_role
			model = 5
		}
		division = {
			id = { type = 5000 id = 24 }
			name = "JG-3 'Wladimir Komarow'"
			strength = 100
			type = interceptor
			model = 3
		}
		division = {
			id = { type = 5000 id = 25 }
			name = "JG-7 'Wilhelm Pieck'"
			strength = 100
			type = interceptor
			model = 3
		}
		division = {
			id = { type = 5000 id = 26 }
			name = "JG-8 'Hermann Matern'"
			strength = 100
			type = interceptor
			model = 3
		}
	}
	airunit = {
		id = { type = 5000 id = 27 }
		name = "3. Luftverteidigungsdivision"
		leader = 625009 #Berger
		location = 296 #Rostock (Trollenhagen)
		base = 296 #Rostock (Trollenhagen)
		division = {
			id = { type = 5000 id = 28 }
			name = "JG-2 'Juri Gagarin'"
			strength = 100
			type = multi_role
			model = 3
		}
		division = {
			id = { type = 5000 id = 29 }
			name = "JG-9 'Heinrich Rau'"
			strength = 100
			type = multi_role
			model = 3
		}
	}
	
	
	airunit = {
		id = { type = 5000 id = 30 }
		name = "FO FMTFK"
		location = 296 #Rostock (Trollenhagen)
		leader = 625205 #Zimmermann
		base = 296 #Rostock (Trollenhagen)
		division = {
			id = { type = 5000 id = 31 }
			name = "JBG-37 'Klement Gottwald'"
			strength = 100
			type = tactical_bomber
			model = 2
		}
		division = {
			id = { type = 5000 id = 32 }
			name = "JBG-77 'Gebhard Lebrecht von Blücher'"
			strength = 100
			type = tactical_bomber
			model = 2
		}
		division = {
			id = { type = 5000 id = 33 }
			name = "MFG-28 'Paul Wieczorek'"
			strength = 100
			type = multi_role
			model = 3
		}
		division = {
			id = { type = 5000 id = 34 }
			name = "TG-44 'Arthur Pieck'"
			strength = 100
			type = transport_plane
			model = 3
		}
	}
	
	##################
	## NAVY
	###############
	navalunit =  {
		name = "4. Flottille"
		id = {  type = 5000 id = 35  }
		location = 296
		base     = 296
		leader = 625114 #Müller
		division = {
			id = {  type = 5000 id = 36 }
			name = "4. Küstenschutzschiffsbrigade"
			type = light_cruiser
			model = 4
		}
	}

	#######
	navalunit =  {
		name = "1. Flottille"
		id = {  type = 5000 id = 37 }
		location = 296
		base     = 296
		leader = 625016 #Born
		division = {
			id = {  type = 5000 id = 38 }
			name = "1. Landungsschiffbrigade"
			type = transport
			model = 5
		}
		division = {
			id = {  type = 5000 id = 39 }
			name = "1. Sicherungsbrigade"
			type = light_cruiser
			model = 5
		}
	}

# #####################################
# Grenztruppen (Boundary troops)
# #####################################
	
	landunit = {
		id = { type = 5000 id = 41 }
		location = 7182 #Stendal
		leader = 625037 #Fritzche
		name = "Grenzkommando Nord"
		division = {
			id = { type = 5000 id = 42 }
			name     = "Grenzkommando Nord"
			strength = 100
			type     = d_01
			model    = 5   
		}
	}
	
	landunit = {
		id = { type = 5000 id = 43 }
		location = 7266 #Berlin-Karlshorst
		leader = 625197 #Wöllner
		name = "Grenzkommando Mitte"
		division = {
			id = { type = 5000 id = 44 }
			name     = "Grenzkommando Mitte"
			strength = 100
			type     = d_01
			model    = 5   
		}
	}
	
	landunit = {
		id = { type = 5000 id = 45 }
		location = 296 #Rostock
		leader = 625164 #Stäftke
		name = "6. Grenzbrigade Küste"
		division = {
			id = { type = 5000 id = 46 }
			name     = "6. Grenzbrigade Küste"
			strength = 100
			type     = d_01
			model    = 5   
		}
	}
	
	landunit = {
		id = { type = 5000 id = 47 }
		location = 3242 #Erfurt
		leader = 625072 #Janshen
		name = "Grenzkommando Süd"
		division = {
			id = { type = 5000 id = 48 }
			name     = "Grenzskommando Süd"
			strength = 100
			type     = d_01
			model    = 5   
		}
	}
	
}	

