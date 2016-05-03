 
 ############################## 
 # Country definition for PER # 
 ############################## 
 
 province = { id = 1502 ic = 14 } #Tehran
 province = { id = 1789 energy = 18 } #Kermanshah
 province = { id = 4199 landfort = 1 } #Mahabad
 province = { id = 4204 landfort = 1 } #Saqqez
 province = { id = 2841 landfort = 1 } #Sanandaj
 province = { id = 4205 landfort = 3 } #Ilam
 province = { id = 4210 landfort = 2 } #Koodasht
 province = { id = 4212 landfort = 3 } #Abadan
 province = { id = 1498 ic = 9 energy = 170 landfort = 3 } #Ahvaz
 province = { id = 1499 energy = 65 } #Busehr
 province = { id = 1788 landfort = 1 } #Rezaiye
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PER 
   # Resource Reserves 
   ai = "per_1985.ai"
   energy                 = 540
   metal                  = 270
   rare_materials         = 135
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   capital                = 1502 
   manpower               = 167 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 5 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5
    } 

   nationalprovinces      = { 1502 1789 1825 1497 1499 1826 1501 
1500 1496 2836 2837 2842 2843 2844 
4207 4208 
4210 4211 4213 4214 4215 4216 4217 4218 4219 4220 
4221 4223 4224 4227 4228 4229 4230 4231 4233 4234 6495
7014
2864 2865 5386 5389 1486 5388 5387 5379 5390 5400 2867 5401 5398
5396 5397 5399 5481 5484 3485 6953 1487 3484 3483 1485 3482 3481
  }
  ownedprovinces         = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495
2836 2837 2838 2839 2840 2841 2842 2843 2844 2845
2846
4198 4199 4201 4202 4203 4204 4205 4206 4207 4208 
4209 4210 4211 4212 4213 4214 4215 4216 4217 4218 
4219 4220 4221 4222 4223 4224 4225 4226 4227 4228 
4229 4230 4231 4232 4233 4234 6495
7014
  }
  controlledprovinces    = { 1859 1787 1503 1502 1788 1789 1825 1498 1497 1499 1826 1501 1500 1496 1495
2836 2837 2838 2839 2840 2841 2842 2843 2844 2845
2846
4198 4199 4201 4202 4203 4204 4205 4206 4207 4208 
4209 4210 4211 4212 4213 4214 4215 4216 4217 4218 
4219 4220 4221 4222 4223 4224 4225 4226 4227 4228 
4229 4230 4231 4232 4233 4234 6495
7014
  }
  claimedprovinces 		 = { 
1906 4232 2838 1503 4209 1787 4206 2840 4202 4201 4198 1788 4199
1859 4203 2839 4204 2841 4205 1498 4212 1495 4226 2846 4225
4222 2845 5384 5380 5392 1493 1484 2866 5402 3479
  }

   diplomacy = 
   {  relation = {  tag = AFG value = 25  } 
     relation = {  tag = DEN value = 50  } 
     relation = {  tag = ENG value = 25  } 
     relation = {  tag = IRQ value = 125  } 
     relation = {  tag = SAU value = 100  } 
     relation = {  tag = SOV value = -20  } 
     relation = {  tag = SWE value = 50  } 
     relation = {  tag = TUR value = -50  } 
    } 
	
   SpyInfo                = {  country = "PER" NumberOfSpies = 10  }
   SpyInfo                = {  country = "IRQ" NumberOfSpies = 14  }   
   
   headofstate            = {  type = 9 id = 150001  } 
   headofgovernment       = {  type = 9 id = 150002  } 
   foreignminister        = {  type = 9 id = 150003  } 
   armamentminister       = {  type = 9 id = 150004  } 
   ministerofsecurity     = {  type = 9 id = 150005  } 
   ministerofintelligence = {  type = 9 id = 150006  } 
   chiefofstaff           = {  type = 9 id = 150007  } 
   chiefofarmy            = {  type = 9 id = 150008  } 
   chiefofnavy            = {  type = 9 id = 150009  } 
   chiefofair             = {  type = 9 id = 150010  } 
   
}