 ############################## 
 # Country definition for IRQ # 
 ############################## 
 
 province = { id = 7977 landfort = 3 } #Rawanduz
 province = { id = 4154 landfort = 3 } #As-Sulaimaniyya
 province = { id = 4153 landfort = 5 } #Kitri
 province = { id = 4161 landfort = 5 } #Ba'qubah
 province = { id = 1824 landfort = 7 } #Al-Asmarah
 province = { id = 1823 landfort = 7 } #Al-Basrah
 
#####################
# Country main data #
#####################

country =
{ tag                    = IRQ
  # Resource Reserves
  ai = "irq_1985.ai"
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 1000
  supplies               = 500
  manpower               = 200
  money                  = 10
  capital                = 1865
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 4
     political_left    = 3
     freedom           = 1
     free_market       = 4 
     professional_army = 5 
     defense_lobby     = 9 
     interventionism   = 10
  }
  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 710 2496
							1498 1822
4153 4154 4155 4156 4157 4158 4159 4160 4161 4162 4163 4164 4165 4212 4213 6499	7349 7350 7977	}
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 710 2496
4153 4154 4155 4156 4157 4158 4159 4160 4161 4162 4163 4164 4165 7349 7350 7977 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 710 2496
4153 4154 4155 4156 4157 4158 4159 4160 4161 4162 4163 4164 4165 7349 7350 7977 }

  diplomacy =
  { relation = { tag = AST value = 100 }
    relation = { tag = BHU value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = 25 }
    relation = { tag = ITA value = 25 }
    relation = { tag = NEP value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = OMN value = 125 }
    relation = { tag = PER value = 125 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SAU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = YEM value = 125 }
  }
  
  SpyInfo                = {  country = "IRQ" NumberOfSpies = 8  }
  SpyInfo                = {  country = "PER" NumberOfSpies = 12  }
  
  headofstate            = { type = 9 id = 91001 }
  headofgovernment       = { type = 9 id = 91002 }
  foreignminister        = { type = 9 id = 91003 }
  armamentminister       = { type = 9 id = 91004 }
  ministerofsecurity     = { type = 9 id = 91005 }
  ministerofintelligence = { type = 9 id = 91006 }
  chiefofstaff           = { type = 9 id = 91007 }
  chiefofarmy            = { type = 9 id = 91008 }
  chiefofnavy            = { type = 9 id = 91009 }
  chiefofair             = { type = 9 id = 91010 }
}
 