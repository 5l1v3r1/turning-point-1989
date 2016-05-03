#####################
# Country main data #
#####################

country =
{ tag                    = NZL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  transports             = 100
  escorts                = 15
  capital                = 1871
  manpower               = 200
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 } # was access = yes
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = OMN value = 150 }
    relation = { tag = PHI value = 25 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 125 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "AST" NumberOfSpies = 4 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "PHI" NumberOfSpies = 2 }
  
  nationalprovinces      = { 1868 1869 1870 1871 1872 1873
  6057 6058 6059 6060 6061 6062 6063 6064 6065 6066 6067 6068 6069 6070
  7314
  }
  ownedprovinces         = { 1868 1869 1870 1871 1872 1873
							1768 1767 1754
							1751
6057 6058 6059 6060 6061 6062 6063 6064 6065 6066 6067 6068 6069 6070
7314
7223 7224 7225 7226 7227
							}
  controlledprovinces    = { 1868 1869 1870 1871 1872 1873
							1768 1767 1754
							1751
6057 6058 6059 6060 6061 6062 6063 6064 6065 6066 6067 6068 6069 6070
7314
7223 7224 7225 7226 7227
							}

  inventions = {  }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 10 
     political_left    = 10 
     freedom           = 10 
     free_market       = 8 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 6
  }
}
