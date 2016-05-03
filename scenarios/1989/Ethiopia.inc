##############################
# Country definition for ETH #
##############################

country =
{ tag                    = ETH
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 1046
  manpower               = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 3 
     political_left    = 4 
     free_market       = 7 
     freedom           = 3 
     professional_army = 7 
     defense_lobby     = 5 
     interventionism   = 2
  }
  nationalprovinces      = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 1033 1038 1039 2342
4658 4659 4660 4661 4662 4663 4664 4665 4666 4667 4668 4669 4670 4671 4672 4673 4674 4675 4676 4677 4678 4679 4680 4682
6539 6540 6541 6542 7445 7448 7449 7446 7346 7447 7935
  }
  ownedprovinces         = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 2342
4658 4659 4660 4661 4662 4663 4664 4665 4666 4667 4668 4669 4670 4671 4672 4673 4674 4675 4676 4677 4678 4679 4680
6539 6540 6541 6542 7445 7448 7449 1038 1039 1033 7447 4682 7346 7446 7935
  }
  controlledprovinces    = { 1044 1048 1049 1042 1043 1050 1045 1046 1047 1053 1052 1051 1054 2342
4658 4659 4660 4661 4662 4663 4664 4665 4666 4667 4668 4669 4670 4671 4672 4673 4674 4675 4676 4677 4678 4679 4680
6539 6540 6541 6542 7445 7448 7449 1038 1039 1033 7447 4682 7346 7446 7935
  }
  claimedprovinces = { 7450 }
  
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
    relation = { tag = FRA value = 25 }
    relation = { tag = IRE value = 100 }
    relation = { tag = ITA value = -200 }
    relation = { tag = JAP value = 35 }
  }

  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 31000 id = 1 }
    location = 1046 #825
    name     = "1st Revolutionary Army"
    division =
    { id            = { type = 31000 id = 2 }
      name          = "1st Infantry Division"
      strength      = 100
      type          = motorized
      model         = 2
    }
    division =
    { id            = { type = 31000 id = 3 }
      name          = "3rd Mechanized Division"
      strength      = 100
      type          = infantry
      model         = 2
  
    }
    division =
    { id            = { type = 31000 id = 4 }
      name          = "1st Armored Division"
      strength      = 100
      type          = armor
      model         = 2
      
    }
    division =
    { id            = { type = 31000 id = 5 }
      name          = "4th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 6 }
      name          = "5th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 31000 id = 7 }
    location = 1045 #829
    name     = "2nd Revolutionary Army"
    division =
    { id            = { type = 31000 id = 8 }
      name          = "8th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 9 }
      name          = "9th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 10 }
      name          = "18th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 2
    }
  }
  landunit =
  { id       = { type = 31000 id = 11 }
    location = 4675 #822
    name     = "5th Revolutionary Army"
    division =
    { id            = { type = 31000 id = 12 }
      name          = "21st Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 13 }
      name          = "6th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 14 }
      name          = "7th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 2
    }
  }
  landunit =
  { id       = { type = 31000 id = 15 }
    location = 1053 #824
    name     = "3rd Revolutionary Army"
    division =
    { id            = { type = 31000 id = 16 }
      name          = "32nd Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 17 }
      name          = "29th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 18 }
      name          = "22nd Infantry Division"
      strength      = 100
      type          = motorized
      model         = 2
    }
  }
  landunit =
  { id       = { type = 31000 id = 19 }
    location = 1046 #825
    name     = "4th Revolutionary Army"
    division =
    { id            = { type = 31000 id = 20 }
      name          = "33rd Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 21 }
      name          = "25th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 31000 id = 22 }
      name          = "27th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 31000 id = 23 }
    location = 1046 #825
    base     = 1046 #825
    name     = "1st Air Force Wing"
    division =
    { id       = { type = 31000 id = 24 }
      name     = "4th Squadron"
      type     = multi_role
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 31000 id = 25 }
      name     = "5th Squadron"
      type     = multi_role
      strength = 50
      model    = 4
    }
    division =
    { id       = { type = 31000 id = 26 }
      name     = "1st Squadron"
      type     = interceptor
      strength = 100
      model    = 2
    }
  }
}