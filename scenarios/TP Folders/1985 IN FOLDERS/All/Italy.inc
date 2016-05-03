#####################
# Country main data #
#####################

country =
{ tag                    = ITA
  manpower               = 500
  ai                     = "ITA_1985.ai" 
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 20000
  belligerence           = 0 # to avoid MP problems
  capital                = 515
  transports             = 400
  escorts                = 100

  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 3 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 4 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 1 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 3 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 1 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }

  nationalprovinces      = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534

							1408 542 543 545 544 668 666
							372 2509 366 2399 2457 2300
							3056 3057 3058 3059
							3218	3219	3220	3221	3222	3223	3224	3225	3226	3227
							3356
							2622 2621 2871 2870 2623 2624
6525 6546 6547 6548 6549 6550 6551 6552 6553 6554 6555
7123 7124 7126 3137
  }
  ownedprovinces         = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534

							1408 542 543 545 544 668 666
							2399
							3056 3057 3058 3059
							3218	3219	3220	3221	3222	3223	3224	3225	3226	3227
							3356
							2622 2621 2871 2870 2623 2624
6525 6546 6547 6548 6549 6550 6551 6552 6553 6554 6555
7123 7126 
  }

  controlledprovinces    = { 525 526 524 523 522 521 520 519 518 517 516 515 513 514 512 379 369 368 531 370 371 378 534

							1408 542 543 545 544 668 666
							2399
							3056 3057 3058 3059
							3218	3219	3220	3221	3222	3223	3224	3225	3226	3227
							3356
							2622 2621 2871 2870 2623 2624
6525 6546 6547 6548 6549 6550 6551 6552 6553 6554 6555
7123 7126 
  }
	claimedprovinces 	= {}

  # ITA 1936 techs
  # ######################
  # Early fighter
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
   6560 6030 6120 6110 6130
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
      democratic        = 9 
      political_left    = 6  
      freedom           = 10  
      free_market       = 10  
      professional_army = 2  
      defense_lobby     = 1  
      interventionism   = 1
  }
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3076 }
  ministerofsecurity     = { type = 9 id = 3005 }
  ministerofintelligence = { type = 9 id = 3006 }
  chiefofstaff           = { type = 9 id = 3007 }
  chiefofarmy            = { type = 9 id = 3008 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }
 
    #######################
	## ITALIAN OOB
	#######################
   landunit = 
  {  id       = {  type = 23500 id = 1  } 
    name     = "3rd Army Corps" 
    location = 370
    Division = 
    {  id       = {  type = 23500 id = 2 } 
      name     = "31st Centauro Brigade HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 3  } 
       name     = "31st Centauro ArmDiv" 
       type     = armor
       model    = 5 
       strength = 100
	   extra    = engineer
       brigade_model = 5
		}   
 	 division = 
     { id       = {  type = 23500 id = 4  } 
       name     = "3rd Goito MechBrig" 
       type     = d_06
       model    = 4 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3	   
      }
	}
###########
  landunit = 
  {  id       = {  type = 23500 id = 5  } 
    name     = "Legnano Mechanized Brigade" 
    location = 368
    Division = 
    {  id       = {  type = 23500 id = 6 } 
      name     = "Legnano MechBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 7  } 
       name     = "Legnano MechBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	   extra    = engineer
       brigade_model = 5
		}   
 	 division = 
     { id       = {  type = 23500 id = 8  } 
       name     = "18th Bersaglieri" 
       type     = d_06
       model    = 4 
       strength = 95
       extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
	 landunit = 
  {  id       = {  type = 23500 id = 9  } 
    name     = "Brescia Mechanized Brigade" 
    location = 2623
    Division = 
    {  id       = {  type = 23500 id = 10 } 
      name     = "Brescia MechBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 11  } 
       name     = "Brescia MechBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 12  } 
       name     = "85th Mech Infantry" 
       type     = d_06
       model    = 4 
       strength = 95
       extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
 landunit = 
  {  id       = {  type = 23500 id = 13  } 
    name     = "Trieste Mechanized Brigade" 
    location = 668
    Division = 
    {  id       = {  type = 23500 id = 14 } 
      name     = "Trieste MechBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 15  } 
       name     = "Trieste MechBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 16  } 
       name     = "40th Mech Infantry" 
       type     = d_06
       model    = 4 
       strength = 95
       extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
 landunit = 
  {  id       = {  type = 23500 id = 17  } 
    name     = "Cremona Motorized Brigade" 
    location = 531
    Division = 
    {  id       = {  type = 23500 id = 18 } 
       name     = "Cremona MotBrig HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 19  } 
       name     = "Cremona MotBrig" 
       type     = d_02
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 20  } 
       name     = "40th Motorized Infantry" 
       type     = d_02
       model    = 4 
       strength = 95
       extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
 landunit = 
  {  id       = {  type = 23500 id = 21  } 
    name     = "4th Alpini Army Corp" 
    location = 1408
    Division = 
    {  id       = {  type = 23500 id = 22 } 
       name     = "4th Alpini HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 23  } 
       name     = "Belluno Alpini" 
       type     = d_09
       model    = 5 
       strength = 100
	   extra    = artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 24  } 
       name     = "Agordo Alpini" 
       type     = d_09
       model    = 4 
       strength = 95
       extra    = artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 25  } 
    name     = "Julia Alpine Brigade" 
    location = 516
    Division = 
    {  id       = {  type = 23500 id = 26 } 
       name     = "Julia Alpini HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 27  } 
       name     = "Gemona Alpini" 
       type     = d_09
       model    = 5 
       strength = 100
	   extra    = artillery
       brigade_model = 3
	}   
 	 division = 
     { id       = {  type = 23500 id = 28  } 
       name     = "Tolmezzo Alpini" 
       type     = d_09
       model    = 4 
       strength = 95
       extra    = artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 29  } 
    name     = "Orobica Alpine Brigade" 
    location = 534
    Division = 
    {  id       = {  type = 23500 id = 30 } 
       name     = "Orobica Alpini HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 31  } 
       name     = "Orobica Alpini" 
       type     = d_09
       model    = 5 
       strength = 100
	   extra    = artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 32  } 
       name     = "Bergamo Alpini" 
       type     = d_09
       model    = 4 
       strength = 95
       extra    = artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 33  } 
    name     = "Taurinense Alpine Brigade" 
    location = 531
    Division = 
    {  id       = {  type = 23500 id = 34 } 
       name     = "Taurinense Alpini HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 35  } 
       name     = "Susa Alpini" 
       type     = d_09
       model    = 5 
       strength = 100
	   extra    = artillery
       brigade_model = 3
     }   
 	 division = 
     { id       = {  type = 23500 id = 36  } 
       name     = "Aosta Alpini" 
       type     = d_09
       model    = 4 
       strength = 95
       extra    = artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 37  } 
    name     = "Tridentina Alpine Brigade" 
    location = 512
    Division = 
    {  id       = {  type = 23500 id = 38 } 
       name     = "Tridentina Alpini HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 39  } 
       name     = "Trento Alpini" 
       type     = d_09
       model    = 5 
       strength = 100
	   extra    = artillery
       brigade_model = 3
	}   
 	 division = 
     { id       = {  type = 23500 id = 40  } 
       name     = "262nd Val Brenta Alpini" 
       type     = d_09
       model    = 4 
       strength = 95
		extra    = artillery
       brigade_model = 3	   
    }
  }
############
landunit = 
  {  id       = {  type = 23500 id = 41  } 
    name     = "5th Army Corps" 
    location = 668
    Division = 
    {  id       = {  type = 23500 id = 42 } 
      name     = "32nd Mameli Armored HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 43  } 
       name     = "32nd Memeli ArmDiv" 
       type     = armor
       model    = 5 
       strength = 100
	   extra    = engineer
       brigade_model = 5
		}   
 	 division = 
     { id       = {  type = 23500 id = 44  } 
       name     = "23rd Bersaglieri MechBrig" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3 
      }
	}
###########
  landunit = 
  {  id       = {  type = 23500 id = 45  } 
    name     = "132nd Armored Brigade" 
    location = 368
    Division = 
    {  id       = {  type = 23500 id = 46 } 
      name     = "132nd ArmBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 47  } 
       name     = "132nd ArmBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	   extra    = engineer
       brigade_model = 5
		}   
 	 division = 
     { id       = {  type = 23500 id = 48  } 
       name     = "27th Bersaglieri" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
	 landunit = 
  {  id       = {  type = 23500 id = 49  } 
    name     = "8th Garibaldi MechBrig" 
    location = 2623
    Division = 
    {  id       = {  type = 23500 id = 50 } 
      name     = "8th Garibaldi MechBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 51  } 
       name     = "7th MechBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 52  } 
       name     = "73rd Mech Infantry" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
      }
	}
############
 landunit = 
  {  id       = {  type = 23500 id = 53  } 
    name     = "Pozzuolo di Friuli ArmBrig" 
    location = 368
    Division = 
    {  id       = {  type = 23500 id = 54 } 
      name     = "Pozzuolo di Friuli ArmBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 55  } 
       name     = "5th Tanks" 
       type     = armor
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 56  } 
       name     = "120th Mech Infantry" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
 landunit = 
  {  id       = {  type = 23500 id = 57  } 
    name     = "Mantova Mechanized Brigade" 
    location = 668
    Division = 
    {  id       = {  type = 23500 id = 58 } 
      name     = "Mantova MechBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 59  } 
       name     = "59th MechBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 60  } 
       name     = "76th MechBrig" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
 landunit = 
  {  id       = {  type = 23500 id = 61  } 
    name     = "Vittorio Veneto MechBrig" 
    location = 1408
    Division = 
    {  id       = {  type = 23500 id = 62 } 
      name     = "Vittorio Veneto HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 63  } 
       name     = "6th Tanks" 
       type     = armor
       model    = 5 
       strength = 100
	   extra    = engineer
       brigade_model = 5
		}   
 	 division = 
     { id       = {  type = 23500 id = 64  } 
       name     = "1st Motorized" 
       type     = d_02
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 65  } 
    name     = "Gorizia MechBrig" 
    location = 516
    Division = 
    {  id       = {  type = 23500 id = 66 } 
      name     = "Gorizia MechBrig HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 67  } 
       name     = "22nd MechInf" 
       type     = d_06
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 68  } 
       name     = "183rd MechInf" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 69  } 
    name     = "4th Infantry" 
    location = 531
    Division = 
    {  id       = {  type = 23500 id = 70 } 
      name     = "4th Infantry HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 71  } 
       name     = "11th Infantry" 
       type     = d_02
       model    = 5 
       strength = 100
	   extra    = artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 72  } 
       name     = "23rd Infantry" 
       type     = d_02
       model    = 4 
       strength = 95
		extra    = artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 73  } 
    name     = "Piemonte Alpini Brigade" 
    location = 512
    Division = 
    {  id       = {  type = 23500 id = 74 } 
      name     = "Piemonte Alpini HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
       brigade_model = 2
     }
	 division = 
     { id       = {  type = 23500 id = 75  } 
       name     = "117th Alpini" 
       type     = d_09
       model    = 5 
       strength = 100
	   extra    = artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 76  } 
       name     = "217th Alpini" 
       type     = d_09
       model    = 4 
       strength = 95
		extra    = artillery
       brigade_model = 3	   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 77  } 
    name     = "Folgore Para Brigade" 
    location = 523
    Division = 
    {  id       = {  type = 23500 id = 78 } 
      name     = "Folgore Para HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  
     }
	 division = 
     { id       = {  type = 23500 id = 79  } 
       name     = "Folgore ParaBrig" 
       type     = d_08
       model    = 5 
       strength = 100
	  
		}   
 	 division = 
     { id       = {  type = 23500 id = 80  } 
       name     = "5th Para" 
       type     = d_08
       model    = 4 
       strength = 95
		   
      }
	}
############
landunit = 
  {  id       = {  type = 23500 id = 81  } 
    name     = "Friuli Motorized Brigade" 
    location = 370
    Division = 
    {  id       = {  type = 23500 id = 82 } 
      name     = "Friuli HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  
     }
	 division = 
     { id       = {  type = 23500 id = 83  } 
       name     = "Friuli Motorized Brigade" 
       type     = d_02
       model    = 5 
       strength = 100
	   extra    = sp_artillery
       brigade_model = 3
	  
		}   
 	 division = 
     { id       = {  type = 23500 id = 84  } 
       name     = "35th Mtorized" 
       type     = d_02
       model    = 4 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
		   
      }
	}
###########
landunit = 
  {  id       = {  type = 23500 id = 85  } 
    name     = "Granatieri Mechanized Brigade" 
    location = 515
    Division = 
    {  id       = {  type = 23500 id = 86 } 
      name     = "Granatieri HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  
     }
	 division = 
     { id       = {  type = 23500 id = 87  } 
       name     = "Granatieri MechBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	  extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 88  } 
       name     = "3rd Granatieri" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3  
      }
	}
landunit = 
  {  id       = {  type = 23500 id = 89  } 
    name     = "Acqui Motorized Brigade" 
    location = 6546
    Division = 
    {  id       = {  type = 23500 id = 90 } 
      name     = "Acqui HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  
     }
	 division = 
     { id       = {  type = 23500 id = 91  } 
       name     = "Acqui MotBrig" 
       type     = d_02
       model    = 5 
       strength = 100
	  extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 92  } 
       name     = "70th Motorized" 
       type     = d_02
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
      }
	}
##########
landunit = 
  {  id       = {  type = 23500 id = 93  } 
    name     = "Pinerolo Mechanized Infantry" 
    location = 544
    Division = 
    {  id       = {  type = 23500 id = 94 } 
      name     = "Pinerolo HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  
     }
	 division = 
     { id       = {  type = 23500 id = 95  } 
       name     = "Pinerolo MechBrig" 
       type     = d_06
       model    = 5 
       strength = 100
	  extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 96  } 
       name     = "67th Bersaglieri" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3  
      }
	}
###########
landunit = 
  {  id       = {  type = 23500 id = 97  } 
    name     = "Aosta Motorized Brigade" 
    location = 6546
    Division = 
    {  id       = {  type = 23500 id = 98 } 
      name     = "Aosta HQ" 
      type     = hq 
      model    = 5 
      strength = 100 
	  
     }
	 division = 
     { id       = {  type = 23500 id = 99  } 
       name     = "Aosta MotBrig" 
       type     = d_02
       model    = 5 
       strength = 100
	  extra    = sp_artillery
       brigade_model = 3
		}   
 	 division = 
     { id       = {  type = 23500 id = 100  } 
       name     = "62nd Motorized" 
       type     = d_02
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3   
      }
	}
# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 23500 id = 101 }
	name = "2nd Stormo"
	location = 368 
	base = 368 
	division = {
	id = { type = 23500 id = 102 }
		name = "14th Gruppo"
		strength = 100
		type = multi_role
		model = 7
			}
	}
#########
airunit = {
	id = { type = 23500 id = 103 }
	name = "3rd Stormo"
	location = 370 
	base = 370 
	division = {
	id = { type = 23500 id = 104 }
		name = "28th Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 23500 id = 105 }
		name = "132nd Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	}
#############
airunit = {
	id = { type = 23500 id = 106 }
	name = "4th Stormo"
	location = 378 
	base = 378 
	division = {
	id = { type = 23500 id = 107 }
		name = "9th Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 23500 id = 108 }
		name = "20th Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	}
#############
airunit = {
	id = { type = 23500 id = 109 }
	name = "5th Stormo"
	location = 515 
	base = 515 
	division = {
	id = { type = 23500 id = 110 }
		name = "23rd Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 23500 id = 111 }
		name = "102nd Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	}
#############
airunit = {
	id = { type = 23500 id = 112 }
	name = "6th Stormo"
	location = 523 
	base = 523 
	division = {
	id = { type = 23500 id = 113 }
		name = "23rd Gruppo"
		strength = 100
		type = multi_role
		model = 7
			}
	division = {
	id = { type = 23500 id = 114 }
		name = "102nd Gruppo"
		strength = 100
		type = multi_role
		model = 7
			}
	}
#############
airunit = {
	id = { type = 23500 id = 115 }
	name = "8th Stormo"
	location = 525 
	base = 525 
	division = {
	id = { type = 23500 id = 116 }
		name = "101st Gruppo"
		strength = 100
		type = strategic_bomber
		model = 1
			}
	}
#############
airunit = {
	id = { type = 23500 id = 117 }
	name = "9th Stormo"
	location = 534 
	base = 534 
	division = {
	id = { type = 23500 id = 118 }
		name = "10th Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	}
#############
airunit = {
	id = { type = 23500 id = 119 }
	name = "32nd Stormo"
	location = 368 
	base = 368 
	division = {
	id = { type = 23500 id = 120 }
		name = "13th Gruppo"
		strength = 100
		type = strategic_bomber
		model = 1
			}
	}
#############
airunit = {
	id = { type = 23500 id = 121 }
	name = "36th Stormo"
	location = 370 
	base = 370 
	division = {
	id = { type = 23500 id = 122 }
		name = "12th Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 23500 id = 123 }
		name = "156th Gruppo"
		strength = 100
		type = multi_role
		model = 7
			}
	}
#############
airunit = {
	id = { type = 23500 id = 124 }
	name = "37th Stormo"
	location = 378 
	base = 378 
	division = {
	id = { type = 23500 id = 125 }
		name = "18th Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	}
#############
airunit = {
	id = { type = 23500 id = 126 }
	name = "51st Stormo"
	location = 515 
	base = 515 
	division = {
	id = { type = 23500 id = 127 }
		name = "22nd Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	}
#############
airunit = {
	id = { type = 23500 id = 128 }
	name = "53rd Stormo"
	location = 521 
	base = 521 
	division = {
	id = { type = 23500 id = 129 }
		name = "21st Gruppo"
		strength = 100
		type = interceptor
		model = 4
			}
	}
#############
airunit = {
	id = { type = 23500 id = 130 }
	name = "16th Stormo"
	location = 523 
	base = 523 
	division = {
	id = { type = 23500 id = 131 }
		name = "57th Gruppo IT"
		strength = 100
		type = transport_plane
		model = 3
			}
	division = {
	id = { type = 23500 id = 132 }
		name = "58th Gruppo IT"
		strength = 100
		type = transport_plane
		model = 3
			}
	division = {
	id = { type = 23500 id = 133 }
		name = "80th Gruppo IT"
		strength = 100
		type = transport_plane
		model = 3
			}
	division = {
	id = { type = 23500 id = 134 }
		name = "81st Gruppo IT"
		strength = 100
		type = transport_plane
		model = 3
			}
	}
###################
## NAVY
###############
	navalunit =  {
		name = "Marina Militare 1"  
		id = {  type = 23500 id = 135  }  
		location = 368  
		base     = 368  
		division = {
			id = {  type = 23500 id = 136  }  
			name = "Genoa"  
			type = heavy_cruiser 
			model = 6
		}
		division = {
			id = {  type = 23500 id = 137  }  
			name = "Toto"  
			type = destroyer 
			model = 6
		}
		division = {
			id = {  type = 23500 id = 138  }  
			name = "Marko"  
			type = destroyer 
			model = 6
		}
	}
#######
	navalunit =  {
		name = "Marina Militare 2"  
		id = {  type = 23500 id = 139  }  
		location = 523  
		base     = 523  
		division = {
			id = {  type = 23500 id = 140  }  
			name = "Brindisi"  
			type = heavy_cruiser 
			model = 6
		}
		division = {
			id = {  type = 23500 id = 141  }  
			name = "Napoli"  
			type = destroyer 
			model = 6
		}
		division = {
			id = {  type = 23500 id = 142  }  
			name = "Ancona"  
			type = destroyer 
			model = 6
		}
	}
#######
	navalunit =  {
		name = "Marina Militare 3"  
		id = {  type = 23500 id = 143 }  
		location = 525  
		base     = 525  
		division = {
			id = {  type = 23500 id = 144  }  
			name = "Roma"  
			type = heavy_cruiser 
			model = 6
		}
		division = {
			id = {  type = 23500 id = 145  }  
			name = "Bruschetta"  
			type = destroyer 
			model = 6
		}
		division = {
			id = {  type = 23500 id = 146  }  
			name = "Palermo"  
			type = destroyer 
			model = 6
		}
	}
}