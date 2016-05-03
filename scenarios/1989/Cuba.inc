#####################
# Country main data #
#####################

province = { id = 654 air_base = { size = 4 current_size = 4 } }

country =
{ tag                    = CUB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 100
  capital                = 654
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 4 
     political_left    = 10 
     free_market       = 1 
     freedom           = 3 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 8
  }
  nationalprovinces      = { 654 655 656 657 4278 4279 4280 4281 4282 4283 4284 894 }
  ownedprovinces         = { 654 655 656 657 4278 4279 4280 4281 4282 4283 4284 }
  controlledprovinces    = { 654 655 656 657 4278 4279 4280 4281 4282 4283 4284 }

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
  { relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 85001 }
  headofgovernment       = { type = 9 id = 85002 }
  foreignminister        = { type = 9 id = 85003 }
  armamentminister       = { type = 9 id = 85004 }
  ministerofsecurity     = { type = 9 id = 85005 }
  ministerofintelligence = { type = 9 id = 85006 }
  chiefofstaff           = { type = 9 id = 85007 }
  chiefofarmy            = { type = 9 id = 85008 }
  chiefofnavy            = { type = 9 id = 85009 }
  chiefofair             = { type = 9 id = 85010 }
  # Firepower

  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 8700 id = 1 }
    location = 654 #1776
    name     = "Ejército Occidental"
    division =
    { id            = { type = 8700 id = 2 }
      name          = "1a Brigada Blindada"
      strength      = 100
      type          = armor
      model         = 2
      extra         = anti_air
      brigade_model = 1
    }
    division =
    { id            = { type = 8700 id = 3 }
      name          = "2a Brigada Blindada"
      strength      = 100
      type          = light_armor
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 4 }
      name          = "1a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 5 }
      name          = "2a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 6 }
      name          = "3a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
  }
  landunit =
  { id       = { type = 8700 id = 7 }
    location = 655 #1779
    name     = "Ejército Central"
    division =
    { id            = { type = 8700 id = 8 }
      name          = "3a Brigada Blindada"
      strength      = 100
      type          = light_armor
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 9 }
      name          = "4a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 10 }
      name          = "5a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 11 }
      name          = "6a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
  }
  landunit =
  { id       = { type = 8700 id = 12 }
    location = 657 #1777
    name     = "Ejército Oriental"
    division =
    { id            = { type = 8700 id = 13 }
      name          = "4a Brigada Blindada"
      strength      = 100
      type          = light_armor
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 14 }
      name          = "5a Brigada Blindada"
      strength      = 100
      type          = light_armor
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 15 }
      name          = "7a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 16 }
      name          = "8a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 17 }
      name          = "9a Brigada Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 8700 id = 18 }
      name          = "1a Brigada de Frontera"
      strength      = 100
      type          = garrison
      model         = 2
    }
  }
  landunit =
  { id       = { type = 8700 id = 19 }
    location = 654 #1776
    name     = "Fuerzas Especiales"
    division =
    { id            = { type = 8700 id = 20 }
      name          = "Avispas Negras"
      strength      = 80
      type          = d_03
      model         = 4
      extra         = engineer
      brigade_model = 4
    }
    division =
    { id            = { type = 8700 id = 21 }
      name          = "1a Brigada Paracaidista"
      strength      = 50
      type          = paratrooper
      model         = 3
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 8700 id = 301 }
    location = 654 #1776
    base     = 654 #1776
    name     = "Cuban Navy"
    division =
    { id    = { type = 8700 id = 302 }
      name  = "U-001"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 8700 id = 303 }
      name  = "1st transport Fleet"
      type  = transport
      model = 4
    }
    division =
    { id    = { type = 8700 id = 304 }
      name  = "2nd transport Fleet"
      type  = transport
      model = 4
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 8700 id = 200 }
    location = 654 #1776
    base     = 654 #1776
    name     = "3rd Air Division"
    division =
    { id       = { type = 8700 id = 201 }
      name     = "1st Fighter Rgt"
      type     = interceptor
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8700 id = 202 }
      name     = "2nd Fighter Rgt"
      type     = interceptor
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8700 id = 206 }
      name     = "3rd Fighter Rgt"
      type     = interceptor
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8700 id = 208 }
      name     = "4th Fighter Rgt"
      type     = interceptor
      strength = 70
      model    = 3
    }
  }
}
 