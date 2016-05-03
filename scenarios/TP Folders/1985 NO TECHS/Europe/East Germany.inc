 
 ############################## 
 # Country definition for DDR # 
 ############################## 
 
 province = { id = 157	air_base = { size =	5 current_size = 5 } }
#province = { id = 2763 air_base = { size =	5 current_size = 5 } }
 province = { id = 309 air_base = { size = 5 current_size = 5 } } #Cottbus
 #Fortified Border
 province = { id = 296 landfort = { size =	3 current_size = 3 } }
 province = { id = 297 landfort = { size =	3 current_size = 3 } }
 province = { id = 3244 landfort = { size =	3 current_size = 3 } }
 province = { id = 3243 landfort = { size =	3 current_size = 3 } }
 province = { id = 7182 landfort = { size =	3 current_size = 3 } }
 province = { id = 3242 landfort = { size =	3 current_size = 3 } }
 province = { id = 84 landfort = { size =	3 current_size = 3 } }
 province = { id = 3241 landfort = { size =	3 current_size = 3 } }
 province = { id = 311 landfort = { size =	3 current_size = 3 } }
 #Berlin Wall
 province = { id = 546 landfort = { size =	1 current_size = 1 } }
 province = { id = 7266 landfort = { size =	1 current_size = 1 } }
 province = { id = 299 landfort = { size =	1 current_size = 1 } }

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { tag                    = DDR 
   intrinsic_gov_type     = stalinist
   capital                = 7266
   ai = "DDR_1985.ai"
   ai_settings = {flags = {
			MOB1 = yes
			MOB2 = yes
			MOB3 = yes
			MOB4 = yes
		}
   }
   # Resource Reserves 
   energy                 = 9000
   metal                  = 4500
   rare_materials         = 2250
   oil                    = 500 
   supplies               = 500 
   money                  = 70 
   manpower               = 215 
   transports             = 450 
   escorts                = 23 
   
   research_mod = 0.75
   industrial_modifier 	  = 0.70	#Stagnation.
   #peacetime_ic_mod	= 0.8 
   #wartime_ic_mod	= 0.8
	
   diplomacy = {}
   
   SpyInfo                = {  country = "DDR" NumberOfSpies = 7  } 
   
   nationalprovinces      = { 84 296 297 298 299 301 309 310 311 546 3239 3240 3241 3243 3244 3245 6520 6917 7181 7182 7190 7260 7266
							#WEST GERMANY
							75 300 80 81 82 83 85 86 87 88 89 90 312 313 314 315 375 376 374 76 67 74 66
							3248 3247 3246 3249 547 989 2597 3250 1014 3251 970 2627 3252 1015 1016 1018 1904 3253 1405 3257 3256 3255 2381
							3254 2370 3242 6500 6521
							7179 7178 7180 7189 7188 7187 7185 7184 7186 7183 7986 7045
		#BELGIUM
		2292
		#SWITZERLAND
		532 533 3214 3215 3216
		#FRANCE
		#72 73 316
		#LIECHTENSTEIN
		2273
   
   } 
   ownedprovinces         = { 84 296 297 298 299 301 309 310 311 546 3239 3240 3241 3242 3243 3244 3245 6520 6917 7181 7182 7190 7260 7266 } 
   controlledprovinces    = { 84 296 297 298 299 301 309 310 311 546 3239 3240 3241 3242 3243 3244 3245 6520 6917 7181 7182 7190 7260 7266 } 
   claimedprovinces = { }

   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 10 
     free_market       = 1 
     freedom           = 1 
     professional_army = 4 
     defense_lobby     = 10 
     interventionism   = 7 
   } 
   
   headofstate            = {  type = 9 id = 625001  } 
   headofgovernment       = {  type = 9 id = 625002  } 
   foreignminister        = {  type = 9 id = 625003  } 
   armamentminister       = {  type = 9 id = 625004  } 
   ministerofsecurity     = {  type = 9 id = 625005  } 
   ministerofintelligence = {  type = 9 id = 625006  } 
   chiefofstaff           = {  type = 9 id = 625007  } 
   chiefofarmy            = {  type = 9 id = 625008  } 
   chiefofnavy            = {  type = 9 id = 625009  } 
   chiefofair             = {  type = 9 id = 625010  }
   
   dormant_ministers = { 
   625014 #Sabine Bergmann-Pohl
   625015 #Lothar de Maizière
   } 
   
}