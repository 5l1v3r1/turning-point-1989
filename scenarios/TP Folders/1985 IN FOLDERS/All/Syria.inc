##############################
# Country definition for SYR #
##############################

country =
{ tag                 = SYR
  energy              = 100
  metal               = 100
  rare_materials      = 50
  oil                 = 500
  supplies            = 500
  money               = 100
  capital             = 1792
  manpower            = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 7
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  headofstate            = {  type = 9 id = 430001  } 
  headofgovernment       = {  type = 9 id = 430002  } 
  foreignminister        = {  type = 9 id = 430003  } 
  armamentminister       = {  type = 9 id = 430004  } 
  ministerofsecurity     = {  type = 9 id = 430005  } 
  ministerofintelligence = {  type = 9 id = 430006  } 
  chiefofstaff           = {  type = 9 id = 430007  } 
  chiefofarmy            = {  type = 9 id = 430008  } 
  chiefofnavy            = {  type = 9 id = 430009  } 
  chiefofair             = {  type = 9 id = 430010  } 
  
  ownedprovinces      = {
1792 1862 1863 1795 1861 2883 2884 2885 2019 4150 4151 4152
7276 7353 7281 7355 7280 7357 7354 7279 7356 7277 7278 
  }
  controlledprovinces = {
1792 1862 1863 1795 1861 2883 2884 2885 2019 4150 4151 4152
7276 7353 7281 7355 7280 7357 7354 7279 7356 7277 7278 
  }
  nationalprovinces   = {
1792 1862 1863 1795 1861 2883 2884 2885 2019 1159 4150 4151 4152
7276 7353 7281 7355 7280 7357 7354 7279 7356 7277 7278 2876
  }
  claimedprovinces	  = { 4125 1855 4146 }
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
        landunit = {
		id = { type = 20900 id = 1 }
		location = 1792 #1016
		name = "Syrian Army HQ"
		division = {
			id = { type = 20900 id = 2 }
			name = "Syrian Army HQ"
			strength = 100
			type = hq
			model = 1
		}
	} 
        landunit = {
		id = { type = 20900 id = 3 }
		location = 1792 #1016
		name = "Damascus Garrison"
		division = {
			id = { type = 20900 id = 4 }
			name = "Republican Guard Division"
			strength = 100
			type = armor
			model = 2
			
		}
		division = {
			id = { type = 20900 id = 5 }
			name = "4th Armored Division"
			strength = 100
			type = armor
			model = 2
		}
	}
	landunit = {
		id = { type = 20900 id = 6 }
		location = 1792 #1016
		name = "1st Corps"
		division = {
			id = { type = 20900 id = 7 }
			name = "5th Armored Division"
			strength = 100
			type = armor
			model = 2 
		}
         division = {
			id = { type = 20900 id = 8 }
			name = "6th Armored Division"
			strength = 100
			type = armor
			model = 2
		}
        division = {
			id = { type = 20900 id = 9 }
			name = "8th Armored Division"
			strength = 100
			type = armor
			model = 2
		}
        division = {
			id = { type = 20900 id = 10 }
			name = "9th Armored Division"
			strength = 100
			type = armor
			model = 2
		}
        division = {
			id = { type = 20900 id = 11 }
			name = "7th Mechanized Division"
			strength = 100
			type = infantry
			model = 3
		}
        division = {
			id = { type = 20900 id = 26 }
			name = "1st Special Forces Brigade"
			strength = 100
			type = d_03
			model = 3
		}
	}
	landunit = {
		id = { type = 20900 id = 12 }
		location = 1863 #1017
		name = "2nd Corps"
		division = {
			id = { type = 20900 id = 13 }
			name = "1st Armored Division"
			strength = 100
			type = armor
			model = 2
		}
        division = {
			id = { type = 20900 id = 14 }
			name = "3rd Armored Division"
			strength = 100
			type = armor
			model = 2
		}
        division = {
			id = { type = 20900 id = 15 }
			name = "11th Armored Division"
			strength = 100
			type = armor
			model = 2
		}
        division = {
			id = { type = 20900 id = 16 }
			name = "4th Mechanized Division"
			strength = 100
			type = infantry
			model = 3
		}
        division = {
			id = { type = 20900 id = 17 }
			name = "10th Mechanized Division"
			strength = 100
			type = infantry
			model = 3
		}
	}
        landunit = {
		id = { type = 20900 id = 18 }
		location = 7279 #1021
		name = "3rd Corps"
		division = {
			id = { type = 20900 id = 19 }
			name = "2nd Armored Division"
			strength = 70
			type = armor
			model = 2
		}
        division = {
			id = { type = 20900 id = 20 }
			name = "1st Infantry Brigade"
			strength = 100
			type = d_06
			model = 3
		}
		division = {
			id = { type = 20900 id = 21 }
			name = "2nd Infantry Brigade"
			strength = 100
			type = d_06
			model = 3
		}
        division = {
			id = { type = 20900 id = 22 }
			name = "3rd Infantry Brigade"
			strength = 100
			type = d_06
			model = 3
		}
        division = {
			id = { type = 20900 id = 23 }
			name = "4th Infantry Brigade"
			strength = 100
			type = d_06
			model = 3
		}
        division = {
			id = { type = 20900 id = 24 }
			name = "1st Border Guard Brigade"
			strength = 100
			type = garrison
			model = 3
		}
	}
	landunit = {
		id = { type = 20900 id = 25 }
		location = 1794 #1019
		name = "Lebanon Force"
		division = {
			id = { type = 20900 id = 27 }
			name = "2nd Special Forces Brigade"
			strength = 100
			type = d_03
			model = 3
		}
	}
	landunit = {
		id = { type = 20900 id = 28 }
		location = 1792 #1016
		name = "15th 'As Saiqa' Division"
		division = {
			id = { type = 20900 id = 29 }
			name = "1st Brigade - 15th Div."
			strength = 100
			type = d_09
			model = 3
		}
		division = {
			id = { type = 20900 id = 30 }
			name = "2nd Brigade - 15th Div."
			strength = 100
			type = d_09
			model = 3
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 20900 id = 300 }
		location = 7356 #1021
		base = 7356 #1021
		name = "Syrian Navy"
		division = {
			id = { type = 20900 id = 301 }
			name = "Al Hirasa"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 20900 id = 302 }
			name = "1-580"
			type = destroyer
			model = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 20900 id = 200 }
		location = 1863 #1017
		base = 1863 #1017
		name = "1st Wing"
		division = {
			id = { type = 20900 id = 201 }
			name = "980th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 20900 id = 202 }
			name = "12th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 20900 id = 203 }
			name = "8th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
	}
	airunit = {
		id = { type = 20900 id = 204 }
		location = 1863 #1017
		base = 1863 #1017
		name = "68th Wing"
		division = {
			id = { type = 20900 id = 205 }
			name = "819th Squadron"
			type = tactical_bomber
			strength = 100
			model = 2
		}
		division = {
			id = { type = 20900 id = 206 }
			name = "685th Squadron"
			type = tactical_bomber
			strength = 100
			model = 2
		}
		division = {
			id = { type = 20900 id = 207 }
			name = "677th Squadron"
			type = cas
			strength = 100
			model = 0
		}
	}
	airunit = {
		id = { type = 20900 id = 208 }
		location = 1863 #1017
		base = 1863 #1017
		name = "64th Wing"
		division = {
			id = { type = 20900 id = 209 }
			name = "945th Squadron"
			type = multi_role
			strength = 100
			model = 4
		}
		division = {
			id = { type = 20900 id = 210 }
			name = "77th Squadron"
			type = multi_role
			strength = 100
			model = 4
		}
		division = {
			id = { type = 20900 id = 211 }
			name = "54th Squadron"
			type = multi_role
			strength = 100
			model = 4
		}
		division = {
			id = { type = 20900 id = 212 }
			name = "827th Squadron"
			type = multi_role
			strength = 100
			model = 4
		}
	}
	airunit = {
		id = { type = 20900 id = 213 }
		location = 1863 #1017
		base = 1863 #1017
		name = "4th Wing"
		division = {
			id = { type = 20900 id = 214 }
			name = "943rd Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 20900 id = 215 }
			name = "946th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 20900 id = 216 }
			name = "698th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 20900 id = 217 }
			name = "695th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
	}
	airunit = {
		id = { type = 20900 id = 218 }
		location = 1863 #1017
		base = 1863 #1017
		name = "17th Wing"
		division = {
			id = { type = 20900 id = 219 }
			name = "5th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 20900 id = 220 }
			name = "699th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
	}
}
