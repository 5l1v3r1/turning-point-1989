#####################
# Country main data #
#####################

country =
{ tag                    = JAP
  #belligerence           = 10
  capital                = 1184
  manpower               = 500
  # Resource Reserves
  energy                 = 20000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 8000
  money                  = 70000
  transports             = 2000
  escorts                = 4000
  
  #peacetime_ic_mod       = 0.4
  
  diplomacy =
  { relation = { tag = BEL value = 50 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 50 }
    relation = { tag = CHL value = 20 }
    relation = { tag = ENG value = 150 }
    relation = { tag = ETH value = 35 }
    relation = { tag = FIN value = 20 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 150 }
    relation = { tag = HOL value = 50 }
    relation = { tag = PHI value = 1 }
    relation = { tag = SIA value = 75 }
    relation = { tag = SOV value = -10 }
    relation = { tag = USA value = 200 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SIK" NumberOfSpies = 1 }
  SpyInfo                = { country = "TAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 2 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 1 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 2 }
  SpyInfo                = { country = "NZL" NumberOfSpies = 1 }
  SpyInfo                = { country = "AST" NumberOfSpies = 2 }
  # Sakhalin
  nationalprovinces      = { 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1174 1176  
1436 1437 1399
3061 3062 3063 3064 3065 3066 3067 3068 3069 3070 
3071 3072 3073 3074 3075 3076 3077 3078 3079 3080 
3081 3082 3083 3084 3085 3086 3087 3088 3089
5653 5655
7938 7939 7940 7941 7962 7963 7964 7965 7966 7967 7968 7969 7970 7971
                           }
  ownedprovinces         = { 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1174  
1436 1437 1399
3061 3062 3063 3064 3065 3066 3067 3068 3069 3070 
3071 3072 3073 3074 3075 3076 3077 3078 3079 3080 
3081 3082 3083 3084 3085 3086 3087 3088 
5653 5655
7938 7962 7963 7964 7965 7966 7967 7968 
                           }

  controlledprovinces    = { 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1784 1599 1192 1193 1785 1174  
1436 1437 1399
3061 3062 3063 3064 3065 3066 3067 3068 3069 3070 
3071 3072 3073 3074 3075 3076 3077 3078 3079 3080 
3081 3082 3083 3084 3085 3086 3087 3088 
5653 5655
7938 7962 7963 7964 7965 7966 7967 7968 
                           }
  claimedprovinces 		 = {}

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
   #Armored Cavalry
   13060 13070 13080 1310
   #Mechanized
   1470 1480 1490 1500 1510
   #Irregular Infantry
   1360 1370 1380 1390 1530
   #Combat Engineers
   1830 1840 1850 1860 1870
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
   3110 3120 3130 3140 3150
   #Cruisers
   3410 3420 3430 3440 3450 3456 3460
   #Nuclear Cruisers
   3470 3480 12040 3770 3780
   #Destroyers
   3310 3320 3330 3340 3350 12030 3710
   #Light Aircraft Carriers
   12100 12110
   #Helicopter Carrier
   3210 3220 3230
   #Aircraft Carriers
   3510 3520 3530 
   #Supercarriers
   3540 3560 12060 3570
   #Submarines
   3010 3020 3030 3060 3070 3090
   #Nuclear Submarines
   12000 3080 3610 3680 3690
   #Nuclear Ballistic Submarines
   3620 3630 3640 3650
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
   2320 2330 2340 2350
   #MRCAG
   2140 2150 2160 2190 2200
   #FCAG
   2020 2070 2080 2090 2130
   #Air Transports
   4250 4260 4270 4290
   #AEW&C
   4450 4180
   #VTOL Aircraft
   4350
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
  inventions = {  }
  blueprints             = { 8180 8230 8310 8320 }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 10
     political_left    = 2 
     freedom           = 10#3 
     free_market       = 10 
     professional_army = 6 
     defense_lobby     = 4 
     interventionism   = 4 
  }
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 13200 id = 1 }
		location = 1179 #1545
		name = "Northern Army"
		division = {
			id = { type = 13200 id = 2 }
			name = "Northern Army HQ"
			strength = 100
			type = hq
			model = 1
		}
        division = {
			id = { type = 13200 id = 3 }
			name = "7th Division"
			strength = 100
			type = armor
			model = 2
		}
		division = {
			id = { type = 13200 id = 4 }
			name = "2nd Division"
			strength = 100
			type = motorized
			model = 5
		}
		division = {
			id = { type = 13200 id = 5 }
			name = "11th Division"
			strength = 100
			type = motorized
			model = 5
		}
		division = {
			id = { type = 13200 id = 6 }
			name = "5th Brigade"
			strength = 100
			type = cavalry
			model = 5
		}
	}
	landunit = {
		id = { type = 13200 id = 7 }
		location = 1180 #1549
		name = "North Eastern Army"
                division = {
			id = { type = 13200 id = 8 }
			name = "North Eastern Army HQ"
			strength = 100
			type = hq
			model = 1
		}
		division = {
			id = { type = 13200 id = 9 }
			name = "6th Division"
			strength = 100
			type = motorized
			model = 5
                
		}
		division = {
			id = { type = 13200 id = 10 }
			name = "9th Division"
			strength = 100
			type = motorized
			model = 5
		}
	}
	landunit = {
		id = { type = 13200 id = 11 }
		location = 1184 #1552
		name = "Eastern Army"
        division = {
			id = { type = 13200 id = 12 }
			name = "Eastern Army HQ"
			strength = 100
			type = hq
			model = 1
		}
		division = {
			id = { type = 13200 id = 13 }
			name = "1st Division"
			strength = 100
			type = motorized
			model = 5
		}
		division = {
			id = { type = 13200 id = 14 }
			name = "12th Brigade"
			strength = 100
			type = d_08
			model = 5
		}
	}
	landunit = {
		id = { type = 13200 id = 15 }
		location = 1184 #1552
		name = "Special Forces Command"
		division = {
			experience = 10
			id = { type = 13200 id = 16 }
			name = "1st Airborne Brigade"
			strength = 100
			type = d_08
			model = 5
		}
	}
	landunit = {
		id = { type = 13200 id = 17 }
		location = 1187 #1553
		name = "Central Army"
        division = {
			id = { type = 13200 id = 18 }
			name = "Central Army HQ"
			strength = 100
			type = hq
			model = 1
		}
		division = {
			id = { type = 13200 id = 19 }
			name = "3rd Division"
			strength = 100
			type = motorized
			model = 5
		}
		division = {
			id = { type = 13200 id = 20 }
			name = "10th Division"
			strength = 100
			type = motorized
			model = 5
		}
		division = {
			id = { type = 13200 id = 21 }
			name = "13th Brigade"
			strength = 100
			type = d_06
			model = 5
		}
		division = {
			id = { type = 13200 id = 22 }
			name = "14th Brigade"
			strength = 100
			type = d_06
			model = 5
		}
	}
	landunit = {
		id = { type = 13200 id = 23 }
		location = 1190 #1560
		name = "Western Army"
        division = {
			id = { type = 13200 id = 24 }
			name = "Western Army HQ"
			strength = 100
			type = hq
			model = 1
		}
		division = {
			id = { type = 13200 id = 25 }
			name = "4th Division"
			strength = 100
			type = motorized
			model = 5
          
		}
		division = {
			id = { type = 13200 id = 26 }
			name = "8th Division"
			strength = 100
			type = motorized
			model = 5
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 13200 id = 201 }
		location	= 1184 #1552
		base		= 1184 #1552
		name = "1st Escort Flotilla"
        division = {
			id = { type = 13200 id = 202 }
			name = "Kirishima"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 203 }
			name = "Shirane"
			type = light_cruiser  
			model = 1
		}
        division = {
			id = { type = 13200 id = 204 }
			name = "Tachikaze"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 13200 id = 205 }
			name = "Hatakaze"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 206 }
			name = "Murasame"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 207 }
			name = "Harusame"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 208 }
			name = "Ikazuchi"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 13200 id = 209 }
		location	= 1190 #1560
		base		= 1190 #1560
		name = "2nd Escort Flotilla"
        division = {
			id = { type = 13200 id = 210 }
			name = "Kongo"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 211 }
			name = "Sawakaze"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 212 }
			name = "Kurama"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 213 }
			name = "Yudachi"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 214 }
			name = "Kirisame"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 215 }
			name = "Ariake"
			type = destroyer
			model = 1
		}   
        division = {
			id = { type = 13200 id = 216 }
			name = "Sawagiri"
			type = destroyer
			model = 1
		}         
	}
	navalunit = {
		id = { type = 13200 id = 217 }
		location	= 1186 #1558
		base		= 1186 #1558
		name = "3rd Escort Flotilla"
        division = {
			id = { type = 13200 id = 218 }
			name = "Myoko"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 13200 id = 219 }
			name = "Shimakaze"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 13200 id = 220 }
			name = "Haruna"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 221 }
			name = "Amagiri"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 222 }
			name = "Yugiri"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 223 }
			name = "Hamagiri"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 224 }
			name = "Setogiri"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 225 }
			name = "Hamayuki"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 13200 id = 226 }
		location	= 1188 #1554
		base		= 1188 #1554
		name = "4th Escort Flotilla"
        division = {
			id = { type = 13200 id = 227 }
			name = "Chokai"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 228 }
			name = "Asakaze"
			type = light_cruiser
			model = 1
		}
		division = {
			id = { type = 13200 id = 229 }
			name = "Hiei"
			type = light_cruiser
			model = 1
		}
        division = {
			id = { type = 13200 id = 230 }
			name = "Inazuma"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 231 }
			name = "Samidare"
			type = destroyer
			model = 1
		} 
        division = {
			id = { type = 13200 id = 232 }
			name = "Akebono"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 233 }
			name = "Umigiri"
			type = destroyer
			model = 1
		}
	}            	           
	navalunit = {
		id = { type = 13200 id = 234 }
		location	= 1184 #1552
		base		= 1184 #1552
		name = "Yokosuka Regional District"
		division = {
			id = { type = 13200 id = 235 }
			name = "Hatsuyuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 236 }
			name = "Shirayuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 237 }
			name = "Sawayuki"
			type = destroyer
			model = 1
		}
	}
        navalunit = {
		id = { type = 13200 id = 238 }
		location	= 1188 #1554
		base		= 1188 #1554
		name = "Kure Regional District"
        division = {
			id = { type = 13200 id = 239 }
			name = "Yamayuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 240 }
			name = "Matsuyuki"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 241 }
			name = "Setoyuki"
			type = destroyer
			model = 1
		}
	}
        navalunit = {
		id = { type = 13200 id = 242 }
		location	= 1190 #1560
		base		= 1190 #1560
		name = "Sasebo Regional District"
        division = {
			id = { type = 13200 id = 243 }
			name = "Isoyuki"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 244 }
			name = "Harayuki"
			type = destroyer
			model = 1
		}
        division = {
			id = { type = 13200 id = 245 }
			name = "Asayuki"
			type = destroyer
			model = 1
		}
	}
        navalunit = {
		id = { type = 13200 id = 246 }
		location	= 1186 #1558
		base		= 1186 #1558
		name = "Maizuru Regional District"
        division = {
			id = { type = 13200 id = 247 }
			name = "Asagiri"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 248 }
			name = "Yamagiri"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 13200 id = 249 }
			name = "Mineyuki"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 13200 id = 250 }
		location	= 1188 #1554
		base		= 1188 #1554
		name = "1st Submarine Flotilla"
		division = {
			id = { type = 13200 id = 251 }
			name = "Michishio"
			type = submarine
			model = 5
		}
        division = {
			id = { type = 13200 id = 252 }
			name = "Makishio"
			type = submarine
			model = 5
		}
        division = {
			id = { type = 13200 id = 253 }
			name = "Isoshio"
			type = submarine
			model = 5
		}
        division = {
			id = { type = 13200 id = 254 }
			name = "Hayashio"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 13200 id = 255 }
			name = "Arashio"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 13200 id = 256 }
			name = "Fuyushio"
			type = submarine
			model = 5
		}
        division = {
			id = { type = 13200 id = 257 }
			name = "Harushio"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 13200 id = 258 }
			name = "Natsushio"
			type = submarine
			model = 5
		}
		
	}
	navalunit = {
		id = { type = 13200 id = 259 }
		location	= 1190 #1560
		base		= 1190 #1560
		name = "2nd Submarine Flotilla"
        division = {
			id = { type = 13200 id = 260 }
			name = "Oyashio"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 13200 id = 261 }
			name = "Uzushio"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 13200 id = 262 }
			name = "Narushio"
			type = submarine
			model = 5
		}
        division = {
			id = { type = 13200 id = 263 }
			name = "Wakashio"
			type = submarine
			model = 5
		}
		division = {
			id = { type = 13200 id = 264 }
			name = "Asashio"
			type = submarine
			model = 5
		}
	}
	navalunit = {
		id = { type = 13200 id = 265 }
		location	= 1184 #1552
		base		= 1184 #1552
		name = "1st Landing Division"
		division = {
			id = { type = 13200 id = 266 }
			name = "1st Transport Fleet"
			type = transport
			model = 5
		}
		division = {
			id = { type = 13200 id = 267 }
			name = "2nd Transport Fleet"
			type = transport
			model = 5
		}
		division = {
			id = { type = 13200 id = 268 }
			name = "3rd Transport Fleet"
			type = transport
			model = 5
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 13200 id = 101 }
		location = 1436 #1547
		base = 1436 #1547
		name = "Northern Air Defense Force"
		division = { id = { type = 13200 id = 102 } name = "2nd Air Wing" type = multi_role strength = 100 model = 6 }
		division = { id = { type = 13200 id = 103 } name = "3rd Air Wing" type = interceptor strength = 100 model = 5 }
	}
	airunit = {
		id = { type = 13200 id = 104 }
		location = 1184 #1552
		base = 1184 #1552
		name = "Central Air Defense Force"
		division = { id = { type = 13200 id = 105 } name = "6th Air Wing" type = multi_role strength = 100 model = 6 }
		division = { id = { type = 13200 id = 106 } name = "7th Air Wing" type = multi_role strength = 100 model = 6 }
	}
    airunit = {
		id = { type = 13200 id = 107 }
		location = 1190 #1560
		base = 1190 #1560
		name = "Western Air Defense Force"
		division = { id = { type = 13200 id = 108 } name = "5th Air Wing" type = multi_role strength = 100 model = 6 }
		division = { id = { type = 13200 id = 109 } name = "8th Air Wing" type = multi_role strength = 100 model = 6 }
	}
    airunit = {
		id = { type = 13200 id = 110 }
		location = 1193 #1563
		base = 1193 #1563
		name = "Southwestern Composite Air Division"
		division = { id = { type = 13200 id = 111 } name = "83rd Air Wing" type = multi_role strength = 100 model = 6 }
	}
	airunit = {
		id = { type = 13200 id = 112 }
		location = 1184 #1552
		base = 1184 #1552
		name = "Air Support Command"
        division = 
		{ id = { type = 13200 id = 113 } 
		  name = "1st Tactical Airlift Wing" 
		  type     = transport_plane
		  strength = 100 
		  model = 2 
		}
		division = 
		{ id = { type = 13200 id = 114 } 
		  name = "2nd Tactical Airlift Wing" 
		  type     = transport_plane
		  strength = 100 
		  model = 2 
		}
	}
	#NAVAL BOMBERS
	#
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 13200 id = 400 }
		name = "Takanami"
		type = destroyer
		model = 1
		cost = 5
		date = { day = 4 month = october year = 1989 }
	}
	division_development = {
		id = { type = 13200 id = 401 }
		name = "Onami"
		type = destroyer
		model = 1
		cost = 5
		date = { day = 29 month = december year = 1989 }
	}
	division_development = {
		id = { type = 13200 id = 402 }
		name = "Kuroshio"
		type = submarine
		model = 5
		cost = 5
		date = { day = 14 month = april year = 1989 }
	}
	division_development = {
		id = { type = 13200 id = 403 }
		name = "Takashio"
		type = submarine
		model = 5
		cost = 5
		date = { day = 3 month = june year = 1989 }
	}
	division_development = {
		id = { type = 13200 id = 404 }
		name = "Yaeshio"
		type = submarine
		model = 5
		cost = 5
		date = { day = 20 month = march year = 1989 }
	}
	division_development = {
		id = { type = 13200 id = 405 }
		name = "Setoshio"
		type = submarine
		model = 5
		cost = 5
		date = { day = 21 month = august year = 1989 }
	}
}
 
