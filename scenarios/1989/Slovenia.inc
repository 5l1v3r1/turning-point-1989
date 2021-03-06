#####################
# Country main data #
#####################

country =
{ tag                    = SLV
  puppet                 = YUG
  #ai                     = "YUG_1985.ai" 
  # Resource Reserves
  energy                 = 10000
  metal                  = 5000
  rare_materials         = 2500
  oil                    = 500
  supplies               = 2000
  money                  = 15000
  capital                = 380
  manpower               = 200
  dissent                = 20
  
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5
     political_left    = 6
     freedom           = 7
     free_market       = 6
     professional_army = 1
     defense_lobby     = 8
     interventionism   = 7
  }
  
  diplomacy = { 
	relation = { tag = BUL value = 25 }
  }
  SpyInfo                = { country = "SLV" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  
  nationalprovinces      = { 
#Slovenia
380 459 2326 2289 6560 7124 7122 3357 2325 3359 7125
  }
  ownedprovinces         = { 
#Slovenia
380 459 2326 2289 6560 7124 7122 3357 2325 3359 7125
  }
  controlledprovinces    = { 
#Slovenia
380 459 2326 2289 6560 7124 7122 3357 2325 3359 7125
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
  
   #headofstate            = {  type = 9 id = 100001  } 
   #headofgovernment       = {  type = 9 id = 100002  } 
   #foreignminister        = {  type = 9 id = 100003  } 
   #armamentminister       = {  type = 9 id = 100004  } 
   #ministerofsecurity     = {  type = 9 id = 100005  } 
   #ministerofintelligence = {  type = 9 id = 100006  } 
   #chiefofstaff           = {  type = 9 id = 100007  } 
   #chiefofarmy            = {  type = 9 id = 100008  } 
   #chiefofnavy            = {  type = 9 id = 100009  } 
   #chiefofair             = {  type = 9 id = 100010  } 
   
	landunit = 
	{ location = 459
	 name     = "31st Corps" 
	 id       = {  type = 19800 id = 47  } 
	 division = 
	 { id       = {  type = 19800 id = 48  } 
	   name     = "32nd Mechanized Brigade" 
	   type     = d_06 
	   model    = 3 
	   strength = 15 
	   extra    = sp_artillery
	   brigade_model = 3
	   #locked = yes
	  }
	 division = 
	 { id       = {  type = 19800 id = 49  } 
	   name     = "345th Mountain Brigade" 
	   type     = d_09
	   model    = 3
	   strength = 80 
	   #locked = yes
	  }
	 }
   landunit = 
   { location = 6560
     name     = "24th Corps" 
     id       = {  type = 19800 id = 16  } 
	 division = 
     { id       = {  type = 19800 id = 17  } 
       name     = "2nd Army HQ" 
       type     = hq 
       model    = 3 
       strength = 100 
       extra    = armored_car
       brigade_model = 2
	   #locked = yes
      }
     division = 
     { id       = {  type = 19800 id = 18  } 
       name     = "80th Motorized Brigade" 
       type     = d_02 
       model    = 3  
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 2
	   #locked = yes
      }
	 }
   landunit = 
   { location = 380
     name     = "14th Corps" 
     id       = {  type = 19800 id = 43  } 
     division = 
     { id       = {  type = 19800 id = 44  } 
       name     = "1st Mechanized Brigade" 
       type     = d_06 
       model    = 3 
       strength = 50 
	   extra    = sp_artillery
       brigade_model = 3
	   #locked = yes
      }
	  division = 
     { id       = {  type = 19800 id = 45  } 
       name     = "228th Motorized Brigade" 
       type     = d_02 
       model    = 3
       strength = 15 
	   extra    = sp_anti_air
       brigade_model = 2
	   #locked = yes
      }
	 division = 
     { id       = {  type = 19800 id = 46  } 
       name     = "253rd Motorized Brigade" 
       type     = d_02 
       model    = 3 
       strength = 15 
	   extra    = artillery
       brigade_model = 3
	   #locked = yes
      }
	 }
   landunit = 
   { location = 3357
     name     = "5th Corps" 
     id       = {  type = 19800 id = 54  } 
     division = 
     { id       = {  type = 19800 id = 55  } 
       name     = "5th Motorized Brigade" 
       type     = d_02 
       model    = 3 
       strength = 15 
	   extra    = sp_artillery
       brigade_model = 3
	   #locked = yes
      }
	}
}

		
