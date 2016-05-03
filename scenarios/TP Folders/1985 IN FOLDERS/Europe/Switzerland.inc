#####################
# Country main data #
#####################

country =
{ tag                    = SCH
  capital                = 532
  manpower               = 200
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 25
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 10 
     political_left    = 2 
     freedom           = 7 
     free_market       = 9 
     professional_army = 3 
     defense_lobby     = 8 
     interventionism   = 1
  }
  nationalprovinces      = { 532 530 533 372 3213 3214 3215 3216 6524 }
  ownedprovinces         = { 532 530 533 372 3213 3214 3215 3216 6524 }
  controlledprovinces    = { 532 530 533 372 3213 3214 3215 3216 6524 }
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
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 1 }
    relation = { tag = GER value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ITA value = 1 }
    relation = { tag = SCH value = 1 }
    relation = { tag = USA value = 1 }
  }
  headofstate            = { type = 9 id = 17001 }
  headofgovernment       = { type = 9 id = 17002 }
  foreignminister        = { type = 9 id = 17003 }
  armamentminister       = { type = 9 id = 17004 }
  ministerofsecurity     = { type = 9 id = 17005 }
  ministerofintelligence = { type = 9 id = 17006 }
  chiefofstaff           = { type = 9 id = 17007 }
  chiefofarmy            = { type = 9 id = 17008 }
  chiefofnavy            = { type = 9 id = 17009 }
  chiefofair             = { type = 9 id = 17010 }
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 12231 id = 1 }
		location = 530 #391
		name = "Région Territorial 1"
		division = {
			id = { type = 12231 id = 2 }
			name = "Brigade Blindée 1"
			strength = 100
			type = light_armor
			model = 2
		}
		division = {
			id = { type = 12231 id = 3 }
			name = "Brigade d'infanterie 2"
			strength = 100
			type = d_06
			model = 4
		} 
        division = {
			id = { type = 12231 id = 4 }
			name = "Brigade de Montagne 10"
			strength = 30
			type = d_09
			model = 5
		}
	}
        landunit = {
		id = { type = 12231 id = 5 }
		location = 533 #389
		name = "Région Territorial 4"
		division = {
			id = { type = 12231 id = 6 }
			name = "Panzerbrigade 11"
			strength = 100
			type = light_armor
			model = 2
		}
		division = {
			id = { type = 12231 id = 7 }
			name = "Infanteriebrigade 5"
			strength = 100
			type = d_06
			model = 4
		}
        division = {
			id = { type = 12231 id = 8 }
			name = "Infanteriebrigade 7"
			strength = 30
			type = d_06
			model = 4
		}
        division = {
			id = { type = 12231 id = 9 }
			name = "Gebirgsschützenbrigade 12"
			strength = 100
			type = d_09
			model = 5
		}
	}
        landunit = {
		id = { type = 12231 id = 10 }
		location = 372 #390
		name = "Région Territorial 3"
		division = {
			id = { type = 12231 id = 11 }
			name = "Brigata da Montagna 9"
			strength = 100
			type = d_09
			model = 5
		}
	}
}
 
