############################## 
# Country definition for CZE # 
############################## 
 
province = { id = 468 air_base = { size = 5 current_size = 5 } } #Hradec
 
#####################
# Country main data #
#####################

country =
{ tag                    = CZE
  ai = "cze_1985.ai"
  ai_settings = {flags = {
			MOB1 = yes
			MOB2 = yes
			MOB3 = yes
			MOB4 = yes
		}
  }
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 200
  capital                = 469
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = { 470 469 468 474 475 478 477 476 1888 1887 2296 3228 3229 3232 7261
  }
  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 476
							1888 1889 1887 53 2296
							3228	3229	3230	3231	3232	
							3262
6518
7261
  }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 476
							1888 1889 1887 53 2296
							3228	3229	3230	3231	3232	
							3262
6518
7261
  }
  claimedprovinces = { 2628 472 471 3262 466 53 467 1889 490 2302 3231 3230 3233 499 6518 7177 }

  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 3
     political_left    = 10
     free_market       = 1 
     freedom           = 1
     professional_army = 5 
     defense_lobby     = 8
     interventionism   = 6
  }
  headofstate            = { type = 9 id = 24001 }
  headofgovernment       = { type = 9 id = 24002 }
  foreignminister        = { type = 9 id = 24003 }
  armamentminister       = { type = 9 id = 24004 }
  ministerofsecurity     = { type = 9 id = 24005 }
  ministerofintelligence = { type = 9 id = 24006 }
  chiefofstaff           = { type = 9 id = 24007 }
  chiefofarmy            = { type = 9 id = 24008 }
  chiefofnavy            = { type = 9 id = 24009 }
  chiefofair             = { type = 9 id = 24010 }
}