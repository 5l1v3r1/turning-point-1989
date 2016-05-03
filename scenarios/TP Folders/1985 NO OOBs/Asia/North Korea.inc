##############################
# Country definition for PRK #
##############################
# Hyesan
province =
{ id       = 1391
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            
# 
province =
{ id       = 1392
  naval_base = { size = 4 current_size = 4 }
}   
#####################
# Country main data #
#####################

country =
{ tag                 = PRK
  ai = "prk_1985.ai"
  energy              = 10000
  metal               = 10000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 10000
  money               = 12000
  capital             = 1201
  manpower            = 1200
  diplomacy = { 
	relation = { tag = CHC value = 150 }
	relation = { tag = ROM value = 150 }
	relation = { tag = SOV value = 150 }
	relation = { tag = BUL value = 150 }
	relation = { tag = POL value = 150 }
	relation = { tag = DDR value = 150 }
	relation = { tag = CZE value = 150 }
	relation = { tag = HUN value = 150 }
	relation = { tag = CUB value = 150 }
	relation = { tag = KOR value = -200 }
	relation = { tag = JAP value = -200 }
	relation = { tag = USA value = -200 }
	}
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 1
    free_market       = 1
    professional_army = 5
    defense_lobby     = 10
    interventionism   = 4
  }
  ownedprovinces      = {
		1201 1376 1392 1391 1393 1200 2236 2333 2231
		3091 3092 3093 3094 3095 3096 3097 3098 7034 
	}
  controlledprovinces = {
		1201 1376 1392 1391 1393 1200 2236 2333 2231
		3091 3092 3093 3094 3095 3096 3097 3098 7034 
	}
  nationalprovinces   = {
		1201 1376 1392 1391 1393 1200 2236 2231 2219 2226 1199 1198 1196 1197 1195 1194
		3091 3092 3093 3094 3095 3096 3097 3098 3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654 1377 5683 3110 2333 7034
	}
  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030 1040
   #Motorized
   1100 1110 1120 1130
   #Mountain
   1160 1170 1180 1190
   #Special Forces
   1250 1260 1270 1280 1290
   #Naval Infantry
   1560 1570 1580 1590
   #Airborne Infantry
   1670 1680 1690 1700
   #Air Cavalry
   1396 1400 1410
   #Armored Cavalry
   13060 13070 13080 
   #Mechanized
   1470 1480 1490 1500
   #Irregular Infantry
   1360 1370 1380 1390
   #Combat Engineers
   1830 1840 1850 1860
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646 2650 2030
   #Infantry Fighting Vehicles	
   2100 2110
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
   3000 3170 1981
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
   5130 5110 5120 5840
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
   #Supply Production
   5180
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
}

