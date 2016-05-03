##############################
# Country definition for KOR #
##############################

province =
{ id         = 1196
  anti_air   = 2
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Busan

#####################
# Country main data #
#####################

country =
{ tag                 = KOR
  energy              = 10000
  metal               = 10000
  rare_materials      = 10000
  oil                 = 5000
  supplies            = 10000
  money               = 30000
  capital             = 1199
  manpower            = 700
  diplomacy = { 
	relation = { tag = USA value = 150 }
	relation = { tag = JAP value = -150 }
	}
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 5
    defense_lobby     = 10
    interventionism   = 4
  }
  ownedprovinces      = {
		1199 1198 1196 1197 1195 1194 2226 2219
		3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654
	}
  controlledprovinces = {
		1199 1198 1196 1197 1195 1194 2226 2219
		3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654
	}
  nationalprovinces   = {
		1199 1376 1392 1391 1393 1201 1200 1198 1196 1197 1195 1194 2236 2231 2219 2226 
		3091 3092 3093 3094 3095 3096 3097 3098 3099 3100 3101 3102 3103 3104 3105 3106 3107 3108 3109
		5654 1377 5683 3110 2333 7034
	}

}
