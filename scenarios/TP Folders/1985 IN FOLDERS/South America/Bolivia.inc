#####################
# Country main data #
#####################

country =
{ tag                    = BOL
  manpower               = 200
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 832
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 7 
     political_left    = 6 
     free_market       = 8 
     freedom           = 7 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 5 
  }
  nationalprovinces      = { 836 838 832 828 827 837 822 2374 2375 3841 3842 3843 3844 3845 
3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 
3858 3967 840 3885 3884 3812 3819 3818 3816 3815 3817 3814
5452 5453 5454 5455 5451 5449 5448 3983 5434 5433 7418 7419 7420
7422 3956 3961 3833 7427 2003 7421 7095 7096 7417 7428 7423 5447
  }
  ownedprovinces         = { 836 838 832 828 827
2374 2375 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858
5452 5453 5454 5455 7418 7419 7420
  }
  controlledprovinces    = { 836 838 832 828 827
2374 2375 3841 3842 3843 3844 3845 3846 3847 3848 3849 3850 3851 3852 3853 3854 3855 3856 3857 3858
5452 5453 5454 5455 7418 7419 7420
  }

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
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }

  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 6800 id = 1 }
    location = 832 #2020
    name     = "Región Militar no.1"
    division =
    { id            = { type = 6800 id = 2 }
      name          = "1a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
  landunit =
  { id       = { type = 6800 id = 3 }
    location = 838 #2021
    name     = "Región Militar no.2"
    division =
    { id            = { type = 6800 id = 4 }
      name          = "2a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
    division =
    { id            = { type = 6800 id = 5 }
      name          = "10a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
  landunit =
  { id       = { type = 6800 id = 6 }
    location = 838 #2021
    name     = "Región Militar no.3"
    division =
    { id            = { type = 6800 id = 7 }
      name          = "3a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
    division =
    { id            = { type = 6800 id = 8 }
      name          = "4a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
   landunit =
  { id       = { type = 6800 id = 9 }
    location = 838 #2021
    name     = "Región Militar no.4"
    division =
    { id            = { type = 6800 id = 10 }
      name          = "7a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
   landunit =
  { id       = { type = 6800 id = 11 }
    location = 828 #2019
    name     = "Región Militar no.5"
    division =
    { id            = { type = 6800 id = 12 }
      name          = "6a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
		}
	}
    landunit =
  { id       = { type = 6800 id = 13 }
    location = 827 #2063
    name     = "Región Militar no.6"
    division =
    { id            = { type = 6800 id = 14 }
      name          = "7a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
     division =
    { id            = { type = 6800 id = 15 }
      name          = "8a División del Ejército"
      strength      = 30
      type          = motorized
      model         = 1      
    }
  }
} 
 