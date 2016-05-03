#####################
# Country main data #
#####################

province = { id = 654 air_base = { size = 4 current_size = 4 } }

country =
{ tag                    = CUB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 100
  capital                = 654
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 4 
     political_left    = 10 
     free_market       = 1 
     freedom           = 3 
     professional_army = 4 
     defense_lobby     = 7 
     interventionism   = 8
  }
  nationalprovinces      = { 654 655 656 657 4278 4279 4280 4281 4282 4283 4284 894 }
  ownedprovinces         = { 654 655 656 657 4278 4279 4280 4281 4282 4283 4284 }
  controlledprovinces    = { 654 655 656 657 4278 4279 4280 4281 4282 4283 4284 }

  diplomacy =
  { relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 85001 }
  headofgovernment       = { type = 9 id = 85002 }
  foreignminister        = { type = 9 id = 85003 }
  armamentminister       = { type = 9 id = 85004 }
  ministerofsecurity     = { type = 9 id = 85005 }
  ministerofintelligence = { type = 9 id = 85006 }
  chiefofstaff           = { type = 9 id = 85007 }
  chiefofarmy            = { type = 9 id = 85008 }
  chiefofnavy            = { type = 9 id = 85009 }
  chiefofair             = { type = 9 id = 85010 }
}
 