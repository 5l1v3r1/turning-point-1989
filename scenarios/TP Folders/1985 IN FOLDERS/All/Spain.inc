#####################
# Country main data #
#####################

country =
{ tag                    = SPA
  manpower               = 200
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 8000
  dissent                = 30
  capital                = 341
  transports             = 100
  escorts                = 27
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 1 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "ECU" NumberOfSpies = 1 }
  SpyInfo                = { country = "VEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "COL" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 4 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }

  nationalprovinces      = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964
                              348 2243 2244
							 1537 1532 1531 1162 1161 1157
							 1714 1734 1726
							 2581
							 2617 2618 2619 2620 
							 3178	3179	3180	
3181	3182	3183	3184	3185	3186	3187	3188	3189	3190	
3191	3192	3193	3194	3195	3196	3197	3198	3199	3200	
3201	3202	3203	3204	3205
954 957 6526
7106 7107 7108 7109 7110 7111 7112 7113 7114 7115 7116 7117 7118 7119 7120 7121 7127 7132 7133 7134 7135 7136 7164 7165 7981
                           }
  ownedprovinces         = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964
                             2243 2244
							 1537 1532 1531 1162 1161 1157
							 1714 1734 1726
							 2617 2618 2619 2620 
							 3178	3179	3180	
3181	3182	3183	3184	3185	3186	3187	3188	3189	3190	
3191	3192	3193	3194	3195	3196	3197	3198	3199	3200	
3201	3202	3203	3204	3205
954 957 6526
7106 7107 7108 7109 7110 7111 7112 7113 7114 7115 7116 7117 7118 7119 7120 7121 7127 7132 7133 7134 7135 7136 7164 7165 7981
                           }
  controlledprovinces    = { 334 332 333 339 338 341 343 346 347 349 350 351 352 353 354 342 355 340 330 331 356 329 357 535 536 537 961 962 963 964
                             2243 2244
							 1537 1532 1531 1162 1161 1157
							 1714 1734 1726
							 2617 2618 2619 2620 
							 3178	3179	3180	
3181	3182	3183	3184	3185	3186	3187	3188	3189	3190	
3191	3192	3193	3194	3195	3196	3197	3198	3199	3200	
3201	3202	3203	3204	3205
954 957 6526
7106 7107 7108 7109 7110 7111 7112 7113 7114 7115 7116 7117 7118 7119 7120 7121 7127 7132 7133 7134 7135 7136 7164 7165 7981
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
     democratic        = 10 
     political_left    = 9 
     freedom           = 10
     free_market       = 7 
     professional_army = 3 
     defense_lobby     = 5 
     interventionism   = 5 
  }
  headofstate            = { type = 9 id = 11001 }
  headofgovernment       = { type = 9 id = 11002 }
  foreignminister        = { type = 9 id = 11003 }
  armamentminister       = { type = 9 id = 11004 }
  ministerofsecurity     = { type = 9 id = 11005 }
  ministerofintelligence = { type = 9 id = 11006 }
  chiefofstaff           = { type = 9 id = 11007 }
  chiefofarmy            = { type = 9 id = 11008 }
  chiefofnavy            = { type = 9 id = 11009 }
  chiefofair             = { type = 9 id = 11010 }
  dormant_leaders        = { 3007 3050 }
 
   # #####################################
   # ARMY
   # #####################################
  
   landunit = 
   { location = 334
     name     = "1st Brunete Armored Division" 
     id       = {  type = 27650 id = 1  } 
     division = 
     { id       = {  type = 27650 id = 2  } 
       name     = "1st Brunete Armored Division" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      } 
	  division = 
     { id       = {  type = 27650 id = 3  } 
       name     = "11th MechInf Brigade" 
       type     = d_06 
       model    = 5 
       strength = 100
		extra    = sp_artillery
       brigade_model = 3	   
      }
	 division = 
     { id       = {  type = 27650 id = 4  } 
       name     = "12th MechInf Brigade" 
       type     = d_06 
       model    = 5 
       strength = 100
		extra    = sp_anti_air
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 27650 id = 5  } 
       name     = "14th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 100
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
#########
landunit = 
   { location = 347
     name     = "2nd Guzman Infantry Division" 
     id       = {  type = 27650 id = 6  } 
     division = 
     { id       = {  type = 27650 id = 7  } 
       name     = "2nd Guzman Infantry Division" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      } 
	  division = 
     { id       = {  type = 27650 id = 8  } 
       name     = "21st MechInf Brigade" 
       type     = d_06 
       model    = 5 
       strength = 100
		extra    = sp_artillery
       brigade_model = 3	   
      }
	 division = 
     { id       = {  type = 27650 id = 9  } 
       name     = "22nd Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 100
		extra    = sp_anti_air
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 27650 id =10  } 
       name     = "23rd Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 100
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
##########
landunit = 
   { location = 341
     name     = "3rd Maestrazgo Infantry Division" 
     id       = {  type = 27650 id = 11  } 
     division = 
     { id       = {  type = 27650 id = 12  } 
       name     = "3rd Maestrazgo Infantry Division" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      } 
	  division = 
     { id       = {  type = 27650 id = 13  } 
       name     = "31st MechInf Brigade" 
       type     = d_06 
       model    = 5 
       strength = 100
		extra    = sp_artillery
       brigade_model = 3	   
      }
	 division = 
     { id       = {  type = 27650 id = 14  } 
       name     = "32nd MechInf Brigade" 
       type     = d_06 
       model    = 5 
       strength = 100
		extra    = sp_anti_air
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 27650 id =15  } 
       name     = "8th Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 100
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
##########
landunit = 
   { location = 356
     name     = "4th Urgell Mountain Division" 
     id       = {  type = 27650 id = 16  } 
     division = 
     { id       = {  type = 27650 id = 17  } 
       name     = "4th Urgell Mountain Infantry Division" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      } 
	  division = 
     { id       = {  type = 27650 id = 18  } 
       name     = "41st Mountain Brigade" 
       type     = d_09 
       model    = 5 
       strength = 100
		extra    = artillery
       brigade_model = 3	   
      }
	 division = 
     { id       = {  type = 27650 id = 19  } 
       name     = "42nd Alpine Brigade" 
       type     = d_09 
       model    = 5 
       strength = 100
		extra    = artillery
       brigade_model = 3	   
      }
	 }
##########
landunit = 
   { location = 354
     name     = "5th Navarra Mountain Division" 
     id       = {  type = 27650 id = 20  } 
     division = 
     { id       = {  type = 27650 id = 21  } 
       name     = "5th Navarra Mountain Infantry Division" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      } 
	  division = 
     { id       = {  type = 27650 id = 22  } 
       name     = "51st Mountain Brigade" 
       type     = d_09 
       model    = 5 
       strength = 100
		extra    = artillery
       brigade_model = 3	   
      }
	 division = 
     { id       = {  type = 27650 id = 23  } 
       name     = "52nd Motorized Brigade" 
       type     = d_02 
       model    = 5 
       strength = 100
		extra    = artillery
       brigade_model = 3	   
      }
	 }
##########
landunit = 
   { location = 2244
     name     = "1st Jarama Cavalry Brigade" 
     id       = {  type = 27650 id = 24  } 
     division = 
     { id       = {  type = 27650 id = 25  } 
       name     = "1st Jarama Cavalry Brigade" 
       type     = d_02 
       model    = 5 
       strength = 100 
       extra    = sp_anti_air
       brigade_model = 3
      }
	}
#########
landunit = 
   { location = 1726
     name     = "2nd Castillejos Cavalry Brigade" 
     id       = {  type = 27650 id = 26  } 
     division = 
     { id       = {  type = 27650 id = 27  } 
       name     = "2nd Castillejos Cavalry Brigade" 
       type     = d_02 
       model    = 5 
       strength = 100 
       extra    = sp_anti_air
       brigade_model = 3
      }
	}
#########
landunit = 
   { location = 7121
     name     = "1 Roger de Flor Parachute Brigade" 
     id       = {  type = 27650 id = 28  } 
     division = 
     { id       = {  type = 27650 id = 29  } 
       name     = "1 Roger de Flor Parachute Brigade" 
       type     = d_08 
       model    = 5 
       strength = 100 
       
      }
	}
#########
landunit = 
   { location = 346
     name     = "Legion Command" 
     id       = {  type = 27650 id = 30  } 
     division = 
     { id       = {  type = 27650 id = 31  } 
       name     = "Legion Command" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      } 
	  division = 
     { id       = {  type = 27650 id = 32  } 
       name     = "1st Tercio Brigade" 
       type     = d_05 
       model    = 5 
       strength = 100
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
######
landunit = 
   { location = 341
     name     = "Fuerzas Aeromoviles" 
     id       = {  type = 27650 id = 33  } 
    division = 
     { id       = {  type = 27650 id = 34  } 
       name     = "5th Helicopter" 
       type     = d_04 
       model    = 5 
       strength = 100
			   
      }
	 division = 
     { id       = {  type = 27650 id = 35  } 
       name     = "6th Helicopter" 
       type     = d_04 
       model    = 5 
       strength = 100
			   
      }
	}
######
landunit = 
   { location = 341
     name     = "Ordenes Militares" 
     id       = {  type = 27650 id = 36  } 
    division = 
     { id       = {  type = 27650 id = 37  } 
       name     = "Santa Fe" 
       type     = d_03 
       model    = 5 
       strength = 100
			   
      }
	 division = 
     { id       = {  type = 27650 id = 38  } 
       name     = "La Victoria" 
       type     = d_03 
       model    = 5 
       strength = 100
			   
      }
	}
# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 27650 id = 40 }
	name = "Ejercito del Aire"
	location = 341 
	base = 341 
	division = {
	id = { type = 27650 id = 41 }
		name = "No 11 Wing"
		strength = 100
		type = interceptor
		model = 3
		}
	division = {
	id = { type = 27650 id = 42 }
		name = "No 12 Wing"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 27650 id = 43 }
		name = "No 14 Wing"
		strength = 100
		type = interceptor
		model = 3
		}
	division = {
	id = { type = 27650 id = 44 }
		name = "No 15 Wing"
		strength = 100
		type = multi_role
		model = 5
		}
	}
##########
	airunit = {
	id = { type = 27650 id = 45 }
	name = "Ejercito del Aire 2"
	location = 334 
	base = 334 
	division = {
	id = { type = 27650 id = 46 }
		name = "No 21 Wing"
		strength = 100
		type = interceptor
		model = 3
		}
	division = {
	id = { type = 27650 id = 47 }
		name = "No 22 Wing"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 27650 id = 48 }
		name = "No 23 Wing"
		strength = 100
		type = interceptor
		model = 3
		}
	}
##########
	airunit = {
	id = { type = 27650 id = 49 }
	name = "Ejercito del Aire 3"
	location = 354 
	base = 354 
	division = {
	id = { type = 27650 id = 50 }
		name = "No 31 Wing"
		strength = 100
		type = interceptor
		model = 3
		}
	division = {
	id = { type = 27650 id = 51 }
		name = "No 35 Wing"
		strength = 100
		type = multi_role
		model = 5
		}
	division = {
	id = { type = 27650 id = 52 }
		name = "No 37 Wing"
		strength = 100
		type = interceptor
		model = 3
		}
	division = {
	id = { type = 27650 id = 53 }
		name = "No 37 Wing"
		strength = 100
		type = transport_plane
		model = 3
		}
	}
###################
## NAVY
###############
	navalunit =  {
		name = "Armada Espanola 1"  
		id = {  type = 27650 id = 54  }  
		location = 334  
		base     = 334  
		division = {
			id = {  type = 27650 id = 55  }  
			name = "Toledo"  
			type = light_cruiser 
			model = 4
		}
		division = {
			id = {  type = 27650 id = 56  }  
			name = "Ronaldo"  
			type = light_cruiser 
			model = 4
		}
	}
##########
	navalunit =  {
		name = "Armada Espanola 2"  
		id = {  type = 27650 id = 57  }  
		location = 356  
		base     = 356  
		division = {
			id = {  type = 27650 id = 58  }  
			name = "Cartagena"  
			type = destroyer 
			model = 6
		}
		division = {
			id = {  type = 27650 id = 59  }  
			name = "Madrid"  
			type = destroyer
			model = 6
		}
	}
##########
	navalunit =  {
		name = "Armada Espanola 3"  
		id = {  type = 27650 id = 60  }  
		location = 1157  
		base     = 1157  
		division = {
			id = {  type = 27650 id = 61  }  
			name = "James"  
			type = submarine
			model = 5
		}
		division = {
			id = {  type = 27650 id = 62  }  
			name = "Philip"  
			type = submarine
			model = 5
		}
	}
}

