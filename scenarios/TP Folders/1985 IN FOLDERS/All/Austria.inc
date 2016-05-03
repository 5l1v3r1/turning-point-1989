#####################
# Country main data #
#####################
 province = { 
	id = 3217   # GRAZ – THALERHOF
   anti_air = 2 
   air_base = { size = 2 current_size = 2 } 
 } 
  province = { 
	id = 2327   # LINZ – HÖRSCHING
   anti_air = 2 
   air_base = { size = 2 current_size = 2 } 
 } 

country =
{ tag                    = AUS
  intrinsic_gov_type     = social_liberal
  manpower               = 200
  capital                = 463
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  diplomacy =
  { relation = { tag = ENG value = 75 }
    relation = { tag = FIN value = 55 }
    relation = { tag = FRA value = -10 }
    relation = { tag = GER value = 100 }
    relation =
    { tag        = HUN
      value      = 100
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 4 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  
  nationalprovinces      = { 463 373 377 460 461 462 464 465 467 2327 2328 2329 1408 3217 53 3375 3376 7040 459 }
  ownedprovinces         = { 373 377 460 461 462 463 464 465 2327 2328 2329 3217 3375 3376 7040 }
  controlledprovinces    = { 373 377 460 461 462 463 464 465 2327 2328 2329 3217 3375 3376 7040 }
  claimedprovinces 		 = { 371 6560 7122 }

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
  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
     political_left    = 6  
     freedom           = 10  
     free_market       = 10  
     professional_army = 2  
     defense_lobby     = 1  
     interventionism   = 1
  }
  headofstate            = { type = 9 id = 23001 }
  headofgovernment       = { type = 9 id = 23002 }
  foreignminister        = { type = 9 id = 23003 }
  armamentminister       = { type = 9 id = 23004 }
  ministerofsecurity     = { type = 9 id = 23005 }
  ministerofintelligence = { type = 9 id = 23006 }
  chiefofstaff           = { type = 9 id = 23007 }
  chiefofarmy            = { type = 9 id = 23008 }
  chiefofnavy            = { type = 9 id = 23009 }
  chiefofair             = { type = 9 id = 23010 }
###########################
#Austrian Army by Kretoxian
###########################
	landunit = { 
	id = { type = 14000 id = 1 }
	name = "Armeekommando"
	location = 463
		division = {
			id = { type = 14000 id = 2 }
			name = "Armeekommando"
			strength = 100	
			type = hq
			model = 2
			extra = anti_air
			brigade_model = 0
			}
	}
	landunit = {
	id = { type = 14000 id = 3 }
	name = "Panzergrenadierdivision"
	location = 2329
		division = {
			id = { type = 14000 id = 4 }
			name = "9. Panzergrenadierbrigade"
			strength = 100	
			type = d_06
			model = 4
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			id = { type = 14000 id = 5 }
			name = "1. Jägerbrigade"
			strength = 100	
			type = d_02
			model = 4
		}
		division = {
			id = { type = 14000 id = 6 }
			name = "6. Jägerbrigade"
			strength = 100	
			type = d_02
			model = 4
			extra = heavy_armor #was TD
			brigade_model = 0
		}
		division = {
			id = { type = 14000 id = 7 }
			name = "8. Jägerbrigade"
			type = d_02
			strength = 100
			model = 4
			extra = engineer
			brigade_model = 4
		}
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2027 }  
		name = "Landwehrregiment 35"  
		type = d_01
		strength = 100
		model = 4
		extra1 = artillery 
		brigade_model = 2
	}
		landunit = {
	id = { type = 14000 id = 8 }
	name = "Panzergrenadierdivision"
	location = 2328
		division = {
			id = { type = 14000 id = 9 }
			name = "3. Panzergrenadierbrigade"
			type = d_06
			strength = 100
			model = 4
			extra1 = sp_artillery
			brigade_model1 = 2
			extra2 = heavy_armor #was TD
			brigade_model2 = 1
			}
	}
			landunit = {
	id = { type = 14000 id = 10 }
	name = "Panzergrenadierdivision"
	location = 2327
		division = {
			id = { type = 14000 id = 11 }
			name = "4. Panzergrenadierbrigade"
			type = d_06
			strength = 100
			model = 4
			extra1 = sp_artillery
			brigade_model1 = 2
			extra2 = anti_air
			brigade_model2 = 0
		}
	}
	#Militärkommando Burgenland
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2028 }  
		name = "Landwehrregiment 11"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2029 }  
		name = "Landwehrregiment 12"  
		type = d_01
		strength = 100		
		model = 4
	}
	landunit = {
	id = { type = 14000 id = 12 }
	name = "Militärkommando Niederösterreich"
	location = 2328
		division = {
			id = { type = 14000 id = 13 }
			name = "2. Jägerbrigade"
			type = d_02
			strength = 100
			model = 4
			extra1 = artillery
			brigade_model = 2
		}
		division = {
			id = { type = 14000 id = 14 }
			name = "3. Jägerbrigade"
			type = d_02
			strength = 100
			model = 4
			extra1 = artillery
			brigade_model = 2
		}
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2030 }  
		name = "Landwehrregiment 34"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2031 }  
		name = "Landwehrregiment 33"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2032 }  
		name = "Landwehrregiment 21"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2033 }  
		name = "Landwehrregiment 32"  
		type = d_01
		strength = 100
		model = 4
	}
	landunit = {
	id = { type = 14000 id = 15 }
	name = "Militärkommando Steiermark"
	location = 3217
		division = {
			id = { type = 14000 id = 16 }
			name = "5. Jägerbrigade"
			type = d_02
			strength = 100
			model = 4
			extra1 = artillery
			brigade_model = 2
		}
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2034 }  
		name = "Landwehrregiment 53"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2035 }  
		name = "Landwehrregiment 51"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2036 }  
		name = "Landwehrregiment 52"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2037 }  
		name = "Landwehrregiment 54"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2038 }  
		name = "Landwehrregiment 55"  
		type = d_01
		strength = 100
		model = 4
	}
		landunit = {
	id = { type = 14000 id = 17 }
	name = "Militärkommando Oberösterreich"
	location = 2327
		division = {
			id = { type = 14000 id = 18 }
			name = "4. Jägerbrigade"
			type = d_02
			strength = 100
			model = 4
			extra1 = artillery
			brigade_model = 2
		}
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2039 }  
		name = "Landwehrregiment 41"  
		type = d_01
		strength = 100
		model = 4
		extra = artillery
		brigade_model = 2
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2040 }  
		name = "Landwehrregiment 42"  
		type = d_01
		strength = 100
		model = 4
		extra = artillery
		brigade_model = 2
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2041 }  
		name = "Landwehrregiment 44"  
		type = d_01
		strength = 100
		model = 4
	}
	#Militärkommando  Tirol (Innsbruck, 189)
		landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2042 }  
		name = "Landwehrregiment 61"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2043 }  
		name = "Landwehrregiment 62"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2044 }  
		name = "Landwehrregiment 63"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2045 }  
		name = "Landwehrregiment 64"  
		type = d_01
		strength = 100
		model = 4
	}
	landunit = {
	id = { type = 14000 id = 19 }
	name = "Militärkommando Kärnten"
	location = 461
		division = {
			id = { type = 14000 id = 20 }
			name = "7. Jägerbrigade"
			type = d_02
			strength = 100
			model = 4
			extra1 = artillery
			brigade_model = 0
		}
	}
	#Militärkommando Kärnten (461)
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2046 }  
		name = "Landwehrregiment 71"  
		type = d_01
		strength = 100
		model = 4
		extra = artillery
		brigade_model = 2
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2047 }  
		name = "Landwehrregiment 72"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2048 }  
		name = "Landwehrregiment 73"  
		type = d_01
		strength = 100
		model = 4
	}
	#Militärkommando Salzburg (462)
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2049 }  
		name = "Landwehrregiment 81"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2050 }  
		name = "Landwehrregiment 82"  
		type = d_01
		strength = 100
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 14000 id = 2051 }  
		name = "Landwehrregiment 83"  
		type = d_01
		strength = 100
		model = 4
	}
    #################################
	#Austrian Air Force by Kretoxian#
	#################################
	airunit = {
	id = { type = 14000 id = 21 }
	name = "Fligerregiment 3"
	location = 2327
	base = 2327
		division = {
			id = { type = 14000 id = 22 }
			name = "Jagdbombergeschwader"
			type = cas
			strength = 100
			model = 3 #Saab 105Ö
			}
	}
	airunit = {
	id = { type = 14000 id = 23 }
	name = "Fligerregiment 2"
	location = 3217
	base = 3217
		division = {
			id = { type = 14000 id = 24 }
			name = "Überwachungsgeschwader"
			type = cas
			strength = 100
			model = 3 #Saab 105Ö
			}
	}
} 
 