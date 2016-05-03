#BAOR AA
province = {
id = 76 #Dusseldorf, Dortmund
anti_air = 8
}
province = {
id = 1405 #Minden
anti_air = 3
}
#British Army AA Units
province = {
id = 10
anti_air = 3
}
province = {
id = 1164
anti_air = 5
}
province = {
id = 28
anti_air = 3
}
province = {
id = 3038
anti_air = 5
}
province = {
id = 7334
anti_air = 5
}
province = {
id = 1166
anti_air = 5
}
#RAF in Germany Infrastructure
province = {
id = 66 #RAF Bruggen + RAF Wildenrath + RAF Laarbruch
air_base = { size = 8 current_size = 8 }
anti_air = 3
}
province = {
id = 3253 #RAF Gutersloh
air_base = { size = 3 current_size = 3 }
anti_air = 1
}
province = {
id = 6521 #RAF Laarbruch
air_base = { size = 4 current_size = 4 }
}
#RAF UK Infrastructure
province = {
id = 1164 #RAF Binbrook, Lincs + RAF Coningsby + RAF Waddington
air_base = { size = 8 current_size = 8 }
anti_air = 2
}
province = {
id = 3045 #RAF Leuchars, Fife
air_base = { size = 2 current_size = 2 }
anti_air = 1
}
province = {
id = 3047 #RAF Lossiemouth, Morayshire + RAF Kinloss
air_base = { size = 5 current_size = 5 }
anti_air = 1
}
province = {
id = 17 #RAF Marham, Norfolk + RAF Coltishall
air_base = { size = 10 current_size = 10 }
anti_air = 1
}
province = {
id = 7289 #RAF Wattisham, Suffolk + RAF Honington
air_base = { size = 4 current_size = 4 }
anti_air = 1
}
province = {
id = 3035 #RAF Wittering, Cambs
air_base = { size = 2 current_size = 2 }
}
province = {
id = 10 #RAF Leeming
air_base = { size = 1 current_size = 1 }
}
province = {
id = 3036 #RAF Cottesmore
air_base = { size = 3 current_size = 3 }
}
province = {
id = 1409 #RAF Brawdy
air_base = { size = 1 current_size = 1 }
}
province = {
id = 3030 #RAF Chivenor
air_base = { size = 1 current_size = 1 }
}
province = {
id = 16 #RAF Brize Norton + RAF Lyneham + RAF Benson
air_base = { size = 8 current_size = 8 }
anti_air = 1 
}
province = {
id = 3040 #RAF Boulmer
air_base = { size = 2 current_size = 2 }
}
province = {
id = 21 #RAF Odiham
air_base = { size = 1 current_size = 1 }
}
province = {
id = 19 #RAF Northolt
air_base = { size = 1 current_size = 1 }
}
province = {
id = 29 #RAF Aldergrove
air_base = { size = 1 current_size = 1 }
}
#RAF Bases outside of UK (excluding Germany)
province = {
id = 866 #RAF Falklands
air_base = { size = 1 current_size = 1 }
}
province = {
id = 758 #RAF Belize
air_base = { size = 1 current_size = 1 }
}
province = {
id = 5412 #RAF Akrotiri
air_base = { size = 5 current_size = 5 }
}
province = {
id = 1315 #RAF Sek Kong
air_base = { size = 1 current_size = 1 }
}
#Royal Navy bases
province = {
id = 5412 #Western Sovereign Base Area / Akrotiri
naval_base = { size = 5 current_size = 5 }
}
province = {
id = 5413 #Eastern Sovereign Base Area / Dekhelia
naval_base = { size = 5 current_size = 5 }
}
province = {
id = 21 #HMNB Portsmouth
naval_base = { size = 10 current_size = 10 }
}
province = {
id = 23 #HMNB Devonport
naval_base = { size = 10 current_size = 10 }
}
province = {
id = 2279 #HMNB Clyde
naval_base = { size = 10 current_size = 10 }
}
province = {
id = 1160 #HMNB Torpoint
naval_base = { size = 2 current_size = 2 }
}
province = {
id = 3045 #HMNB Rosyth
naval_base = { size = 10 current_size = 10 }
}
#####################
# Country main data #
#####################

country =
{ tag                    = ENG
  capital                = 19
  manpower               = 1000
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 70000
  transports             = 1000
  escorts                = 150
  
  peacetime_ic_mod       = 0.5
  
  diplomacy = { 
  relation = { tag = BRU value = 200 access = yes } 
  relation = { tag = U08 value = 200 access = yes }
  }
  
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 5 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 3 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 4 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 1 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  SpyInfo                = { country = "AST" NumberOfSpies = 2 }
  SpyInfo                = { country = "NZL" NumberOfSpies = 2 }
  SpyInfo                = { country = "CAN" NumberOfSpies = 2 }
  SpyInfo                = { country = "IRE" NumberOfSpies = 4 }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }
  SpyInfo                = { country = "BHU" NumberOfSpies = 1 }
  SpyInfo                = { country = "YEM" NumberOfSpies = 1 }
  SpyInfo                = { country = "ETH" NumberOfSpies = 1 }
  
  # GREAT BRITAIN
  nationalprovinces      = { 19 1165 5 3 6 7 1166 8 9 28 29 10 2245 11 13 12 1164 14 17 16 22 20 21 23 1160 15 1409 1720 2279
  3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3054 2634 348 6944
  7128 7129 7131 7287 7288 7289 7334 5462 5456 866 5092 1148 1147 573 896 587 795 538 584 2996 2923
                           }
  # GREAT BRITAIN
  ownedprovinces         = { 19 1165 5 3 6 7 1166 8 9 28 29 10 2245 11 13 12 1164 14 17 16 22 20 21 23 1160 15 1409 1720 2279
  3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3054 2634 348 6944
  7128 7129 7131 7287 7288 7289 7334 5462 5456 866 5092 1148 1147 573 896 587 795 538 584 2996 2923
  #Hong Kong
  1315
  #Cyprus
  5412 5413
                           }
  # GREAT BRITAIN
  controlledprovinces    = { 19 1165 5 3 6 7 1166 8 9 28 29 10 2245 11 13 12 1164 14 17 16 22 20 21 23 1160 15 1409 1720 2279
  3030 3031 3032 3033 3034 3035 3036 3037 3038 3039 3040 3041 3042 3043 3044 3045 3046 3047 3054 2634 348 6944
  7128 7129 7131 7287 7288 7289 7334 5462 5456 866 5092 1148 1147 573 896 587 795 538 584 2996 2923
  #Hong Kong
  1315
  #Cyprus
  5412 5413
                           }
  claimedprovinces 		 = {
  #Hong Kong
  1315
  #Cyprus
  5412 5413
  }

  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic = 5
	 political_left = 4 
	 freedom = 4 
	 free_market = 7 
	 professional_army = 4 
	 defense_lobby = 6 
	 interventionism = 5
  }
  headofstate            = { type = 9 id = 1001 }
  headofgovernment       = { type = 9 id = 1002 }
  foreignminister        = { type = 9 id = 1003 }
  armamentminister       = { type = 9 id = 1004 }
  ministerofsecurity     = { type = 9 id = 1005 }
  ministerofintelligence = { type = 9 id = 1006 }
  chiefofstaff           = { type = 9 id = 1007 }
  chiefofarmy            = { type = 9 id = 1008 }
  chiefofnavy            = { type = 9 id = 1009 }
  chiefofair             = { type = 9 id = 1010 }
}
 
