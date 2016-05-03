
##############################
# Country definition for ISR #
##############################

country =
{ tag                 = ISR
    energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 50
  money               = 100
  capital             = 1008 #2760
  manpower            = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 3
    freedom           = 8
    free_market       = 10
    professional_army = 4
    defense_lobby     = 10
    interventionism   = 10
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = {
		1798  1881 404 406 7290 7283 7282 7286 7284 7285 1797 1799
	}
  controlledprovinces = {
		1798  1881 404 406 7290 7283 7282 7286 7284 7285 1797 1799
	}
  nationalprovinces   = {
		1798  1881 404 406 7290 7283 7282 7286 7284 7285
	}
  claimedprovinces = { 1795 1797 1799 1800 1801 2899 4604 4605 }
  
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
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12800 id = 1 }
    location = 7290 #1013
    name     = "Northern Command"
    division =
    { id       = { type = 12800 id = 2 }
      name     = "Northern Command HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 3 }
    location = 7290 #1013
    name     = "36th 'Gaash' Armor Division"
    division =
    { id       = { type = 12800 id = 4 }
      name     = "7th 'Saar me-Golan' Armor Brigade"
      type     = light_armor
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 5 }
      name     = "188th 'Barak' Armor Brigade"
      type     = light_armor
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 6 }
      name     = "1st 'Golani' Infantry Brigade"
      type     = d_01
      model    = 5
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 7 }
    location = 7290 #1013
    name     = "91st 'Galil' Division"
    division =
    { id       = { type = 12800 id = 8 }
      name     = "2nd 'Carmeli' Infantry Brigade"
      type     = d_01
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 9 }
      name     = "300th 'Bar'am' Infantry Brigade"
      type     = d_01
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 10 }
      name     = "769th 'Iram' Infantry Brigade"
      type     = d_01
      model    = 5
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 11 }
    location = 1798 #1008
    name     = "Central Command"
    division =
    { id       = { type = 12800 id = 12 }
      name     = "Central Command HQ"
      type     = hq
      model    = 1
      strength = 100
    } 
  }
  landunit =
  { id       = { type = 12800 id = 13 }
    location = 1798 #1008
    name     = "162nd 'Ha-Plada' Armor Division"
    division =
    { id       = { type = 12800 id = 14 }
      name     = "401st 'I'kvot Ha-Barzel' Armor Brigade"
      type     = light_armor
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 15 }
      name     = "900th 'Kfir' Infantry Brigade"
      type     = d_01
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 16 }
      name     = "933rd 'Nahal' Infantry Brigade"
      type     = d_01
      model    = 5
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 17 }
    location = 1798 #1008
    name     = "98th 'Ha-Esh' Paratroopers Division"
    division =
    { id       = { type = 12800 id = 18 }
      name     = "35th 'Flying Serpent' Paratroopers Brigade"
      type     = d_08
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 19 }
      name     = "551st 'Hetzei Ha-Esh' Paratroopers Brigade"
      type     = d_08
      model    = 5
      strength = 20
    }
    division =
    { id       = { type = 12800 id = 20 }
      name     = "623rd 'Hod Ha-Hanit' Paratroopers Brigade"
      type     = d_08
      model    = 5
      strength = 20
    }
  }
  landunit =
  { id       = { type = 12800 id = 21 }
    location = 1798 #1008
    name     = "West Bank Division"
    division =
    { id       = { type = 12800 id = 22 }
      name     = "'Maccabim' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 23 }
      name     = "'Yehuda' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 24 }
      name     = "'Menashe' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 25 }
      name     = "'Shomron' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 26 }
      name     = "'Benyamin' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 27 }
      name     = "'Etzion' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 28 }
      name     = "'Ephraim' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 29 }
    location = 7285 #1010
    name     = "Southern Command"
    division =
    { id       = { type = 12800 id = 30 }
      name     = "Southern Command HQ"
      type     = hq
      model    = 1
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 31 }
    location = 7285 #1010
    name     = "366th 'Amud ha-Esh' Armor Division"
    division =
    { id       = { type = 12800 id = 32 }
      name     = "460th 'Bnei Or' Armor Brigade" 
      type     = light_armor
      model    = 5
      strength = 50
    }
    division =
    { id       = { type = 12800 id = 33 }
      name     = "84th 'Giv'ati' Infantry Brigade"
      type     = d_01
      model    = 5
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 34 }
    location = 7285 #1010
    name     = "Gaza Division"
    division =
    { id       = { type = 12800 id = 35 }
      name     = "'Gefen' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 36 }
      name     = "'Katif' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 37 }
    location = 7285 #1010
    name     = "80th 'Edom' Division"
    division =
    { id       = { type = 12800 id = 38 }
      name     = "'Arava' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 39 }
      name     = "'Sagi' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
    division =
    { id       = { type = 12800 id = 40 }
      name     = "'Eilat' Territorial Brigade"
      type     = d_06
      model    = 5
      strength = 100
    }
  }
  landunit =
  { id       = { type = 12800 id = 41 }
    location = 1798 #1008
    name     = "Sayeret Matkal"
    division =
    { id       = { type = 12800 id = 42 }
      name     = "Sayeret Matkal"
      type     = d_03
      model    = 5
      strength = 50
      }
  }

  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 12800 id = 304 }
    location = 404 #1011
    base     = 404 #1011
    name     = "7th Flotilla"
    division =
    { id    = { type = 12800 id = 305 }
      name  = "INS Dolphin"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 12800 id = 306 }
      name  = "INS Leviathan"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 12800 id = 307 }
      name  = "INS Tekumah"
      type  = submarine
      model = 5
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 12800 id = 200 }
    location = 404 #1011
    base     = 404 #1011
    name     = "Air Force North"
    division =
    { id       = { type = 12800 id = 201 }
      name     = "Wing 1"
      type     = interceptor
      strength = 100
      model    = 5
    }
    division =
    { id       = { type = 12800 id = 202 }
      name     = "Wing 4"
      type     = interceptor
      strength = 100
      model    = 5
    }
    division =
    { id       = { type = 12800 id = 203 }
      name     = "Wing 6"
      type     = interceptor
      strength = 100
      model    = 5
    }
  }
  airunit =
  { id       = { type = 12800 id = 204 }
    location = 1798 #1008
    base     = 1798 #1008
    name     = "Air Force South"
    division =
    { id       = { type = 12800 id = 205 }
      name     = "Wing 8"
      type     = multi_role
      strength = 70
      model    = 7
    }
    division =
    { id       = { type = 12800 id = 206 }
      name     = "Wing 25"
      type     = interceptor
      strength = 100
      model    = 5
    }
    division =
    { id       = { type = 12800 id = 207 }
      name     = "Wing 28"
      type     = interceptor
      strength = 100
      model    = 5
    }
  }
  airunit =
  { id       = { type = 12800 id = 217 }
    location = 404 #1011
    base     = 404 #1011
    name     = "Israeli Transport Force"
    division =
    { id       = { type = 12800 id = 218 }
      name     = "1st Transport Wing"
      type     = transport_plane
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 12800 id = 219 }
      name     = "2nd Transport Wing"
      type     = transport_plane
      strength = 100
      model    = 2
    }
  }
}
