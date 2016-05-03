#Danish Air Force Infrastructure
province = { 
id = 91 #Skrydstrup AB
air_base = { size = 2 current_size = 2 }
}
province = { 
id = 3351 #Karup AB
air_base = { size = 2 current_size = 2 }
}
province = {
id = 92 #Aalborg
air_base = { size = 4 current_size = 4 }
}
#Danish Navy Infrastructure
province = {
id = 800 #Nuuk, Greenland, home of 1. Eskadre
naval_base = { size = 2 current_size = 2 }
}
province = {
id = 292 #Frederiskhaven
naval_base = { size = 7 current_size = 7 }
}
province = {
id = 3350 #Korsor
naval_base = { size = 6 current_size = 6 }
coastalfort = 2 #Fortresses of Stevns and Langeland
}
#####################
# Country main data #
#####################

country =
{ tag                    = DEN
  manpower               = 200
  capital                = 294
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  transports = 50
  
  diplomacy = {}
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 1 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 2 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  nationalprovinces      = { 91 92 292 293 294 295 800 1 2 122 120 2632 3350 3351 7137 7138 7139 7973 7974 7975 1588 2078 2105
  }
  ownedprovinces         = { 91 92 292 293 294 295 800 2 122 120
3350	3351
7973 7974 7975
1588
2078 2105
  }
  controlledprovinces    = { 91 92 292 293 294 295 800 2 122 120
3350	3351
7973 7974 7975
1588
2078 2105
  }
  claimedprovinces = { 3301 3302 93 3303 }

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
  headofstate            = { type = 9 id = 16001 }
  headofgovernment       = { type = 9 id = 16002 }
  foreignminister        = { type = 9 id = 16003 }
  armamentminister       = { type = 9 id = 16004 }
  ministerofsecurity     = { type = 9 id = 16005 }
  ministerofintelligence = { type = 9 id = 16006 }
  chiefofstaff           = { type = 9 id = 16007 }
  chiefofarmy            = { type = 9 id = 16008 }
  chiefofnavy            = { type = 9 id = 16009 }
  chiefofair             = { type = 9 id = 16010 }
}