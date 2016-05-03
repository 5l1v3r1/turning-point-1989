##############################
# Country definition for PRK #
##############################
# Hyesan
province =
{ id       = 1391
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            
# 
province =
{ id       = 1392
  naval_base = { size = 4 current_size = 4 }
}   
#####################
# Country main data #
#####################

country =
{ tag                 = PRK
  ai = "prk_1985.ai"
  energy              = 10000
  metal               = 10000
  rare_materials      = 5000
  oil                 = 5000
  supplies            = 10000
  money               = 12000
  capital             = 1201
  manpower            = 1200
  diplomacy = { 
	relation = { tag = CHC value = 150 }
	relation = { tag = ROM value = 150 }
	relation = { tag = SOV value = 150 }
	relation = { tag = BUL value = 150 }
	relation = { tag = POL value = 150 }
	relation = { tag = DDR value = 150 }
	relation = { tag = CZE value = 150 }
	relation = { tag = HUN value = 150 }
	relation = { tag = CUB value = 150 }
	relation = { tag = KOR value = -200 }
	relation = { tag = JAP value = -200 }
	relation = { tag = USA value = -200 }
	}
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    freedom           = 1
    free_market       = 1
    professional_army = 5
    defense_lobby     = 10
    interventionism   = 4
  }
  ownedprovinces      = {
		1201 1376 1392 1391 1393 1200 2236 2333 2231
		3091 3092 3093 3094 3095 3096 3097 3098 7034 
	}
  controlledprovinces = {
		1201 1376 1392 1391 1393 1200 2236 2333 2231
		3091 3092 3093 3094 3095 3096 3097 3098 7034 
	}
  nationalprovinces   = {
		1201 1376 1392 1391 1393 1200 2236 2231 2219 2226 1199 1198 1196 1197 1195 1194
		3091 3092 3093 3094 3095 3096 3097 3098 3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654 1377 5683 3110 2333 7034
	}

}

