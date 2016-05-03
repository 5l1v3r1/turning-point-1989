
##############################
# Country definition for SIE #
##############################

country =
{ tag                 = SIE
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 988
  manpower            = 100
  
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  headofstate            = {  type = 9 id = 765001  } 
  headofgovernment       = {  type = 9 id = 765002  } 
  foreignminister        = {  type = 9 id = 765003  } 
  armamentminister       = {  type = 9 id = 765004  } 
  ministerofsecurity     = {  type = 9 id = 765005  } 
  ministerofintelligence = {  type = 9 id = 765006  } 
  chiefofstaff           = {  type = 9 id = 765007  } 
  chiefofarmy            = {  type = 9 id = 765008  } 
  chiefofnavy            = {  type = 9 id = 765009  } 
  chiefofair             = {  type = 9 id = 765010  } 
  
  nationalprovinces   = {
		988 4473 4474 4475
	}
  ownedprovinces      = {
		988 4473 4474 4475
	}
  controlledprovinces = {
		988 4473 4474 4475
	}

}