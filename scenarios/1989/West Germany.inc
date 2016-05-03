 ############################## 
 # Country definition for DFR # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { tag                    = DFR 
   ai_settings	= { flags = { DFRBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
   capital                = 75 #Köln, Bonn 
   manpower               = 717 
   transports             = 450 
   escorts                = 23 
   #ground_def_eff         = 0.82 
   # Resource Reserves 0
   energy                 = 1000
   metal                  = 5000
   rare_materials         = 5000
   oil                    = 5000
   supplies               = 5000
   money                  = 100000
   #research_mod = 0.75
   
   diplomacy = {   } 
   
   SpyInfo                = {  country = "DFR" NumberOfSpies = 10  } 
   
   nationalprovinces	= {
		75 300 80 81 82 83 85 86 87 88 89 90 312 313 314 315 375 376 374 76 67 74 66
		3248 3247 3246 3249 547 989 2597 3250 1014 3251 970 2627 3252 1015 1016 1018 1904 3253 1405 3257 3256 3255 2381
		3254 2370 3242 6500 6521
		7179 7178 7180 7189 7188 7187 7185 7184 7186 7183 7986 7045
		#EAST GERMANY
		84 296 297 298 299 301 309 310 311 546 3239 3240 3241 3243 3244 3245 6520 6917 7181 7182 7190 7260 7266
	}
   ownedprovinces	 	= {
		75 300 80 81 82 83 85 86 87 88 89 90 312 313 314 315 375 376 374 76 67 74 66
		3248 3247 3246 3249 547 989 2597 3250 1014 3251 970 2627 3252 1015 1016 1018 1904 3253 1405 3257 3256 3255 2381
		3254 2370 6500 6521
		7179 7178 7180 7189 7188 7187 7185 7184 7186 7183 7986 7045
	}
   controlledprovinces	= {
		75 300 80 81 82 83 85 86 87 88 89 90 312 313 314 315 375 376 374 76 67 74 66
		3248 3247 3246 3249 547 989 2597 3250 1014 3251 970 2627 3252 1015 1016 1018 1904 3253 1405 3257 3256 3255 2381
		3254 2370 6500 6521
		7179 7178 7180 7189 7188 7187 7185 7184 7186 7183 7986 7045
	}
claimedprovinces = { }

   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 3 
     free_market       = 9 
     freedom           = 10 
     professional_army = 3 
     defense_lobby     = 4
     interventionism   = 2
    } 
	peacetime_ic_mod       = 0.45 
    #wartime_ic_mod       = 0.8
	
    headofstate            = {  type = 9 id = 630001  } 
    headofgovernment       = {  type = 9 id = 630002  } 
#   foreignminister        = {  type = 9 id = 630003  } 
#   armamentminister       = {  type = 9 id = 630004  } 
#   ministerofsecurity     = {  type = 9 id = 630005  } 
#   ministerofintelligence = {  type = 9 id = 630006  } 
#   chiefofstaff           = {  type = 9 id = 630007  } 
#   chiefofarmy            = {  type = 9 id = 630008  } 
#   chiefofnavy            = {  type = 9 id = 630009  } 
#   chiefofair             = {  type = 9 id = 630010  }
	
	techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030 1040 1050
   #Motorized
   1100 1110 1120 1130 1140
   #Mountain
   1160 1170 1180 1190 1200
   #Special Forces
   1250 1260 1270 1280 1290
   #Naval Infantry
   1560 1570 1580 1590 1600
   #Airborne Infantry
   1670 1680 1690 1700 1710
   #Air Cavalry
   1396 1400 1410 1420
   #light_armored Cavalry
   13060 13070 13080 1310
   #Mechanized
   1470 1480 1490 1500 1510
   #Irregular Infantry
   1360 1370 1380 1390 1530
   #Combat Engineers
   1830 1840 1850 1860 1870
   #Supply and Repair
   1990 199100 199110 199130 
   #####################
   # Armor & Artillery #
   #####################
   #Main Battle Tanks
   2620 2010 2630 2640 2646 2650 2030
   #Infantry Fighting Vehicles
   2100 2110 2120
   #light_armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450 21180 21190
   #light_armored Personnel Carriers
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
   3110 3120 3130 3140 3150
   #Cruisers
   3410 3420 3430 3440 3450 3456 3460
   #Nuclear Cruisers
   #3470 3480 12040 3770 3780
   #Destroyers
   3310 3320 3330 3340 3350 12030 3710
   #Light Aircraft Carriers
   12100 12110
   #Helicopter Carrier
   #3210 3220 3230
   #Aircraft Carriers
   3510 #3520 3530 
   #Supercarriers
   #3540 3560 12060 3570
   #Submarines
   3010 3020 3030 3060 3070 3090
   #Nuclear Submarines
   12000 3080 3610 3680 3690
   #Nuclear Ballistic Submarines
   #3620 3630 3640 3650
   #Transport Ships
   3900 3910 3920 3930 3940 3950
   ###################
   #    Aircraft     #
   ###################
   #Attack Helicopter
   4900 4910 4920 4930
   #Reconnaissance Aircraft
   4770 4780
   #Strategic Bomber
   4800 4810
   #Strike Bomber
   15040 15050 4360
   #Naval Patrol
   4610 4620
   #ASW Bomber
   4230 4240
   #Attack Aircraft
   4030 4060 4090 15000 15010 15020
   #Multi-Role
   4500 4570 4530 4540 4550 4010 4020
   #Air Superiority Fighter
   4510 4520 4300 4310 4320
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
   5720 5040
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6900 6730 6750 6820 6740 6810 6760 6210 6220 6230 6240 6250 6260 6270 6280 6290 14100
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
   8900 8910 8920 8930 8940 8950 8960
   #Surface Ship Role
   81050 81060 81070 81080 81090 81100 81110 81120
   #Naval Interdiction
   8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8700 8710 8720 8730 8740 8750
   #Naval Supremacy
   8100 8110 8150 8120 8160 8170 8200 8210 8220 8230 8240 8250 8260 8300 8310 8320 8330 8340 8350
   #Logistics Support
   82500 82510 82520 82530
   #Naval Capability
   8010 8020 8030
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
	landunit =
	{ id = { type = 19503 id = 1 }
	location = 81
	leader = 630045 #Wachter
	name = "I Korps" #Münster
	division =
	{ id = { type = 19503 id = 2 }
	  name = "I Korps HQ"
	  strength = 100
	  type = hq
	  model = 5
	  }
	 division =
	{ id = { type = 19503 id = 34 }
	  name     = "Heeresfliegerkommando 1"  
	  strength = 100
	  type     = d_04
	  model    = 4
	  }
	}
	###########
	landunit =
	{ id = { type = 19503 id = 3 }
	location = 7183 #Braunschweig (Hildesheim)
	leader = 630071 #Hansen
	name = "1. Panzerdivision"   
	division =
	{ id = { type = 19503 id = 4 }
	  name     = "Panzerbrigade 2"  
	  strength = 100
	  type     = light_armor
	  model    = 5
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 5 }
	  name     = "Panzergrenadierbrigade 1" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 6 }
	  name     = "Panzerbrigade 3" 
	  strength = 100
	  type     = light_armor
	  model    = 5
	  }
	}
	###########
	landunit =
	{ id = { type = 19503 id = 10 }
	location = 3255 #Cuxhaven (Buxtehude)
	leader = 630104 #Nennecke
	name = "3. Panzerdivision"
	division =
	{ id = { type = 19503 id = 11 }
	  name     = "Panzerbrigade 8"
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 12 }
	  name     = "Panzergrenadierbrigade 7"
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 13 }
	  name     = "Panzerlehrbrigade 9"
	  strength = 100
	  type     = light_armor
	  model    = 6
	  }
	}
	###########
	landunit =
	{ id = { type = 19503 id = 17 }
	location = 3253 #Siegen (Unna)
	leader = 630090 #Söder
	name = "7. Panzerdivision"
	division =
	{ id = { type = 19503 id = 18 }
	  name     = "Panzerbrigade 20"
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 19 }
	  name     = "Panzergrenadierbrigade 19"
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 20 }
	  name     = "Panzerbrigade 21" 
	  strength = 100
	  type     = light_armor
	  model    = 6
	  }
	} 
	###########
	landunit =
	{ id = { type = 19503 id = 24 }
	location = 3256 #Oldenburg
	leader = 630033 #Klaffus
	name = "11. Panzergrenadierdivision"   
	division =
	{ id = { type = 19503 id = 25 }
	  name     = "Panzerbrigade 33"  
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 26 }
	  name     = "Panzergrenadierbrigade 31" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 27 }
	  name     = "Panzergrenadierbrigade 32" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	}  
	###########
	landunit =
	{ id = { type = 19503 id = 31 }
	location = 7185 #Paderborn (Lippstadt)
	leader = 630051 #Roth
	name = "Luftlandebrigade 27"   
	division =
	{ id = { type = 19503 id = 32 }
	  name     = "Luftlandebrigade 27"  
	  strength = 100
	  type     = d_08
	  model    = 4
	   }
	}
	######################################### 
	landunit =
	{ id = { type = 19503 id = 35 }
	location = 3251 #Schwäbisch Hall (Ulm)
	leader = 630148 #Lange
	name = "II Korps"
	division =
	{ id = { type = 19503 id = 36 }
	  name = "II Korps HQ"
	  strength = 100
	  type = hq
	  model = 5
	  }
	division =
	{ id = { type = 19503 id = 62 }
	  name     = "Heeresfliegerkommando 2"  
	  strength = 100
	  type     = d_04
	  model    = 4
	  }
	}
	###########
	landunit =
	{ id = { type = 19503 id = 37 }
	location = 1016 #Koblenz (Domstadt)
	leader = 630077 #Albrecht
	name = "10. Panzerdivision"   
	division =
	{ id = { type = 19503 id = 38 }
	  name     = "Panzerbrigade 28"  
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 39 }
	  name     = "Panzergrenadierbrigade 30" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 40 }
	  name     = "Panzerbrigade 29" 
	  strength = 100
	  type     = light_armor
	  model    = 6
	  }
	}
	###########
	landunit =
	{ id = { type = 19503 id = 44 }
	location = 1016 #Koblenz (Domstadt)
	leader = 630158 #Odendahl
	name = "4. Panzergrenadierdivision"   
	division =
	{ id = { type = 19503 id = 45 }
	  name     = "Panzerbrigade 12"  
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 46 }
	  name     = "Panzergrenadierbrigade 10" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 47 }
	  name     = "Panzergrenadierbrigade 11" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	}
	###########
	landunit =
	{ id = { type = 19503 id = 51 }
	location = 7178 #Landsberg am Lech (Garmisch)
	leader = 630080 #Netzler
	name = "1. Gebirgsdivsion"   
	division =
	{ id = { type = 19503 id = 52 }
	  name     = "Gebirgsjägerbrigade 23"  
	  strength = 100
	  type     = bergsjaeger
	  model    = 4
	  }
	division =
	{ id = { type = 19503 id = 53 }
	  name     = "Panzergrenadierbrigade 24" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 54 }
	  name     = "Heimatschutzbrigade 56" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	}
	######################################### 
	landunit =
	{ id = { type = 19503 id = 63 }
	location = 1016 #Koblenz
	leader = 630098 #Diedrichs
	name = "III Korps"
	division =
	{ id = { type = 19503 id = 64 }
	  name = "III Korps HQ"
	  strength = 100
	  type = hq
	  model = 5
	  }
	division =
	{ id = { type = 19503 id = 90 }
	  name     = "Heeresfliegerkommando 3"  
	  strength = 100
	  type     = d_04
	  model    = 4
	  }
	} 
	###########
	landunit =
	{ id = { type = 19503 id = 65 }
	location = 313 #Frankfurt am Main (Diez an der lahn)
	leader = 630151 #Jacoby
	name = "5. Panzerdivision"   
	division =
	{ id = { type = 19503 id = 66 }
	  name     = "Panzerbrigade 14"  
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 67 }
	  name     = "Panzergrenadierbrigade 13" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 68 }
	  name     = "Panzerbrigade 15" 
	  strength = 100
	  type     = light_armor
	  model    = 6
	  }	
	} 
	###########
	landunit =
	{ id = { type = 19503 id = 72 }
	location = 547 #Wurzburg (Veitshochheim)
	leader = 630145 #Storbeck
	name = "12. Panzerdivision"   
	division =
	{ id = { type = 19503 id = 73 }
	  name     = "Panzerbrigade 36"  
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 74 }
	  name     = "Panzergrenadierbrigade 34" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 75 }
	  name     = "Panzerbrigade 36" 
	  strength = 100
	  type     = light_armor
	  model    = 6
	  }
	} 
	###########
	landunit =
	{ id = { type = 19503 id = 79 }
	location = 82 #Kassel
	leader = 630012 #Lichel
	name = "2. Panzergrenadierdivision"   
	division =
	{ id = { type = 19503 id = 80 }
	  name     = "Panzergrenadierbrigade 4"  
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 81 }
	  name     = "Panzergrenadierbrigade 5" 
	  strength = 100
	  type     = d_06
	  model    = 5
	  }
	division =
	{ id = { type = 19503 id = 82 }
	  name     = "Panzerbrigade 6" 
	  strength = 100
	  type     = light_armor
	  model    = 6
	  extra = b_01
	  brigade_model = 3
	  }
	} 
	###########
	landunit =
	{ id = { type = 19503 id = 86 }
	location = 74 #Saarbrucken (Saarlouis)
	leader = 630040 #Eckert
	name = "Luftlandebrigade 26"   
	division =
	{ id = { type = 19503 id = 87 }
	  name     = "Luftlandebrigade 26"  
	  strength = 100
	  type     = d_08
	  model    = 4
	   }
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit =
	{ id = { type = 19503 id = 100 }
	location = 314 #Messtetten
	base = 314
	name = "1. Luftwaffendivision"
	division =
	{ id = { type = 19503 id = 101 }
	  name = "Jagdbombergeschwader 32"
	  type = multi_role
	  strength = 100
	  model = 6
	  }
	division =
	{ id = { type = 19503 id = 102 }
	  name = "Jagdbombergeschwader 33"
	  type = multi_role
	  strength = 100
	  model = 6
	  }
	division =
	{ id = { type = 19503 id = 103 }
	  name = "Jagdbombergeschwader 34"
	  type = multi_role
	  strength = 100
	  model = 5
	  }
	division =
	{ id = { type = 19503 id = 104 }
	  name = "Jagdbombergeschwader 35"
	  type = multi_role
	  strength = 100
	  model = 6
	  }	
	}
	
	###########
	airunit =
	{ id = { type = 19503 id = 105 }
	location = 6521 #Köln
	base = 6521
	name = "Luftwaffentransportkommando"
    division =
	{ id = { type = 19503 id = 106 }
	  name = "Lufttransportgeschwader 61"
	  type = transport_plane
	  strength = 100
	  model = 3
	  }
	division =
	{ id = { type = 19503 id = 107 }
	  name = "Lufttransportgeschwader 62"
	  type = transport_plane
	  strength = 100
	  model = 3
	  }
	division =
	{ id = { type = 19503 id = 108 }
	  name = "Flugbereitschaft des BmVg"
	  type = transport_plane
	  strength = 100
	  model = 3
	   }
	}
	###########
	airunit =
	{ id = { type = 19503 id = 109 }
	location = 6521 #Kalkar
	base = 6521
	name = "3. Luftwaffendivision"
	division =
	{ id = { type = 19503 id = 110 }
	  name = "JaboG 31 'Boelcke'"
	  type = multi_role
	  strength = 100
	  model = 6
	  }
	division =
	{ id = { type = 19503 id = 111 }
	  name = "Jagdbombergeschwader 36"
	  type = multi_role
	  strength = 100
	  model = 6
	  }
	division =
	{ id = { type = 19503 id = 112 }
	  name = "Jagdbombergeschwader 38"
	  type = multi_role
	  strength = 100
	  model = 6
	  }
	division =
	{ id = { type = 19503 id = 113 }
	  name = "Jagdbombergeschwader 41"
	  type = cas
	  strength = 100
	  model = 5
	  }
	division =
	{ id = { type = 19503 id = 114 }
	  name = "Jagdbombergeschwader 43"
	  type = cas
	  strength = 100
	  model = 5
	  }
	division =
	{ id = { type = 19503 id = 115 }
	  name = "AG 51 'Immelmann'"
	  type = interceptor
	  strength = 100
	  model = 4
	  extra = b_02
	  brigade_model = 2
	   }
	division =
	{ id = { type = 19503 id = 116 }
	  name = "AG 52"
	  type = interceptor
	  strength = 100
	  model = 4
	  extra = b_02
	  brigade_model = 2
	  }
	}
	
	airunit =
	{ id = { type = 19503 id = 117 }
	location = 80 #Aurich
	base = 80
	name = "4. Luftwaffendivision"
	division =
	{ id = { type = 19503 id = 118 }
	  name = "JG 71 'Richthofen'"
	  type = interceptor
	  strength = 100
	  model = 4
	  }
	}
	
	###########
	airunit =
	{ id = { type = 19503 id = 119 }
	location = 66 #Birkenfeld
	base = 66
	name = "2. Luftwaffendivision"
	division =
	{ id = { type = 19503 id = 120	}
	  name = "JG 74 'Mölders'"
	  type = interceptor
	  strength = 100
	  model = 4
	  }
	}
	
	airunit =
	{ id = { type = 19503 id = 121 }
	location = 90 #Kiel
	base = 90
	name = "Marinefliegerdivision"
	division =
	{ id = { type = 19503 id = 122 }
	  name = "Marinefliegergeschwader 1"
	  type = multi_role
	  strength = 100
	  model = 6
	  extra = escort
	  brigade_model = 3
	  }
	division =
	{ id = { type = 19503 id = 123 }
	  name = "Marinefliegergeschwader 1"
	  type = naval_bomber
	  strength = 100
	  model = 2
	  }
	division =
	{ id = { type = 19503 id = 124 }
	  name = "MFG 3 'Graf Zeppelin'"
	  type = naval_bomber
	  strength = 100
	  model = 2
	  }
	}
	
###################
## NAVY
###############
	navalunit =  {
		name = "1. Zerstörerflotille"
		id = {  type = 19503 id = 125  }
		location = 80
		leader = 630017 #Braun
		base     = 80
		division = {
			id = {  type = 19503 id = 126  }
			name = "Lütjens"
			type = destroyer
			model = 5
		}
		division = {
			id = {  type = 19503 id = 127  }
			name = "Mölders"
			type = destroyer
			model = 5
		}
		division = {
			id = {  type = 19503 id = 128  }
			name = "Rommel"
			type = destroyer
			model = 5
		}
	}
navalunit =  {
		name = "2. Zerstörerflottille"
		id = {  type = 19503 id = 130  }
		location = 80
		base     = 80
		division = {
			id = {  type = 19503 id = 131  }
			name = "Hamburg"
			type = destroyer
			model = 6
		}
		division = {
			id = {  type = 19503 id = 132  }
			name = "Schleswig-Holstein"
			type = destroyer
			model = 6
		}
		division = {
			id = {  type = 19503 id = 133  }
			name = "Bayern"
			type = destroyer
			model = 6
		}
		division = {
			id = {  type = 19503 id = 134 }
			name = "Hessen"
			type = destroyer
			model = 6
		}
	}
navalunit =  {
		name = "2. Geleitgeschwader"
		id = {  type = 19503 id = 135  }
		location = 80
		base     = 80
		division = {
			id = {  type = 19503 id = 140  }
			name = "Augsburg"
			type = light_cruiser
			model = 0
		}
		division = {
			id = {  type = 19503 id = 141 }
			name = "Karlsruhe"
			type = light_cruiser
			model = 0
		}
		division = {
			id = {  type = 19503 id = 142 }
			name = "Lübeck"
			type = light_cruiser
			model = 0
		}
		division = {
			id = {  type = 19503 id = 143 }
			name = "Braunschweig"
			type = light_cruiser
			model = 0
		}
	}
navalunit =  {
		name = "4. Fregattengeschwader"
		id = {  type = 19503 id = 144  }
		location = 80
		base     = 80
		division = {
			id = {  type = 19503 id = 145  }
			name = "Bremen"
			type = light_cruiser
			model = 4
		}	
		division = {
			id = {  type = 19503 id = 146  }
			name = "Niedersachsen"
			type = light_cruiser
			model = 4
		}	
		division = {
			id = {  type = 19503 id = 147 }
			name = "Rheinland-Pfalz"
			type = light_cruiser
			model = 4
		}
		division = {
			id = {  type = 19503 id = 148 }
			name = "Emden"
			type = light_cruiser
			model = 4
		}	
		division = {
			id = {  type = 19503 id = 149 }
			name = "Köln"
			type = light_cruiser
			model = 4
		}			
	}
#######
	navalunit =  {
		name = "Ubootflottille"
		id = {  type = 19503 id = 150 }
		location = 90
		base     = 90
		division = {
			id = {  type = 19503 id = 151  }
			name = "1. Ubootgeschwader"
			type = submarine
			model = 5
		}
		division = {
			id = {  type = 19503 id = 152 }
			name = "2. Ubootgeschwader"
			type = submarine
			model = 5
		}
	}

#######
	navalunit =  {
		name = "Flottenkommando"
		id = {  type = 19503 id = 153  }
		location = 90
		leader = 630058 #Mann
		base     = 90
		division = {
			id = {  type = 19503 id = 154  }
			name = "Landungsbootgruppe"
			type = transport
			model = 5
		}
	}

}