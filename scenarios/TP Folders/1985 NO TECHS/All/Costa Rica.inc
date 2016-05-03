#####################
# Country main data #
#####################

country =
{ tag                    = COS
  manpower               = 100
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 540
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 7 
     political_left    = 6 
     free_market       = 8 
     freedom           = 5 
     professional_army = 1
     defense_lobby     = 5 
     interventionism   = 2
  }
  nationalprovinces      = { 540 2652 4290 }
  ownedprovinces         = { 540 2652 4290 }
  controlledprovinces    = { 540 2652 4290 }

  diplomacy =
  { relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 47001 }
  headofgovernment       = { type = 9 id = 47002 }
  foreignminister        = { type = 9 id = 47003 }
  armamentminister       = { type = 9 id = 47004 }
  ministerofsecurity     = { type = 9 id = 47005 }
  ministerofintelligence = { type = 9 id = 47006 }
  chiefofstaff           = { type = 9 id = 47007 }
  chiefofarmy            = { type = 9 id = 47008 }
  chiefofnavy            = { type = 9 id = 47009 }
  chiefofair             = { type = 9 id = 47010 }
}
