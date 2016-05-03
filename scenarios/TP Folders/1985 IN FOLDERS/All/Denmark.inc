#Danish Air Force Infrastructure
province = { 
id = 91 #Skrydstrup AB
air_base = { size = 2 current_size = 2 }
}
province = { 
id = 3351 #Karup AB
air_base = { size = 2 current_size = 2 }
}
province = {
id = 92 #Aalborg
air_base = { size = 4 current_size = 4 }
}
#Danish Navy Infrastructure
province = {
id = 800 #Nuuk, Greenland, home of 1. Eskadre
naval_base = { size = 2 current_size = 2 }
}
province = {
id = 292 #Frederiskhaven
naval_base = { size = 7 current_size = 7 }
}
province = {
id = 3350 #Korsor
naval_base = { size = 6 current_size = 6 }
coastalfort = 2 #Fortresses of Stevns and Langeland
}
#####################
# Country main data #
#####################

country =
{ tag                    = DEN
  manpower               = 200
  capital                = 294
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  transports = 50
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 1 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 2 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  nationalprovinces      = { 91 92 292 293 294 295 800 1 2 122 120 2632 3350 3351 7137 7138 7139 7973 7974 7975 1588 2078 2105
  }
  ownedprovinces         = { 91 92 292 293 294 295 800 2 122 120
3350	3351
7973 7974 7975
1588
2078 2105
  }
  controlledprovinces    = { 91 92 292 293 294 295 800 2 122 120
3350	3351
7973 7974 7975
1588
2078 2105
  }
  claimedprovinces = { 3301 3302 93 3303 }

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
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
     political_left    = 3 
     free_market       = 9 
     freedom           = 10 
     professional_army = 3 
     defense_lobby     = 2 
     interventionism   = 2
  }
  headofstate            = { type = 9 id = 16001 }
  headofgovernment       = { type = 9 id = 16002 }
  foreignminister        = { type = 9 id = 16003 }
  armamentminister       = { type = 9 id = 16004 }
  ministerofsecurity     = { type = 9 id = 16005 }
  ministerofintelligence = { type = 9 id = 16006 }
  chiefofstaff           = { type = 9 id = 16007 }
  chiefofarmy            = { type = 9 id = 16008 }
  chiefofnavy            = { type = 9 id = 16009 }
  chiefofair             = { type = 9 id = 16010 }
  #æ
    ############
	#Danish Army
	#Note: Translations made with Google translator, so i'm not very sure about it's correctness...
	############
   landunit = 
   {  location = 91 #Aabenraa
     name     = "Landjut" 
     id       = {  type = 27000 id = 1  } 
		division = { 
		id = { type = 27000 id = 2 }
		name = "Landjut Hq"
		type = hq
		model = 1 #Danish army was very outdated for 1985
		extra = sp_artillery
		brigade_model = 0 #Old ww2 howitzers. No joking.
		}
	}
	landunit = {
	id = { type = 27000 id = 3 }
	name = "Jyske Division"
	location = 120 #Fredericia, Arhus
		division = {
			id = { type = 27000 id = 4 }
			name = "1. Jyske Brigade (Mek.)"
			type = d_06
			model = 1
			extra = artillery
			brigade_model = 1
			}
		division = {
			id = { type = 27000 id = 5 }
			name = "3. Jyske Brigade (Mek.)"
			type = d_06
			model = 1
			extra = artillery
			brigade_model = 1
			}
	}
	landunit = {
	id = { type = 27000 id = 6 }
	name = "Jyske Division"
	location = 3351 #Herning,  Skive
		division = {
			id = { type = 27000 id = 7 }
			name = "2. Jyske Brigade (Mek.)"
			type = d_06
			model = 1
			extra = artillery
			brigade_model = 1
			}
		division = {
			id = { type = 27000 id = 8 }
			name = "Jylland kampgruppe (Mek.)" #Mechanized, in name only, in reality it was a motorized force.
			type = d_02
			model = 1
			#extra = tank_destroyer
			#brigade_model = 0
			}
	}
	landunit = 
   {  location = 294 #Copenhagen, Ringsted
     name     = "LandZealand" 
     id       = {  type = 27000 id = 9  } 
		division = { 
			id = { type = 27000 id = 10 }
			name = "LandZealand Hq"
			type = hq
			model = 1
			extra = artillery
			brigade_model = 0
		}
		division = { 
			id = { type = 27000 id = 11 }
			name = "1. Sjælland Brigade (Mek.)"
			type = d_06
			model = 1 #
			extra = artillery
			brigade_model = 0
		}
		division = { 
			id = { type = 27000 id = 12 }
			name = "2. Sjælland Brigade (Mek.)"
			type = d_06
			model = 1 #
			extra = artillery
			brigade_model = 0
		}
		division = { 
			id = { type = 27000 id = 13 }
			name = "1. Sjælland kampgruppe" #Technically, reserves
			type = d_02
			model = 4
			#extra = tank_destroyer
			#brigade_model = 0
		}
		division = { 
			id = { type = 27000 id = 14 }
			name = "2. Sjælland kampgruppe" #Technically, reserves
			type = d_02
			model = 4
			#extra = tank_destroyer
			#brigade_model = 0
		}
		division = { 
			id = { type = 27000 id = 15 }
			name = "4. Sjælland kampgruppe" #Technically, reserves
			type = d_02
			model = 4
			extra = artillery
			brigade_model = 0
		}
	}
	landunit = {
	id = { type = 27000 id = 16 }
	name = "Bornholm kraft"
	location = 295 #Ronne, Bornholm
		division = { 
			id = { type = 27000 id = 17 }
			name = "Bornholm kraft"
			type = d_02
			model = 4
			locked = yes
			}
	}
	landdivision = { 
		dormant = yes 
		id = { type = 27000 id = 2051 }  
		name = "Jylland forsvarschef"  
		type = d_01 
		model = 4
	}
	landdivision = { 
		dormant = yes 
		id = { type = 27000 id = 2052 }  
		name = "Sjælland forsvarschef"  
		type = d_01 
		model = 4
	}
	#################
	#Danish Air Force
	#################
	airunit = {
		id = { type = 27000 id = 18 }
		name = "Fighter Wing Karup"
		location = 3351
		base = 3351
			division = {
				id = { type = 27000 id = 19 }
				name = "Eskadrille 723"
				type = multi_role
				model = 5 #F-16
				}
			division = {
				id = { type = 27000 id = 20 }
				name = "Eskadrille 726"
				type = multi_role
				model = 5 #F-16
				}
			division = {
				id = { type = 27000 id = 21 }
				name = "Eskadrille 725"
				type = interceptor
				model = 4 #Saab F-35 Draken
				}
	}
	airunit = {
		id = { type = 27000 id = 22 }
		name = "Fighter Wing Skrydstrup"
		location = 91
		base = 91
			division = {
				id = { type = 27000 id = 23 }
				name = "Eskadrille 727"
				type = multi_role
				model = 5 #F-16
				}
			division = {
				id = { type = 27000 id = 24 }
				name = "Eskadrille 730"
				type = multi_role
				model = 5 #F-16
				}
			division = {
				id = { type = 27000 id = 25 }
				name = "Eskadrille 729"
				type = interceptor
				model = 4 #Saab F-35 Draken
				}
	}
	airunit = {
		id = { type = 27000 id = 26 }
		name = "Air Transport Wing Aalborg"
		location = 92
		base = 92
			division = {
				id = { type = 27000 id = 27 }
				name = "Eskadrille 721"
				type = transport_plane
				model = 2 #Hercules
				}
	}
   ###############################################################################################################################
   #Danish Navy (Based on wikipedia and navalhistory.dk, however i couldn't find a detailed OOB so all these are mere assumptions)
   ###############################################################################################################################
   navalunit = {
   id = { type = 27000 id = 28 }
   name = "1. Eskadre"
   location = 800
   base = 800
	division = { 
		id = { type = 27000 id = 29 }
		name = "Niels Juel (F354)"
		type = light_cruiser #Note: corvette in reality
		model = 3
		}
	division = { 
		id = { type = 27000 id = 30 }
		name = "Olfert Fischer (F355)"
		type = light_cruiser #Note: corvette in reality
		model = 3
		}
	division = { 
		id = { type = 27000 id = 31 }
		name = "Peter Tordenskiold (F356)"
		type = light_cruiser #Note: corvette in reality
		model = 3
		}
	}
	navalunit = {
	id = { type = 27000 id = 32 }
   name = "2. Eskadre"
   location = 292
   base = 292
	division = { 
		id = { type = 27000 id = 33 }
		name = "Peder Skram (F352)"
		type = light_cruiser #
		model = 1
		}
	division = { 
		id = { type = 27000 id = 34 }
		name = "Herluf Trolle (F353)"
		type = light_cruiser #
		model = 1
		}
	division = { 
		id = { type = 27000 id = 35 }
		name = "Hvidbjørnen (F348)"
		type = light_cruiser #
		model = 1
		}
	division = { 
		id = { type = 27000 id = 36 }
		name = "Vædderen (F349)"
		type = light_cruiser #
		model = 1
		}	
	division = { 
		id = { type = 27000 id = 37 }
		name = "Ingolf (F350)"
		type = light_cruiser #
		model = 1
		}
	division = { 
		id = { type = 27000 id = 38 }
		name = "Fylla (F351)"
		type = light_cruiser #
		model = 1
		}
	division = { 
		id = { type = 27000 id = 39 }
		name = "Beskytteren (F340)"
		type = light_cruiser #
		model = 2
		}
	}
	navalunit = {
	id = { type = 27000 id = 40 }
   name = "5. Eskadre"
   location = 3350
   base = 3350
	division = {
		id = { type = 27000 id = 41 }
		name = "Narhvalen (S320)"
		type = submarine
		model = 1
		}
	division = {
		id = { type = 27000 id = 42 }
		name = "Nordkaperen (S321)"
		type = submarine
		model = 1
		}
	division = {
		id = { type = 27000 id = 43 }
		name = "Springeren (S329)"
		type = submarine
		model = 1
		}
	}
} 
 