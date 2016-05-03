#####################
# Country main data #
#####################

country =
{ tag                    = BEL
  capital                = 51
  manpower               = 200
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 9000
  transports             = 100
  escorts                = 20
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  
  nationalprovinces      = { 51 45 50 52 65 68 69 70 2292 7044 7043 1082 }
  ownedprovinces         = { 51 45 50 52 65 68 69 70 2292 7044 }
  controlledprovinces    = { 51 45 50 52 65 68 69 70 2292 7044 }
  
  inventions = {  } 
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
     political_left    = 3 
     free_market       = 9 
     freedom           = 10 
     professional_army = 3 
     defense_lobby     = 2 
     interventionism   = 2 
  }
}