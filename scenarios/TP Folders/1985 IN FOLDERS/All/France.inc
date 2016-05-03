#####################
# Country main data #
#####################

country =
{ tag                    = FRA
  capital                = 56
  ai                     = "FRA_1985.ai" 
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 80000
  manpower               = 500
  transports             = 300
  escorts                = 60
  peacetime_ic_mod       = 0.5
  
  diplomacy = {
	#relation = 
    # {  tag        = DFR 
    #   value      = 50 
    #   guaranteed = {  day = 0 month = january year = 1985  } 
	#}
  }
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 4 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }

  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
							 2555 2514 2557 2509 2242 1676 1022 841 1643
							 530 2583 3060
							 3134	3135	3136	3137	3138	3139	3140	
3141	3142	3143	3144	3145	3146	3147	
3148	3149	3150	3151	3152	3153	3154	
3155	3156	3157	3158	3159	3160	3161	
3162	3163	3164	3165	3166	3167	3168	
3169	3170	3171	3172	3173	3174	3175	
3176	3177	3213	2626	2648 6524 6527 6556
7088 7089 567 898 899 4383 7235 7233 7232 7234 7238 7230 1769 7231 1761 7228 7236 7237 7229 1770 1752 1692 7210 7211 7212 7213 1691 5420 3892 875 581
                           }

  ownedprovinces         = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
							 2555 2514 2557 2509 2242 1676 1022 841 1643
							 3060
							 3134	3135	3136	3137	3138	3139	3140	
3141	3142	3143	3144	3145	3146	3147	
3148	3149	3150	3151	3152	3153	3154	
3155	3156	3157	3158	3159	3160	3161	
3162	3163	3164	3165	3166	3167	3168	
3169	3170	3171	3172	3173	3174	3175	
3176	3177	2626	2648    6527 	6556
7088 7089 567 898 899 4383 7235 7233 7232 7234 7238 7230 1769 7231 1761 7228 7236 7237 7229 1770 1752 1692 7210 7211 7212 7213 1691 5420 3892 875 1135 5096 2024 581
                           }

  controlledprovinces    = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
							 2555 2514 2557 2509 2242 1676 1022 841 1643
							 3060
							 3134	3135	3136	3137	3138	3139	3140	
3141	3142	3143	3144	3145	3146	3147	
3148	3149	3150	3151	3152	3153	3154	
3155	3156	3157	3158	3159	3160	3161	
3162	3163	3164	3165	3166	3167	3168	
3169	3170	3171	3172	3173	3174	3175	
3176	3177	2626	2648    6527 	6556
7088 7089 567 898 899 4383 7235 7233 7232 7234 7238 7230 1769 7231 1761 7228 7236 7237 7229 1770 1752 1692 7210 7211 7212 7213 1691 5420 3892 875 1135 5096 2024 581
                           }

  claimedprovinces 		 = {}

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030 1040 1050
   #Motorized
   1100 1110 1120 1130 1140
   #Mountain
   1160 1170 1180 1190 1200
   #Special Forces
   1250 1260 1270 1280 1290
   #Naval Infantry
   1560 1570 1580 1590 1600
   #Airborne Infantry
   1670 1680 1690 1700 1710
   #Air Cavalry
   1396 1400 1410 1420
   #Armored Cavalry
   13060 13070 13080 1310
   #Mechanized
   1470 1480 1490 1500 1510
   #Irregular Infantry
   1360 1370 1380 1390 1530
   #Combat Engineers
   1830 1840 1850 1860 1870
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646 2650 2030
   #Infantry Fighting Vehicles
   2100 2110 2120
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450 21180 21190
   #Armored Personnel Carriers
   2170 2180 2850 2400 
   #Field Artillery
   2290 2300 2310 2900 
   #Self-Propelled Anti-Air
   2810 2820 2510 2520
   #Man-Portable Air-Defense Systems
   3000 3170 3180
   #Self-Propelled Artillery
   2220 2230 2240 2250 
   #Self-Propelled Rocket Artillery
   2980 2260 2270 2280 
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110 3120 3130 3140 3150
   #Cruisers
   3410 3420 3430 3440 3450 3456 3460
   #Nuclear Cruisers
   3470 3480 12040 3770 3780
   #Destroyers
   3310 3320 3330 3340 3350 12030 3710
   #Light Aircraft Carriers
   12100 12110
   #Helicopter Carrier
   3210 3220 3230
   #Aircraft Carriers
   3510 3520 3530 
   #Supercarriers
   3540 3560 12060 3570
   #Submarines
   3010 3020 3030 3060 3070 3090
   #Nuclear Submarines
   12000 3080 3610 3680 3690
   #Nuclear Ballistic Submarines
   3620 3630 3640 3650
   #Transport Ships
   3900 3910 3920 3930 3940 3950
   ###################
   #    Aircraft     #
   ###################
   #Attack Helicopter
   4900 4910 4920 4930
   #Reconnaissance Aircraft
   4770 4780
   #Strategic Bomber
   4800 4810
   #Strike Bomber
   15040 15050 4360
   #Naval Patrol
   4610 4620
   #ASW Bomber
   4230 4240
   #Attack Aircraft
   4030 4060 4090 15000 15010 15020
   #Multi-Role
   4500 4570 4530 4540 4550 4010 4020
   #Air Superiority Fighter
   4510 4520 4300 4310 4320
   #Carrier Air Groups
   #ACAG
   2320 2330 2340 2350
   #MRCAG
   2140 2150 2160 2190 2200
   #FCAG
   2020 2070 2080 2090 2130
   #Air Transports
   4250 4260 4270 4290
   #AEW&C
   4450 4180
   #VTOL Aircraft
   4350
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
   5810 5820 5050
   #Heavy Industry
   5130 5110 5120
   #Material Science
   53050 63160 63070 #63080
   #Construction Eng.
   5800 5080 5090
   #Rocketry
   5560 5910 5410 53030 5450 5460 
   5426 5440 5430 #5476 Moon Landing
   #Agriculture
   5700 5710 5010
   #Oil
   5190 5220
   #Computing
   5310 54010 54020 54030 5320 53116 5330 53060 #5340 5920
   #Nuclear
   5470 5480 5490 5500 5510 5520 5530 5540
   #Research
   5316
   #Cryptography
   5350 5360 5370 5380
   #Medicine
   5600 5610 5680
   5630
   5660 5730
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6560 6030 6120 6110 6130
   ###################
   #  Secret Weapons #
   ###################
   #
   
   #
   
   #
   ###################
   # Naval Doctrines #
   ###################
   #Carrier Supremacy
   8900 8910 8920 8930 8940 8950 8960
   #Surface Ship Role
   81050 81060 81070 81080 81090 81100 81110 81120
   #Naval Interdiction
   8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8700 8710 8720 8730 8740 8750
   #Naval Supremacy
   8100 8110 8150 8120 8160 8170 8200 8210 8220 8230 8240 8250 8260 8300 8310 8320 8330 8340 8350
   #Logistics Support
   82500 82510 82520 82530
   #Naval Capability
   8010 8020 8030
   #Amphibious Warfare
   82300 82310 82320 82330
   ###################
   #  Air Doctrines  #
   ###################
   9390 9260 9400 9410
   9090 9100 9110 9120 9050 9060 9070
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   9130 9420 9300
   27320 27330 27350 27360 27380 27390
   27000 27140 27150 27160 27170 27180 27190 27200
   9270 27070 27080 27090 27100 27110 27120 27130
   }
  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
      political_left    = 6  
      freedom           = 10  
      free_market       = 10  
      professional_army = 2  
      defense_lobby     = 1  
      interventionism   = 1
  }
  headofstate            = { type = 9 id = 2001 }
  headofgovernment       = { type = 9 id = 2002 }
  foreignminister        = { type = 9 id = 2003 }
  armamentminister       = { type = 9 id = 2004 }
  ministerofsecurity     = { type = 9 id = 2005 }
  ministerofintelligence = { type = 9 id = 2006 }
  chiefofstaff           = { type = 9 id = 2007 }
  chiefofarmy            = { type = 9 id = 2008 }
  chiefofnavy            = { type = 9 id = 2009 }
  chiefofair             = { type = 9 id = 2010 }
  
  # #################
  # ###FRENCH OOB####
  # #################
  ##1st French Army 
  landunit = 
  {  id       = {  type = 13500 id = 1  } 
    name     = "1st French Army" 
    location = 73
    Division = 
    {  id       = {  type = 13500 id = 2 } 
      name     = "GQG" 
      type     = hq 
      model    = 5 
      strength = 100 
	  extra    = armored_car
      brigade_model = 2
     }
     division = 
     { id       = {  type = 13500 id = 3  } 
       name     = "13 de Dragoons Parachutistes" 
       type     = d_03
       model    = 5 
       strength = 100
		}   
 	 division = 
     { id       = {  type = 13500 id = 4  } 
       name     = "11th Chasseurs" 
       type     = d_06
       model    = 4 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	}
##############
#1st French Corps
landunit = 
   { location = 72
     name     = "1st ArmDiv HQ" 
     id       = {  type = 13500 id = 5  } 
     division = 
     { id       = {  type = 13500 id = 6 } 
       name     = "1st Armored Division" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 7  } 
       name     = "1st Armored Division" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 8  } 
       name = "6th Dragoons" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 9  } 
       name     = "8th Chasseurs"  
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_anti_air
       brigade_model = 3	   
      }
	   division = 
     { id       = {  type = 13500 id = 10  } 
       name     = "9th Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 11  } 
       name     = "61st Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
     }
########
landunit = 
   { location = 1643
     name     = "7th ArmDiv HQ" 
     id       = {  type = 13500 id = 12  } 
     division = 
     { id       = {  type = 13500 id = 13 } 
       name     = "7th Armored HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 14  } 
       name     = "7th Armored Division" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 15  } 
       name = "1st Dragoons" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 16  } 
       name     = "30th Chasseurs"  
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_anti_air
       brigade_model = 3	   
      }
	   division = 
     { id       = {  type = 13500 id = 17  } 
       name     = "170th Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 18  } 
       name     = "60th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
     }
########
landunit = 
   { location = 359
     name     = "12 Div Legere Blindee HQ" 
     id       = {  type = 13500 id = 19  } 
     division = 
     { id       = {  type = 13500 id = 20 } 
       name     = "12 DivLB HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 21  } 
       name     = "507th Char de Combat" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 22  } 
       name = "3rd Chasseurs" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 23  } 
       name     = "3rd Paracchutiste"  
       type     = d_08 
       model    = 5 
       strength = 95
			   
      }
	   division = 
     { id       = {  type = 13500 id = 24  } 
       name     = "114th Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 25  } 
       name     = "47th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
     }
##########
landunit = 
   { location = 362
     name     = "14 Div Legere Blindee HQ" 
     id       = {  type = 13500 id = 26  } 
     division = 
     { id       = {  type = 13500 id = 27 } 
       name     = "14 DivLB HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 28  } 
       name     = "11th Cuirassiers" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 29  } 
       name = "1st Chasseurs" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 30  } 
       name     = "4th Infanterie Etrangere"  
       type     = d_02 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 31  } 
       name     = "3rd Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 32  } 
       name     = "19th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
	 division = 
     { id       = {  type = 13500 id = 33  } 
       name     = "7th Helicopteres de Combat" 
       type     = d_04 
       model    = 4 
       strength = 95
		}
	division = 
     { id       = {  type = 13500 id = 34  } 
       name     = "57th Hussards" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
     }
 ###############
 ###2nd French Corps
 landunit = 
   { location = 315
     name     = "3rd ArmDiv HQ" 
     id       = {  type = 13500 id = 35  } 
     division = 
     { id       = {  type = 13500 id = 36 } 
       name     = "3 Armor HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 37  } 
       name     = "3rd Armored Division" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 38  } 
       name = "12th Cuirassiers" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 39  } 
       name     = "3rd Dragoons"  
       type     = d_06 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 40  } 
       name     = "110th Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 41  } 
       name     = "41th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
		division = 
     { id       = {  type = 13500 id = 42  } 
       name     = "131 Commando" 
       type     = d_05 
       model    = 5 
       strength = 95
		
	   	}
     }
########
 landunit = 
   { location = 3250
     name     = "5th ArmDiv HQ" 
     id       = {  type = 13500 id = 43  } 
     division = 
     { id       = {  type = 13500 id = 44 } 
       name     = "5 Armor HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 45  } 
       name     = "5th Armored Division" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 46  } 
       name = "2nd Cuirassiers" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 47  } 
       name     = "4th Cuirassiers"  
       type     = d_06 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 48  } 
       name     = "5th Cuirassiers" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 49  } 
       name     = "2nd Chasseurs" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
		division = 
     { id       = {  type = 13500 id = 50  } 
       name     = "24th Chasseurs" 
       type     = d_05 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
	division = 
     { id       = {  type = 13500 id = 51  } 
       name     = "2nd Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
	division = 
     { id       = {  type = 13500 id = 52  } 
       name     = "24th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
     }
	 ########
 landunit = 
   { location = 3145
     name     = "15th Infantry Division" 
     id       = {  type = 13500 id = 53  } 
     division = 
     { id       = {  type = 13500 id = 54 } 
       name     = "15 InfDiv HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 55  } 
       name     = "5th Chasseurs" 
       type     = d_06 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 56  } 
       name = "92nd Infanterie" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 57  } 
       name     = "99th Infanterie"  
       type     = d_06 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 58  } 
       name     = "126th Infanterie" 
       type     = d_02
       model    = 5 
       strength = 95
		extra    = artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 59  } 
       name     = "33rd Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = artillery
       brigade_model = 3
	   	}	
     }
###############
 ###3rd French Corps
 landunit = 
   { location = 3164
     name     = "2nd ArmDiv HQ" 
     id       = {  type = 13500 id = 60  } 
     division = 
     { id       = {  type = 13500 id = 61 } 
       name     = "2 Armor HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 62  } 
       name     = "2nd Armored Division" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 63  } 
       name = "6th Cuirassiers" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 64  } 
       name     = "2nd Dragoons"  
       type     = d_06 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 65  } 
       name     = "5th Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 66  } 
       name     = "40th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
		division = 
     { id       = {  type = 13500 id = 67  } 
       name     = "1th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
		
	   	}
     }
########
landunit = 
   { location = 42
     name     = "10th ArmDiv HQ" 
     id       = {  type = 13500 id = 68  } 
     division = 
     { id       = {  type = 13500 id = 69 } 
       name     = "10 Armor HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 70  } 
       name     = "10th Armored Division" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 71  } 
       name = "2nd Chasseurs" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 72  } 
       name     = "4th Dragoons"  
       type     = d_06 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 73  } 
       name     = "150th Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 74  } 
       name     = "151st Infanterie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
		division = 
     { id       = {  type = 13500 id = 75  } 
       name     = "8th Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
	   	}
     }
#############
landunit = 
   { location = 42
     name     = "8th Infantry Division" 
     id       = {  type = 13500 id = 76  } 
     division = 
     { id       = {  type = 13500 id = 77 } 
       name     = "8th InfDiv HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 78  } 
       name     = "7th Chasseurs" 
       type     = d_06 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 79  } 
       name = "92nd Infanterie" 
       type     = d_06 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 80  } 
       name     = "8th Infanterie"  
       type     = d_02 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 81  } 
       name     = "67th Infanterie" 
       type     = d_02
       model    = 5 
       strength = 95
		extra    = artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 82  } 
       name     = "41st Artillerie" 
       type     = d_02 
       model    = 5 
       strength = 95
		extra    = artillery
       brigade_model = 3
	   	}	
     }
###########
##rapid reaction force
landunit = 
   { location = 73
     name     = "Force d'Action Rapide HQ" 
     id       = {  type = 13500 id = 83  } 
     division = 
     { id       = {  type = 13500 id = 84 } 
       name     = "FAR HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       }
	  division = 
     { id       = {  type = 13500 id = 85  } 
       name     = "4th Div Aeromobile" 
       type     = d_03
       model    = 5 
       strength = 95 
	   }
	  division = 
     { id       = {  type = 13500 id = 86  } 
       name = "1 Heli de Combat" 
       type     = d_04 
       model    = 5 
       strength = 95
		}
	division = 
     { id       = {  type = 13500 id = 87  } 
       name = "3 Heli de Combat" 
       type     = d_04 
       model    = 5 
       strength = 95
		}
	division = 
     { id       = {  type = 13500 id = 88  } 
       name = "5 Heli de Combat" 
       type     = d_04 
       model    = 5 
       strength = 95
		}
	}
########
landunit = 
   { location = 318
     name     = "6 Div Legere Blindee HQ" 
     id       = {  type = 13500 id = 89  } 
     division = 
     { id       = {  type = 13500 id = 90 } 
       name     = "6 DivLB HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
      }
	  division = 
     { id       = {  type = 13500 id = 91  } 
       name     = "1 Spahis" 
       type     = armor 
       model    = 5 
       strength = 95 
	   extra    = sp_artillery
       brigade_model = 3
      }
	  division = 
     { id       = {  type = 13500 id = 92  } 
       name = "1st Etrangere de Cavalerie" 
       type     = cavalry 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 93  } 
       name     = "2nd Infanterie Etrangere"  
       type     = d_02 
       model    = 5 
       strength = 95
	   extra    = sp_artillery
       brigade_model = 3
			   
      }
	   division = 
     { id       = {  type = 13500 id = 94  } 
       name     = "3rd Infanterie de Marine" 
       type     = d_05 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3	   
      }
	  division = 
     { id       = {  type = 13500 id = 95  } 
       name     = "68th Artillerie de Marine" 
       type     = d_05 
       model    = 5 
       strength = 95
		extra    = sp_artillery
       brigade_model = 3
	   	}
	 }
 ###############
landunit = 
   { location = 359
     name     = "11th Division Parachutiste HQ" 
     id       = {  type = 13500 id = 96  } 
     division = 
     { id       = {  type = 13500 id = 97 } 
       name     = "11 ParaDiv HQ" 
       type     = hq 
       model    = 5 
       strength = 100 
       
      }
	  division = 
     { id       = {  type = 13500 id = 98  } 
       name     = "11 Para Brigade" 
       type     = d_08 
       model    = 5 
       strength = 95 
	    }
	 division = 
     { id       = {  type = 13500 id = 99  } 
       name     = "9 Para Brigade" 
       type     = d_08 
       model    = 5 
       strength = 95 
	    }
	}
##########
landunit = 
   { location = 362
     name     = "27th Division Alpine HQ" 
     id       = {  type = 13500 id = 100  } 
     division = 
     { id       = {  type = 13500 id = 101 } 
       name     = "27th DivAlpine" 
       type     = hq 
       model    = 5 
       strength = 100 
       
      }
	  division = 
     { id       = {  type = 13500 id = 102  } 
       name     = "4th Chasseurs Alpin" 
       type     = d_09 
       model    = 5 
       strength = 95 
	    }
	 division = 
     { id       = {  type = 13500 id = 103  } 
       name     = "159th Chasseurs Alpin" 
       type     = d_09 
       model    = 5 
       strength = 95 
	    }
	}	
	# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 13500 id = 104 }
	name = "Escadre de Chasse 2"
	location = 44 
	base = 44 
	division = {
	id = { type = 13500 id = 105 }
		name = "1/2 Cigognes"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 106 }
		name = "2/2 Cigognes"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 107 }
		name = "3/2 Cigognes"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
airunit = {
	id = { type = 13500 id = 108 }
	name = "Escadre de Chasse 3"
	location = 56 
	base = 56 
	division = {
	id = { type = 13500 id = 109 }
		name = "1/3 Navarre"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 110 }
		name = "2/3 Champagne"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 111 }
		name = "3/3 Ardennes"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
airunit = {
	id = { type = 13500 id = 112 }
	name = "Escadre de Chasse 4"
	location = 72
	base = 72 
	division = {
	id = { type = 13500 id = 113 }
		name = "1/4 Dauphine"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 114 }
		name = "2/4 Lafayette"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
airunit = {
	id = { type = 13500 id = 115 }
	name = "Escadre de Chasse 5"
	location = 62 
	base = 62 
	division = {
	id = { type = 13500 id = 116 }
		name = "1/5 Il de France"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 117 }
		name = "2/5 Il de France"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 118 }
		name = "3/5 Il de France"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
airunit = {
	id = { type = 13500 id = 119 }
	name = "Escadre de Chasse 7"
	location = 32 
	base = 32 
	division = {
	id = { type = 13500 id = 120 }
		name = "1/7 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 13500 id = 121 }
		name = "2/7 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 13500 id = 122 }
		name = "3/7 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 13500 id = 123 }
		name = "4/7 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	}
##########
airunit = {
	id = { type = 13500 id = 124 }
	name = "Escadre de Chasse 11"
	location = 38 
	base = 38 
	division = {
	id = { type = 13500 id = 125 }
		name = "1/11 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 13500 id = 126 }
		name = "2/11 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 13500 id = 127 }
		name = "3/11 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 13500 id = 128 }
		name = "4/11 Attack Squadron"
		strength = 100
		type = multi_role
		model = 6
			}
	}
##########
airunit = {
	id = { type = 13500 id = 129 }
	name = "Escadre de Chasse 12"
	location = 59 
	base = 59 
	division = {
	id = { type = 13500 id = 130 }
		name = "1/12 Cambresis"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 131 }
		name = "2/12 Picardie"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 132 }
		name = "3/12 Cornouaille"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
airunit = {
	id = { type = 13500 id = 133 }
	name = "Escadre de Chasse 13"
	location = 325 
	base = 325 
	division = {
	id = { type = 13500 id = 134 }
		name = "1/13 Artois"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 135 }
		name = "2/13 Artois"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 136 }
		name = "3/13 Artois"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 137 }
		name = "4/13 Artois"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
airunit = {
	id = { type = 13500 id = 138 }
	name = "Escadre de Chasse 30"
	location = 359 
	base = 359 
	division = {
	id = { type = 13500 id = 139 }
		name = "1/30 Valois"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 140 }
		name = "2/30 Normandie"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 141 }
		name = "3/30 Lorraine"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
airunit = {
	id = { type = 13500 id = 142 }
	name = "Escadre de Reconnaissance 33"
	location = 364 
	base = 364 
	division = {
	id = { type = 13500 id = 143 }
		name = "1/33 Belfort"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 144 }
		name = "2/33 Savoie"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 145 }
		name = "3/33 Moselle"
		strength = 100
		type = interceptor
		model = 4
			}
	}
##########
##########
airunit = {
	id = { type = 13500 id = 146 }
	name = "Escadre de Bombardement 91"
	location = 44 
	base = 44 
	division = {
	id = { type = 13500 id = 147 }
		name = "1/91 Gascogne"
		strength = 100
		type = strategic_bomber
		model = 1
			}
	division = {
	id = { type = 13500 id = 148 }
		name = "2/91 Marne"
		strength = 100
		type = strategic_bomber
		model = 1
			}
	division = {
	id = { type = 13500 id = 149 }
		name = "3/91 "
		strength = 100
		type = strategic_bomber
		model = 1
			}
	}
##########
airunit = {
	id = { type = 13500 id = 150 }
	name = "Escadre de Bombardement 94"
	location = 72 
	base = 72 
	division = {
	id = { type = 13500 id = 151 }
		name = "1/94 "
		strength = 100
		type = strategic_bomber
		model = 1
			}
	division = {
	id = { type = 13500 id = 152 }
		name = "2/94 "
		strength = 100
		type = strategic_bomber
		model = 1
			}
	division = {
	id = { type = 13500 id = 153 }
		name = "3/94 "
		strength = 100
		type = strategic_bomber
		model = 1
			}
	}
##########
airunit = {
	id = { type = 13500 id = 154 }
	name = "Comm. des Ecoles de l'Armee de l'Air"
	location = 62 
	base = 62 
	division = {
	id = { type = 13500 id = 155 }
		name = "GI 312 "
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 156 }
		name = "EC 1/8 "
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 13500 id = 157 }
		name = "EC 2/8 "
		strength = 100
		type = interceptor
		model = 4
			}
	}
###################
## NAVY
###############
	navalunit =  {
		name = "La Royale 1"  
		id = {  type = 13500 id = 158  }  
		location = 32  
		base     = 32  
		division = {
			id = {  type = 13500 id = 159  }  
			name = "Le Vigilant"  
			type = heavy_cruiser 
			model = 6
		}
		division = {
			id = {  type = 13500 id = 160  }  
			name = "Le Henaff"  
			type = light_cruiser 
			model = 4
		}
		division = {
			id = {  type = 13500 id = 161  }  
			name = "L'Her"  
			type = destroyer 
			model = 6
		}
		division = {
			id = {  type = 13500 id = 162  }  
			name = "Lavallee"  
			type = destroyer 
			model = 6
		}
	}
#######
	navalunit =  {
		name = "La Royale 2"  
		id = {  type = 13500 id = 163  }  
		location = 365  
		base     = 365  
		division = {
			id = {  type = 13500 id = 164  }  
			name = "Athos"  
			type = heavy_cruiser 
			model = 6
		}
		division = {
			id = {  type = 13500 id = 165  }  
			name = "Aramis"  
			type = light_cruiser 
			model = 4
		}
		division = {
			id = {  type = 13500 id = 166  }  
			name = "Lynx"  
			type = destroyer 
			model = 6
		}
		division = {
			id = {  type = 13500 id = 167  }  
			name = "Tigre"  
			type = destroyer 
			model = 6
		}
	}

#######
	navalunit =  {
		name = "La Royale 3"  
		id = {  type = 13500 id = 168  }  
		location = 43  
		base     = 43  
		division = {
			id = {  type = 13500 id = 169  }  
			name = "Etoile"  
			type = heavy_cruiser 
			model = 6
		}
		division = {
			id = {  type = 13500 id = 170  }  
			name = "Jaguar"  
			type = light_cruiser 
			model = 4
		}
		division = {
			id = {  type = 13500 id = 171  }  
			name = "Rondache"  
			type = destroyer 
			model = 6
		}
		division = {
			id = {  type = 13500 id = 172  }  
			name = "Esteron"  
			type = destroyer 
			model = 6
		}
	}
}
	