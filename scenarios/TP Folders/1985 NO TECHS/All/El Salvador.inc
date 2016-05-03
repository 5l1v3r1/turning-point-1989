#####################
# Country main data #
#####################

country =
{ tag                    = SAL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 100
  capital                = 759
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5 
     political_left    = 2 
     freedom           = 5 
     free_market       = 5 
     professional_army = 4 
     defense_lobby     = 5 
     interventionism   = 3
  }
  nationalprovinces      = { 759 4301 }
  ownedprovinces         = { 759 4301 }
  controlledprovinces    = { 759 4301 }

   headofstate            = {  type = 9 id = 345001 }
   headofgovernment       = {  type = 9 id = 345002 }
  
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 100 }
  }
}