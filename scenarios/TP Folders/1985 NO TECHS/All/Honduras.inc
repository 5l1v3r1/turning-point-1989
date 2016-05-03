#####################
# Country main data #
#####################

country =
{ tag                    = HON
  manpower               = 100
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 760
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5 
     political_left    = 2 
     free_market       = 6 
     freedom           = 4 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 4 
  }
  nationalprovinces      = { 760 2650 4296 4297 4298 4299 4300 6501 6503 }
  ownedprovinces         = { 760 2650 4296 4297 4298 4299 4300 6501 }
  controlledprovinces    = { 760 2650 4296 4297 4298 4299 4300 6501 }

  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }
}