#####################
# Country main data #
#####################

country =
{ tag                    = HON
  manpower               = 100
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 760
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5 
     political_left    = 2 
     free_market       = 6 
     freedom           = 4 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 4 
  }
  nationalprovinces      = { 760 2650 4296 4297 4298 4299 4300 6501 6503 }
  ownedprovinces         = { 760 2650 4296 4297 4298 4299 4300 6501 }
  controlledprovinces    = { 760 2650 4296 4297 4298 4299 4300 6501 }

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
  { relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = 100 }
    relation = { tag = USA value = 100 }
  }

######################################
# ARMY
######################################
landunit = {
         id = { type = 12236 id = 1 }
         location = 760 #2085
         name = "Ejército de Honduras"
         division = {
                  id = { type = 12236 id = 2 }
                  name = "101 Brigada de Infantería"
                  strength = 100
                  type = d_06
                  model = 1
         }
         division = {
                  id = { type = 12236 id = 3 }
                  name = "105 Brigada de Infantería"
                  strength = 100
                  type = d_06
                  model = 1
         }
         division = {
                  id = { type = 12236 id = 4 }
                  name = "110 Brigada de Infantería"
                  strength = 50
                  type = d_06
                  model = 1
         }
         division = {
                  id = { type = 12236 id = 5 }
                  name = "115 Brigada de Infantería"
                  strength = 50
                  type = d_06
                  model = 1
         }
         division = {
                  id = { type = 12236 id = 6 }
                  name = "120 Brigada de Infantería"
                  strength = 50
                  type = d_06
                  model = 1
         }
    }
}  
 