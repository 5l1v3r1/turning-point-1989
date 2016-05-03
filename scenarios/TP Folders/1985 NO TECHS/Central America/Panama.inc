#####################
# Country main data #
#####################

country =
{ tag                    = PAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 888
  manpower               = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 2
         political_left    = 3
         freedom           = 3
         free_market       = 7
         professional_army = 7
         defense_lobby     = 7
         interventionism   = 8
  }
  nationalprovinces      = { 889 888 723 4286 4287 4288 4289 }
  ownedprovinces         = { 888 723 4286 4287 4288 4289 }
  controlledprovinces    = { 888 723 4286 4287 4288 4289 }

   headofstate            = {  type = 9 id = 405001 }
   headofgovernment       = {  type = 9 id = 405002 }
  diplomacy =
  { relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
}