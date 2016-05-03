
##################################
# Country definition for Algeria #
##################################

country =
{ tag                 = ALG
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 949
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 7
    freedom           = 4
    free_market       = 4
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 5
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = { 949 953 950 947 944 943 948 951 946 945 942 1013 2904 2905 2906 2907 2910 2909 2908 2912 2911 2914 2913 2915 2028
4510 4511 4512 4513 4514 4515 4516 4517 4518 4519 4520 4521 4522 4523 4524 4525 4526 4527 4528 4529 4530 4531 4532 7297 7296
	}
  controlledprovinces = { 949 953 950 947 944 943 948 951 946 945 942 1013 2904 2905 2906 2907 2910 2909 2908 2912 2911 2914 2913 2915 2028
4510 4511 4512 4513 4514 4515 4516 4517 4518 4519 4520 4521 4522 4523 4524 4525 4526 4527 4528 4529 4530 4531 4532 7297 7296
	}
  nationalprovinces   = { 949 953 950 947 944 943 948 951 946 945 942 1013 2904 2905 2906 2907 2910 2909 2908 2912 2911 2914 2913 2915 2028
4510 4511 4512 4513 4514 4515 4516 4517 4518 4519 4520 4521 4522 4523 4524 4525 4526 4527 4528 4529 4530 4531 4532 7297 7296
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
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 5200 id = 1 }
    location = 950 #728
    name     = "Military Region II"
    division =
    { experience    = 5
      id            = { type = 5200 id = 2 }
      name          = "U/I Airborne Division"
      strength      = 100
      type          = paratrooper
      model         = 3
    }
    division =
    { id            = { type = 5200 id = 3 }
      name          = "U/I Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 3
    }
    division =
    { id            = { type = 5200 id = 4 }
      name          = "1st Armored Division"
      strength      = 100
      type          = armor
      model         = 3
      extra         = anti_air
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 5200 id = 5 }
    location = 2913 #739
    name     = "Military Region III"
    division =
    { id            = { type = 5200 id = 6 }
      name          = "8th Armored Division"
      strength      = 100
      type          = armor
      model         = 3
      extra         = anti_air
      brigade_model = 0
    }
    division =
    { id            = { type = 5200 id = 7 }
      name          = "40th Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 3
      extra         = anti_air
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 5200 id = 8 }
    location = 942 #734
    name     = "Military Region I"
    division =
    { id            = { type = 5200 id = 9 }
      name          = "U/I Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 3
    }
    division =
    { id            = { type = 5200 id = 10 }
      name          = "U/I Motorized Brigade"
      strength      = 100
      type          = d_06
      model         = 3
    }
    division =
    { id            = { type = 5200 id = 11 }
      name          = "U/I Motorized Brigade"
      strength      = 100
      type          = d_06
      model         = 3
    }
    division =
    { id            = { type = 5200 id = 12 }
      name          = "U/I Motorized Brigade"
      strength      = 100
      type          = d_06
      model         = 3
    }
  }
  landunit =
  { id       = { type = 5200 id = 13 }
    location = 949 #727
    name     = "Internal Security Force"
    division =
    { id            = { type = 5200 id = 14 }
      name          = "1st Internal Security Group"
      strength      = 100
      type          = garrison
      model         = 3
    }
    division =
    { id            = { type = 5200 id = 15 }
      name          = "2nd Internal Security Group"
      strength      = 100
      type          = garrison
      model         = 3
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 5200 id = 300 }
    location = 949 #727
    base     = 949 #727
    name     = "Surface Fleet"
    division =
    { id    = { type = 5200 id = 301 }
      name  = "Mourad Rais"
      type  = destroyer
	  strength = 100
      model = 1
    }
    division =
    { id    = { type = 5200 id = 302 }
      name  = "Rais Kellik"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 5200 id = 303 }
      name  = "Rais Korfu"
      type  = destroyer
	  strength = 100
      model = 1
    }
  }
  navalunit =
  { id       = { type = 5200 id = 307 }
    location = 949 #727
    base     = 949 #727
    name     = "Submarine Fleet"
    division =
    { id    = { type = 5200 id = 308 }
      name  = "Rajs Hadi Mubarek"
      type  = submarine
	  strength = 100
      model = 3
    }
    division =
    { id    = { type = 5200 id = 309 }
      name  = "El Hadi Slimane"
      type  = submarine
	  strength = 100
      model = 3
  }
 }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 5200 id = 200 }
    location = 949 #727
    base     = 949 #727
    name     = "1st Air Force"
    division =
    { id       = { type = 5200 id = 201 }
      name     = "1st Fighter-Bomber Squadron"
      type     = interceptor
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 5200 id = 202 }
      name     = "2nd Fighter-Bomber Squadron"
      type     = interceptor
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 5200 id = 204 }
      name     = "2nd Interceptor Squadron"
      type     = interceptor
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 5200 id = 206 }
      name     = "3rd Interceptor Squadron"
      type     = multi_role
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 5200 id = 207 }
      name     = "4th Interceptor Squadron"
      type     = multi_role
      strength = 100
      model    = 4
    }
  }
}