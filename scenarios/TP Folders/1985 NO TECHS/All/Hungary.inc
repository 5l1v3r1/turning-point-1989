############################## 
# Country definition for HUN # 
############################## 
  
province = { id = 224 air_base = { size = 5 current_size = 5 } } #Zalaegerszeg
province = { id = 7265 air_base = { size = 5 current_size = 5 } } #Veszprem

#####################
# Country main data #
#####################

country =
{ tag                    = HUN
  capital                = 457
  ai = "hun_1985.ai"
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
  money                  = 10
  manpower               = 200
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 5 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 5 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  
  nationalprovinces      = { 456 457 458 491 492 497 490 
							224 1890 2447 1889 1899 2302 
							2616	3369 	3384	498		3386
							3235	3236	3237	3363 
6513 6514 7072 7265 7300 496 428 494
  }
  ownedprovinces         = { 456 457 458 491 492 497
							224 1890 2447
							2616
							3235	3236	3237
6513 6514 7072 7265
  }
  controlledprovinces    = { 456 457 458 491 492 497
							224 1890 2447
							2616
							3235	3236	3237
6513 6514 7072 7265
  }
  claimedprovinces 		= { 2329 2289 2602 495 498 1403 1449 427 430 499 3233 3230 3231 1887 3232 477 478 476
							493 3370 3385 3382 6512 6561 7261 7054
  }

  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1
     political_left    = 10 
     free_market       = 3
     freedom           = 4 
     professional_army = 4
     defense_lobby     = 4
     interventionism   = 5
  }
  #headofstate            = { type = 9 id = 21001 }
  #headofgovernment       = { type = 9 id = 21002 }
  #foreignminister        = { type = 9 id = 21003 }
  #armamentminister       = { type = 9 id = 21004 }
  #ministerofsecurity     = { type = 9 id = 21005 }
  #ministerofintelligence = { type = 9 id = 21006 }
  #chiefofstaff           = { type = 9 id = 21007 }
  #chiefofarmy            = { type = 9 id = 21008 }
  #chiefofnavy            = { type = 9 id = 21009 }
  #chiefofair             = { type = 9 id = 21010 }
}