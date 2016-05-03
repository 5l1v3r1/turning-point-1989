
##############################
# Country definition for BHU #
##############################

country =
{ tag                    = BHU
  manpower               = 100
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 200
  supplies               = 200
  money                  = 10
  capital                = 1455
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 3 
     political_left    = 4 
     free_market       = 8 
     freedom           = 9 
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 1 
  }
  nationalprovinces      = { 1455 5180 7304 }
  ownedprovinces         = { 1455 5180 7304 }
  controlledprovinces    = { 1455 5180 7304 }

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 
   #Motorized
   1100 
   #Mountain
   1160 
   #Special Forces
   1250 
   #Mechanized
   1470
   #Irregular Infantry
   1360
   #Combat Engineers
   1830
   #Supply and Repair
   1990
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620
   #Armored Cars
   2860
   #Anti-Air
   2800
   #Armored Personnel Carriers
   2170
   #Field Artillery
   2290 
   #Self-Propelled Anti-Air
   2810
   #Man-Portable Air-Defense Systems
   3000
   #Self-Propelled Artillery
   2220
   #Self-Propelled Rocket Artillery
   2980 
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110
   #Submarines
   3010
   #Transport Ships
   3900
   ###################
   #    Aircraft     #
   ###################
   #Multi-Role
   4500
   #Air Transports
   4250
   ###################
   #    Industry     #
   ###################
   #Light Industry
   5810
   #Heavy Industry
   5130
   #Material Science
   53050
   #Construction Eng.
   5800
   #Agriculture
   5700
   #Oil
   5190
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6560 #Defensive
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200
   } 
  diplomacy =
  { relation = { tag = AST value = 200 }
    relation = { tag = CAN value = 200 }
    relation = { tag = ENG value = 200 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 }
    relation = { tag = USA value = 100 }
    relation = { tag = YEM value = 150 }
  }

   landunit = 
   {  location = 1455 
     id       = {  type = 16000 id = 1  } 
     name     = "Royal Bhutanese Army" 
     Division = 
     {  id       = {  type = 16000 id = 2  } 
       name     = "Household Division" 
       type     = infantry 
       model    = 3
       strength = 10 
      } 
     Division = 
     {  id       = {  type = 16000 id = 3  } 
       name     = "Royal Division" 
       type     = infantry 
       model    = 3
       strength = 10 
      } 
    } 
  } 
 