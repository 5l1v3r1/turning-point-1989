 ############################## 
 # Country definition for POL # 
 ############################## 
 
 province = { id = 208 air_base = { size = 5 current_size = 5 } } #Bydgoszcz
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { tag                    = POL 
   ai = "pol_1985.ai"
   capital                = 485
   manpower               = 130 
   # Resource Reserves 
   energy                 = 2460
   metal                  = 1230
   rare_materials         = 615
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 20 
   dissent				  = 10		#Solidarity (trade union) and dissent among the population.
   industrial_modifier 	  = 0.59	#Economic decline.
   
   diplomacy = {}
   
   SpyInfo                = {  country = "POL" NumberOfSpies = 9  } 
   nationalprovinces      = {
		485 2628 486 1595 482 473 1623 1400 3238 308 3258 302 1810 3259 1779
		303 306 3265 307 208 3264 483 3263 2647 304 3260 1811 3261 509 505 
		1875 3272 508 1876 305 222 211 481 3266 504 3270 1884 487 484
		3268 480 3267 3269 479 488 3271 489 6515 6516 6519
		7046 7177 7047 7262 7049 7050 7048 7335 7978 209 214 3277 7263
	}
   ownedprovinces         = {
		485 2628 486 1595 482 473 1623 1400 3238 308 3258 302 1810 3259 1779
		303 306 3265 307 208 3264 483 3263 2647 304 3260 1811 3261 509 505 
		1875 3272 508 1876 305 222 211 481 3266 504 3270 1884 487 484
		3268 480 3267 3269 479 488 3271 489 6515 6516 6519
		7046 7177 7047 7262 7049 7050 7048 7335 7978
	}
   controlledprovinces    = {
		485 2628 486 1595 482 473 1623 1400 3238 308 3258 302 1810 3259 1779
		303 306 3265 307 208 3264 483 3263 2647 304 3260 1811 3261 509 505 
		1875 3272 508 1876 305 222 211 481 3266 504 3270 1884 487 484
		3268 480 3267 3269 479 488 3271 489 6515 6516 6519
		7046 7177 7047 7262 7049 7050 7048 7335 7978
	}

   policy = 
   { date              = {  year = 0 month = january day = 0  } 
     democratic        = 1
     political_left    = 10
     freedom           = 3
     free_market       = 1
     professional_army = 3
     defense_lobby     = 8
     interventionism   = 7 
    }

   headofstate            = {  type = 9 id = 60001  }
   headofgovernment       = {  type = 9 id = 60002  }
   foreignminister        = {  type = 9 id = 60003  }
   armamentminister       = {  type = 9 id = 60004  }
   ministerofsecurity     = {  type = 9 id = 60005  }
   ministerofintelligence = {  type = 9 id = 60006  }
   chiefofstaff           = {  type = 9 id = 60007  }
   chiefofarmy            = {  type = 9 id = 60008  }
   chiefofnavy            = {  type = 9 id = 60009  }
   chiefofair             = {  type = 9 id = 60010  }
   
   dormant_ministers = { 60011 60022 60023 60024 } #Lech Walesa
   
}