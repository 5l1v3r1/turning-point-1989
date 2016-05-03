#####################
# Country main data #
#####################

country =
{ tag                    = GRE
  manpower               = 200
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 401
  transports             = 40
  escorts                = 15
  dissent                = 10
  
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 8
     political_left    = 7 
     free_market       = 9 
     freedom           = 10 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 7
  }
  nationalprovinces      = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399 444
							2319 2321 653 563 664
							2610 2625 2872 418
							3355 3392 
							5412 5413 6508 6509
							6918
							7055 7316 7317 7318 7319 7320 7352 7914
							7163
  }
  ownedprovinces         = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399
							2319 2321 653 563
							2610 2625 2872
							3355 3392 6508 6509
							6918
							7055 7316 7317 7318 7319 7320 7352 7914
  }
  controlledprovinces    = { 392 393 394 395 396 400 401 402 403 405 410 411 412 398 399
							2319 2321 653 563
							2610 2625 2872
							3355 3392 6508 6509
							6918
							7055 7316 7317 7318 7319 7320 7352 7914
  }
  claimedprovinces  	 = { 2611 2322 2613 409 3374 3398 4132 391 5465 7936 7056 7057 }

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
   #Renewable Energy
   5720
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
  inventions = {}

  diplomacy = {}
  
  headofstate            = { type = 9 id = 90001 }
  headofgovernment       = { type = 9 id = 90002 }
  foreignminister        = { type = 9 id = 90003 }
  armamentminister       = { type = 9 id = 90004 }
  ministerofsecurity     = { type = 9 id = 90005 }
  ministerofintelligence = { type = 9 id = 90006 }
  chiefofstaff           = { type = 9 id = 90007 }
  chiefofarmy            = { type = 9 id = 90008 }
  chiefofnavy            = { type = 9 id = 90009 }
  chiefofair             = { type = 9 id = 90010 }
  
  # #####################################
  # ARMY
  # #####################################
   landunit =
  { id       = { type = 15500 id = 1 }
    location = 401
    name     = "1 Stratia"
    division =
    { id       = { type = 15500 id = 2 }
      name     = "1 Stratia HQ"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 15500 id = 3 }
    location = 401
    name     = "1 Soma Stratou"
    division =
    { id       = { type = 15500 id = 4 }
      name     = "8 Merarchia Pezikou"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 5 }
      name     = "24 Tethorakismeni Taxarchia"
      strength = 100
      type     = mechanized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 6 }
      name     = "9 Taxarchia Pezikou"
      strength = 100
      type     = mechanized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 7 }
      name     = "10 Taxarchia Pezikou"
      strength = 100
      type     = mechanized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 8 }
      name     = "15 Taxarchia Pezikou"
      strength = 100
      type     = mechanized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 15500 id = 9 }
    location = 401
    name     = "4 Soma Stratou"
    division =
    { id       = { type = 15500 id = 10 }
      name     = "20 Tethorakismeni Merarchia"
      strength = 100
      type     = armor
      model    = 3
    }
    division =
    { id       = { type = 15500 id = 11 }
      name     = "12 Mechanikos Merarchia"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 12 }
      name     = "16 Mechanikos Merarchia"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 13 }
      name     = "50 Mechanikos Taxarchia"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 14 }
      name     = "29 Taxarchia Pezikou"
      strength = 100
      type     = mechanized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 15500 id = 15 }
    location = 401
    name     = "2 Soma Stratou"
    division =
    { id       = { type = 15500 id = 16 }
      name     = "2 Mechanikos Merarchia"
      strength = 100
      type 	   = motorized
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 17 }
      name     = "1 Taxiarhia Aeroporias Stratou"
      strength = 60
      type     = cavalry
      model    = 4
    }
  }
  landunit =
  { id       = { type = 15500 id = 18 }
    location = 401
    name     = "1 Merarchia Pezikou"
    division =
    { id       = { type = 15500 id = 19 }
      name     = "1 Taxiarhia Katadromon-Alexiptotiston"
      strength = 100
      type     = bergsjaeger
      model    = 4
      extra         = engineer
      brigade_model = 4
    }
    division =
    { id       = { type = 15500 id = 20 }
      name     = "32 Taxiarhia Pezonavton"
      strength = 100
      type     = marine
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 21 }
      name     = "71 Aerometaferomeni Taxiarhia Pezikou"
      strength = 100
      type     = cavalry
      model    = 4
    }
  }
  landunit =
  { id       = { type = 15500 id = 22 }
    location = 401
    name     = "Crete Command"
    division =
    { id       = { type = 15500 id = 23 }
      name     = "5 Merarchia Pezikou"
      strength = 20
      type     = motorized
      model    = 4
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 15500 id = 300 }
    location = 401 #377
    base     = 401
    name     = "Aegean Sea Naval Command"
    division =
    { id    = { type = 15500 id = 301 }
      name  = "HS Kimon"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 15500 id = 302 }
      name  = "HS Nearchos"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 15500 id = 303 }
      name  = "HS Formion"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 15500 id = 304 }
      name  = "HS Hydra"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 305 }
      name  = "HS Spetsai"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 306 }
      name  = "HS Kountouriotis"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 307 }
      name  = "HS Bouboulina"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 308 }
      name  = "HS Kanaris"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 309 }
      name  = "1 Metafero Naftiko"
      type  = transport
      model = 4
    }
    division =
    { id    = { type = 15500 id = 310 }
      name  = "2 Metafero Naftiko"
      type  = transport
      model = 4
    }
  }
  navalunit =
  { id       = { type = 15500 id = 314 }
    location = 401 #377
    base     = 401
    name     = "2nd Fleet"
    division =
    { id    = { type = 15500 id = 315 }
      name  = "HS Psara"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 316 }
      name  = "HS Salamis"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 317 }
      name  = "HS Elli"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 318 }
      name  = "HS Limnos"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 319 }
      name  = "HS Adrias"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 320 }
      name  = "HS Aegeon"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 321 }
      name  = "HS Navarino"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 322 }
      name  = "HS Ipiros"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 15500 id = 323 }
      name  = "3 Metafero Naftiko"
      type  = transport
      model = 4
    }
    division =
    { id    = { type = 15500 id = 324 }
      name  = "4 Metafero Naftiko"
      type  = transport
      model = 4
    }
  }
  navalunit =
  { id       = { type = 15500 id = 331 }
    location = 401 #382
    base     = 401
    name     = "1st Submarine Fleet"
    division =
    { id    = { type = 15500 id = 332 }
      name  = "HS Glavkos"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 15500 id = 333 }
      name  = "HS Nireus"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 15500 id = 334 }
      name  = "HS Triton"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 15500 id = 335 }
      name  = "HS Proteus"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 15500 id = 336 }
      name  = "HS Poseidon"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 15500 id = 337 }
      name  = "HS Amphitriti"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 15500 id = 338 }
      name  = "HS Okeanos"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 15500 id = 339 }
      name  = "HS Pontos"
      type  = submarine
      model = 4
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 15500 id = 200 }
    location = 401
    base     = 401
    name     = "Arghio Taktikis Aeroporias"
    division =
    { id       = { type = 15500 id = 201 }
      name     = "110 Pterix"
      type     = interceptor
      strength = 60
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 202 }
      name     = "111 Pterix"
      type     = interceptor
      strength = 60
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 203 }
      name     = "114 Pterix"
      type     = multi_role
      strength = 60
      model    = 5
    }
    division =
    { id       = { type = 15500 id = 205 }
      name     = "115 Pterix"
      type     = interceptor
      strength = 60
      model    = 4
    }
    division =
    { id       = { type = 15500 id = 208 }
      name     = "116 Pterix"
      type     = cas
      strength = 60
      model    = 0
    }
    division =
    { id       = { type = 15500 id = 209 }
      name     = "117 Pterix"
      type     = multi_role
      strength = 60
      model    = 5
    }
  }
  airunit =
  { id       = { type = 15500 id = 210 }
    location = 401
    base     = 401
    name     = "Diikissi Aeroporikis Ipostirixis"
    division =
    { id       = { type = 15500 id = 211 }
      name     = "112 Pterix"
      type     = transport_plane
      strength = 60
      model    = 1
    }
  }
}
 