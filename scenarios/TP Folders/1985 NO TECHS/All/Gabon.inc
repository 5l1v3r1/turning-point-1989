
################################
# Country definition for Gabon #
################################
#Fazer como puppet francês.

country =
{ tag                 = GAB
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 10
  capital             = 1093
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 3
    freedom           = 5
    free_market       = 5
    professional_army = 5
    defense_lobby     = 3
    interventionism   = 4
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  headofstate            = {  type = 9 id = 655001  } 
  headofgovernment       = {  type = 9 id = 655002  } 
  foreignminister        = {  type = 9 id = 655003  } 
  armamentminister       = {  type = 9 id = 655004  } 
  ministerofsecurity     = {  type = 9 id = 655005  } 
  ministerofintelligence = {  type = 9 id = 655006  } 
  chiefofstaff           = {  type = 9 id = 655007  } 
  chiefofarmy            = {  type = 9 id = 655008  } 
  chiefofnavy            = {  type = 9 id = 655009  } 
  chiefofair             = {  type = 9 id = 655010  } 
  
  ownedprovinces      = {
		1093 1092 2749
4892 4893 4894 4895 4896 4897 4898 4899
	}
  controlledprovinces = {
		1093 1092 2749
4892 4893 4894 4895 4896 4897 4898 4899
	}
  nationalprovinces   = {
		1093 1092 2749
4892 4893 4894 4895 4896 4897 4898 4899
	}

}