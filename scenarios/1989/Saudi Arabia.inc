#####################
# Country main data #
#####################

country =
{ tag                    = SAU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1807
  manpower               = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 3
  }
  nationalprovinces      = { 1821 1818 1809 1808 1807 1805 1804
2856 2857 2858 2859 2861 2862 2863 2358 4197
4167 4168 4169 4170 4171 4172 4173 4174 4175 4176 4177 4178 4179 4180 4181 4182 4183 4184 5414 5415 5416 5417 5418 5419
6926 6927 6928
  }
  ownedprovinces         = { 1821 1818 1809 1808 1807 1805 1804
2856 2857 2858 2859 2861 2862 2863 2358
4167 4168 4169 4170 4171 4172 4173 4174 4175 4176 4177 4178 4179 4180 4181 4182 4183 4184 5414 5415 5416 5417 5418
6926 6927 6928
  }
  controlledprovinces    = { 1821 1818 1809 1808 1807 1805 1804
2856 2857 2858 2859 2861 2862 2863 2358
4167 4168 4169 4170 4171 4172 4173 4174 4175 4176 4177 4178 4179 4180 4181 4182 4183 4184 5414 5415 5416 5417 5418
6926 6927 6928
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
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = AUS value = 50 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 10 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = -25 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 100 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
    relation = { tag = YEM value = 125 }
  }
  headofstate            = { type = 9 id = 63001 }
  headofgovernment       = { type = 9 id = 63002 }
  foreignminister        = { type = 9 id = 63003 }
  armamentminister       = { type = 9 id = 63004 }
  ministerofsecurity     = { type = 9 id = 63005 }
  ministerofintelligence = { type = 9 id = 63006 }
  chiefofstaff           = { type = 9 id = 63007 }
  chiefofarmy            = { type = 9 id = 63008 }
  chiefofnavy            = { type = 9 id = 63009 }
  chiefofair             = { type = 9 id = 63010 }
 
	# #####################################
	# ARMY
	# #####################################
	landunit = {
		id = { type = 18900 id = 1 }
		location = 1805 #1044
		name = "Armored Brigades"
		division = {
			id = { type = 18900 id = 2 }
			name = "4th Armored Brigade"
			strength = 70
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 18900 id = 3 }
			name = "8th Armored Brigade"
			strength = 70
			type = light_armor
			model = 4
		}
		division = {
			id = { type = 18900 id = 4 }
			name = "12th Armored Brigade"
			strength = 70
			type = light_armor
			model = 4
		}
        division = {
			id = { type = 18900 id = 5 }
			name = "54th Armored Brigade"
			strength = 70
			type = light_armor
			model = 4
		}
	}
	landunit = {
		id = { type = 18900 id = 6 }
		location = 1805 #1044
		name = "Infantry Brigades"
		division = {
			id = { type = 18900 id = 7 }
			name = "6th Mechanized Brigade"
			strength = 70
			type = cavalry
			model = 4
		}
		division = {
			id = { type = 18900 id = 8 }
			name = "8th Mechanized Brigade"
			strength = 70
			type = cavalry
			model = 4
		}
		division = {
			id = { type = 18900 id = 9 }
			name = "10th Mechanized Brigade"
			strength = 70
			type = cavalry
			model = 4
		}
		division = {
			id = { type = 18900 id = 10 }
			name = "11th Mechanized Brigade"
			strength = 70
			type = cavalry
			model = 4
		}
		division = {
			id = { type = 18900 id = 11 }
			name = "20th Mechanized Brigade"
			strength = 70
			type = cavalry
			model = 4
		}
        division = {
			id = { type = 18900 id = 12 }
			name = "17th Motorized Brigade"
			strength = 50
			type = d_06
			model = 4
		}
		division = {
			id = { type = 18900 id = 13 }
			name = "18th Motorized Brigade"
			strength = 50
			type = d_06
			model = 4
		}
		division = {
			id = { type = 18900 id = 14 }
			name = "19th Motorized Brigade"
			strength = 50
			type = d_06
			model = 4
		}
	}
	landunit = {
		id = { type = 18900 id = 15 }
		location = 1807 #1045
		name = "Saudi Army HQ"
		division = {
			id = { type = 18900 id = 16 }
			name = "Saudi Army HQ"
			strength = 100
			type = hq
			model = 1
		}
		division = {
			id = { type = 18900 id = 17 }
			name = "1st Airborne Brigade "
			strength = 100
			type = d_08
			model = 4
		}
	}
    # #####################################
	# NATIONAL GUARD
	# #####################################
	landunit = {
		id = { type = 18900 id = 18 }
		location = 1804 #1048
		name = "NG Western Command"
        division = {
			id = { type = 18900 id = 19 }
			name = "U/I NG Brigade"
			strength = 50
			type = d_06
			model = 4
		}
        division = {
			id = { type = 18900 id = 20 }
			name = "U/I NG Brigade"
			strength = 50
			type = d_06
			model = 4
		}
		division = {
			id = { type = 18900 id = 21 }
			name = "Omar bin Kattab NG Brigade"
			strength = 50
			type = d_06
			model = 4
		} 
	}
        landunit = {
		id = { type = 18900 id = 22 }
		location = 4184 #1040
		name = "NG Eastern Command"
        division = {
			id = { type = 18900 id = 23 }
			name = "King Abdulaziz NG Brigade"
			strength = 20
			type = cavalry
			model = 4
		}
        division = {
			id = { type = 18900 id = 24 }
			name = "Prince Mohammad bin Abdulrahman al-Saud NG Brigade"
			strength = 50
			type = cavalry
			model = 4
		}
		division = {
			id = { type = 18900 id = 25 }
			name = "Fowj Tribal Forces"
			strength = 100
			type = militia
			model = 4
		}
	}
    landunit = {
		id = { type = 18900 id = 26 }
		location = 1807 #1045
		name = "NG Riyadh Command"
        division = {
			id = { type = 18900 id = 27 }
			name = "Imam Muhammad bin Saud NG Brigade"
			strength = 50
			type = cavalry
			model = 4
		}
        division = {
			id = { type = 18900 id = 28 }
			name = "Turki NG Brigade"
			strength = 50
			type = cavalry
			model = 4
		}
		division = {
			id = { type = 18900 id = 29 }
			name = "King Khalid NG Brigade"
			strength = 50
			type = d_06
			model = 4
		}
        division = {
			id = { type = 18900 id = 30 }
			name = "Fowj Tribal Forces"
			strength = 100
			type = militia
			model = 4
		}
	}
	# ###################################
	# NAVY
	# ###################################
	navalunit = {
		id = { type = 18900 id = 300 }
		location = 2862 #1044
		base = 2862 #1044
		name = "Red Sea Fleet"
		division = {
			id = { type = 18900 id = 303 }
			name = "HMS Hofouf"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 18900 id = 304 }
			name = "HMS Abha"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 18900 id = 305 }
			name = "HMS Taif"
			type = destroyer
			model = 1
		}
	}
	navalunit = {
		id = { type = 18900 id = 306 }
		location = 4184 #1040
		base = 4184 #1040
		name = "Persian Gulf Fleet"
		division = {
			id = { type = 18900 id = 301 }
			name = "HMS Arriyad"
			type = destroyer
			model = 1
		}
		division = {
			id = { type = 18900 id = 302 }
			name = "HMS Al Madinah"
			type = destroyer
			model = 1
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 18900 id = 200 }
		location = 1807 #1045
		base = 1807 #1045
		name = "2nd Wing"
		division = {
			id = { type = 18900 id = 201 }
			name = "11th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 18900 id = 202 }
			name = "14th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 18900 id = 203 }
			name = "8th Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 18900 id = 204 }
			name = "3rd Squadron"
			type = interceptor
			strength = 100
			model = 3
		}
	}
	airunit = {
		id = { type = 18900 id = 205 }
		location = 1807 #1045
		base = 1807 #1045
		name = "3rd Wing"
		division = {
			id = { type = 18900 id = 206 }
			name = "5th Squadron"
			type = tactical_bomber
			strength = 100
			model = 2
		}
		division = {
			id = { type = 18900 id = 207 }
			name = "21st Squadron"
			type = tactical_bomber
			strength = 100
			model = 2
		}
		division = {
			id = { type = 18900 id = 208 }
			name = "18th Squadron"
			type = tactical_bomber
			strength = 100
			model = 2
		}
		division = {
			id = { type = 18900 id = 209 }
			name = "10th Squadron"
			type = tactical_bomber
			strength = 100
			model = 2
		}
	}
	airunit = {
		id = { type = 18900 id = 210 }
		location = 1807 #1045
		base = 1807 #1045
		name = "5th Wing"
		division = {
			id = { type = 18900 id = 211 }
			name = "1st Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 18900 id = 212 }
			name = "27th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 18900 id = 213 }
			name = "22nd Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
	}
	airunit = {
		id = { type = 18900 id = 214 }
		location = 1807 #1045
		base = 1807 #1045
		name = "4th Wing"
		division = {
			id = { type = 18900 id = 215 }
			name = "19th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 18900 id = 216 }
			name = "12th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
		division = {
			id = { type = 18900 id = 217 }
			name = "7th Squadron"
			type = multi_role
			strength = 100
			model = 5
		}
	}
	# ###################################
	# Under Development
	# ###################################
	division_development = {
		id = { type = 18900 id = 400 }
		name = "HMS Makkah"
		type = destroyer
		model = 1
		cost = 5
		date = { day = 17 month = august year = 1989 }
	}
}
 
