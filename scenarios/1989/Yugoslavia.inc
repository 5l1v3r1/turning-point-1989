#####################
# Country main data #
#####################

 province = { id =	451	air_base = { size =	5 current_size = 5 } } # Nis

country =
{ tag                    = YUG
  ai                     = "YUG_1985.ai" 
  ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  # Resource Reserves
  energy                 = 10000
  metal                  = 5000
  rare_materials         = 2500
  oil                    = 500
  supplies               = 2000
  money                  = 15000
  capital                = 453
  manpower               = 200
  dissent                = 20
  
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 4
     political_left    = 10
     freedom           = 4
     free_market       = 3
     professional_army = 3
     defense_lobby     = 7
     interventionism   = 6
  }
  
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation =
    { tag        = GRE
      value      = 100
      guaranteed = { day = 29 month = december year = 1934 }
    }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 29 month = december year = 1934 }
    }
    relation =
    { tag        = TUR
      value      = 100
      guaranteed = { day = 29 month = december year = 1934 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 4 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  
  nationalprovinces      = { 
#Serbia
1895 453 7268 6557 1057 452 3371 451 7271 1896 1168 6564 3393 6563 1894 7270
#Vojvodina
1897 3370 494 3369 493
#Kosovo
6562 415 3372 2609
#461 Removed
  }
  ownedprovinces         = {
#Serbia
1895 453 7268 6557 1057 452 3371 451 7271 1896 1168 6564 3393 6563 1894 7270
#Vojvodina
1897 3370 494 3369 493
#Kosovo
6562 415 3372 2609
  }
  controlledprovinces    = {
#Serbia
1895 453 7268 6557 1057 452 3371 451 7271 1896 1168 6564 3393 6563 1894 7270
#Vojvodina
1897 3370 494 3369 493
#Kosovo
6562 415 3372 2609
  }
  claimedprovinces 		 = {} #665 456 6514 495 2602 6506 3375

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030 1040
   #Motorized
   1100 1110 1120 1130
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
   1470 1480 1490 1500
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
   inventions = {  }
  
   headofstate            = {  type = 9 id = 100034  } 
   headofgovernment       = {  type = 9 id = 100033  } 
   foreignminister        = {  type = 9 id = 100003  } 
   armamentminister       = {  type = 9 id = 100004  } 
   ministerofsecurity     = {  type = 9 id = 100005  } 
   ministerofintelligence = {  type = 9 id = 100006  } 
   chiefofstaff           = {  type = 9 id = 100007  } 
   chiefofarmy            = {  type = 9 id = 100008  } 
   chiefofnavy            = {  type = 9 id = 100009  } 
   chiefofair             = {  type = 9 id = 100010  } 
   
   dormant_ministers = {}
  
    # #####################################
	# ARMY
	# #####################################
	    landunit = 
   { location = 453
     name     = "1st Mechanized Guard Division" 
     id       = {  type = 19800 id = 19  } 
	 division = 
     { id       = {  type = 19800 id = 20  } 
       name     = "3nd Army HQ" 
       type     = hq 
       model    = 3 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
     division = 
     { id       = {  type = 19800 id = 21  } 
       name     = "1st Mechanized Brigade" 
       type     = d_06 
       model    = 3  
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 19800 id = 22  } 
       name     = "2nd Mechanized Brigade" 
       type     = d_06 
       model    = 3 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 3
      }
	 division = 
     { id       = {  type = 19800 id = 23  } 
       name     = "3rd Motorized Brigade" 
       type     = d_02 
       model    = 3 
       strength = 80 
	   extra    = sp_anti_air
       brigade_model = 2
      }
	 }
##########
	 landunit = 
   { location = 451
     name     = "21st Corps" 
     id       = {  type = 19800 id = 27  } 
     division = 
     { id       = {  type = 19800 id = 28  } 
       name     = "211th MechInf Brigade" 
       type     = d_06 
       model    = 3 
       strength = 50 
	   extra    = artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 19800 id = 29  } 
       name     = "203rd Infantry Brigade" 
       type     = d_02 
       model    = 3  
       strength = 50 
	   extra    = artillery
       brigade_model = 3
      }
	}
	landunit = 
   { location = 493
     name     = "12th Corps" 
     id       = {  type = 19800 id = 8  } 
     division = 
     { id       = {  type = 19800 id = 9  } 
       name     = "18th Motorized Brigade" 
       type     = d_02 
       model    = 3  
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 2
	   #locked = yes
      }
	  division = 
     { id       = {  type = 19800 id = 10  } 
       name     = "36th Mechanized Brigade" 
       type     = d_06 
       model    = 3  
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 3
	   #locked = yes
      }
	 division = 
     { id       = {  type = 19800 id = 11  } 
       name     = "453rd Mechanized Brigade" 
       type     = d_06 
       model    = 3 
       strength = 80 
	   extra    = sp_artillery
       brigade_model = 3
	   #locked = yes
      }
	 }
	 landunit = 
   { location = 415
     name     = "52nd Corps" 
     id       = {  type = 19800 id = 33  } 
	 division = 
     { id       = {  type = 19800 id = 34  } 
       name     = "4th Army HQ" 
       type     = hq 
       model    = 3 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
	   #locked = yes
      }
     division = 
     { id       = {  type = 19800 id = 35  } 
       name     = "15th Mechanized Brigade" 
       type     = d_06 
       model    = 3 
       strength = 50 
	   extra    = sp_anti_air
       brigade_model = 2
	   #locked = yes
      }
	 }
	# ################# 
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 19800 id = 65 }
	name = "1st Air Corps"
	location = 453 
	base = 453 
	division = {
	id = { type = 19800 id = 66 }
		name = "No 1 Wing"
		strength = 100
		type = multi_role
		model = 4
		}
	division = {
	id = { type = 19800 id = 67 }
		name = "No 2 Wing"
		strength = 100
		type = multi_role
		model = 4
		}
	division = {
	id = { type = 19800 id = 68 }
		name = "No 3 Wing"
		strength = 100
		type = interceptor
		model = 2
		}
	division = {
	id = { type = 19800 id = 69 }
		name = "No 9 Wing"
		strength = 100
		type = cas
		model = 3
		}
	}
airunit = {
	id = { type = 19800 id = 75 }
	name = "3rd Air Corps"
	location = 451 
	base = 451 
	division = {
	id = { type = 19800 id = 76 }
		name = "No 111 Wing"
		strength = 100
		type = multi_role
		model = 4
		}
	division = {
	id = { type = 19800 id = 77 }
		name = "No 112 Wing"
		strength = 100
		type = multi_role
		model = 4
		}
	division = {
	id = { type = 19800 id = 78 }
		name = "No 113 Wing"
		strength = 100
		type = interceptor
		model = 2
		}
	division = {
	id = { type = 19800 id = 79 }
		name = "No 119 Transport Wing"
		strength = 100
		type = transport_plane
		model = 3
		}
	}
}

		
