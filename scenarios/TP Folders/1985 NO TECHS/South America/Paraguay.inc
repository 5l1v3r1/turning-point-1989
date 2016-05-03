#####################
# Country main data #
#####################

country =
{ tag                    = PAR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 846
  manpower               = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 3
     political_left    = 2 
     freedom           = 3 
     free_market       = 7 
     professional_army = 5 
     defense_lobby     = 8 
     interventionism   = 4
  }
  nationalprovinces      = { 837 846 2991 2554 2931 3809 3810 3811 3812 3813 3814 3815 3816 3817 3818 3819
  3854 3855 3924 
  5451 5450 5444 3981 2282 3982 5452 5453 2375
  }
  ownedprovinces         = { 837 846
2991 3809 3810 3811 3813 3814 3815 3817
5451 3812 3819 3816 3818
  }
  controlledprovinces    = { 837 846
2991 3809 3810 3811 3813 3814 3815 3817
5451 3812 3819 3816 3818
  }
  
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
}