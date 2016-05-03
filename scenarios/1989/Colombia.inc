#####################
# Country main data #
#####################

country =
{ tag                    = COL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 200
  capital                = 812
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 7 
     political_left    = 4 
     free_market       = 8 
     freedom           = 6 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 6
  }
  nationalprovinces      = { 803 812 813 890 867 819 868 2660 2675 2738 2924 2925 2926 2927 2378 2930
  3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808
  3875 3957 3964 3965 3954 3820 3822 3821 3787
  5470
  }
  ownedprovinces         = { 803 812 813 890 867 819 868
2660 2675 2738 2924 2925 2926 2927 2378
3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808
5470
  }
  controlledprovinces    = { 803 812 813 890 867 819 868
2660 2675 2738 2924 2925 2926 2927 2378
3788 3789 3790 3791 3792 3793 3794 3795 3796 3797 3798 3799 3800 3801 3802 3803 3804 3805 3806 3807 3808
5470
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
  inventions = {  }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }

  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 8400 id = 1 }
    location = 890 #1990
    name     = "1a División"
    division =
    { id            = { type = 8400 id = 2 }
      name          = "1a División"
      strength      = 50
      type          = infantry
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 3 }
    location = 890 #1990
    name     = "2a División"
    division =
    { id            = { type = 8400 id = 4 }
      name          = "2a División"
      strength      = 50
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 5 }
    location = 2926 #1985
    name     = "3a División"
    division =
    { id            = { type = 8400 id = 6 }
      name          = "3a División"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 7 }
    location = 867 #1994
    name     = "4a División"
    division =
    { id            = { type = 8400 id = 8 }
      name          = "4a División"
      strength      = 70
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 9 }
    location = 812 #1991
    name     = "5a División"
    division =
    { id            = { type = 8400 id = 10 }
      name          = "5a División"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 11 }
    location = 819 #2009
    name     = "6a División"
    division =
    { id            = { type = 8400 id = 12 }
      name          = "6a División"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 13 }
    location = 813 #1987
    name     = "7a División"
    division =
    { id            = { type = 8400 id = 14 }
      name          = "7a División"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 15 }
    location = 812 #1991
    name     = "8a División"
    division =
    { id            = { type = 8400 id = 16 }
      name          = "8a División"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8400 id = 17 }
    location = 812 #1991
    name     = "Fuerza de Despliegue Rápido"
    division =
    { id            = { type = 8400 id = 18 }
      name          = "1a Brigada Móvil"
      strength      = 100
      type          = bergsjaeger
      model         = 4
    }
    division =
    { id            = { type = 8400 id = 19 }
      name          = "2a Brigada Móvil"
      strength      = 100
      type          = bergsjaeger
      model         = 4
    }
    division =
    { id            = { type = 8400 id = 20 }
      name          = "3a Brigada Móvil"
      strength      = 100
      type          = bergsjaeger
      model         = 4
    }
    division =
    { id            = { type = 8400 id = 21 }
      name          = "7a Brigada Móvil"
      strength      = 100
      type          = bergsjaeger
      model         = 4
    }
    division =
    { id            = { type = 8400 id = 22 }
      name          = "10a Brigada Móvil"
      strength      = 100
      type          = bergsjaeger
      model         = 4
    }
  }
  landunit =
  { id       = { type = 8400 id = 23 }
    location = 813 #1987
    name     = "JTF Paramillo"
    division =
    { id            = { type = 8400 id = 24 }
      name          = "11a Brigada Móvil"
      strength      = 50
      type          = bergsjaeger
      model         = 4
    }
    division =
    { id            = { type = 8400 id = 25 }
      name          = "24a Brigada Móvil"
      strength      = 50
      type          = bergsjaeger
      model         = 4
    }
    division =
    { id            = { type = 8400 id = 26 }
      name          = "25a Brigada Móvil"
      strength      = 50
      type          = bergsjaeger
      model         = 4
    }
  }
  landunit =
  { id       = { type = 8400 id = 27 }
    location = 812 #1991
    name     = "Brigada Contra el Narcotráfico"
    division =
    { id            = { type = 8400 id = 28 }
      name          = "Brigada Contra el Narcotráfico"
      strength      = 30
      type          = bergsjaeger
      model         = 4
      extra         = engineer
      brigade_model = 4       
    }
  }
  landunit =
  { id       = { type = 8400 id = 29 }
    location = 812 #1991
    name     = "Brigada de Fuerzas Especiales"
    division =
    { id            = { type = 8400 id = 30 }
      name          = "Brigada de Fuerzas Especiales"
      strength      = 30
      type          = d_03
      model         = 3
      extra         = engineer
      brigade_model = 4        
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 8400 id = 300 }
    location = 2926 #1991
    base     = 2926 #1991
    name     = "Surface Fleet"
    division =
    { id    = { type = 8400 id = 301 }
      name  = "ARC Almirante Padilla"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8400 id = 302 }
      name  = "ARC Caldas"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8400 id = 303 }
      name  = "ARC Antioquia"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8400 id = 304 }
      name  = "ARC Independencia"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 8400 id = 305 }
    location = 890 #1991
    base     = 890 #1991
    name     = "Submarine Fleet"
    division =
    { id    = { type = 8400 id = 306 }
      name  = "ARC Pijao"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 8400 id = 307 }
      name  = "ARC Tayrona"
      type  = submarine
      model = 4
    }
  }
}
 