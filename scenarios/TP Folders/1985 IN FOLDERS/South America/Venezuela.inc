#####################
# Country main data #
#####################

country =
{ tag                    = VEN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 870
  manpower               = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9
     political_left    = 7 
     freedom           = 8 
     free_market       = 6 
     professional_army = 4 
     defense_lobby     = 6 
     interventionism   = 5
  }
  nationalprovinces      = { 804 802 810 811 869 870 871
2657 2658 3859 3860 3861 3862 3863 3864 3865 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875
3887 3950 5423 5421 5422 5424 5425 2737
  }
  ownedprovinces         = { 804 802 810 811 869 870
2657 2658 3859 3860 3861 3862 3863 3864 3865 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 5423
  }
  controlledprovinces    = { 804 802 810 811 869 870
2657 2658 3859 3860 3861 3862 3863 3864 3865 3866 3867 3868 3869 3870 3871 3872 3873 3874 3875 5423
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
  inventions = {  }
  
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -15 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = ECU value = 20 }
    relation = { tag = ENG value = -10 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = 10 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 125 }
  }

  # Firepower
  # Rather wild estimations

	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 22800 id = 1 }
		location = 804 #1988
		name = "I División de Infantería"
		division = {
			id = { type = 22800 id = 2 }
			name     = "11 Brigada Blindada"
			type     = light_armor
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 3 }
			name     = "12 Brigada de Caribes"
			type     = d_09
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 4 }
			name     = "13 Brigada Motorizada"
			type     = d_06
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 5 }
			name     = "14 Brigada Mecanizada"
			type     = cavalry
			model    = 2
            strength = 100
		}
	}
    landunit = {
		id = { type = 22800 id = 6 }
		location = 802 #1989
		name = "II División de Infantería"
		division = {
			id = { type = 22800 id = 7 }
			name     = "21 Brigada Motorizada"
			type     = d_06
			model    = 1
            strength = 100
		}
        division = {
			id = { type = 22800 id = 8 }
			name     = "22 Brigada de Montaña"
			type     = d_09
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 9 }
			name     = "25 Brigada Mecanizada"
			type     = cavalry
			model    = 2
            strength = 100
		}
	}
	landunit = {
		id = { type = 22800 id = 10 }
		location = 870 #1993
		name = "III División de Infantería"
		division = {
			id = { type = 22800 id = 11 }
			name     = "31 Brigada Motorizada"
			type     = d_06
			model    = 1
            strength = 100
		}
        division = {
			id = { type = 22800 id = 12 }
			name     = "32 Brigada de Caribes"
			type     = d_09
			model    = 2
            strength = 100
		}
	}
    landunit = {
		id = { type = 22800 id = 13 }
		location = 870 #1993
		name = "IV División Blindada"
		division = {
			id = { type = 22800 id = 14 }
			name     = "41 Brigada Blindada"
			type     = light_armor
			model    = 2
            strength = 100
		}
        division = {
			experience = 5
			id = { type = 22800 id = 15 }
			name     = "42 Brigada Paracaidista"
			type     = d_08
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 16 }
			name     = "44 Brigada Blindada Ligera"
			type     = cavalry
			model    = 1
            strength = 100
		}
	}
    landunit = {
		id = { type = 22800 id = 17 }
		location = 869 #1992
		name = "V División de Infantería de Selva"
		division = {
			id = { type = 22800 id = 18 }
			name     = "51a Brigada de Selva"
			type     = d_03
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 19 }
			name     = "52a Brigada de Selva"
			type     = d_03
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 20 }
			name     = "53a Brigada de Selva"
			type     = d_03
			model    = 2
            strength = 100
		}
	}
    landunit = {
		id = { type = 22800 id = 21 }
		location = 811 #1996
		name = "IX División de Caballería Motorizada e Hipomóvil"
		division = {
			id = { type = 22800 id = 22 }
			name     = "91 Brigada de Caballería e Hipomovil"
			type     = d_03
			model    = 2 
            strength = 100
		}
        division = {
			id = { type = 22800 id = 23 }
			name     = "92 Brigada de Caribes"
			type     = d_09
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 24 }
			name     = "93 Brigada de Caribes"
			type     = d_09
			model    = 2
            strength = 100
		}
	}
    landunit = {
		id = { type = 22800 id = 25 }
		location = 870 #1993
		name = "División de Marina 'General Simón Bolívar'"
		division = {
			id = { type = 22800 id = 26 }
			name     = "1 Brigada de Marina"
			type     = d_05
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 27 }
			name     = "2 Brigada de Marina"
			type     = d_05
			model    = 2
            strength = 50
		}
        division = {
			id = { type = 22800 id = 28 }
			name     = "3 Brigada de Marina"
			type     = d_05
			model    = 2
            strength = 100
		}
        division = {
			id = { type = 22800 id = 29 }
			name     = "4 Brigada de Marina"
			type     = d_05
			model    = 2
            strength = 100
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 22800 id = 300 }
		location = 870 #1993
		base = 870 #1993
		name = "Armada Nacional de Venezuela"
		division = {
			id = { type = 22800 id = 301 }
			name = "ARV Mariscal Sucre"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 302 }
			name = "ARV Almirante Brión"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 303 }
			name = "ARV General Urdaneta"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 304 }
			name = "ARV General Soublette"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 305 }
			name = "ARV General Salóm"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 306 }
			name = "ARV Almirante Garcia"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 22800 id = 307 }
			name = "1a Escuadrilla de Transporte"
			type = transport
			model = 3
		}
		division = {
			id = { type = 22800 id = 308 }
			name = "2a Escuadrilla de Transporte"
			type = transport
			model = 3
		}
	}
	navalunit = {
		id = { type = 22800 id = 309 }
		location = 870 #1993
		base = 870 #1993
		name = "Submarine Fleet"
		division = {
			id = { type = 22800 id = 310 }
			name = "ARV Sábalo"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 22800 id = 311 }
			name = "ARV Caribe"
			type = submarine
			model = 4
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 22800 id = 200 }
		location = 870 #1993
		base = 870 #1993
		name = "Fuerza Aérea Venezolana"
		division = {
			id = { type = 22800 id = 201 }
			name = "Grupo Aéreo 4"
			type = tactical_bomber
			strength = 65
			model = 1
		}
        division = {
			id = { type = 22800 id = 202 }
			name = "Grupo Aéreo 11"
			type = multi_role
			strength = 65
			model = 4
		}
        division = {
			id = { type = 22800 id = 203 }
			name = "Grupo Aéreo 13"
			type = interceptor
			strength = 50
			model = 2
		}
        division = {
			id = { type = 22800 id = 204 }
			name = "Grupo Aéreo 16"
			type = interceptor
			strength = 50
			model = 2
		}
	}
}
 
