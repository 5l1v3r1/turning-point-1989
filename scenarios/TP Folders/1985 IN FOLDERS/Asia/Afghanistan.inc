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

  # ####################
  # ##AFGHANISTAN OOB###
  # ####################
   landunit = 
   {  id       = {  type = 10000 id = 0  } 
     location = 1493 # Kabul 
     name     = "Central Corps" 
     Division = 
     {  id       = {  type = 10000 id = 1  } 
       name     = "7th Division" 
       strength = 100 
       type     = d_01 
	   model    = 3
      } 
     Division = 
     {  id       = {  type = 10000 id = 2  } 
       name     = "8th Division" 
       strength = 80 
       type     = d_01
		model    = 3
      } 
     Division = 
     {  id       = {  type = 10000 id = 3  } 
       name     = "Republican Guard Brigade" 
       strength = 70 
       type     = d_03
	   model    = 4
      } 
	 Division = 
     {  id       = {  type = 10000 id = 4  } 
       name     = "4th Armoured Brigade"
       strength = 70 
       type     = light_armor
	   model    = 3
      }
	 Division = 
     {  id       = {  type = 10000 id = 5  } 
       name     = "15th Armoured Brigade"
       strength = 70 
       type     = light_armor
	   model    = 3
      }
    } 
  
   landunit = 
   {  id       = {  type = 10000 id = 6  } 
     location = 1492 # Kandahar
     name     = "2nd Corps" 
     Division = 
     {  id       = {  type = 10000 id = 7  } 
       name     = "7th Armoured Brigade"
       strength = 100 
       type     = light_armor
	   model    = 3
      } 
    }
   landunit = 
   {  id       = {  type = 10000 id = 8  } 
     location = 5395 # Jalalabad 
     name     = "3rd Corps" 
     Division = 
     {  id       = {  type = 10000 id = 9  } 
       name     = "9th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	 Division = 
     {  id       = {  type = 10000 id = 10  } 
       name     = "11th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }	
	}
	landunit = 
   {  id       = {  type = 10000 id = 11  } 
     location = 5391 # Gardez 
     name     = "3rd Corps" 
	 Division = 
     {  id       = {  type = 10000 id = 12  } 
       name     = "12th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	 Division = 
     {  id       = {  type = 10000 id = 13  } 
       name     = "25th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	}
	landunit = 
   {  id       = {  type = 10000 id = 14  } 
     location = 5392 # Ghazni 
     name     = "3rd Corps" 
	 Division = 
     {  id       = {  type = 10000 id = 15  } 
       name     = "14th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	}
	landunit = 
   {  id       = {  type = 10000 id = 16  } 
     location = 1492 # Kandahar 
     name     = "3rd Corps" 
	 Division = 
     {  id       = {  type = 10000 id = 17  } 
       name     = "15th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	}
	landunit = 
   {  id       = {  type = 10000 id = 18  } 
     location = 1486 # Herat
     name     = "3rd Corps" 
	 Division = 
     {  id       = {  type = 10000 id = 19  } 
       name     = "17th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	}
	landunit = 
   {  id       = {  type = 10000 id = 20  } 
     location = 2866 # Mazar-i-Sharik 
     name     = "3rd Corps" 
	 Division = 
     {  id       = {  type = 10000 id = 21  } 
       name     = "18th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	}
	landunit = 
   {  id       = {  type = 10000 id = 22  } 
     location = 1484 # Baglan 
     name     = "3rd Corps" 
	 Division = 
     {  id       = {  type = 10000 id = 23  } 
       name     = "20th Division" 
       strength = 100 
       type     = d_01 
	   model    = 1
      }
	}
} 
 