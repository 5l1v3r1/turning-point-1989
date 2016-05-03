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
		1376 1392 1391 1393 1200 2236 2231 2219 2226 1201 1196 1197 1195 1194
		3091 3092 3093 3094 3095 3096 3097 3098 3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654 1377 5683 3110 2333 7034
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
   5810 5820 5050
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
# #####################################
# ARMY
# #####################################
landunit = { id = { type = 17000 id = 23 }
	location = 1200 #1223
	name     = "IV Army Corps"
	division = { id = { type = 17000 id = 24 } name = "2nd Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 25 } name = "13th Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 26 } name = "31st Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 27 } name = "46th Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 28 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
    division = { id = { type = 17000 id = 29 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
	division = { id = { type = 17000 id = 528 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
landunit = { id = { type = 17000 id = 31 }
	location = 1200 #1223
	name     = "V Army Corps"
	division = { id = { type = 17000 id = 32 } name = "2nd Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 33 } name = "13th Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 34 } name = "31st Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 35 } name = "46th Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 36 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
    division = { id = { type = 17000 id = 37 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
	division = { id = { type = 17000 id = 529 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
landunit = { id = { type = 17000 id = 53 }
	location = 1392 #1227
	name     = "IX Army Corps"
	division = { id = { type = 17000 id = 54 } name = "2nd Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 55 } name = "13th Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 56 } name = "31st Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 57 } name = "46th Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 58 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
    division = { id = { type = 17000 id = 59 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
	division = { id = { type = 17000 id = 532 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
landunit = { id = { type = 17000 id = 67 }
	location = 1201 #1221
	name     = "XI Army Corps"
	division = { id = { type = 17000 id = 68 } name = "2nd Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 69 } name = "13th Infantry Division" strength = 100 type = motorized model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 70 } name = "31st Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 71 } name = "46th Infantry Division" strength = 100 type = motorized model = 4 }
	division = { id = { type = 17000 id = 72 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
    division = { id = { type = 17000 id = 73 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
	division = { id = { type = 17000 id = 534 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
landunit = { id = { type = 17000 id = 74 }
	location = 1201 #1221
	name     = "XII Army Corps"
	division = { id = { type = 17000 id = 75 } name = "2nd Infantry Division" strength = 100 type = infantry model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 76 } name = "13th Infantry Division" strength = 100 type = infantry model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 77 } name = "31st Infantry Division" strength = 100 type = infantry model = 4 }
	division = { id = { type = 17000 id = 78 } name = "46th Infantry Division" strength = 100 type = infantry model = 4 }
	division = { id = { type = 17000 id = 79 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
    division = { id = { type = 17000 id = 80 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
	division = { id = { type = 17000 id = 535 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
landunit = { id = { type = 17000 id = 81 }
	location = 1392 #1227
	name     = "U/I Army Corps"
	division = { id = { type = 17000 id = 82 } name = "2nd Infantry Division" strength = 100 type = infantry model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 83 } name = "13th Infantry Division" strength = 100 type = infantry model = 4 extra = sp_artillery brigade_model = 1 }
	division = { id = { type = 17000 id = 84 } name = "31st Infantry Division" strength = 100 type = infantry model = 4 }
	division = { id = { type = 17000 id = 85 } name = "46th Infantry Division" strength = 100 type = infantry model = 4 }
	division = { id = { type = 17000 id = 86 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
    division = { id = { type = 17000 id = 87 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
	division = { id = { type = 17000 id = 536 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
landunit = { id = { type = 17000 id = 119 }
	location = 1201 #1221
	name     = "Pyongyang Defense Command"
	division = { id = { type = 17000 id = 120 } name = "105th Guards Armor Division" strength = 100 type = armor model = 6 extra = sp_artillery brigade_model = 3 }
        division = { id = { type = 17000 id = 121 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
        division = { id = { type = 17000 id = 122 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
        division = { id = { type = 17000 id = 123 } name = "U/I Armor Division" strength = 100 type = armor model = 4 }
        division = { id = { type = 17000 id = 124 } name = "15th Mechanized Brigade" strength = 100 type = infantry model = 4 }
division = { id = { type = 17000 id = 125 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}	
landunit = { id = { type = 17000 id = 126 }
	location = 1391 #1226
	name     = "Sniper Combat Command"
	division = { id = { type = 17000 id = 127 } name = "2nd Sniper Brigade" strength = 100 type = d_03 model = 4 }
        division = { id = { type = 17000 id = 128 } name = "3rd Sniper Brigade" strength = 100 type = d_03 model = 4 }
        division = { id = { type = 17000 id = 129 } name = "4th Sniper Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 130 } name = "7th Sniper Brigade" strength = 100 type = d_03 model = 4 }
        division = { id = { type = 17000 id = 131 } name = "11th Sniper Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 132 } name = "18th Sniper Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 543 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
landunit = { id = { type = 17000 id = 133 }
	location = 1392 #1227
	name     = "Special Forces Command"
	division = { id = { type = 17000 id = 134 } name = "1st Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 135 } name = "3rd Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 136 } name = "5th Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
      division = { id = { type = 17000 id = 137 } name = "7th Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 138 } name = "9th Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
      division = { id = { type = 17000 id = 139 } name = "10th Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
      division = { id = { type = 17000 id = 140 } name = "22nd Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 141 } name = "23rd Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
	division = { id = { type = 17000 id = 142 } name = "33rd Light Infantry Brigade" strength = 100 type = d_03 model = 4 }
        division = { id = { type = 17000 id = 143 } name = "U/I Amphibious Brigade" strength = 100 type = d_05 model = 4 }
        division = { id = { type = 17000 id = 144 } name = "U/I Amphibious Brigade" strength = 100 type = d_05 model = 4 }
        division = { id = { type = 17000 id = 145 } name = "U/I Amphibious Brigade" strength = 100 type = d_05 model = 4 }
        division = { id = { type = 17000 id = 146 } name = "U/I Airborne Brigade" strength = 100 type = d_08 model = 4 }
        division = { id = { type = 17000 id = 147 } name = "U/I Airborne Brigade" strength = 100 type = d_08 model = 4 }
        division = { id = { type = 17000 id = 148 } name = "U/I Airborne Brigade" strength = 100 type = d_08 model = 4 }
		division = { id = { type = 17000 id = 544 } name = "KPA HQ" strength = 100 type = hq model = 3 extra = sp_artillery brigade_model = 1 }
	}
# #####################################
# NAVY
# #####################################
navalunit = { id = { type = 17000 id = 300 }
	location = 1392 #1227
	base     = 1392 #1227
	name     = "1st Fleet"
	division = { id = { type = 17000 id = 301 } name = "KPN Najin" type = light_cruiser model = 4 }
	division = { id = { type = 17000 id = 303 } name = "KPN Soho" type = light_cruiser model = 5 }
	division = { id = { type = 17000 id = 305 } name = "KPN Pyongyang" type = light_cruiser model = 4 }
	}
navalunit = { id = { type = 17000 id = 306 }
	location = 1392 #1227
	base     = 1392 #1227
	name     = "1st Submarine Fleet"
	division = { id = { type = 17000 id = 307 } name = "KPN SS-001" type = submarine model = 5 }
	division = { id = { type = 17000 id = 308 } name = "KPN SS-003" type = submarine model = 5 }
	division = { id = { type = 17000 id = 309 } name = "KPN SS-005" type = submarine model = 5 }
	division = { id = { type = 17000 id = 310 } name = "KPN SS-007" type = submarine model = 5 }
	division = { id = { type = 17000 id = 311 } name = "KPN SS-009" type = submarine model = 5 }
	division = { id = { type = 17000 id = 312 } name = "KPN SS-011" type = submarine model = 5 }
	}
navalunit = { id = { type = 17000 id = 318 }
	location = 1392 #1227
	base     = 1392 #1227
	name     = "2nd Submarine Fleet"
	division = { id = { type = 17000 id = 319 } name = "KPN SS-002" type = submarine model = 5 }
	division = { id = { type = 17000 id = 320 } name = "KPN SS-004" type = submarine model = 5 }
	division = { id = { type = 17000 id = 321 } name = "KPN SS-006" type = submarine model = 5 }
	division = { id = { type = 17000 id = 322 } name = "KPN SS-008" type = submarine model = 5 }
	division = { id = { type = 17000 id = 323 } name = "KPN SS-010" type = submarine model = 5 }
	division = { id = { type = 17000 id = 324 } name = "KPN SS-012" type = submarine model = 5 }
	
	}
navalunit = { id = { type = 17000 id = 330 }
	location = 1392 #1227
	base     = 1392 #1227
	name     = "Transport Fleet"
	division = { id = { type = 17000 id = 331 } name = "1st Transport Flotilla" type = transport model = 4 }
	division = { id = { type = 17000 id = 332 } name = "2nd Transport Flotilla" type = transport model = 4 }
	}
# #####################################
# AIR FORCE
# #####################################
airunit = { id = { type = 17000 id = 200 }
	location = 1201 #1221
	base     = 1201 #1221
	name     = "1st Air Combat Division"
	division = { id = { type = 17000 id = 201 } name = "35th Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 202 } name = "37th Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 203 } name = "60th Air Regiment" type = interceptor strength = 100 model = 3 }
	}
airunit = { id = { type = 17000 id = 204 }
	location = 1201 #1221
	base     = 1201 #1221
	name     = "4th Air Combat Division"
	division = { id = { type = 17000 id = 205 } name = "55th Air Regiment" type = cas strength = 100 model = 3 }
	division = { id = { type = 17000 id = 206 } name = "24th Air Regiment" type = cas strength = 100 model = 3 }
	division = { id = { type = 17000 id = 207 } name = "71st Air Regiment" type = cas strength = 100 model = 3 }
  }
airunit = { id = { type = 17000 id = 208 }
	location = 1201 #1221
	base     = 1201 #1221
	name     = "3rd Air Combat Division"
	division = { id = { type = 17000 id = 209 } name = "44th Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 210 } name = "41st Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 211 } name = "76th Air Regiment"  type = interceptor strength = 100 model = 3 }
	}
airunit = { id = { type = 17000 id = 212 }
	location = 1201 #1221
	base     = 1201 #1221
	name     = "2nd Air Combat Division"
	division = { id = { type = 17000 id = 213 } name = "11th Air Strike Regiment" type = cas strength = 100 model = 3 }
	division = { id = { type = 17000 id = 214 } name = "39th Air Regiment" type = multi_role strength = 100 model = 5 }
	division = { id = { type = 17000 id = 215 } name = "62nd Air Regiment" type = multi_role strength = 100 model = 5 }
  }
airunit = { id = { type = 17000 id = 220 }
	location = 1201 #1221
	base     = 1201 #1221
	name     = "22nd Air Combat Division"
	division = { id = { type = 17000 id = 221 } name = "8th Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 222 } name = "94th Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 223 } name = "97th Air Regiment" type = multi_role strength = 100 model = 5 }
	}
airunit = { id = { type = 17000 id = 224 }
	location = 1391 #1226
	base     = 1391 #1226
	name     = "13th Air Combat Division"
	division = { id = { type = 17000 id = 225 } name = "43rd Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 226 } name = "19th Air Regiment" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 17000 id = 227 } name = "15th Air Regiment" type = multi_role strength = 100 model = 3 }
	}
}

