#####################
# Country main data #
#####################

country =
{ tag                    = FRA
  capital                = 56
  ai                     = "FRA_1985.ai" 
  # Resource Reserves
  energy                 = 10000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 80000
  manpower               = 500
  transports             = 300
  escorts                = 60
  peacetime_ic_mod       = 0.5
  
  diplomacy = {
	#relation = 
    # {  tag        = DFR 
    #   value      = 50 
    #   guaranteed = {  day = 0 month = january year = 1985  } 
	#}
  }
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 4 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "BEL" NumberOfSpies = 4 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 3 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "GRE" NumberOfSpies = 1 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 2 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "LUX" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 1 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }

  nationalprovinces      = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
							 2555 2514 2557 2509 2242 1676 1022 841 1643
							 530 2583 3060
							 3134	3135	3136	3137	3138	3139	3140	
3141	3142	3143	3144	3145	3146	3147	
3148	3149	3150	3151	3152	3153	3154	
3155	3156	3157	3158	3159	3160	3161	
3162	3163	3164	3165	3166	3167	3168	
3169	3170	3171	3172	3173	3174	3175	
3176	3177	3213	2626	2648 6524 6527 6556
7088 7089 567 898 899 4383 7235 7233 7232 7234 7238 7230 1769 7231 1761 7228 7236 7237 7229 1770 1752 1692 7210 7211 7212 7213 1691 5420 3892 875 581
                           }

  ownedprovinces         = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
							 2555 2514 2557 2509 2242 1676 1022 841 1643
							 3060
							 3134	3135	3136	3137	3138	3139	3140	
3141	3142	3143	3144	3145	3146	3147	
3148	3149	3150	3151	3152	3153	3154	
3155	3156	3157	3158	3159	3160	3161	
3162	3163	3164	3165	3166	3167	3168	
3169	3170	3171	3172	3173	3174	3175	
3176	3177	2626	2648    6527 	6556
7088 7089 567 898 899 4383 7235 7233 7232 7234 7238 7230 1769 7231 1761 7228 7236 7237 7229 1770 1752 1692 7210 7211 7212 7213 1691 5420 3892 875 1135 5096 2024 581
                           }

  controlledprovinces    = { 529 527 366 365 367 364 363 362 358 328 327 326 325 324 359 361 319 360 322 323 59  60  61  62  63  318 317 316 73  72 
                             64  44  43  18  54  42  55  41  56  57  58  32  33  34  35  36  37  38  39  40  320 321 528
							 2555 2514 2557 2509 2242 1676 1022 841 1643
							 3060
							 3134	3135	3136	3137	3138	3139	3140	
3141	3142	3143	3144	3145	3146	3147	
3148	3149	3150	3151	3152	3153	3154	
3155	3156	3157	3158	3159	3160	3161	
3162	3163	3164	3165	3166	3167	3168	
3169	3170	3171	3172	3173	3174	3175	
3176	3177	2626	2648    6527 	6556
7088 7089 567 898 899 4383 7235 7233 7232 7234 7238 7230 1769 7231 1761 7228 7236 7237 7229 1770 1752 1692 7210 7211 7212 7213 1691 5420 3892 875 1135 5096 2024 581
                           }

  claimedprovinces 		 = {}

  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 9 
      political_left    = 6  
      freedom           = 10  
      free_market       = 10  
      professional_army = 2  
      defense_lobby     = 1  
      interventionism   = 1
  }
  headofstate            = { type = 9 id = 2001 }
  headofgovernment       = { type = 9 id = 2002 }
  foreignminister        = { type = 9 id = 2003 }
  armamentminister       = { type = 9 id = 2004 }
  ministerofsecurity     = { type = 9 id = 2005 }
  ministerofintelligence = { type = 9 id = 2006 }
  chiefofstaff           = { type = 9 id = 2007 }
  chiefofarmy            = { type = 9 id = 2008 }
  chiefofnavy            = { type = 9 id = 2009 }
  chiefofair             = { type = 9 id = 2010 }
}