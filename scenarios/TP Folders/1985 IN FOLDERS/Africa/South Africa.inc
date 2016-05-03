#####################
# Country main data #
#####################

country =
{ tag                    = SAF
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 200
  capital                = 1120
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = BEL value = 35 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 80 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = POR value = 125 }
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  nationalprovinces      = { 1115 1116 1114 1117 1118 1120 1113 1119 1109 1108 1107 1106 1110
2643 2644 2772 2773 2774 2775 2776 2777 2778 2779
2797 2798
4993 4994 4995 4996 4997 4998 4999 5000 5001 5002 
5003 5004 5005 5006 5007 5008 5009 5010 5011 5012 
5013 5014 5015 5016 5017 5018 5019 5020 5021 5022 
5023 5024 5025 5026 5027 5028 5029 5030 5031 5032 
5033 5034 5035 5036 5037 5038 5039 5040 5041 5042 
5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 
5053 5054 5055 5056
5057 5058 5059 5060 5061 5062 5063 5064 5065 5066 5067 5068 5069 5070 5071
7365 7366 7367 7368 7369 7370 7371 7372 7373 7374 7388 7389 7390 7391 7392 7393 7394 7395 7396 7397 7398 7399 7400 7401 7402 7403 7404 7405 7406 7407 7408 7409 7410 7411 7412 7413 7414 7415 7416 7437 7438 7439
  }
  ownedprovinces         = { 1115 1116 1114 1117 1118 1120 1113 1119 1109 1108 1107 1106 1110
2643 2644 2772 2773 2774 2775 2776 2777 2778 2779
2797 2798
4993 4994 4995 4996 4997 4998 4999 5000 5001 5002 
5003 5004 5005 5006 5007 5008 5009 5010 5011 5012 
5013 5014 5015 5016 5017 5018 5019 5020 5021 5022 
5023 5024 5025 5026 5027 5028 5029 5030 5031 5032 
5033 5034 5035 5036 5037 5038 5039 5040 5041 5042 
5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 
5053 5054 5055 5056
5057 5058 5059 5060 5061 5062 5063 5064 5065 5066 5067 5068 5069 5070 5071
7365 7366 7367 7368 7369 7370 7371 7372 7373 7374 7388 7389 7390 7391 7392 7393 7394 7395 7396 7397 7398 7399 7400 7401 7402 7403 7404 7405 7406 7407 7408 7409 7410 7411 7412 7413 7414 7415 7416 7437 7438 7439
  }
  controlledprovinces    = { 1115 1116 1114 1117 1118 1120 1113 1119 1109 1108 1107 1106 1110
2643 2644 2772 2773 2774 2775 2776 2777 2778 2779
2797 2798
4993 4994 4995 4996 4997 4998 4999 5000 5001 5002 
5003 5004 5005 5006 5007 5008 5009 5010 5011 5012 
5013 5014 5015 5016 5017 5018 5019 5020 5021 5022 
5023 5024 5025 5026 5027 5028 5029 5030 5031 5032 
5033 5034 5035 5036 5037 5038 5039 5040 5041 5042 
5043 5044 5045 5046 5047 5048 5049 5050 5051 5052 
5053 5054 5055 5056
5057 5058 5059 5060 5061 5062 5063 5064 5065 5066 5067 5068 5069 5070 5071
7365 7366 7367 7368 7369 7370 7371 7372 7373 7374 7388 7389 7390 7391 7392 7393 7394 7395 7396 7397 7398 7399 7400 7401 7402 7403 7404 7405 7406 7407 7408 7409 7410 7411 7412 7413 7414 7415 7416 7437 7438 7439
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
  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 7 
     political_left    = 5 
     freedom           = 10 
     free_market       = 8 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 6 
  }
  headofstate            = { type = 9 id = 70001 }
  headofgovernment       = { type = 9 id = 70002 }
  foreignminister        = { type = 9 id = 70003 }
  armamentminister       = { type = 9 id = 70004 }
  ministerofsecurity     = { type = 9 id = 70005 }
  ministerofintelligence = { type = 9 id = 70006 }
  chiefofstaff           = { type = 9 id = 70007 }
  chiefofarmy            = { type = 9 id = 70008 }
  chiefofnavy            = { type = 9 id = 70009 }
  chiefofair             = { type = 9 id = 70010 }

	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 19900 id = 1 }
		location = 1119 #873
		name = "South African Army"
        division = {
			id = { type = 19900 id = 3 }
			name = "South African Army HQ"
			strength = 100
			type = hq
			model = 2
		}
		division = {
			id = { type = 19900 id = 4 }
			name = "43 SA Brigade"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 19900 id = 5 }
			name = "46 SA Brigade"
			strength = 100
			type = d_06
			model = 4
		}
	}
	landunit = {
		id = { type = 19900 id = 6 }
		location = 1116 #880
		name = "Special Forces Brigade"
		division = {
			id = { type = 19900 id = 7 }
			name = "Special Forces Brigade"
			strength = 100
			type = d_03
			model = 4
			experience = 5
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 19900 id = 300 }
		location = 1116 #880
		base = 1116 #880
		name = "Submarine Fleet"
		division = {
			id = { type = 19900 id = 301 }
			name = "SAS Umkhonto"
			type = submarine
			model = 4
		}
		division = {
			id = { type = 19900 id = 302 }
			name = "SAS Assegaai"
			type = submarine
			model = 4
		}
	}
	navalunit = {
		id = { type = 19900 id = 303 }
		location = 1116 #880
		base = 1116 #880
		name = "Surface Fleet"
		division = {
			id = { type = 19900 id = 304 }
			name = "SAS Amatola"
			type = destroyer
			model = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 19900 id = 200 }
		location = 1120 #876
		base = 1120 #876
		name = "1st Air Force"
		division = {
			id = { type = 19900 id = 201 }
			name = "1st Squadron"
			type = multi_role
			strength = 100
			model = 4
		}
	}
	airunit = {
		id = { type = 19900 id = 202 }
		location = 1116 #880
		base = 1116 #880
		name = "2nd Air Force"
		division = {
			id = { type = 19900 id = 203 }
			name = "2nd Squadron"
			type     = transport_plane
			strength = 100
			model = 2
		}
	}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 19900 id = 401 }
		name = "SAS Manthatisi"
		type = submarine
		model = 4
		cost = 2
		date = { day = 28 month = november year = 2003 }
	}
	division_development = {
		id = { type = 19900 id = 402 }
		name = "SAS Charlotte Maxeke"
		type = submarine
		model = 4
		cost = 2
		date = { day = 13 month = june year = 2004 }
	}
	division_development = {
		id = { type = 19900 id = 403 }
		name = "SAS Queen Modjadji I"
		type = submarine
		model = 4
		cost = 2
		date = { day = 4 month = september year = 2005 }
	}
	division_development = {
		id = { type = 19900 id = 404 }
		name = "SAS Isandlwana"
		type = destroyer
		model = 1
		cost = 2
		date = { day = 28 month = april year = 2003 }
	}
	division_development = {
		id = { type = 19900 id = 405 }
		name = "SAS Spioenkop"
		type = destroyer
		model = 1
		cost = 2
		date = { day = 13 month = june year = 2004 }
	}
	division_development = {
		id = { type = 19900 id = 406 }
		name = "SAS Mendi"
		type = destroyer
		model = 1
		cost = 2
		date = { day = 4 month = september year = 1989 }
	}
}
 
