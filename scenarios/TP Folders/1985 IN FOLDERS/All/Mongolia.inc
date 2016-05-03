#####################
# Country main data #
#####################

country =
{ tag                    = MON
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 500
  money                  = 10
  manpower               = 200
  capital                = 1404
  
  diplomacy = { 
	relation = { tag = CHC value = -50 }
  }
  
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }
  SpyInfo                = { country = "MAN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 1 }
  nationalprovinces      = { 1404 1420 1419 1434 1438 1385 1207 1208 1398 1386 1439 1273 1272 1388 2337 2246 1382
3762 3763 3764 3765 3766 3767 3768 3769 3770 3771 3772 3773
3755 3756 3757 3758 3759 3760 3594 3595 3761 3750 3751 3752 3753 3754 1418
5472 5473 5474 5475 5476 5477 5478 5479 5480
3740 1421 5502 3741 3744 5493 5537 5528 5542 5541 5622
5624 5625 5623 5631 5632 5628 5629 5630 2318 1397 2317
2348 2344 5636 5635 5633 5658 5657 5681 1387 5677 5680
5676 5675 1380 5661 5660 5665 5664 5662 5663 5659
7917 7918
  }
  ownedprovinces         = { 5476 3767 3768 3762 7918 1420 3763 3765 7917 3764 5477 1434 3766 1419 1438 1404 5480 3772 3773 3769 5479 3770 3771 1385 5478 }
  controlledprovinces    = { 5476 3767 3768 3762 7918 1420 3763 3765 7917 3764 5477 1434 3766 1419 1438 1404 5480 3772 3773 3769 5479 3770 3771 1385 5478 }
  claimedprovinces 		 = { 5497 5504 5503 3742 }

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020
   #Motorized
   1100 1110
   #Mountain
   1160 1170
   #Special Forces
   1250 1260
   #Naval Infantry
   1560 1570
   #Airborne Infantry
   1670 1680
   #Air Cavalry
   1396 #1400
   #Armored Cavalry
   13060
   #Mechanized
   1470 1480
   #Irregular Infantry
   1360 1370
   #Combat Engineers
   1830 1840
   #Supply and Repair
   1990 199100
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630
   #Infantry Fighting Vehicles	
   2100
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450
   #Armored Personnel Carriers
   2170 2180 2850
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
   3900 3910
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
   15040 15050 4360
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
   4450
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
   5810
   #Heavy Industry
   5130
   #Material Science
   53050 63160
   #Construction Eng.
   5800
   #Rocketry
   5560 5910
   #5426 5440 5430
   #Agriculture
   5700 5710
   #Oil
   5190 5220
   #Computing
   5310 54010 54020
   #Nuclear
   5470 5480
   #Cryptography
   5350 5360
   #Medicine
   5600 5610
   #5630
   5660 5730
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   #6900 6730 6750 6820 6740 6810 6760 6210 6220 6230 6240 6250 6260 6270 6280 6290 14100 #NATO
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
   82500 82510
   #Naval Capability
   8010
   #Amphibious Warfare
   82300 82310 
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 7 
     freedom           = 5 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 4 
     interventionism   = 1
  }
  headofstate            = { type = 9 id = 94001 }
  headofgovernment       = { type = 9 id = 94002 }
  foreignminister        = { type = 9 id = 94003 }
  armamentminister       = { type = 9 id = 94004 }
  ministerofsecurity     = { type = 9 id = 94005 }
  ministerofintelligence = { type = 9 id = 94006 }
  chiefofstaff           = { type = 9 id = 94007 }
  chiefofarmy            = { type = 9 id = 94008 }
  chiefofnavy            = { type = 9 id = 94009 }
  chiefofair             = { type = 9 id = 94010 }

	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 15800 id = 1 }
		location = 1404 #1124
		name = "Mongolian Army"
		division = {
			id = { type = 15800 id = 2 }
			name     = "1st Infantry Division"
			strength = 60
			type     = infantry
			model    = 1
                      
		}
		division = {
			id = { type = 15800 id = 3 }
			name     = "2nd Infantry Division"
			strength = 60
			type     = motorized
			model    = 1
		}
                division = {
			id = { type = 15800 id = 4 }
			name     = "3rd Infantry Division"
			strength = 60
			type     = motorized
			model    = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 15800 id = 200 }
		location	= 1404 #1124
		base		= 1404 #1124
		name = "1st Air Force"
		division = {
			id = { type = 15800 id = 201 }
			name = "1st Squadron"
			type = multi_role
			strength = 100
			model = 4
		}
	}
} 
 
