 
 ############################## 
 # Country definition for PER # 
 ############################## 
 
 province = { id = 1502 ic = 14 } #Tehran
 province = { id = 1789 energy = 18 } #Kermanshah
 province = { id = 4199 landfort = 1 } #Mahabad
 province = { id = 4204 landfort = 1 } #Saqqez
 province = { id = 2841 landfort = 1 } #Sanandaj
 province = { id = 4205 landfort = 3 } #Ilam
 province = { id = 4210 landfort = 2 } #Koodasht
 province = { id = 4212 landfort = 3 } #Abadan
 province = { id = 1498 ic = 9 energy = 170 landfort = 3 } #Ahvaz
 province = { id = 1499 energy = 65 } #Busehr
 province = { id = 1788 landfort = 1 } #Rezaiye
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PER 
   # Resource Reserves 
   ai = "per_1985.ai"
   energy                 = 20000
   metal                  = 10000
   rare_materials         = 5000
   oil                    = 2500 
   supplies               = 6000
   manpower               = 400 
   money                  = 5000 
   capital                = 1502
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     freedom           = 1
     free_market       = 5 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 6
    } 

   nationalprovinces      = { 1502 1789 1825 1497 1499 1826 1501 
1500 1496 2836 2837 2842 2843 2844 
4207 4208 
4210 4211 4213 4214 4215 4216 4217 4218 4219 4220 
4221 4223 4224 4227 4228 4229 4230 4231 4233 4234 6495
7014
2864 2865 5386 5389 1486 5388 5387 5379 5390 5400 2867 5401 5398
5396 5397 5399 5481 5484 3485 6953 1487 3484 3483 1485 3482 3481
  }
  ownedprovinces         = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495
2836 2837 2838 2839 2840 2841 2842 2843 2844 2845
2846
4198 4199 4201 4202 4203 4204 4205 4206 4207 4208 
4209 4210 4211 4212 4213 4214 4215 4216 4217 4218 
4219 4220 4221 4222 4223 4224 4225 4226 4227 4228 
4229 4230 4231 4232 4233 4234 6495
7014
  }
  controlledprovinces    = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495
2836 2837 2838 2839 2840 2841 2842 2843 2844 2845
2846
4198 4199 4201 4202 4203 4204 4205 4206 4207 4208 
4209 4210 4211 4212 4213 4214 4215 4216 4217 4218 
4219 4220 4221 4222 4223 4224 4225 4226 4227 4228 
4229 4230 4231 4232 4233 4234 6495
7014
  }
  claimedprovinces 		 = { 
1906 4232 2838 1503 4209 1787 4206 2840 4202 4201 4198 1788 4199
1859 4203 2839 4204 2841 4205 1498 4212 1495 4226 2846 4225
4222 2845 5384 5380 5392 1493 1484 2866 5402 3479
  }

   diplomacy = 
   {  relation = {  tag = AFG value = 25  } 
     relation = {  tag = DEN value = 50  } 
     relation = {  tag = ENG value = 25  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = SAU value = 100  } 
     relation = {  tag = SOV value = -20  } 
     relation = {  tag = SWE value = 50  } 
     relation = {  tag = TUR value = -50  } 
    } 
	
   SpyInfo                = {  country = "PER" NumberOfSpies = 10  }
   SpyInfo                = {  country = "IRQ" NumberOfSpies = 14  }   
   
   headofstate            = {  type = 9 id = 150001  } 
   headofgovernment       = {  type = 9 id = 150002  } 
   foreignminister        = {  type = 9 id = 150003  } 
   armamentminister       = {  type = 9 id = 150004  } 
   ministerofsecurity     = {  type = 9 id = 150005  } 
   ministerofintelligence = {  type = 9 id = 150006  } 
   chiefofstaff           = {  type = 9 id = 150007  } 
   chiefofarmy            = {  type = 9 id = 150008  } 
   chiefofnavy            = {  type = 9 id = 150009  } 
   chiefofair             = {  type = 9 id = 150010  } 
   
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
   
# #####################################
# ARMY
# #####################################
  #OOB 1980
   landunit = 
   {  id       = {  type = 12500 id = 1  } 
     name     = "16th Armored Division" 
     location = 4199 #Mahabad
     Division = 
     {  id       = {  type = 12500 id = 2  } 
       name     = "16th Armored Division" 
       strength = 70 
       type     = armor
	   model    = 3
      } 
	} 
	landunit = 
   {  id       = {  type = 12500 id = 3  } 
     name     = "21st Infantry Division" 
     location = 4204 #Saqqez
     Division = 
     {  id       = {  type = 12500 id = 4  } 
       name     = "21st Infantry Division" 
       strength = 80 
       type     = infantry
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 5  } 
     name     = "23rd Special Forces Brigade" 
     location = 1502 #Tehran
     Division = 
     {  id       = {  type = 12500 id = 6  } 
       name     = "23rd Special Forces Brigade" 
       strength = 100 
       type     = d_03
	   model    = 4
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 7  } 
     name     = "81st Armored Division" 
     location = 4210 #Koodasht
     Division = 
     {  id       = {  type = 12500 id = 8  } 
       name     = "81st Armored Division" 
       strength = 65 
       type     = armor
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 9  } 
     name     = "28th Infantry Division" 
     location = 4205 #Ilam
     Division = 
     {  id       = {  type = 12500 id = 10  } 
       name     = "28th Infantry Division" 
       strength = 70 
       type     = armor
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 11  } 
     name     = "92nd Armored Division" 
     location = 1498 #Ahvaz
     Division = 
     {  id       = {  type = 12500 id = 12  } 
       name     = "92nd Armored Division" 
       strength = 80 
       type     = armor
	   model    = 3
	   extra    = artillery
	   brigade_model = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 13  } 
     name     = "64th Infantry Division" 
     location = 1788 #Rezaiye
     Division = 
     {  id       = {  type = 12500 id = 14  } 
       name     = "64th Infantry Division" 
       strength = 90 
       type     = infantry
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 15  } 
     name     = "77th Infantry Division" 
     location = 1500 #Mashad
     Division = 
     {  id       = {  type = 12500 id = 16  } 
       name     = "77th Infantry Division" 
       strength = 80 
       type     = infantry
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 17  } 
     name     = "37th Armored Brigade" 
     location = 4212 #Abadan
     Division = 
     {  id       = {  type = 12500 id = 18  } 
       name     = "37th Armored Brigade" 
       strength = 90 
       type     = light_armor
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 19  } 
     name     = "55th Airborne Brigade" 
     location = 4212 #Abadan
     Division = 
     {  id       = {  type = 12500 id = 20  } 
       name     = "55th Airborne Brigade" 
       strength = 100 
       type     = d_08
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 21  } 
     name     = "88th Armored Brigade" 
     location = 1495 #Zahedan
     Division = 
     {  id       = {  type = 12500 id = 22  } 
       name     = "88th Armored Brigade" 
       strength = 70 
       type     = light_armor
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 23  } 
     name     = "30th Infantry Brigade" 
     location = 2838 #Sari
     Division = 
     {  id       = {  type = 12500 id = 24  } 
       name     = "30th Infantry Brigade" 
       strength = 60 
       type     = d_01
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12500 id = 25  } 
     name     = "84th Infantry Brigade" 
     location = 2841 #Sanandaj
     Division = 
     {  id       = {  type = 12500 id = 26  } 
       name     = "84th Infantry Brigade" 
       strength = 70 
       type     = d_01
	   model    = 3
      } 
	}
# #####################################
# NAVY
# #####################################
navalunit = { id = { type = 12500 id = 200 }
    location = 1497 #1091
    base     = 1497 #1091
    name     = "Islamic Republic of Iran Navy"
    division = { id = { type = 12500 id = 201 } name = "Alvand" type = destroyer model = 1 }
    division = { id = { type = 12500 id = 202 } name = "Alborz" type = destroyer model = 1 }
    division = { id = { type = 12500 id = 203 } name = "Sabalan" type = destroyer model = 1 }
    division = { id = { type = 12500 id = 206 } name = "1st Transport Fleet" type = transport model = 5 }
    division = { id = { type = 12500 id = 207 } name = "2nd Transport Fleet" type = transport model = 5 }
	}
navalunit = { id = { type = 12500 id = 214 }
    location = 4212 #1089
    base     = 4212 #1089
    name     = "Submarine Fleet"
    division = { id = { type = 12500 id = 215 } name = "Tareq" type = submarine model = 5 }
    division = { id = { type = 12500 id = 216 } name = "Nooh" type = submarine model = 5 }
    division = { id = { type = 12500 id = 217 } name = "Yunes" type = submarine model = 5 }
	}
# #####################################
# AIR FORCE
# #####################################
airunit = { id = { type = 12500 id = 100 }
	location = 1500 #1092
	base     = 1500 #1092
	name     = "Eastern Area Command"
	division = { id = { type = 12500 id = 101 } name = "13th Tactical Air Wing" type = interceptor strength = 70 model = 4 }
        division = { id = { type = 12500 id = 102 } name = "14th Tactical Air Wing" type = interceptor strength = 70 model = 4 }
	}
airunit = { id = { type = 12500 id = 103 }
	location = 1499 #1090
	base     = 1499 #1090
	name     = "Southern Area Command"
	division = { id = { type = 12500 id = 104 } name = "6th Tactical Air Wing" type = multi_role strength = 100 model = 5 }
	division = { id = { type = 12500 id = 105 } name = "9th Tactical Air Wing" type = multi_role strength = 60 model = 5 }
        division = { id = { type = 12500 id = 106 } name = "10th Tactical Air Wing" type = multi_role strength = 10 model = 5 }
	}
airunit = { id = { type = 12500 id = 107 }
	location = 1501 #1086
	base     = 1501 #1086
	name     = "Western Area Command 1"
        division = { id = { type = 12500 id = 108 } name = "1st Tactical Air Wing" type = interceptor strength = 100 model = 4 }
        division = { id = { type = 12500 id = 109 } name = "5nd Tactical Air Wing" type = interceptor strength = 100 model = 3 }
        division = { id = { type = 12500 id = 110 } name = "7th Tactical Air Wing" type = cas strength = 100 model = 3 }
        division = { id = { type = 12500 id = 111 } name = "8th Tactical Air Wing" type = multi_role strength = 100 model = 6 } # iranian f-14 tomcats..
	}
airunit ={ id = { type = 12500 id = 112 }
	location = 1825 #1087
	base     = 1825 #1087
	name     = "Western Area Command 2"
	division = { id = { type = 12500 id = 113 } name = "2nd Tactical Air Wing" type = interceptor strength = 100 model = 3 }
	division = { id = { type = 12500 id = 114 } name = "3rd Tactical Air Wing" type = multi_role strength = 100 model = 5	}
        division = { id = { type = 12500 id = 115 } name = "4th Tactical Air Wing" type = interceptor strength = 100 model = 3 }
	}
	airunit = { id = { type = 12500 id = 116 }
		location = 1502 #1085
		base     = 1502 #1085
		name     = "Air Transport Command"
		division = 
		{ id = { type = 12500 id = 117 } 
		  name = "1st Tactical Transport Wing" 
		  type     = transport_plane 
		  strength = 100 
		  model = 2 
		}
		division = 
		{ id = { type = 12500 id = 118 } 
		  name = "2nd Tactical Transport Wing" 
		  type     = transport_plane
		  strength = 100 
		  model = 2 
		}
	}
}