#BAOR AA
province = {
id = 76 #Dusseldorf, Dortmund
anti_air = 8
}
province = {
id = 1405 #Minden
anti_air = 3
}
#British Army AA Units
province = {
id = 10
anti_air = 3
}
province = {
id = 1164
anti_air = 5
}
province = {
id = 28
anti_air = 3
}
province = {
id = 3038
anti_air = 5
}
province = {
id = 7334
anti_air = 5
}
province = {
id = 1166
anti_air = 5
}
#RAF in Germany Infrastructure
province = {
id = 66 #RAF Bruggen + RAF Wildenrath + RAF Laarbruch
air_base = { size = 8 current_size = 8 }
anti_air = 3
}
province = {
id = 3253 #RAF Gutersloh
air_base = { size = 3 current_size = 3 }
anti_air = 1
}
province = {
id = 6521 #RAF Laarbruch
air_base = { size = 4 current_size = 4 }
}
#RAF UK Infrastructure
province = {
id = 1164 #RAF Binbrook, Lincs + RAF Coningsby + RAF Waddington
air_base = { size = 8 current_size = 8 }
anti_air = 2
}
province = {
id = 3045 #RAF Leuchars, Fife
air_base = { size = 2 current_size = 2 }
anti_air = 1
}
province = {
id = 3047 #RAF Lossiemouth, Morayshire + RAF Kinloss
air_base = { size = 5 current_size = 5 }
anti_air = 1
}
province = {
id = 17 #RAF Marham, Norfolk + RAF Coltishall
air_base = { size = 10 current_size = 10 }
anti_air = 1
}
province = {
id = 7289 #RAF Wattisham, Suffolk + RAF Honington
air_base = { size = 4 current_size = 4 }
anti_air = 1
}
province = {
id = 3035 #RAF Wittering, Cambs
air_base = { size = 2 current_size = 2 }
}
province = {
id = 10 #RAF Leeming
air_base = { size = 1 current_size = 1 }
}
province = {
id = 3036 #RAF Cottesmore
air_base = { size = 3 current_size = 3 }
}
province = {
id = 1409 #RAF Brawdy
air_base = { size = 1 current_size = 1 }
}
province = {
id = 3030 #RAF Chivenor
air_base = { size = 1 current_size = 1 }
}
province = {
id = 16 #RAF Brize Norton + RAF Lyneham + RAF Benson
air_base = { size = 8 current_size = 8 }
anti_air = 1 
}
province = {
id = 3040 #RAF Boulmer
air_base = { size = 2 current_size = 2 }
}
province = {
id = 21 #RAF Odiham
air_base = { size = 1 current_size = 1 }
}
province = {
id = 19 #RAF Northolt
air_base = { size = 1 current_size = 1 }
}
province = {
id = 29 #RAF Aldergrove
air_base = { size = 1 current_size = 1 }
}
#RAF Bases outside of UK (excluding Germany)
province = {
id = 866 #RAF Falklands
air_base = { size = 1 current_size = 1 }
}
province = {
id = 758 #RAF Belize
air_base = { size = 1 current_size = 1 }
}
province = {
id = 5412 #RAF Akrotiri
air_base = { size = 5 current_size = 5 }
}
province = {
id = 1315 #RAF Sek Kong
air_base = { size = 1 current_size = 1 }
}
#Royal Navy bases
province = {
id = 5412 #Western Sovereign Base Area / Akrotiri
naval_base = { size = 5 current_size = 5 }
}
province = {
id = 5413 #Eastern Sovereign Base Area / Dekhelia
naval_base = { size = 5 current_size = 5 }
}
province = {
id = 21 #HMNB Portsmouth
naval_base = { size = 10 current_size = 10 }
}
province = {
id = 23 #HMNB Devonport
naval_base = { size = 10 current_size = 10 }
}
province = {
id = 2279 #HMNB Clyde
naval_base = { size = 10 current_size = 10 }
}
province = {
id = 1160 #HMNB Torpoint
naval_base = { size = 2 current_size = 2 }
}
province = {
id = 3045 #HMNB Rosyth
naval_base = { size = 10 current_size = 10 }
}
#####################
# Country main data #
#####################

country =
{ tag                    = ENG
  capital                = 19
  manpower               = 1000
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 70000
  transports             = 1000
  escorts                = 150
  
  peacetime_ic_mod       = 0.5
  
  diplomacy = { 
  relation = { tag = BRU value = 200 access = yes } 
  relation = { tag = U08 value = 200 access = yes }
  }
  
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 4 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  SpyInfo                = { country = "AST" NumberOfSpies = 2 }
  SpyInfo                = { country = "NZL" NumberOfSpies = 2 }
  SpyInfo                = { country = "CAN" NumberOfSpies = 2 }
  SpyInfo                = { country = "IRE" NumberOfSpies = 4 }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }
  SpyInfo                = { country = "BHU" NumberOfSpies = 1 }
  SpyInfo                = { country = "YEM" NumberOfSpies = 1 }
  SpyInfo                = { country = "ETH" NumberOfSpies = 1 }
  
  # GREAT BRITAIN
  nationalprovinces      = { 19 1165 5 3 6 7 1166 8 9 28 29 10 2245 11 13 12 1164 14 17 16 22 20 21 23 1160 15 1409 1720 2279
  3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3054 2634 348 6944
  7128 7129 7131 7287 7288 7289 7334 5462 5456 866 5092 1148 1147 573 896 587 795 538 584 2996 2923
                           }
  # GREAT BRITAIN
  ownedprovinces         = { 19 1165 5 3 6 7 1166 8 9 28 29 10 2245 11 13 12 1164 14 17 16 22 20 21 23 1160 15 1409 1720 2279
  3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3054 2634 348 6944
  7128 7129 7131 7287 7288 7289 7334 5462 5456 866 5092 1148 1147 573 896 587 795 538 584 2996 2923
  #Hong Kong
  1315
  #Cyprus
  5412 5413
                           }
  # GREAT BRITAIN
  controlledprovinces    = { 19 1165 5 3 6 7 1166 8 9 28 29 10 2245 11 13 12 1164 14 17 16 22 20 21 23 1160 15 1409 1720 2279
  3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3054 2634 348 6944
  7128 7129 7131 7287 7288 7289 7334 5462 5456 866 5092 1148 1147 573 896 587 795 538 584 2996 2923
  #Hong Kong
  1315
  #Cyprus
  5412 5413
                           }
  claimedprovinces 		 = {
  #Hong Kong
  1315
  #Cyprus
  5412 5413
  }

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
  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic = 5
	 political_left = 4 
	 freedom = 4 
	 free_market = 7 
	 professional_army = 4 
	 defense_lobby = 6 
	 interventionism = 5
  }
  headofstate            = { type = 9 id = 1001 }
  headofgovernment       = { type = 9 id = 1002 }
  foreignminister        = { type = 9 id = 1003 }
  armamentminister       = { type = 9 id = 1004 }
  ministerofsecurity     = { type = 9 id = 1005 }
  ministerofintelligence = { type = 9 id = 1006 }
  chiefofstaff           = { type = 9 id = 1007 }
  chiefofarmy            = { type = 9 id = 1008 }
  chiefofnavy            = { type = 9 id = 1009 }
  chiefofair             = { type = 9 id = 1010 }
  
  ##############
  #British Army
  ##############
  #British Army of the Rhine
  landunit = {
  id = { type = 12750 id = 301 }
  name = "BAOR"
  location = 66
	division = { 
		id = { type = 12750 id = 302 }
		name = "BAOR GHQ"
		type = hq
		model = 4
		extra = b_01
		brigade_model = 3 #Westland Lynx TOW
		}
	}
  landunit = {
  id = { type = 12750 id = 303 }
  name = "1st Armoured Division"
  location = 3255 #Cuxhaven, Soltau
	division = {
		id = { type = 12750 id = 401 }
		name = "7th Armoured Brigade"
		type = light_armor
		model = 7 #Challenger 1
		extra = sp_artillery
		brigade_model = 3 #M-109A2
		}
	}
  landunit = {
  id = { type = 12750 id = 501 }
  name = "1st Armoured Division"
  location = 3257 #Osnabrück
	division = {
		id = { type = 12750 id = 601 }
		name = "12th Armoured Brigade"
		type = light_armor
		model = 7 #Chieftain
		extra = sp_artillery
		brigade_model = 3 #M-109A2
		}
	}
  landunit = {
  id = { type = 12750 id = 7 }
  name = "1st Armoured Division"
  location = 86 #Hannover, Hohne
	division = {
		id = { type = 12750 id = 8 }
		name = "22nd Armoured Brigade"
		type = light_armor
		model = 7 #Chieftain
		extra = sp_artillery
		brigade_model = 3 #FV433 Abbot SPG
		}
	}
  landunit = {
  id = { type = 12750 id = 9 }
  name = "3rd Armoured Division"
  location = 81 #Münster
	division = {
		id = { type = 12750 id = 10 }
		name = "4th Armoured Brigade"
		type = light_armor
		model = 7 #Challenger 1
		extra = sp_artillery
		brigade_model = 3 #M-109A2
		}
	}
  landunit = {
  id = { type = 12750 id = 11 }
  name = "3rd Armoured Division"
  location = 3253 #
	division = {
		id = { type = 12750 id = 12 }
		name = "6th Armoured Brigade"
		type = light_armor
		model = 7 #Challenger 1
		extra = sp_artillery
		brigade_model = 3 #M-109A2
		}
	}
      landunit = {
  id = { type = 12750 id = 13 }
  name = "3rd Armoured Division"
  location = 7185 #
	division = {
		id = { type = 12750 id = 14 }
		name = "33rd Armoured Brigade"
		type = light_armor
		model = 7 #Chieftain
		extra = sp_artillery
		brigade_model = 3 #FV433 Abbot SPG
		}
	}
  landunit = {
  id = { type = 12750 id = 15 }
  name = "4th Armoured Division"
  location = 1405 #
	division = {
		id = { type = 12750 id = 16 }
		name = "11th Armoured Brigade"
		type = light_armor
		model = 7 #Challenger 1
		extra = sp_artillery
		brigade_model = 3 #M-109A2
		}
	division = {
		id = { type = 12750 id = 17 }
		name = "20th Armoured Brigade"
		type = light_armor
		model = 7 #Challenger 1
		extra = sp_artillery
		brigade_model = 3 #M-109A2
		}
	}
  landunit = {
  id = { type = 12750 id = 18 }
  name = "4th Armoured Division"
  location = 10 #Catterick Garrison, North Yorkshire
	division = {
		id = { type = 12750 id = 19 }
		name = "19th Infantry Brigade"
		type = d_06
		model = 4
		}
	}
  landunit = {
  id = { type = 12750 id = 20 }
  name = "Berlin Brigade"
  location = 300 #West Berlin
	division = { 
		id = { type = 12750 id = 21 }
		name = "Berlin Infantry Brigade"
		type = garrison #Brigade
		model = 4
		locked = yes
	}
  }
  #British Army United Kingdom		
  landunit = {
  id = { type = 12750 id = 22 }
  name = "2nd Infantry Division"
  location = 10
	division = {
		id = { type = 12750 id = 23 }
		name = "24th Airmobile Brigade"
		type = d_04
		model = 4
		extra = b_01
		brigade_model = 3 #Westland Lynx TOW
	}
	division = {
		id = { type = 12750 id = 24 }
		name = "15th Territorial Army Brigade"
		type = d_02
		model = 4
		extra = engineer
		brigade_model = 4
	}
  }
	landunit = {
	id = { type = 12750 id = 25 }
	name = "2nd Infantry Division"
	location = 3039 #Chilwell, Leeds
		division = {
			id = { type = 12750 id = 26 }
			name = "49th Territorial Army Brigade"
			type = d_02
			model = 4
			}
	}
	landunit = {
	id = { type = 12750 id = 27 }
	name = "1st Infantry Brigade"
	location = 3032 #Tidworth
		division = {
			id = { type = 12750 id = 28 }
			name = "1st Infantry Brigade"
			type = d_02
			model = 4
			extra = artillery
			brigade_model = 3 #FH-70 155mm
			}
	}
	landunit = {
	id = { type = 12750 id = 29 }
	name = "2nd (Southeast) Infantry Brigade"
	location = 20 #Shorncliffe
		division = {
			id = { type = 12750 id = 30 }
			name = "2nd (Southeast) Infantry Brigade"
			type = d_02
			model = 4
			}
	}
	landunit = {
	id = { type = 12750 id = 31 }
	name = "5th Airborne Brigade"
	location = 21 #Aldershot
		division = {
			id = { type = 12750 id = 32 }
			name = "5th Airborne Brigade"
			type = d_08
			model = 4
			}
	}
	landunit = {
	id = { type = 12750 id = 33 }
	name = "19th Infantry Brigade"
	location = 3034 #Colchester
		division = {
			id = { type = 12750 id = 34 }
			name = "19th Infantry Brigade"
			type = d_02
			model = 4 
			extra = artillery
			brigade_model = 3 #FH-70 155mm
			}
	}
	landunit = {
	id = { type = 12750 id = 35 }
	name = "42nd (Northwest) Infantry Brigade"
	location = 3035 #
		division = {
			id = { type = 12750 id = 36 }
			name = "42nd (Northwest) Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 37 }
	name = "43rd (Wessex) Brigade"
	location = 23 #Plymouth, Exeter
		division = {
			id = { type = 12750 id = 38 }
			name = "43rd (Wessex) Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 39 }
	name = "51st (Highland) Infantry Brigade"
	location = 8 #Stirling (Glasgow)
		division = {
			id = { type = 12750 id = 40 }
			name = "51st (Highland) Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 41 }
	name = "52nd (Lowland) Infantry Brigade"
	location = 1166 #Edinburgh
		division = {
			id = { type = 12750 id = 42 }
			name = "52nd (Lowland) Infantry Brigade"
			type = d_02
			model = 4
			extra = engineer
			brigade_model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 43 }
	name = "54th (East Anglian) Infantry Brigade"
	location = 1164 #Lincoln (Grantham)
		division = {
			id = { type = 12750 id = 44 }
			name = "54th (East Anglian) Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 45 }
	name = "56th (London) Infantry Brigade"
	location = 19 #London
		division = {
			id = { type = 12750 id = 46 }
			name = "56th (London) Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 47 }
	name = "143rd (West Midlands) Infantry Brigade"
	location = 3037
		division = {
			id = { type = 12750 id = 48 }
			name = "143rd (West Midlands) Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 49 }
	name = "160th (Welsh) Infantry Brigade"
	location = 3041
		division = {
			id = { type = 12750 id = 50 }
			name = "160th (Welsh) Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 51 }
	name = "8th Infantry Brigade"
	location = 29 #Londonderry
		division = {
			id = { type = 12750 id = 52 }
			name = "8th Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 53 }
	name = "39th Infantry Brigade"
	location = 28 #Belfast
		division = {
			id = { type = 12750 id = 54 }
			name = "39th Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	landunit = {
	id = { type = 12750 id = 55 }
	name = "3rd Infantry Brigade"
	location = 7128 #Omagh
		division = {
			id = { type = 12750 id = 58 }
			name = "3rd Infantry Brigade"
			type = d_02
			model = 4
		}
	}
	#SAS
	landunit = {
	id = { type = 12750 id = 59 }
	name = "SAS Regiments"
	location = 19
		division = {
			id = { type = 12750 id = 60 }
			name = "21st SAS Regiment"
			type = d_03
			model = 4
			}
	}
	landunit = {
	id = { type = 12750 id = 61 }
	name = "SAS Regiments"
	location = 14
		division = {
			id = { type = 12750 id = 62 }
			name = "23rd SAS Regiment"
			type = d_03
			model = 4
			}
	}
	#British Forces Worldwide
	landunit = {
	id = { type = 12750 id = 63 }
	name = "Akrotiri Garrison"
	location = 5412
		division = {
			id = { type = 12750 id = 64 }
			name = "Akrotiri Garrison"
			type = garrison #Brigade
			model = 4
			strength = 10
			max_strength = 10
			locked = yes
			}
	}
	landunit = {
	id = { type = 12750 id = 65 }
	name = "Dhekelia Garrison"
	location = 5413
		division = {
			id = { type = 12750 id = 66 }
			name = "Dhekelia Garrison"
			type = garrison #Brigade
			model = 4
			strength = 10
			max_strength = 10
			locked = yes
			extra = heavy_armor
			brigade_model = 2 #FV-101 Scorpion
			}
	}
	landunit = {
	id = { type = 12750 id = 67 }
	name = "British Forces in Brunei" #Provisional title
	location = 1646
		division = {
			id = { type = 12750 id = 68 }
			name = "British Forces in Brunei"
			type = garrison #Brigade
			model = 4
			strength = 10
			max_strength = 10
			locked = yes
			}
	}
	landunit = {
	id = { type = 12750 id = 69 }
	name = "Falklands Defense Force"
	location = 866
		division = {
			id = { type = 12750 id = 70 }
			name = "Falklands Defense Force"
			type = garrison #Brigade
			model = 4
			strength = 10
			max_strength = 10
			locked = yes
			}
	}
	landunit = {
	id = { type = 12750 id = 71 }
	name = "Gibraltar Defense Force"
	location = 348
		division = {
			id = { type = 12750 id = 72 }
			name = "Gibraltar Defense Force"
			type = garrison #Brigade
			model = 4
			strength = 10
			max_strength = 10
			locked = yes
			}
	}
	landunit = {
	id = { type = 12750 id = 73 }
	name = "Hong Kong Defense Force"
	location = 1315
		division = {
			id = { type = 12750 id = 74 }
			name = "Hong Kong Defense Force"
			type = garrison #Brigade
			model = 4
			strength = 10
			max_strength = 10
			locked = yes
			}
	}
	landunit = {
	id = { type = 12750 id = 75 }
	name = "48th Gurkha Brigade"
	location = 1315
		division = {
			id = { type = 12750 id = 76 }
			name = "48th Gurkha Brigade"
			type = d_03
			model = 4
			extra = engineer
			brigade_model = 4
			}
	}
	landunit = {
	id = { type = 12750 id = 77 }
	name = "British Forces in Belize" #Provisional name
	location = 758
		division = {
			id = { type = 12750 id = 78 }
			name = "British Forces in Belize"
			type = garrison #Brigade
			model = 4
			strength = 10
			max_strength = 10
			locked = yes
			}
	}
	landunit = {
	id = { type = 12750 id = 97 }
	name = "3rd Royal Marine Commando"
	location = 23
		division = {
			id = { type = 12750 id = 98 }
			name = "3rd Royal Marine Commando"
			type = d_05
			model = 4
			}
	}
	################
	#Royal Air Force
	################
	#RAF in Germany
	airunit = {
	id = { type = 12750 id = 79 }
	name = "RAF Bruggen"
	location = 66
	base = 66
		division = {
			id = { type = 12750 id = 95 }
			name = "No. 9 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
		division = {
			id = { type = 12750 id = 96 }
			name = "No. 14 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
		division = {
			id = { type = 12750 id = 82 }
			name = "No. 17 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
		division = {
			id = { type = 12750 id = 83 }
			name = "No. 31 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
	}
	airunit = {
	id = { type = 12750 id = 84 }
	name = "RAF Gutersloh"
	location = 3253
	base = 3253
		division = {
			id = { type = 12750 id = 85 }
			name = "No. 3 Squadron"
			type = cas
			model = 5 #Harrier Mk.3
			}
		division = {
			id = { type = 12750 id = 86 }
			name = "No. 4 Squadron"
			type = cas
			model = 5 #Harrier Mk.3
			}
	}
	airunit = {
	id = { type = 12750 id = 87 }
	name = "RAF Laarbruch"
	location = 6521
	base = 6521
		division = {
			id = { type = 12750 id = 88 }
			name = "No. 15 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
		division = {
			id = { type = 12750 id = 89 }
			name = "No. 16 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
		division = {
			id = { type = 12750 id = 90 }
			name = "No. 20 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
	}
	airunit = {
	id = { type = 12750 id = 91 }
	name = "RAF Wildenrath"
	location = 66
	base = 66
		division = {
			id = { type = 12750 id = 92 }
			name = "No. 19 Squadron"
			type = multi_role
			model = 6 #Phantom FGR Mk.2
			}
		division = {
			id = { type = 12750 id = 93 }
			name = "No. 92 Squadron"
			type = multi_role
			model = 6 #Phantom FGR Mk.2
			}
		division = {
			id = { type = 12750 id = 94 }
			name = "No. 60 Squadron"
			type = transport_plane
			model = 3 #Hawker Siddeley Andover
			}
	}
	#RAF United Kingdom
	airunit = {
	id = { type = 12750 id = 99 }
	name = "RAF Binbrook"
	location = 1164
	base = 1164
		division = {
			id = { type = 12750 id = 100 }
			name = "No. 5 Squadron"
			type = interceptor
			model = 4 #English Electric Lightning F.6
			}
		division = {
			id = { type = 12750 id = 101 }
			name = "No. 11 Squadron"
			type = interceptor
			model = 4 #English Electric Lightning F.6
			}
	}
	airunit = {
	id = { type = 12750 id = 102 }
	name = "RAF Leuchars"
	location = 3045
	base = 3045
		division = {
			id = { type = 12750 id = 103 }
			name = "No. 43 Squadron"
			type = multi_role
			model = 6 #Phantom FGR2
			}
		division = {
			id = { type = 12750 id = 104 }
			name = "No. 111 Squadron"
			type = multi_role
			model = 6 #Phantom FGR2
			}
	}
	airunit = {
	id = { type = 12750 id = 105 }
	name = "RAF Lossiemouth"
	location = 3047
	base = 3047
		division = {
			id = { type = 12750 id = 106 }
			name = "No. 12 Squadron"
			type = cas
			model = 5 #Blackburn Buccaneer S.2
			}
		division = {
			id = { type = 12750 id = 107 }
			name = "No. 208 Squadron"
			type = cas
			model = 5 #Blackburn Buccaneer S.2
			}
	}
	airunit = {
	id = { type = 12750 id = 108 }
	name = "RAF Marham"
	location = 17
	base = 17
		division = {
			id = { type = 12750 id = 109 }
			name = "No. 27 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
		division = {
			id = { type = 12750 id = 110 }
			name = "No. 614 Squadron"
			type = multi_role
			model = 6 #Panavia Tornado Mk.1
			}
	}
	airunit = {
	id = { type = 12750 id = 111 }
	name = "RAF Marham"
	location = 7289
	base = 7289
		division = {
			id = { type = 12750 id = 112 }
			name = "No. 56 Squadron"
			type = multi_role
			model = 6 #Phantom FGR2
			}
		division = {
			id = { type = 12750 id = 113 }
			name = "No. 74 Squadron"
			type = multi_role
			model = 6 #Phantom F-4J
			}
	}

	airunit = {
	id = { type = 12750 id = 114 }
	name = "RAF Wittering"
	location = 3035
	base = 3035
		division = {
			id = { type = 12750 id = 115 }
			name = "No. 1 Squadron"
			type = cas
			model = 5 #Harrier mk.3
			}
	}
	airunit = {
	id = { type = 12750 id = 116 }
	name = "RAF Coltishall"
	location = 17
	base = 17
		division = {
			id = { type = 12750 id = 117 }
			name = "No. 6 Squadron"
			type = cas
			model = 5 #SEPECAT Jaguar
			}
		division = {
			id = { type = 12750 id = 118 }
			name = "No. 54 Squadron"
			type = cas
			model = 5 #SEPECAT Jaguar
			}
	}
	airunit = {
	id = { type = 12750 id = 119 }
	name = "RAF Coningsby"
	location = 1164
	base = 1164
		division = {
			id = { type = 12750 id = 120 }
			name = "No. 29 Squadron"
			type = interceptor
			model = 4 #English Electric Lightning F.6
			}
	}
	airunit = {
	id = { type = 12750 id = 121 }
	name = "RAF Brize Norton"
	location = 16
	base = 16
		division = {
			id = { type = 12750 id = 122 }
			name = "No. 101 Squadron"
			type = transport_plane
			model = 3 #VC10 C.1
			}
	}
	#NAVAL BOMBERS
	#
	airunit = {
	id = { type = 12750 id = 130 }
	name = "RAF Lyneham"
	location = 16
	base = 16
		division = {
			id = { type = 12750 id = 131 }
			name = "No. 24 Squadron"
			type = transport_plane
			model = 3 #Hercules C.1
			}
		division = {
			id = { type = 12750 id = 132 }
			name = "No. 30 Squadron"
			type = transport_plane
			model = 3 #Hercules C.1
			}
		division = {
			id = { type = 12750 id = 133 }
			name = "No. 47 Squadron"
			type = transport_plane
			model = 3 #Hercules C.1
			}
		division = {
			id = { type = 12750 id = 134 }
			name = "No. 70 Squadron"
			type = transport_plane
			model = 3 #Hercules C.1
			}
	}
	airunit = {
	id = { type = 12750 id = 135 }
	name = "RAF Benson"
	location = 16
	base = 16
		division = {
			id = { type = 12750 id = 136 }
			name = "No. 115 Squadron"
			type = transport_plane
			model = 3 #Hawker Siddeley Andover C.1
			}
	}
	#Aerial units under development
	division_development = {
		name  = "No. 23 Squadron" 
		type  = interceptor
		model = 4 #Panavia Tornado F.3 (ADV)
		new_model = no
		cost  = 30
		id    = {  type = 12750 id = 5000  } 
		date  = {  year = 1988 month = january day = 1  } 
	} 
	division_development = {
		name  = "No. 25 Squadron" 
		type  = interceptor
		model = 4 #Panavia Tornado F.3 (ADV)
		new_model = no
		cost  = 30
		id    = {  type = 12750 id = 5001  } 
		date  = {  year = 1989 month = August day = 1  } 
	} 
	division_development = {
		name  = "No. 13 Squadron" 
		type  = multi_role
		model = 6 #Panavia Tornado Mk.1
		new_model = no
		cost  = 27
		id    = {  type = 12750 id = 5002  } 
		date  = {  year = 1990 month = January day = 1  } 
	} 
	#Royal Navy
	navalunit = {
	id = { type = 12750 id = 137 }
	name = "Portsmouth Flotilla"
	location = 21
	base = 21
		division = {
			id = { type = 12750 id = 138 }
			name = "HMS Invincible (R05)"
			type = escort_carrier
			model = 1
			}
		division = {
			id = { type = 12750 id = 139 }
			name = "HMS Illustrious (R06)"
			type = escort_carrier
			model = 1
			}
		division = {
			id = { type = 12750 id = 140 }
			name = "HMS Cardiff (D108)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 141 }
			name = "HMS Exeter (D89)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 142 }
			name = "HMS Southampton (D90)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 143 }
			name = "HMS Nottingham (D91)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 144 }
			name = "HMS Gloucester (D96)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 145 }
			name = "HMS Edinburgh (D97)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 146 }
			name = "HMS Battleaxe (F89)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 147 }
			name = "HMS Brilliant (F90)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 148 }
			name = "HMS Brazen (F91)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 260 }
			name = "HMS Brazen (F91)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 149 }
			name = "HMS Boxer (F92)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 150 }
			name = "HMS Beaver (F93)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 151 }
			name = "HMS Brave (F94)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 152 }
			name = "HMS Brave (F94)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 180 }
			name = "HMS Sirius (F40)"
			type = light_cruiser #Type 12I
			model = 1
			}
	}
	navalunit = {
	id = { type = 12750 id = 153 }
	name = "Devonport Flotilla"
	location = 23
	base = 23
		division = {
			id = { type = 12750 id = 154 }
			name = "HMS Birmingham (D86)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 155 }
			name = "HMS Newcastle (D87)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 156 }
			name = "HMS Glasgow (D88)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 157 }
			name = "HMS Liverpool (D92)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 158 }
			name = "HMS Manchester (D95)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 159 }
			name = "HMS York (D98)"
			type = destroyer #Type 42
			model = 2
			}
		division = {
			id = { type = 12750 id = 160 }
			name = "HMS Bristol (D23)"
			type = destroyer #Type 82
			model = 1
			}
		division = {
			id = { type = 12750 id = 161 }
			name = "HMS Ashanti (F117)"
			type = light_cruiser #Type 81
			model = 1
			}
		division = {
			id = { type = 12750 id = 162 }
			name = "HMS Avenger (F185)"
			type = light_cruiser #Type 21
			model = 2
			}
		division = {
			id = { type = 12750 id = 163 }
			name = "HMS Broadsword (F88)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 164 }
			name = "HMS Broadsword (F88)"
			type = light_cruiser #Type 22
			model = 2
			}
		division = {
			id = { type = 12750 id = 177 }
			name = "HMS Cleopatra (F28)"
			type = light_cruiser #Type 12I
			model = 1
			}
	}
	navalunit = {
	id = { type = 12750 id = 165 }
	name = "Rosyth Flotilla" #Not sure if it was active by 1985
	location = 3045
	base = 3045
		division = {
			id = { type = 12750 id = 166 }
			name = "HMS Yarmouth (F101)"
			type = light_cruiser #Type 12
			model = 1
			}
		division = {
			id = { type = 12750 id = 167 }
			name = "HMS Rothesay (F107)"
			type = light_cruiser #Type 12
			model = 1
			}
		division = {
			id = { type = 12750 id = 168 }
			name = "HMS Plymouth (F126)"
			type = light_cruiser #Type 12
			model = 1
			}
		division = {
			id = { type = 12750 id = 169 }
			name = "HMS Leander (F109)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 170 }
			name = "HMS Penelope (F127)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 171 }
			name = "HMS Ajax (F114)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 172 }
			name = "HMS Aurora (F10)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 173 }
			name = "HMS Galatea (F18)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 174 }
			name = "HMS Euryalus (F15)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 175 }
			name = "HMS Naiad (F39)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 176 }
			name = "HMS Arethusa (F38)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 178 }
			name = "HMS Phoebe (F42)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 179 }
			name = "HMS Minerva (F45)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 181 }
			name = "HMS Juno (F52)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 182 }
			name = "HMS Argonaut (F56)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 183 }
			name = "HMS Danae (F47)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 184 }
			name = "HMS Charybdis (F75)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 185 }
			name = "HMS Hermione (F58)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 186 }
			name = "HMS Jupiter (F60)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 187 }
			name = "HMS Andromeda (F57)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 188 }
			name = "HMS Scylla (F71)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 189 }
			name = "HMS Achilles (F12)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 190 }
			name = "HMS Diomede (F16)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 191 }
			name = "HMS Apollo (F70)"
			type = light_cruiser #Type 12I
			model = 1
			}
		division = {
			id = { type = 12750 id = 192 }
			name = "HMS Ariadne (F72)"
			type = light_cruiser #Type 12I
			model = 1
			}
	}
	#Royal Navy Submarine Service
	navalunit = {
	id = { type = 12750 id = 193 }
	name = "Devonport Submarine Flotilla"
	location = 23
	base = 23
		division = {
			id = { type = 12750 id = 194 }
			name = "HMS Trafalgar (S107)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 195 }
			name = "HMS Turbulent (S87)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 202 }
			name = "HMS Swiftsure (S126)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 203 }
			name = "HMS Sovereign (S108)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 204 }
			name = "HMS Superb (S109)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 207 }
			name = "HMS Spartan (S105)"
			type = nuclear_submarine
			model = 5
			}

	}
	navalunit = {
	id = { type = 12750 id = 196 }
	name = "Clyde Nuclear Attack Submarine Flotilla"
	location = 2279
	base = 2279
		division = {
			id = { type = 12750 id = 197 }
			name = "HMS Valiant (S102)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 198 }
			name = "HMS Warspite (S103)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 199 }
			name = "HMS Churchill (S46)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 200 }
			name = "HMS Conqueror (S48)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 201 }
			name = "HMS Courageous (S50)"
			type = nuclear_submarine
			model = 5
			}
		division = {
			id = { type = 12750 id = 205 }
			name = "HMS Superb (S109)"
			type = nuclear_submarine #Era 1 acime
			model = 5
			}
		division = {
			id = { type = 12750 id = 206 }
			name = "HMS Sceptre (S104)"
			type = nuclear_submarine #Era 1 acime
			model = 5
			}
		division = {
			id = { type = 12750 id = 208 }
			name = "HMS Splendid (S106)"
			type = nuclear_submarine
			model = 5
			}
	}
	navalunit = {
	id = { type = 12750 id = 209 }
	name = "Clyde Nuclear Bsllistic Missile Submarine Flotilla"
	location = 2279
	base = 2279
		division = {
			id = { type = 12750 id = 210 }
			name = "HMS Resolution (S22)"
			type = d_11 #SSBN
			model = 3
			}
		division = {
			id = { type = 12750 id = 211 }
			name = "HMS Repulse (S23)"
			type = d_11 #SSBN
			model = 3
			}
		division = {
			id = { type = 12750 id = 212 }
			name = "HMS Renown (S26)"
			type = d_11 #SSBN
			model = 3
			}
		division = {
			id = { type = 12750 id = 213 }
			name = "HMS Revenge (S27)"
			type = d_11 #SSBN
			model = 3
			}
	}
	navalunit = {
	id = { type = 12750 id = 214 }
	name = "Clyde Attack Flotilla"
	location = 2279
	base = 2279
		division = {
			id = { type = 12750 id = 215 }
			name = "HMS Oberon (S09)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 216 }
			name = "HMS Ocelot (S17)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 217 }
			name = "HMS Odin (S10)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 218 }
			name = "HMS Olympus (S12)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 219 }
			name = "HMS Onslaught (S14)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 220 }
			name = "HMS Onyx (S21)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 221 }
			name = "HMS Opportune (S20)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 222 }
			name = "HMS Opossum (S19)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 223 }
			name = "HMS Oracle (S16)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 224 }
			name = "HMS Orpheus (S11)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 225 }
			name = "HMS Osiris (S13)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 226 }
			name = "HMS Otter (S15)"
			type = submarine 
			model = 5
			}
		division = {
			id = { type = 12750 id = 227 }
			name = "HMS Otus (S18)"
			type = submarine 
			model = 5
			}
	}
	navalunit =  {
		name = "British Transport Fleet"  
		id = {  type = 12750 id = 228  }  
		location = 632 #Norfolk
		base     = 632
		division = {
			id = {  type = 12750 id = 229  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 230  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 231  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 232  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 233  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 234  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 235 }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 236  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 237  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 238  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 239  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 240  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 241  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 242  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 243  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 244  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 245  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 246  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 247  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 248  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 249  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 250 }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 251  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 252  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 253  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 254  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 255  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 256  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 257  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 12750 id = 258  }  
			name = "Transport"  
			type = transport
			model = 5
		}
	}
	#Ships under development
	division_development = {
		name = "HMS Ark Royal (R07)"
		type = escort_carrier
		model = 1
		new_model = no
		cost = 4.5
		id = { type = 12750 id = 5003 }
		date = { year = 1985 month = november day = 1 }
	}
	division_development = {
		name = "HMS London (F95)"
		type = light_cruiser
		model = 2
		new_model = no
		cost = 2.5
		id = { type = 12750 id = 5004 }
		date = { year = 1987 month = june day = 5 }
	}
	division_development = {
		name = "HMS Sheffield (F96)"
		type = light_cruiser
		model = 2
		new_model = no
		cost = 2.5
		id = { type = 12750 id = 5005 }
		date = { year = 1988 month = july day = 26 }
	}
	division_development = {
		name = "HMS Coventry (F98)"
		type = light_cruiser
		model = 2
		new_model = no
		cost = 2.5
		id = { type = 12750 id = 5006 }
		date = { year = 1988 month = october day = 14 }
	}
	division_development = {
		name = "HMS Cornwall (F99)"
		type = light_cruiser
		model = 2
		new_model = no
		cost = 2.5
		id = { type = 12750 id = 5007 }
		date = { year = 1988 month = april day = 23 }
	}
	division_development = {
		name = "HMS Cumberland (F85)"
		type = light_cruiser
		model = 2
		new_model = no
		cost = 2.5
		id = { type = 12750 id = 5008 }
		date = { year = 1989 month = june day = 10 }
	}
	division_development = {
		name = "HMS Campbeltown (F86)"
		type = light_cruiser
		model = 2
		new_model = no
		cost = 2.5
		id = { type = 12750 id = 5009 }
		date = { year = 1989 month = may day = 27 }
	}
	division_development = {
		name = "HMS Tireless (S88)"
		type = nuclear_submarine
		model = 5
		new_model = no
		cost = 8
		id = { type = 12750 id = 5010 }
		date = { year = 1985 month = October day = 5 }
	}
	division_development = {
		name = "HMS Torbay (S90)"
		type = nuclear_submarine
		model = 5
		new_model = no
		cost = 8
		id = { type = 12750 id = 5011 }
		date = { year = 1987 month = February day = 7 }
	}
	division_development = {
		name = "HMS Trenchant (S91)"
		type = nuclear_submarine
		model = 5
		new_model = no
		cost = 8
		id = { type = 12750 id = 5012 }
		date = { year = 1989 month = January day = 14 }
	}
	division_development = {
		name = "HMS Talent (S92)"
		type = nuclear_submarine
		model = 5
		new_model = no
		cost = 8
		id = { type = 12750 id = 5013 }
		date = { year = 1990 month = May day = 12 }
	}
}
 
