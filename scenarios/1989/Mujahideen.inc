#####################################
# Country definition for Mujahideen #
#####################################

  province = { id = 7983 landfort = 5 }
  province = { id = 2864 landfort = 3 }
  province = { id = 2867 landfort = 3 }
  province = { id = 5379 landfort = 3 }
  province = { id = 5381 landfort = 3 }
  province = { id = 5383 landfort = 5 }
  province = { id = 5385 landfort = 3 }
  province = { id = 5386 landfort = 3 }
  province = { id = 5390 landfort = 3 }
  province = { id = 5391 landfort = 5 }
  province = { id = 5400 landfort = 5 }
  province = { id = 5401 landfort = 3 }
  province = { id = 5402 landfort = 3 }
  province = { id = 5403 landfort = 3 }
  
country =
{ tag                    = U23
  regular_id             = AFG
  intrinsic_gov_type     = nazi
  ai					 = "U23.ai"
  #ground_def_eff     	 = 0.75
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 200
  capital                = 7983
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1
     political_left    = 1
     free_market       = 1
     freedom           = 1
     professional_army = 1 
     defense_lobby     = 10 
     interventionism   = 10
  }
  nationalprovinces      = { 
1493 1486 1492 1484 2864 2865 2866 2867
5379 5380 5381 5382 5383 5384 5385 5386 5387 5388 
5389 5390 5391 5392 5393 5394 5395 5396 5397 5398 
5399 5400 5401 5402 5403 5404 7983
	}
  ownedprovinces         = { 2864 2865 2867 5379 5381 5383 5385 5386 5390 5391 5400 5401 5402 5403 7983 }
  controlledprovinces    = { 2864 2865 2867 5379 5381 5383 5385 5390 5391 5400 5401 5402 5403 7983 }
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
   6500 6510 6530 6560 6030 6120 6110 6540 6650 6130 6140
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200
   }
  diplomacy =
  { relation = { tag = USA value = 50 }
    relation = { tag = SAU value = 50 }
  }

   headofstate            = {  type = 9 id = 930001  }
   headofgovernment       = {  type = 9 id = 930002  }
   foreignminister        = {  type = 9 id = 930003  }
   armamentminister       = {  type = 9 id = 930004  } 
   ministerofsecurity     = {  type = 9 id = 930005  }
   ministerofintelligence = {  type = 9 id = 930006  }
   chiefofstaff           = {  type = 9 id = 930007  }
   chiefofarmy            = {  type = 9 id = 930008  }
   chiefofnavy            = {  type = 9 id = 930009  }
   chiefofair             = {  type = 9 id = 930010  }

  # ###################
  # ##MUJAHIDEEN OOB###
  # ################### 
  landunit = 
   {  id       = {  type = 11000 id = 0  } 
     location = 7983 # Bahram Chah
     name     = "Harakat-i-Inqilab-i-Islami" 
     Division = 
     {  id       = {  type = 11000 id = 1  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = infantry 
	   model    = 4
      } 
     Division = 
     {  id       = {  type = 11000 id = 2  } 
       name     = "Mujahideen" 
       strength = 100
       type     = militia
		model    = 5
      } 
     Division = 
     {  id       = {  type = 11000 id = 3  } 
       name     = "Mujahideen" 
       strength = 100
       type     = militia 
	   model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 11000 id = 4  } 
     location = 5383 # Qalat
     name     = "Mahaz-i-Milli-Islami" 
     Division = 
     {  id       = {  type = 11000 id = 5  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
     Division = 
     {  id       = {  type = 11000 id = 6  } 
       name     = "Mujahideen" 
       strength = 100
       type     = militia
		model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 11000 id = 7  } 
     location = 5401 # Ru-Yeh Doab
     name     = "Harakat-i-Islami" 
     Division = 
     {  id       = {  type = 11000 id = 8  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    } 
   landunit = 
   {  id       = {  type = 11000 id = 9  } 
     location = 5400 # Dawlat Yar
     name     = "Hizbi Islami" 
     Division = 
     {  id       = {  type = 11000 id = 10  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
	 Division = 
     {  id       = {  type = 11000 id = 11  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      }
	 Division = 
     {  id       = {  type = 11000 id = 12  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      }
    }
	landunit = 
   {  id       = {  type = 11000 id = 13  } 
     location = 5391 # Gardez
     name     = "Hizbi Islami" 
     Division = 
     {  id       = {  type = 11000 id = 14  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
	 Division = 
     {  id       = {  type = 11000 id = 15  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    }
	landunit = 
   {  id       = {  type = 11000 id = 16  } 
     location = 1493 # Kabul
     name     = "Islamic Union" 
     Division = 
     {  id       = {  type = 11000 id = 17  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    }
	landunit = 
   {  id       = {  type = 11000 id = 18  } 
     location = 5381 # Ghamid Khan 
     name     = "Jabha-i-Najat-i-Milli Afghanistan" 
     Division = 
     {  id       = {  type = 11000 id = 19  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    }
	landunit = 
   {  id       = {  type = 11000 id = 20  } 
     location = 2865 # Farah 
     name     = "Jamiat-i-Islami" 
     Division = 
     {  id       = {  type = 11000 id = 21  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    }
	landunit = 
   {  id       = {  type = 11000 id = 22  } 
     location = 5402 # Sheberghan 
     name     = "Jamiat-i-Islami" 
     Division = 
     {  id       = {  type = 11000 id = 23  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    }
	landunit = 
   {  id       = {  type = 11000 id = 24  } 
     location = 5390 # Panjab 
     name     = "Sazman-i-Nasr" 
     Division = 
     {  id       = {  type = 11000 id = 25  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    }
	landunit = 
   {  id       = {  type = 11000 id = 26  } 
     location = 2867 # Bamyan 
     name     = "Shura-Inqilabi-i-Itifaq-i-Islami" 
     Division = 
     {  id       = {  type = 11000 id = 27  } 
       name     = "Mujahideen" 
       strength = 100 
       type     = militia 
	   model    = 5
      } 
    }
} 
 