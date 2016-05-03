#####################
# Country main data #
#####################

 province = { id =	451	air_base = { size =	5 current_size = 5 } } # Nis
 province = { id =	382	air_base = { size =	5 current_size = 5 } } # zagreb

country =
{ tag                    = YUG
  ai                     = "YUG_1985.ai" 
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 15
  capital                = 453
  manpower               = 200
  diplomacy =
  { relation = { tag = BUL value = 25 }
    relation = { tag = CZE value = 50 }
    relation = { tag = FIN value = 35 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 50 }
    relation =
    { tag        = GRE
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = HUN value = 80 }
    relation = { tag = ITA value = 75 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation =
    { tag        = TUR
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 2 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 3 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 4 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 3 }
  nationalprovinces      = { 
380 459 455 454 453 382 383 384 385 386 387 388 389 
451 452 415 493 494 413 414 
291 1891 1892 1893 1897 1895 1057 1894 1896 1168 1169
666 2326 2325 381 2289
2607 2608 2609
3359 3360 3361 3362 3363 3364 3365 3366 3367 3368 3369 3370 3371 3372 3373 3374 3393
3357 3358 3397
5464 6505 6534 6535 6536 6537 6538 6557 6558 6559 6560 6561 6562 6563 6564
7122 7267 7268 7269 7270 7271 7315 7937
461 7124 7125
  }
  ownedprovinces         = { 380 459 455 454 453 382  383 384 385 386 387 388 389 451 452 415 493 494 413 414 
							291 1891 1892 1893 1897 1895 1057 1894 1896 1168 1169 2289
							2607 2608 2609	3397
							3359	3360	3361	3362	3363	3364	3365	3366	3367	3368	3369	3370	3371	3372	3373	3374	3393
5464 6505 6534 6535 6536 6537 6538 6557 6558 6559 6560 6561 6562 6563 6564
7122 7267 7268 7269 7270 7271 7315 7937 3358 7125 2326 7124 3357 2325 381 
  }
  controlledprovinces    = { 380 459 455 454 453 382  383 384 385 386 387 388 389 451 452 415 493 494 413 414 
							291 1891 1892 1893 1897 1895 1057 1894 1896 1168 1169 2289
							2607 2608 2609	3397
							3359	3360	3361	3362	3363	3364	3365	3366	3367	3368	3369	3370	3371	3372	3373	3374	3393
5464 6505 6534 6535 6536 6537 6538 6557 6558 6559 6560 6561 6562 6563 6564
7122 7267 7268 7269 7270 7271 7315 7937 3358 7125 2326 7124 3357 2325 381
  }
  claimedprovinces 		 = { 665 456 6514 495 2602 6506 3375 }

  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1
     political_left    = 10
     freedom           = 1
     free_market       = 1
     professional_army = 3
     defense_lobby     = 8
     interventionism   = 6
  }
   headofstate            = {  type = 9 id = 100001  } 
   headofgovernment       = {  type = 9 id = 100002  } 
   foreignminister        = {  type = 9 id = 100003  } 
   armamentminister       = {  type = 9 id = 100004  } 
   ministerofsecurity     = {  type = 9 id = 100005  } 
   ministerofintelligence = {  type = 9 id = 100006  } 
   chiefofstaff           = {  type = 9 id = 100007  } 
   chiefofarmy            = {  type = 9 id = 100008  } 
   chiefofnavy            = {  type = 9 id = 100009  } 
   chiefofair             = {  type = 9 id = 100010  }
}