##############################
# Country definition for MOR #
##############################

country =
{ tag                 = MOR
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 500
  supplies            = 5000
  money               = 10
  capital             = 958
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 7
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  ownedprovinces      = {
		958 956 959 969 968 960 966 1121 967 1034 971 972 2331 955 2332 2900 2901 2902 2903
4389 4390 4391 4392 4393 4394 4395 4396 4397 4398 4399 4400 4401 4402 4403 4404 4405 4406 4407 4408 4409 4410 4411 4412 4413 4414 4415 4416 4417 
7896 7895 7894 7893 7901 7892
	}
  controlledprovinces = {
		958 956 959 969 968 960 966 1121 967 1034 971 972 2331 955 2332 2900 2901 2902 2903
4389 4390 4391 4392 4393 4394 4395 4396 4397 4398 4399 4400 4401 4402 4403 4404 4405 4406 4407 4408 4409 4410 4411 4412 4413 4414 4415 4416 4417 
7896 7895 7894 7893 7901 7892
	}
  nationalprovinces   = {
		958 956 959 969 968 960 966 1121 967 1034 971 972 2331 955 957 2332 954 2900 2901 2902 2903
4389 4390 4391 4392 4393 4394 4395 4396 4397 4398 4399 4400 4401 4402 4403 4404 4405 4406 4407 4408 4409 4410 4411 4412 4413 4414 4415 4416 4417 6526
7896 7895 7894 7893 7901 7892 7296 7297 2913
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
    # #############################
    # ARMY
    # #############################
	landunit = {
		id = { type = 12255 id = 1 }
		location = 958 #717
		name = "Royal Moroccan Army"
		division = {
			id = { type = 12255 id = 2 }
			name = "1st Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 12255 id = 3 }
			name = "1st Infantry Brigade"
			strength = 100
			type = d_06
			model = 2
		}
		division = {
			id = { type = 12255 id = 4 }
			name = "2nd Infantry Brigade"
			strength = 100
			type = d_06
			model = 2
		}
		division = {
			id = { type = 12255 id = 5 }
			name = "1st Security Brigade"
			strength = 100
			type = garrison
			model = 2
		}
		division = {
			id = { type = 12255 id = 6 }
			name = "Airborne Brigade"
			strength = 100
			type = d_08
			model = 2
		}
	}
    landunit = {
		id = { type = 12255 id = 7 }
		location = 958 #717
		name = "Royal Maroccan Guard"
		division = {
			id = { type = 12255 id = 8 }
			name = "Royal Guard Brigade"
			strength = 100
			type = d_03
			model = 3
		}
	}
	# #####################################
	# NAVY
	# #####################################
	navalunit = {
		id = { type = 12255 id = 200 }
		location = 4402 #718
		base = 4402 #718
		name = "23rd Frigate Squadron"
		division = {
			id = { type = 12255 id = 201 }
			name = "Mohammed V"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 12255 id = 202 }
			name = "Hassan II"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 12255 id = 203 }
			name = "2nd Transport Flotilla"
			type = transport
			model = 4
		}
	}
	# #####################################
	# AIR FORCE
	# #####################################
	airunit = {
		id = { type = 12255 id = 100 }
		location	= 958 #717
		base		= 958 #717
		name = "4cme Escadrille"
		division = { id = { type = 12255 id = 101 } name = "1er Escadron" type = tactical_bomber strength = 100 model = 1 }
		division = { id = { type = 12255 id = 102 } name = "6cme Escadron" type = tactical_bomber strength = 100 model = 1 }
		division = { id = { type = 12255 id = 103 } name = "19cme Escadron" type = interceptor strength = 100 model = 2 }
		division = { id = { type = 12255 id = 104 } name = "18cme Escadron" type = interceptor strength = 100 model = 2 }
		division = { id = { type = 12255 id = 105 } name = "24cme Escadron" type = interceptor strength = 100 model = 2 }
		division = { id = { type = 12255 id = 106 } name = "9cme Escadron" type = interceptor strength = 100 model = 2 }
	}
	airunit = {
		id = { type = 12255 id = 107 }
		location	= 958 #717
		base		= 958 #717
		name = "Escadrille de Transport Aérien"
		division = 
		{ id = { type = 12255 id = 108 } 
		  name = "11cme Escadron" 
		  type     = transport_plane
		  strength = 100 
		  model = 0 
		}
	}
}