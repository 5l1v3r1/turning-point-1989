 
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
   energy                 = 540
   metal                  = 270
   rare_materials         = 135
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   capital                = 1502 
   manpower               = 167 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5
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
}