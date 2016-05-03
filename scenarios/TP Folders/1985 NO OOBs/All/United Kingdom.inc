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
   5560 5910 5410 53030 5450 5460 
   5426 5440 5430 #5476 Moon Landing
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
}
 
