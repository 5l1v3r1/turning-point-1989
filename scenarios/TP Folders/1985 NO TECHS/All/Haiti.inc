#####################
# Country main data #
#####################

country =
{ tag                    = HAI
  manpower               = 100
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 892
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    free_market       = 4
    freedom           = 2
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 892 2673 4277 7172 }
  ownedprovinces         = { 892 2673 4277 7172 }
  controlledprovinces    = { 892 2673 4277 7172 }

  diplomacy =
  { relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 78001 }
  headofgovernment       = { type = 9 id = 78002 }
  foreignminister        = { type = 9 id = 78003 }
  armamentminister       = { type = 9 id = 78004 }
  ministerofsecurity     = { type = 9 id = 78005 }
  ministerofintelligence = { type = 9 id = 78006 }
  chiefofstaff           = { type = 9 id = 78007 }
  chiefofarmy            = { type = 9 id = 78008 }
  chiefofnavy            = { type = 9 id = 78009 }
  chiefofair             = { type = 9 id = 78010 }
} 
 