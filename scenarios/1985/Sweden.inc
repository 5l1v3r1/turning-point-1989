#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 200
  capital                = 101
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 150 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  nationalprovinces      = {  126 127   121  119 115 113  106 105   101 100 99 98 97 93  96 103
2629
3300	3301	3302	3303	3304	3305	3306	3307	3308	3309
3311	3312	3313	3314	3315	3316	3317	3318	3319	3320	3321	3322
6528 6529 6530 6531 6532
7168 7169 7451 7452 7453 7454
  }
  ownedprovinces         = {  126 127   121  119 115 113  106 105   101 100 99 98 97 93  96
  3300	3301	3302	3303	3304	3305	3306	3307	3308	3309
3311	3312	3313	3314	3315	3316	3317	3318	3319	3320	3321	3322
6528 6529 6530 6531 6532
2629
7168 7169 7451 7452 7453 7454
  }
  controlledprovinces    = {  126 127   121  119 115 113  106 105   101 100 99 98 97 93  96
  3300	3301	3302	3303	3304	3305	3306	3307	3308	3309
3311	3312	3313	3314	3315	3316	3317	3318	3319	3320	3321	3322
6528 6529 6530 6531 6532
2629
7168 7169 7451 7452 7453 7454
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
   #Renewable Energy
   5720
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
     democratic        = 10 
     political_left    = 10 
     freedom           = 6 
     free_market       = 7 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7038 }
  armamentminister       = { type = 9 id = 7047 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7007 }
  chiefofarmy            = { type = 9 id = 7008 }
  chiefofnavy            = { type = 9 id = 7009 }
  chiefofair             = { type = 9 id = 7010 }
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 20700 id = 1 }
		location = 105 #2160
		name = "2. Brigadstaben"
		division = {
			id = { type = 20700 id = 2 }
			name = "2. Brigadstaben"
			strength = 30
			type = light_armor
			model = 2
		}
	}
        landunit = {
		id = { type = 20700 id = 3 }
		location = 127 #2166
		name = "3. Brigadstaben"
		division = {
			id = { type = 20700 id = 4 }
			name = "3. Brigadstaben"
			strength = 30
			type = d_09
			model = 5
		}
	}
	landunit = {
		id = { type = 20700 id = 5 }
		location = 101 #2159
		name = "Livgardet"
		division = {
			id = { type = 20700 id = 6 }
			name = "Livgardet"
			strength = 20
			type = d_09
			model = 5
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 20700 id = 200 }
		location = 101 #2159
		base = 101 #2159
		name = "1. Ubåtsflottiljen"
		division = {
			id = { type = 20700 id = 201 }
			name = "HMS Gotland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 202 }
			name = "HMS Uppland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 203 }
			name = "HMS Hallland"
			type = submarine
			model = 4
		}
        division = {
			id = { type = 20700 id = 206 }
			name = "HMS Södermanland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 207 }
			name = "HMS Östergotland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 204 }
			name = "HMS Västergotland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 205 }
			name = "HMS Hälsingland"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 208 }
			name = "HMS Najad"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 20700 id = 209 }
			name = "HMS Neptun"
			type = submarine
			model = 4
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 20700 id = 100 }
		location = 121 #2165
		base = 121 #2165
		name = "F21 Norrbotten Air Flotilla"
		division = {
			id = { type = 20700 id = 101 }
			name = "1. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 4
		}
		division = {
			id = { type = 20700 id = 102 }
			name = "2. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 4
		}
		division = {
			id = { type = 20700 id = 103 }
			name = "3. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 4
		}
	}
	airunit = {
		id = { type = 20700 id = 104 }
		location = 105 #2160
		base = 105 #2160
		name = "F17 Blekinge Air Flotilla"
		division = {
			id = { type = 20700 id = 105 }
			name = "4. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 4
		}
		division = {
			id = { type = 20700 id = 106 }
			name = "5. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 4
		}
		division = {
			id = { type = 20700 id = 107 }
			name = "6. JAS Skvadron"
			type = interceptor
			strength = 100
			model = 4
		}
	}
}
