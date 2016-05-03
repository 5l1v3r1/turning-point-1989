#####################
# Country main data #
#####################

country =
{ tag                    = NIC
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 539
  manpower               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 3 
     political_left    = 10 
     freedom           = 2 
     free_market       = 3 
     professional_army = 1 
     defense_lobby     = 8 
     interventionism   = 3 
  }
  nationalprovinces      = { 539 2651 4291 4292 4293 4294 4295 6504 }
  ownedprovinces         = { 539 2651 4291 4292 4293 4294 4295 6504 }
  controlledprovinces    = { 539 2651 4291 4292 4293 4294 4295 6504 }

  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
}