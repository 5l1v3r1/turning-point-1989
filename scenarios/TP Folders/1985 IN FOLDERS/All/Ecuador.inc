#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 815
  manpower               = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 8 
     political_left    = 3
     free_market       = 7 
     freedom           = 6 
     professional_army = 4 
     defense_lobby     = 4 
     interventionism   = 4 
  }
  nationalprovinces      = { 814 815 817 818 551 908 1835 3781 3782 3783 3784 3785 3786 3787
3824 3823 3820 2930 3822 3821 2738 3788 3789 3790 7429 7430 7431 7435 7433 7434
  }
  ownedprovinces         = { 814 815 817 551 3781 3782 3783 3784 3785 3786 3787 7429 7430 7431 7435 }
  controlledprovinces    = { 814 815 817 551 3781 3782 3783 3784 3785 3786 3787 7429 7430 7431 7435 }

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
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }

  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 9500 id = 1 }
    location = 815 #2042
    name     = "1a División 'Shyris'"
    division =
    { id            = { type = 9500 id = 2 }
      name          = "1a Brigada de Caballería 'Galápagos'"
      strength      = 50
      type          = cavalry
      model         = 2
    }
    division =
    { id            = { type = 9500 id = 3 }
      name          = "2a Brigada de Infantería 'Pichincha'"
      strength      = 50
      type          = d_06
      model         = 1
    }
    division =
    { id            = { type = 9500 id = 4 }
      name          = "9a Brigada de Fuerzas Especiales 'Patria'"
      strength      = 50
      type          = d_03
      model         = 2
      extra         = engineer
      brigade_model = 2
    }
  }
  landunit =
  { id       = { type = 9500 id = 5 }
    location = 814 #2040
    name     = "2a División 'Libertad'"
    division =
    { id            = { type = 9500 id = 6 }
      name          = "5a Brigada de Infantería 'Guayas'"
      strength      = 50
      type          = d_06
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9500 id = 7 }
    location = 815 #2042
    name     = "3a División 'Tarqui'"
    division =
    { id            = { type = 9500 id = 8 }
      name          = "1a Brigada de Infantería 'El Oro'"
      strength      = 50
      type          = d_06
      model         = 1
    }
    division =
    { id            = { type = 9500 id = 9 }
      name          = "2a Brigada de Infantería 'Loja'"
      strength      = 50
      type          = d_06
      model         = 1
    }
    division =
    { id            = { type = 9500 id = 10 }
      name          = "3a Brigada de Infantería 'Bolívar'"
      strength      = 50
      type          = d_06
      model         = 1
    }
  }
  landunit =
  { id       = { type = 9500 id = 11 }
    location = 817 #2007
    name     = "4a División 'Amazonas'"
    division =
    { id            = { type = 9500 id = 12 }
      name          = "17a Brigada de Monte 'Pastaza'"
      strength      = 50
      type          = d_09
      model         = 3
    }
    division =
    { id            = { type = 9500 id = 13 }
      name          = "19a Brigada de Infantería 'Napo'"
      strength      = 50
      type          = d_09
      model         = 3
    }
    division =
    { id            = { type = 9500 id = 14 }
      name          = "21a Brigada de Infantería 'Cóndor'"
      strength      = 50
      type          = d_09
      model         = 3
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 9500 id = 300 }
    location = 814 #2042
    base     = 814 #2042
    name     = "1st Fleet"
    division =
    { id    = { type = 9500 id = 301 }
      name  = "BAE Presidente Eloy Alfaro"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 9500 id = 302 }
      name  = "BAE Moran Valverde"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 9500 id = 303 }
      name  = "BAE Shyri"
      type  = submarine
      model = 3
    }
    division =
    { id    = { type = 9500 id = 304 }
      name  = "BAE Huancavilca"
      type  = submarine
      model = 3
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 9500 id = 100 }
    location = 814 #2042
    base     = 814 #2042
    name     = "Ecuadorian Air Force"
    division =
    { id       = { type = 9500 id = 101 }
      name     = "1st Squadron"
      type     = interceptor
      strength = 50
      model    = 2
    }
    division =
    { id       = { type = 9500 id = 102 }
      name     = "2nd Squadron"
      type     = interceptor
      strength = 50
      model    = 2
    }
    division =
    { id       = { type = 9500 id = 103 }
      name     = "3rd Squadron"
      type     = tactical_bomber
      strength = 100
      model    = 1
    }
  }
}
 