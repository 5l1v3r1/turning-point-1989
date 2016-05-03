#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 815
  manpower               = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 8 
     political_left    = 3
     free_market       = 7 
     freedom           = 6 
     professional_army = 4 
     defense_lobby     = 4 
     interventionism   = 4 
  }
  nationalprovinces      = { 814 815 817 818 551 908 1835 3781 3782 3783 3784 3785 3786 3787
3824 3823 3820 2930 3822 3821 2738 3788 3789 3790 7429 7430 7431 7435 7433 7434
  }
  ownedprovinces         = { 814 815 817 551 3781 3782 3783 3784 3785 3786 3787 7429 7430 7431 7435 }
  controlledprovinces    = { 814 815 817 551 3781 3782 3783 3784 3785 3786 3787 7429 7430 7431 7435 }

  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = -20 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 20 }
    relation = { tag = COL value = 20 }
    relation = { tag = PAR value = 25 }
    relation = { tag = PRU value = -50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
}