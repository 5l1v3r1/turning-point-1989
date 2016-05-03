#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 830
  manpower               = 200
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 831 829 830 821 816 818 908 1835 2497 2003 1988
2997 817 2928 2929 2930 2049 2738
3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840
3785 3786 3787 3790 3789 3788 3886 839
7092 7421 7424 7425 7426 7427 7432 7433 7434 7094 7093 7435 7430
  }
  ownedprovinces         = { 831 829 830 821 816 2497 2003 1988
2997 908 818 2928 2929 2930 2049
3820 3821 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840
7092 7421 7424 7425 7426 7427 7432 7433 7434 1835 3823 3822
  }
  controlledprovinces    = { 831 829 830 821 816 2497 2003 1988
2997 908 818 2928 2929 2930 2049
3820 3821 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840
7092 7421 7424 7425 7426 7427 7432 7433 7434 1835 3823 3822
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
   5560 5910
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
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5
     political_left    = 4 
     freedom           = 4 
     free_market       = 7 
     professional_army = 4 
     defense_lobby     = 6 
     interventionism   = 5 
  }

	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 16750 id = 1 }
		location = 816 #2014
		name = "I División de Ejército"
		division = {
			id = { type = 16750 id = 2 }
			name = "1a Brigada de Caballería"
			strength = 100
			type = cavalry
			model = 1
		}
		division = {
			id = { type = 16750 id = 3 }
			name = "1a Brigada de Infantería"
			strength = 100
			type = d_06
			model = 2
		}
        division = {
			id = { type = 16750 id = 4 }
			name = "7a Brigada de Infantería"
			strength = 100
			type = d_06
			model = 2
		}
        division = {
			id = { type = 16750 id = 5 }
			name = "32a Brigada de Infantería"
			strength = 100
			type = d_06
			model = 2
		}
        division = {
			id = { type = 16750 id = 6 }
			name = "6a Brigada de Selva"
			strength = 100
			type = d_01
			model = 1
		}
	}
	landunit = {
		id = { type = 16750 id = 7 }
		location = 830 #2016
		name = "II División de Ejército"
		division = {
			id = { type = 16750 id = 8 }
			name = "1a Brigada de Fuerzas Especiales"
			strength = 100
			type = d_03
			model = 2
		}
		division = {
			id = { type = 16750 id = 9 }
			name = "1ra Brigada Aérea"
			strength = 50
			type = d_01
			model = 1
		}
		division = {
			id = { type = 16750 id = 10 }
			name = "18a Brigada Blindada"
			strength = 100
			type = light_armor
			model = 1
		}
	}
	landunit = {
		id = { type = 16750 id = 11 }
		location = 831 #2017
		name = "III División de Ejército"
		division = {
			id = { type = 16750 id = 12 }
			name = "3a Brigada Blindada"
			strength = 100
			type = light_armor
			model = 1
		}
        division = {
			id = { type = 16750 id = 13 }
			name = "3a Brigada de Caballería"
			strength = 100
			type = cavalry
			model = 1
		}
        division = {
			id = { type = 16750 id = 14 }
			name = "4a Brigada de Montaña"
			strength = 100
			type = d_09
			model = 4
		}
        division = {
			id = { type = 16750 id = 15 }
			name = "5a Brigada de Montaña"
			strength = 100
			type = d_09
			model = 4
		}
	}
	landunit = {
		id = { type = 16750 id = 16 }
		location = 2497 #2018
		name = "IV División de Ejército"
		division = {
			id = { type = 16750 id = 17 }
			name = "3a Brigada de Fuerzas Especiales"
			strength = 100
			type = d_03
			model = 2
		}
        division = {
			id = { type = 16750 id = 18 }
			name = "5a Brigada de Selva"
			strength = 100
			type = d_03
			model = 2
		}
	}
        landunit = {
		id = { type = 16750 id = 19 }
		location = 830 #2016
		name = "Región Militar del VRAEM"
		division = {
			id = { type = 16750 id = 20 }
			name = "2a Brigada de Infantería"
			strength = 100
			type = d_06
			model = 1
		}
        division = {
			id = { type = 16750 id = 21 }
			name = "31a Brigada de Infantería"
			strength = 100
			type = d_06
			model = 1
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 16750 id = 300 }
		location = 830 #2016
		base = 830 #2016
		name = "Surface Fleet"
		division = {
			id = { type = 16750 id = 301 }
			name = "BAP Almirante Grau"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 16750 id = 302 }
			name = "BAP Meliton Carvajal"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 16750 id = 303 }
			name = "BAP Manuel Villavicencio"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 16750 id = 304 }
			name = "BAP Montero"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 16750 id = 305 }
			name = "BAP Mariategui"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 16750 id = 306 }
			name = "BAP Transport Flotilla"
			type = transport
			model = 3
		}
	}
	navalunit = {
		id = { type = 16750 id = 309 }
		location = 830 #2016
		base = 830 #2016
		name = "Submarine Fleet"
		division = {
			id = { type = 16750 id = 310 }
			name = "BAP Casma"
			type = submarine
			model = 2
		}
		division = {
			id = { type = 16750 id = 311 }
			name = "BAP Antofagasta"
			type = submarine
			model = 2
		}
		division = {
			id = { type = 16750 id = 312 }
			name = "BAP Pisagua"
			type = submarine
			model = 2
		}
		division = {
			id = { type = 16750 id = 313 }
			name = "BAP Chipana"
			type = submarine
			model = 2
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 16750 id = 200 }
		location = 830 #2016
		base = 830 #2016
		name = "1st Air Force"
		division = {
			id = { type = 16750 id = 201 }
			name = "4th Air Group"
			type = multi_role
			strength = 100
			model = 4
		}
		division = {
			id = { type = 16750 id = 202 }
			name = "9th Air Group"
			type = tactical_bomber
			strength = 100
			model = 1
		}
	}
	airunit = {
		id = { type = 16750 id = 203 }
		location = 830 #2016
		base = 830 #2016
		name = "2nd Air Force"
		division = {
			id = { type = 16750 id = 204 }
			name = "6th Air Group"
			type = multi_role
			strength = 100
			model = 4
		}
		division = {
			id = { type = 16750 id = 205 }
			name = "7th Air Group"
			type = cas
			strength = 100
			model = 0
		}
		division = {
			id = { type = 16750 id = 206 }
			name = "11th Air Group"
			type = tactical_bomber
			strength = 100
			model = 1
		}
	}
}
 
