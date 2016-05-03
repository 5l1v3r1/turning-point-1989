##############################
# Country definition for PAK #
##############################

country =
{ tag                 = PAK
  energy              = 100
  metal               = 1000
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1533
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = {
	1482 2824 2826 2825 1494 2833 1481 1480 2834 1592 1475 2832
	2829 2830 2831 1483 2827
5344 5345 
5347 5348 5349 5350 5351 5352 5353 5354 5355 
5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 
5366 5367 5368 5369 5370 5371 5372 5373 5374 5375 
5376 5377 5378 
#Kashmir
1731 5341 5342 7904 2828 5343 5346
#Skardu
5340
	}
  controlledprovinces = {
	1482 2824 2826 2825 1494 2833 1481 1480 2834 1592 1475 2832
	2829 2830 2831 1483 2827
5344 5345 
5347 5348 5349 5350 5351 5352 5353 5354 5355 
5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 
5366 5367 5368 5369 5370 5371 5372 5373 5374 5375 
5376 5377 5378 
#Kashmir
1731 5341 5342 7904 2828 5343 5346
#Skardu
5340
	}
  nationalprovinces   = {
	1482 2824 2826 2825 1494 2833 1481 1480 2834 1592 1475 2832
	2829 2830 2831 1483 2827 1731 1474 2828 1728 1430 2835
	1705 1476 1288 1285 1286 1590
5336 5337 5338 5339 5340 5341 5342 5343 5344 5345 
5346 5347 5348 5349 5350 5351 5352 5353 5354 5355 
5356 5357 5358 5359 5360 5361 5362 5363 5364 5365 
5366 5367 5368 5369 5370 5371 5372 5373 5374 5375 
5376 5377 5378 5195 5196 5197 5198 5207 5208
5249 5250 5251 5252 5253 5254 1477 1469 5256 1457 1519 5206 1456 5204
6920 7904 7192 7924 7925 7305 7926 7983
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
}