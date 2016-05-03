##########################################
# Country definition for Northern Cyprus #
##########################################

country =
{ tag                    = U22
  puppet                 = TUR
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 200
  oil                    = 200
  supplies               = 200
  money                  = 10
  manpower               = 100
  capital                = 418
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5
     political_left    = 4
     freedom           = 4
     free_market       = 1
     professional_army = 1
     defense_lobby     = 10 
     interventionism   = 1 
  }
  nationalprovinces      = { 418 }
  ownedprovinces         = { 418 }
  controlledprovinces    = { 418 }
  
  diplomacy =
  { relation = { tag = AST value = 150 }
    relation = { tag = BHU value = 150 }
    relation = { tag = CAN value = 150 }
    relation = { tag = ENG value = 150 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRQ value = 125 }
    relation = { tag = ITA value = 50 }
    relation = { tag = NEP value = 150 }
    relation = { tag = NZL value = 150 }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 150 }
    relation = { tag = SAU value = 125 }
    relation = { tag = TUR value = 35 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 925001 }
  headofgovernment       = { type = 9 id = 925002 }
  foreignminister        = { type = 9 id = 925003 }
  armamentminister       = { type = 9 id = 925004 }
  ministerofsecurity     = { type = 9 id = 925005 }
  ministerofintelligence = { type = 9 id = 925006 }
  chiefofstaff           = { type = 9 id = 925007 }
  chiefofarmy            = { type = 9 id = 925008 }
  chiefofnavy            = { type = 9 id = 925009 }
  chiefofair             = { type = 9 id = 925010 }
}