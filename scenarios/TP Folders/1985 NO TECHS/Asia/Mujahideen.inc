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
  province = { id = 5394 landfort = 3 }
  province = { id = 5396 landfort = 3 }
  province = { id = 5397 landfort = 3 }
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
  ownedprovinces         = { 2864 2865 2867 5379 5381 5383 5385 5386 5390 5391 5394 5396 5397 5400 5401 5402 5403 7983 }
  controlledprovinces    = { 2864 2865 2867 5379 5381 5383 5385 5390 5391 5394 5396 5397 5400 5401 5402 5403 7983 }
  claimedprovinces 		 = { 4227 }

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
} 
 