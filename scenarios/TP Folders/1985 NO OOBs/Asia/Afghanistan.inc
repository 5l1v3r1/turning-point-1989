##############################
# Country definition for AFG #
##############################

province = { id = 5398 landfort = 3 } #Charikar
province = { id = 1493 landfort = 5 } #Kabul

country =
{ tag                    = AFG
  #puppet                 = SOV 
  ai					 = "afg_1985.ai"
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 200
  capital                = 1493
  
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 4 
     political_left    = 10
     free_market       = 1
     freedom           = 1
     professional_army = 1 
     defense_lobby     = 6 
     interventionism   = 1
  }
  
  nationalprovinces      = { 
1493 1486 1492 1484 2864 2865 2866 2867
5379 5380 5381 5382 5383 5384 5385 5386 5387 5388 
5389 5390 5391 5392 5393 5394 5395 5396 5397 5398 
5399 5400 5401 5402 5403 5404 7983
	}
  ownedprovinces         = { 5404 5388 1486 5387 5384 5380 1492 5382 5392 1493 2866 1484 5399 5398 5393 5395 5389 }
  controlledprovinces    = { 5404 5388 1486 5387 5384 5380 1492 5382 5392 1493 2866 1484 5399 5398 5393 5395 5386 5389 }
  claimedprovinces 		 = { 4227 }

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 
   #Motorized
   1100 
   #Mountain
   1160 
   #Special Forces
   1250 
   #Mechanized
   1470
   #Irregular Infantry
   1360
   #Combat Engineers
   1830
   #Supply and Repair
   1990
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620
   #Armored Cars
   2860
   #Anti-Air
   2800
   #Armored Personnel Carriers
   2170
   #Field Artillery
   2290 
   #Self-Propelled Anti-Air
   2810
   #Man-Portable Air-Defense Systems
   3000
   #Self-Propelled Artillery
   2220
   #Self-Propelled Rocket Artillery
   2980 
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110
   #Submarines
   3010
   #Transport Ships
   3900
   ###################
   #    Aircraft     #
   ###################
   #Multi-Role
   4500
   #Air Transports
   4250
   ###################
   #    Industry     #
   ###################
   #Light Industry
   5810
   #Heavy Industry
   5130
   #Material Science
   53050
   #Construction Eng.
   5800
   #Agriculture
   5700
   #Oil
   5190
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6560 #Defensive
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200
   }
  diplomacy = {}
  
  headofstate            = { type = 9 id = 54001 }
  headofgovernment       = { type = 9 id = 54002 }
  foreignminister        = { type = 9 id = 54003 }
  armamentminister       = { type = 9 id = 54004 }
  ministerofsecurity     = { type = 9 id = 54005 }
  ministerofintelligence = { type = 9 id = 54006 }
  chiefofstaff           = { type = 9 id = 54007 }
  chiefofarmy            = { type = 9 id = 54008 }
  chiefofnavy            = { type = 9 id = 54009 }
  chiefofair             = { type = 9 id = 54010 }
} 
 