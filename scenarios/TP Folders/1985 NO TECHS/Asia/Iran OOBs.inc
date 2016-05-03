 
 ############################## 
 # Country definition for PER # 
 ############################## 
 
 province = { id = 1085 ic = 14 } #Tehran
 province = { id = 1089 ic = 9 energy = 170 landfort = 6 } #Ahvaz
 province = { id = 1084 energy = 18 landfort = 4 } #Kermanshah
 province = { id = 1087 landfort = 6 } #Hamadan
 province = { id = 1090 energy = 65 } #Busehr
 province = { id = 1082 landfort = 4 } #Rezaiye
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = PER 
   # Resource Reserves 
   energy                 = 540
   metal                  = 270
   rare_materials         = 135
   transports = 100
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   capital                = 1085 
   manpower               = 167 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
    democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 2 
     professional_army = 8 
     defense_lobby     = 10 
     interventionism   = 10  
    } 

   nationalprovinces      = {  1095 1083 1084 1087 1081 1080 1085 1082 1089 1091 1090 1088 1086 1092 1094 1093  } 
   ownedprovinces         = {  1095 1083 1081 1080 1085 1082 1084 1087 1089 1091 1090 1088 1086 1092 1094 1093  } 
   controlledprovinces    = {  1095 1083 1081 1080 1085 1082 1084 1087 1089 1091 1090 1088 1086 1092 1094 1093  } 

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
   SpyInfo                = {  country = "PER" NumberOfSpies = 5  } 
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
   
   #OOB 1980
   landunit = 
   {  id       = {  type = 16600 id = 1  } 
     name     = "16th Armored Division" 
     location = 1085 #Tehran
     Division = 
     {  id       = {  type = 16600 id = 2  } 
       name     = "16th Armored Division" 
       strength = 100 
       type     = armor
	   model    = 2
      } 
	} 
	landunit = 
   {  id       = {  type = 16600 id = 3  } 
     name     = "21st Infantry Division" 
     location = 1085 #Tehran
     Division = 
     {  id       = {  type = 16600 id = 4  } 
       name     = "21st Infantry Division" 
       strength = 100 
       type     = infantry
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 5  } 
     name     = "23rd Special Forces Brigade" 
     location = 1085 #Tehran
     Division = 
     {  id       = {  type = 16600 id = 6  } 
       name     = "23rd Special Forces Brigade" 
       strength = 100 
       type     = d_03
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 7  } 
     name     = "81st Armored Division" 
     location = 1084 #Kermanshah
     Division = 
     {  id       = {  type = 16600 id = 8  } 
       name     = "81st Armored Division" 
       strength = 100 
       type     = armor
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 9  } 
     name     = "28th Infantry Division" 
     location = 1084 #Kermanshah
     Division = 
     {  id       = {  type = 16600 id = 10  } 
       name     = "28th Infantry Division" 
       strength = 100 
       type     = armor
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 11  } 
     name     = "92nd Armored Division" 
     location = 1089 #Ahvaz
     Division = 
     {  id       = {  type = 16600 id = 12  } 
       name     = "92nd Armored Division" 
       strength = 100 
       type     = armor
	   model    = 2
	   extra    = artillery
	   brigade_model = 3
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 13  } 
     name     = "64th Infantry Division" 
     location = 1082 #Rezaiye
     Division = 
     {  id       = {  type = 16600 id = 14  } 
       name     = "64th Infantry Division" 
       strength = 100 
       type     = infantry
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 15  } 
     name     = "77th Infantry Division" 
     location = 1092 #Mashad
     Division = 
     {  id       = {  type = 16600 id = 16  } 
       name     = "77th Infantry Division" 
       strength = 100 
       type     = infantry
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 17  } 
     name     = "37th Armored Brigade" 
     location = 1088 #Siraz
     Division = 
     {  id       = {  type = 16600 id = 18  } 
       name     = "37th Armored Brigade" 
       strength = 100 
       type     = armor
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 19  } 
     name     = "55th Airborne Brigade" 
     location = 1088 #Siraz
     Division = 
     {  id       = {  type = 16600 id = 20  } 
       name     = "55th Airborne Brigade" 
       strength = 100 
       type     = paratrooper
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 21  } 
     name     = "88th Armored Brigade" 
     location = 1093 #Zahedan
     Division = 
     {  id       = {  type = 16600 id = 22  } 
       name     = "88th Armored Brigade" 
       strength = 100 
       type     = armor
	   model    = 2
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 23  } 
     name     = "30th Infantry Brigade" 
     location = 1080 #Zari
     Division = 
     {  id       = {  type = 16600 id = 24  } 
       name     = "30th Infantry Brigade" 
       strength = 100 
       type     = d_01
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 16600 id = 25  } 
     name     = "84th Infantry Brigade" 
     location = 1087 #Hamadan
     Division = 
     {  id       = {  type = 16600 id = 26  } 
       name     = "84th Infantry Brigade" 
       strength = 100 
       type     = d_01
	   model    = 3
      } 
	}	
} 
 
