 ############################## 
 # Country definition for LBY # 
 ############################## 
  province = { id = 922   # Faya
   anti_air = 1 
   air_base = { size = 3 current_size = 3 } 
 } 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = LBY
   ai = "lby_1985.ai"
   
   # Resource Reserves 
   energy                 = 4000
   metal                  = 2000
   rare_materials          = 3000
   transports 			  = 100
   oil                    = 20000
   supplies               = 1000
   money                  = 3000 
   capital                = 932
   manpower               = 50
      
   SpyInfo                = {  country = "LIB" NumberOfSpies = 1  } 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3
     political_left    = 6 
     freedom           = 4 
     free_market       = 3 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 9 
    } 
	nationalprovinces      = { 
	932 933 952 931 930 928 929 927 926 925 922
	924 923 921 920 919 916 917 1017
	2896 2895 2894 2886 2887 2893 2892 2889 2891 2890 2888
4535 4536 4537 4538 4539 4540 4541 4542 4543 4544 4545 4546 4547 4548 4549 4550 4551 4552 4553 4554
4599 4600 2897
	}
	ownedprovinces         = { 
	932 933 952 931 930 928 929 927 926 925 922
	924 923 921 920 919 916 917 1017
	2896 2895 2894 2886 2887 2893 2892 2889 2891 2890 2888
4535 4536 4537 4538 4539 4540 4541 4542 4543 4544 4545 4546 4547 4548 4549 4550 4551 4552 4553 4554

	}
	controlledprovinces    = { 
	932 933 952 931 930 928 929 927 926 925 922
	924 923 921 920 919 916 917 1017
	2896 2895 2894 2886 2887 2893 2892 2889 2891 2890 2888
4535 4536 4537 4538 4539 4540 4541 4542 4543 4544 4545 4546 4547 4548 4549 4550 4551 4552 4553 4554
4599 4600
	}

	diplomacy = {} 
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
    SpyInfo                = {  country = "USA" NumberOfSpies = 3  } 

	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 14500 id = 1 }
		location = 932 #750
		name = "Libyan Army"
		division = {
			id = { type = 14500 id = 2 }
			name = "1st Armored Division"
			strength = 50
			type = armor
			model = 3
		}
        division = {
			id = { type = 14500 id = 3 }
			name = "32nd Brigade"
			strength = 100
			type = cavalry
			model = 3
		}
		division = {
			id = { type = 14500 id = 4 }
			name = "1st Commando Brigade"
			strength = 100
			type = d_03
			model = 4
			experience = 5
		}
		division = {
			id = { type = 14500 id = 5 }
			name = "2nd Commando Brigade"
			strength = 100
			type = d_03
			model = 4
			experience = 5
		}
	}
	landunit = {
		id = { type = 14500 id = 6 }
		location = 920 #765
		name = "1st Mechanized Division"
		division = {
			id = { type = 14500 id = 7 }
			name = "1st Mechanized Division"
			strength = 50
			type = infantry
			model = 4
		}
	}
	landunit = {
		id = { type = 14500 id = 8 }
		location = 930 #757
		name = "2nd Infantry Division"
		division = {
			id = { type = 14500 id = 9 }
			name = "2nd Infantry Division"
			strength = 50
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 14500 id = 10 }
		location = 933 #752
		name = "1st Infantry Division"
		division = {
			id = { type = 14500 id = 11 }
			name = "1st Infantry Division"
			strength = 100
			type = motorized
			model = 3
		}
	}
    landunit = {
		id = { type = 14500 id = 12 }
		location = 932 #750
		name = "Revolutionary Guard Corps"
		division = {
			id = { type = 14500 id = 13 }
			name = "Revolutionary Guard Corps"
			strength = 100
			type = militia
			model = 5
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 14500 id = 300 }
		location = 932 #750
		base = 932 #750
		name = "Surface Fleet"
		division = {
			id = { type = 14500 id = 301 }
			name = "Al Hani"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 14500 id = 302 }
			name = "1st Transport Fleet"
			type = transport
			model = 5
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 14500 id = 200 }
		location = 932 #750
		base = 932 #750
		name = "Tripoli Sector"
		division = {
			id = { type = 14500 id = 201 }
			name = "1203rd Squadron"
			type = interceptor
			strength = 50
			model = 2
		}
		division = {
			id = { type = 14500 id = 202 }
			name = "1025th Squadron"
			type = interceptor
			strength = 100
			model = 2
		}
		division = {
			id = { type = 14500 id = 203 }
			name = "1032nd Fighter-Bomber Squadron"
			type = tactical_bomber
			strength = 50
			model = 2
		}
	}
	airunit = {
		id = { type = 14500 id = 204 }
		location = 932 #750
		base = 932 #750
		name = "Hun Sector"
		division = {
			id = { type = 14500 id = 205 }
			name = "1st Fighter-Bomber Squadron"
			type = tactical_bomber
			strength = 75
			model = 2
		}
		division = {
			id = { type = 14500 id = 206 }
			name = "2nd Fighter-Bomber Squadron"
			type = tactical_bomber
			strength = 75
			model = 2
		}
		division = {
			id = { type = 14500 id = 207 }
			name = "1040th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
	}
	airunit = {
		id = { type = 14500 id = 208 }
		location = 932 #750
		base = 932 #750
		name = "Tripoli Sector 2"
		division = {
			id = { type = 14500 id = 209 }
			name = "1055th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 14500 id = 210 }
			name = "1075th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 14500 id = 211 }
			name = "1079th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 14500 id = 212 }
			name = "1032nd Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
	}
}