#####################
# Country main data #
#####################
 province = { 
	id = 3217   # GRAZ – THALERHOF
   anti_air = 2 
   air_base = { size = 2 current_size = 2 } 
 } 
  province = { 
	id = 2327   # LINZ – HÖRSCHING
   anti_air = 2 
   air_base = { size = 2 current_size = 2 } 
 } 

country =
{ tag                    = AUS
  intrinsic_gov_type     = social_liberal
  manpower               = 200
  capital                = 463
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  diplomacy =
  { relation = { tag = ENG value = 75 }
    relation = { tag = FIN value = 55 }
    relation = { tag = FRA value = -10 }
    relation = { tag = GER value = 100 }
    relation =
    { tag        = HUN
      value      = 100
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 4 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  
  nationalprovinces      = { 463 373 377 460 461 462 464 465 467 2327 2328 2329 1408 3217 53 3375 3376 7040 459 }
  ownedprovinces         = { 373 377 460 461 462 463 464 465 2327 2328 2329 3217 3375 3376 7040 }
  controlledprovinces    = { 373 377 460 461 462 463 464 465 2327 2328 2329 3217 3375 3376 7040 }
  claimedprovinces 		 = { 371 6560 7122 }

  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
     political_left    = 6  
     freedom           = 10  
     free_market       = 10  
     professional_army = 2  
     defense_lobby     = 1  
     interventionism   = 1
  }
  headofstate            = { type = 9 id = 23001 }
  headofgovernment       = { type = 9 id = 23002 }
  foreignminister        = { type = 9 id = 23003 }
  armamentminister       = { type = 9 id = 23004 }
  ministerofsecurity     = { type = 9 id = 23005 }
  ministerofintelligence = { type = 9 id = 23006 }
  chiefofstaff           = { type = 9 id = 23007 }
  chiefofarmy            = { type = 9 id = 23008 }
  chiefofnavy            = { type = 9 id = 23009 }
  chiefofair             = { type = 9 id = 23010 }
}