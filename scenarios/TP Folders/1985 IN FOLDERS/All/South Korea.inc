##############################
# Country definition for KOR #
##############################

province =
{ id         = 1196
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Busan

#####################
# Country main data #
#####################

country =
{ tag                 = KOR
  energy              = 10000
  metal               = 10000
  rare_materials      = 10000
  oil                 = 5000
  supplies            = 10000
  money               = 30000
  capital             = 1199
  manpower            = 700
  diplomacy = { 
	relation = { tag = USA value = 150 }
	relation = { tag = JAP value = -150 }
	}
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 5
    defense_lobby     = 10
    interventionism   = 4
  }
  ownedprovinces      = {
		1199 1198 1196 1197 1195 1194 2226 2219
		3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654
	}
  controlledprovinces = {
		1199 1198 1196 1197 1195 1194 2226 2219
		3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654
	}
  nationalprovinces   = {
		1199 1376 1392 1391 1393 1201 1200 1198 1196 1197 1195 1194 2236 2231 2219 2226 
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
  # #####################################
  # ARMY
  # #####################################
	landunit = {
		id = { type = 20050 id = 401 }
		location = 1199 #1228
		name = "Special Warfare Command"
		division = { experience = 10 id = { type = 20050 id = 402 } name = "1st Special Forces Brigade" strength = 100 type = d_03 model = 5  }
		division = { experience = 10 id = { type = 20050 id = 3 } name = "3rd Special Forces Brigade" strength = 100 type = d_03 model = 5  }
		division = { experience = 10 id = { type = 20050 id = 4 } name = "5th Special Forces Brigade" strength = 100 type = d_03 model = 5  }
		division = { experience = 10 id = { type = 20050 id = 5 } name = "7th Special Forces Brigade" strength = 100 type = d_03 model = 5  }
        division = { experience = 10 id = { type = 20050 id = 6 } name = "9th Special Forces Brigade" strength = 100 type = d_03 model = 5  }
		division = { experience = 10 id = { type = 20050 id = 701 } name = "11th Special Forces Brigade" strength = 100 type = d_03 model = 5  }
		division = { experience = 10 id = { type = 20050 id = 801 } name = "13th Special Forces Brigade" strength = 100 type = d_03 model = 5  }
	}
    landunit = {
		id = { type = 20050 id = 9 }
		location = 1199 #1228
		name = "Air Operations Command"
		division = { id = { type = 20050 id = 10 } name = "1st Aviation Brigade" strength = 100 type = d_04 model = 4 }
		division = { id = { type = 20050 id = 11 } name = "2nd Aviation Brigade" strength = 100 type = d_04 model = 4 }
	}
    landunit = {
		id = { type = 20050 id = 12 }
		location = 1199 #1228
		name = "Capital Defense Command"
		division = { id = { type = 20050 id = 13 } name = "52nd Homeland Defense Division" strength = 100 type = garrison model = 4 }
		division = { id = { type = 20050 id = 14 } name = "56th Homeland Defense Division" strength = 100 type = garrison model = 4 }
		division = { id = { type = 20050 id = 15 } name = "60th Reserve Division" strength = 30 type = motorized model = 4 }
        division = { id = { type = 20050 id = 16 } name = "71st Reserve Division" strength = 30 type = motorized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 17 }
		location = 1198 #1233
		name = "First Army"
		division = { id = { type = 20050 id = 18 } name = "First Army HQ" strength = 100 type = hq model = 1 }
		division = { id = { type = 20050 id = 19 } name = "3rd Armored Brigade" strength = 100 type = light_armor model = 4 }
		division = { id = { type = 20050 id = 20 } name = "11th Infantry Division (Mech)" strength = 100 type = mechanized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 21 }
		location = 1199 #1228
		name = "II Corps"
		division = { id = { type = 20050 id = 22 } name = "7th Infantry Division" strength = 100 type = motorized model = 4  }
		division = { id = { type = 20050 id = 23 } name = "15th Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 24 } name = "27th Infantry Division" strength = 100 type = motorized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 72 }
		location = 1199 #1228
		name = "III Corps"
		division = { id = { type = 20050 id = 25 } name = "2nd Infantry Division" strength = 100 type = motorized model = 4 } 
		division = { id = { type = 20050 id = 26 } name = "12th Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 27 } name = "21st Infantry Division" strength = 100 type = motorized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 28 }
		location = 1198 #1233
		name = "VIII Corps"
		division = { id = { type = 20050 id = 29 } name = "22nd Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 30 } name = "23rd Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 31 } name = "102nd Infantry Brigade (Mech)" strength = 100 type = cavalry model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 42 }
		location = 1198 #1233
		name = "3rd Army"
		division = { id = { type = 20050 id = 43 } name = "3rd Army" strength = 100 type = hq model = 1 }
	}
    landunit = {
		id = { type = 20050 id = 44 }
		location = 1199 #1228
		name = "Capital Corps"
		division = { id = { type = 20050 id = 45 } name = "17th Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 46 } name = "51st Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 47 } name = "55th Infantry Division" strength = 100 type = motorized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 48 }
		location = 1198 #1233
		name = "I Corps"
		division = { id = { type = 20050 id = 49 } name = "2nd Armored Brigade" strength = 100 type = light_armor model = 4 }
		division = { id = { type = 20050 id = 50 } name = "1st Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 51 } name = "9th Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 52 } name = "25th Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 53 } name = "30th Infantry Division (Mech)" strength = 100 type = mechanized model = 4 }
        division = { id = { type = 20050 id = 54 } name = "72nd Reserve Division" strength = 30 type = motorized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 55 }
		location = 1198 #1233
		name = "V Corps"
		division = { id = { type = 20050 id = 56 } name = "1st Armored Brigade" strength = 100 type = light_armor model = 4 }
		division = { id = { type = 20050 id = 57 } name = "3rd Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 58 } name = "6th Infantry Division" strength = 100 type = motorized model = 4 }
		division = { id = { type = 20050 id = 59 } name = "8th Infantry Division (Mech)" strength = 100 type = mechanized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 60 }
		location = 1197 #1232
		name = "VI Corps"
		division = { id = { type = 20050 id = 61 } name = "5th Armored Brigade" strength = 100 type = light_armor model = 4 }
		division = { id = { type = 20050 id = 62 } name = "5th Infantry Division" strength = 100 type = motorized model = 4  }
		division = { id = { type = 20050 id = 63 } name = "26th Infantry Division (Mech)" strength = 100 type = mechanized model = 4 }
		division = { id = { type = 20050 id = 64 } name = "28th Infantry Division" strength = 100 type = motorized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 65 }
		location = 1199 #1228
		name = "VII Maneuver Corps"
		division = { id = { type = 20050 id = 66 } name = "Capital Mechanized Division" strength = 100 type = infantry model = 4 }
		division = { id = { type = 20050 id = 67 } name = "20th Infantry Division (Mech)" strength = 100 type = mechanized model = 4 }
	}
	landunit = {
		id = { type = 20050 id = 68 }
		location = 1197 #1232
		name = "ROK Marine Corps"
		division = { id = { type = 20050 id = 69 } name = "6th Marine Brigade" strength = 30 type = d_05 model = 4 }
		division = { id = { type = 20050 id = 70 } name = "1st Marine Division" strength = 100 type = marine model = 4 }
		division = { id = { type = 20050 id = 71 } name = "2nd Marine Division" strength = 100 type = marine model = 4 }
	}
# #####################################
# NAVY
# #####################################
	navalunit = {
		id = { type = 20050 id = 200 }
		location = 1197 #1232
		base = 1197 #1232
		name = "1st Fleet"
		division = { id = { type = 20050 id = 201 } name = "Kwanggaeto" type = light_cruiser model = 1 }
		division = { id = { type = 20050 id = 202 } name = "Che Ju" type = destroyer model = 1 }
		division = { id = { type = 20050 id = 203 } name = "Ulsan" type = destroyer model = 1 }
		division = { id = { type = 20050 id = 204 } name = "Masan" type = destroyer model = 1 }
	}
	navalunit = {
		id = { type = 20050 id = 218 }
		location = 1197 #1232
		base = 1197 #1232
		name = "1st Submarine Fleet"
		division = { id = { type = 20050 id = 219 } name = "Lee Jongmu" type = submarine model = 5 }
		division = { id = { type = 20050 id = 220 } name = "Jeong Un" type = submarine model = 5 }
		division = { id = { type = 20050 id = 221 } name = "Lee Sunsin" type = submarine model = 5 }
		division = { id = { type = 20050 id = 222 } name = "Na Daeyong" type = submarine model = 5 }
		division = { id = { type = 20050 id = 223 } name = "Lee Eokgi" type = submarine model = 5 }
	}
	navalunit = {
		id = { type = 20050 id = 224 }
		location = 1197 #1232
		base = 1197 #1232
		name = "2nd Fleet"
		division = { id = { type = 20050 id = 225 } name = "Ulchimundok" type = light_cruiser model = 1 }
		division = { id = { type = 20050 id = 226 } name = "Busan" type = destroyer model = 1 }
		division = { id = { type = 20050 id = 227 } name = "Seoul" type = destroyer model = 1 }
		division = { id = { type = 20050 id = 228 } name = "Keong Buk" type = destroyer model = 1 }
	}
	navalunit = {
		id = { type = 20050 id = 229 }
		location = 1197 #1232
		base = 1197 #1232
		name = "2nd Submarine Fleet"
		division = { id = { type = 20050 id = 230 } name = "Jang Bogo" type = submarine model = 5 }
		division = { id = { type = 20050 id = 231 } name = "Lee Chun" type = submarine model = 5 }
		division = { id = { type = 20050 id = 232 } name = "Choi Museon" type = submarine model = 5 }
		division = { id = { type = 20050 id = 233 } name = "Park Wi" type = submarine model = 5 }
	}
	navalunit = {
		id = { type = 20050 id = 234 }
		location = 1197 #1232
		base = 1197 #1232
		name = "3rd Fleet"
		division = { id = { type = 20050 id = 235 } name = "Yang Manchun" type = light_cruiser model = 1 }
		division = { id = { type = 20050 id = 236 } name = "Chung Ju" type = destroyer model = 1 }
		division = { id = { type = 20050 id = 237 } name = "Chung Nam" type = destroyer model = 1 }
		division = { id = { type = 20050 id = 238 } name = "Chon Nam" type = destroyer model = 1 }
	}
	navalunit = {
		id = { type = 20050 id = 239 }
		location = 1197 #1232
		base = 1197 #1232
		name = "5th Flotilla"
		division = { id = { type = 20050 id = 240 } name = "1st Transport Flottila" type = transport model = 4 }
		division = { id = { type = 20050 id = 241 } name = "2nd Transport Flottila" type = transport model = 4 }
		division = { id = { type = 20050 id = 242 } name = "3rd Transport Flottila" type = transport model = 4 }
	}
# #####################################
# AIR FORCE
# #####################################
	airunit = {
		id = { type = 20050 id = 100 }
		location = 1197 #1232
		base = 1197 #1232
		name = "1st Tactical Fighter Wing"
		division = { id = { type = 20050 id = 101 } name = "1st Fighter Squadron" type = interceptor strength = 100 model = 3 }
		division = { id = { type = 20050 id = 102 } name = "8th Fighter Squadron" type = interceptor strength = 100 model = 3 }
		division = { id = { type = 20050 id = 103 } name = "10th Fighter Squadron" type = interceptor strength = 100 model = 3 }
		division = { id = { type = 20050 id = 104 } name = "16th Fighter Squadron" type = interceptor strength = 100 model = 3 }
	}
	airunit = {
		id = { type = 20050 id = 105 }
		location = 1197 #1232
		base = 1197 #1232
		name = "7th Tactical Fighter Wing"
		division = { id = { type = 20050 id = 106 } name = "21st Fighter Squadron" type = interceptor strength = 100 model = 3 }
		division = { id = { type = 20050 id = 107 } name = "55th Fighter Squadron" type = interceptor strength = 100 model = 3 }
		
	}
	airunit = {
		id = { type = 20050 id = 109 }
		location = 1199 #1228
		base = 1199 #1228
		name = "3rd Tactical Fighter Wing"
		division = { id = { type = 20050 id = 110 } name = "17th Tactical Fighter Squadron" type = multi_role strength = 100 model = 5 }
		division = { id = { type = 20050 id = 111 } name = "18th Tactical Fighter Squadron" type = multi_role strength = 100 model = 5 }
		division = { id = { type = 20050 id = 112 } name = "13th Tactical Fighter Squadron" type = multi_role strength = 100 model = 5 }
	}
	airunit = {
		id = { type = 20050 id = 113 }
		location = 1199 #1228
		base = 1199 #1228
		name = "17th Tactical Fighter Wing"
		division = { id = { type = 20050 id = 114 } name = "37th Tactical Fighter Squadron" type = multi_role strength = 100 model = 5 }
		division = { id = { type = 20050 id = 115 } name = "81st Tactical Fighter Squadron" type = multi_role strength = 100 model = 5 }
		division = { id = { type = 20050 id = 116 } name = "27th Fighter Squadron" type = interceptor strength = 100 model = 3 }
		division = { id = { type = 20050 id = 117 } name = "26th Fighter Squadron" type = interceptor strength = 100 model = 3 }
	}
	airunit = {
		id = { type = 20050 id = 118 }
		location = 1199 #1228
		base = 1199 #1228
		name = "3rd Tactical Fighter Wing"
		division = { id = { type = 20050 id = 119 } name = "28th Fighter Squadron" type = interceptor strength = 100 model = 3 }
		division = { id = { type = 20050 id = 120 } name = "29th Fighter Squadron" type = interceptor strength = 100 model = 3 }
		division = { id = { type = 20050 id = 121 } name = "39th Fighter Squadron" type = interceptor strength = 100 model = 3 }
	}
	airunit = {
		id = { type = 20050 id = 122 }
		location = 1197 #1232
		base = 1197 #1232
		name = "Airlift Command"
		division = 
		{ id = { type = 20050 id = 123 } 
		  name = "Airlift Command" 
		  type     = transport_plane
		  strength = 100 
		  model = 2
		}
	}
# ###################################
# Under Development
# ###################################
	division_development = {
		id = { type = 20050 id = 300 }
		name = "Chungmugong Yi Sunshin"
		type = light_cruiser
		model = 1
		cost = 5
		date = { day = 12 month = april year = 1989 }
	}
	division_development = {
		id = { type = 20050 id = 301 }
		name = "Munmu the Great"
		type = light_cruiser
		model = 1
		cost = 5
		date = { day = 24 month = september year = 1989 }
	}
	division_development = {
		id = { type = 20050 id = 302 }
		name = "Dae Joyeong"
		type = light_cruiser
		model = 1
		cost = 5
		date = { day = 6 month = march year = 1989 }
	}
}
