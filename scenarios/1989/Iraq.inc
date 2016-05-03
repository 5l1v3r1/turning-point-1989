 ############################## 
 # Country definition for IRQ # 
 ############################## 
 
 province = { id = 7977 landfort = 3 } #Rawanduz
 province = { id = 4154 landfort = 3 } #As-Sulaimaniyya
 province = { id = 4153 landfort = 5 } #Kitri
 province = { id = 4161 landfort = 5 } #Ba'qubah
 province = { id = 1824 landfort = 7 } #Al-Asmarah
 province = { id = 1823 landfort = 7 } #Al-Basrah
 province = { id = 7350 air_base = { size = 7 current_size = 7 } }
 province = { id = 1860 air_base = { size = 3 current_size = 3 } }
 province = { id = 1865 air_base = { size = 10 current_size = 10 } }
 
#####################
# Country main data #
#####################

country =
{ tag                    = IRQ
  # Resource Reserves
  ai = "irq_1985.ai"
  energy                 = 20000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 2500
  supplies               = 8000
  manpower               = 200
  money                  = 7000
  capital                = 1865
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 2
     political_left    = 6
     freedom           = 1
     free_market       = 4 
     professional_army = 3 
     defense_lobby     = 8 
     interventionism   = 8
  }
  nationalprovinces      = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 710 2496
							1498 1822
4153 4154 4155 4156 4157 4158 4159 4160 4161 4162 4163 4164 4165 4212 4213 6499	7349 7350 7977	}
  ownedprovinces         = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 710 2496
4153 4154 4155 4156 4157 4158 4159 4160 4161 4162 4163 4164 4165 7349 7350 7977 }
  controlledprovinces    = { 1860 1864 1865 1866 1790 1824 1823 1806 1791 710 2496
4153 4154 4155 4156 4157 4158 4159 4160 4161 4162 4163 4164 4165 7349 7350 7977 }

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030
   #Motorized
   1100 1110 1120
   #Mountain
   1160 1170 1180
   #Special Forces
   1250 1260 1270
   #Naval Infantry
   1560 1570 1580
   #Airborne Infantry
   1670 1680 1690
   #Air Cavalry
   1396 1400
   #Armored Cavalry
   13060 13070
   #Mechanized
   1470 1480 1490
   #Irregular Infantry
   1360 1370 1380
   #Combat Engineers
   1830 1840 1850
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646
   #Infantry Fighting Vehicles	
   2100
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450 21180
   #Armored Personnel Carriers
   2170 2180 2850 2400 
   #Field Artillery
   2290 2300 2310
   #Self-Propelled Anti-Air
   2810 2820 2510
   #Man-Portable Air-Defense Systems
   3000 3170
   #Self-Propelled Artillery
   2220 2230
   #Self-Propelled Rocket Artillery
   2980 2260 2270
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110 3120 3130
   #Cruisers
   3410 3420 3430 3440
   #Destroyers
   3310 3320 3330 3340
   #Light Aircraft Carriers
   12100
   #Submarines
   3010 3020 3030
   #Transport Ships
   3900 3910 3920
   ###################
   #    Aircraft     #
   ###################
   #Attack Helicopter
   4900
   #Reconnaissance Aircraft
   4770
   #Strategic Bomber
   4800
   #Strike Bomber
   15040
   #Naval Patrol
   4610
   #ASW Bomber
   4230
   #Attack Aircraft
   4030 4060 4090
   #Multi-Role
   4500 4570 4530 4540
   #Air Superiority Fighter
   4510 4520
   #Air Transports
   4250 4260
   #AEW&C
   4450 #4180
   #Air-to-Ground Missiles
   4040
   #Air-to-Air Missiles
   4600
   #Air-to-Sea Missiles
   4740
   ###################
   #    Industry     #
   ###################
   #Light Industry
   5810 5820
   #Heavy Industry
   5130 5110
   #Material Science
   53050 63160 63070
   #Construction Eng.
   5800 5080
   #Rocketry

   #Agriculture
   5700 5710 5010
   #Oil
   5190 5220
   #Computing
   5310 54010 54020
   #Nuclear
   5470 5480 5490
   #Research
   5316
   #Cryptography
   5350 5360
   #Medicine
   5600 5610
   5630
   5660 5730
   #Renewable Energy
   5720
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   6560 #Defensive
   ###################
   # Naval Doctrines #
   ###################
   #Surface Ship Role
   81050 81060 81070 81080 81090 81100 81110 81120
   #Naval Interdiction
   8500 8510 8520 8550 8560 8570 8600 8610 8620
   #Naval Supremacy
   8100 8110 8150 8120 8160 8170 8200 8210 8220
   #Logistics Support
   82500 82510 82520 82530
   #Naval Capability
   8010
   #Amphibious Warfare
   82300
   ###################
   #  Air Doctrines  #
   ###################
   9390 9260 9400 9410
   9090 9100 9110 9120 9050 9060 9070
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   9130 9420 9300
   }
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

  # #####################################
  # ARMY
  # #####################################
  landunit = 
   {  id       = {  type = 12600 id = 1  } 
     name     = "1st Army Corps" 
     location = 7977 #Rawanduz
     Division = 
     {  id       = {  type = 12600 id = 2  } 
       name     = "7th Infantry Division" 
       strength = 60
       type     = infantry 
	   model    = 4
      } 
     Division = 
     {  id       = {  type = 12600 id = 3  } 
       name     = "11th Infantry Division" 
       strength = 50
       type     = infantry 
	   model    = 4
      } 
	 Division = 
     {  id       = {  type = 12600 id = 4  } 
       name     = "4th Infantry Division" 
       strength = 70
       type     = infantry 
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12600 id = 20  } 
     name     = "2nd Army Corps" 
     location = 4154 #As-Sulaimaniyya
     Division = 
     {  id       = {  type = 12600 id = 21  } 
       name     = "6th Armored Division" 
       strength = 70
       type     = armor
	   model    = 3
      } 
	 Division = 
     {  id       = {  type = 12600 id = 22  } 
       name     = "2nd Infantry Division" 
       strength = 60
       type     = infantry 
	   model    = 3
      } 
	 Division = 
     {  id       = {  type = 12600 id = 23  } 
       name     = "6th Infantry Division" 
       strength = 50
       type     = infantry 
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12600 id = 30  } 
     name     = "3rd Army Corps" 
     location = 4153 #Kifri
     Division = 
     {  id       = {  type = 12600 id = 31  } 
       name     = "9th Armored Division" 
       strength = 60
       type     = armor 
	   model    = 3
      } 
	 Division = 
     {  id       = {  type = 12600 id = 32  } 
       name     = "2nd Infantry Division" 
       strength = 40
       type     = infantry 
	   model    = 3
      }  
	 Division = 
     {  id       = {  type = 12600 id = 33  } 
       name     = "8th Infantry Division" 
       strength = 40
       type     = infantry 
	   model    = 3
      } 
	}
	landunit = 
   {  id       = {  type = 12600 id = 40  } 
     name     = "4th Army Corps" 
     location = 4161 #Ba'qubah
     Division = 
     {  id       = {  type = 12600 id = 41  } 
       name     = "3rd Armored Division" 
       strength = 35 
       type     = armor
	   model    = 3
      } 
	 Division = 
     {  id       = {  type = 12600 id = 42  } 
       name     = "1st Mechanized Division" 
       strength = 30
       type     = mechanized
	   model    = 3
      } 
	 Division = 
     {  id       = {  type = 12600 id = 43  } 
       name     = "5th Mechanized Division" 
       strength = 40
       type     = mechanized
	   model    = 3
      }
	}
	 landunit = 
   {  id       = {  type = 12600 id = 50  } 
     name     = "5th Army Corps" 
     location = 1824 #Al-'Amarah
	 Division = 
     {  id       = {  type = 12600 id = 51  } 
       name     = "10th Armored Division" 
       strength = 60
       type     = armor 
	   model    = 3
      }
     Division = 
     {  id       = {  type = 12600 id = 52  } 
       name     = "12th Armored Division" 
       strength = 80
       type     = armor 
	   model    = 3
      } 
	 Division = 
     {  id       = {  type = 12600 id = 53  } 
       name     = "10th Independent Armored Brigade" 
       strength = 70
       type     = light_armor
	   model    = 3
      } 
	}
	 landunit = 
   {  id       = {  type = 12600 id = 60  } 
     name     = "6th Army Corps" 
     location = 1823 #Al-Basrah
	 Division = 
     {  id       = {  type = 12600 id = 61  } 
       name     = "31st Independent Special Forces Brigade" 
       strength = 100 
       type     = d_03
	   model    = 4
      } 
	 Division = 
     {  id       = {  type = 12600 id = 62  } 
       name     = "33rd Independent Special Forces Brigade" 
       strength = 100 
       type     = d_03
	   model    = 4
      } 
	}
	 landunit = 
   {  id       = {  type = 12600 id = 70  } 
     name     = "7th Army Corps" 
     location = 1823 #Al-Basrah
	 Division = 
     {  id       = {  type = 12600 id = 71  } 
       name     = "12th Independent Armored Brigade" 
       strength = 70 
       type     = light_armor
	   model    = 3
      } 
	 Division = 
     {  id       = {  type = 12600 id = 72  } 
       name     = "113th Infantry Brigade" 
       strength = 80 
       type     = d_01
	   model    = 3
      } 
	}
  ########################################
  # IRAQI AIR FORCE
  ########################################
  airunit = 
  { location = 1865 
    base     = 1865 
    id       = {  type = 12600 id = 100  } 
    name     = "IQAF" 
    Division = 
    {	id       = {  type = 12600 id = 101  } 
		name     = "MiG-21s" 
		type     = interceptor 
		model    = 2
		strength = 100
	}
	Division = 
    {	id       = {  type = 12600 id = 102  } 
		name     = "MiG-21s" 
		type     = interceptor 
		model    = 2
		strength = 100
	}	
	Division = 
    {	id       = {  type = 12600 id = 103  } 
		name     = "MiG-25s" 
		type     = interceptor 
		model    = 3
		strength = 20
	}	
	Division = 
    {	id       = {  type = 12600 id = 104  } 
		name     = "MiG-23s" 
		type     = interceptor 
		model    = 3
		strength = 100
	}
	Division = 
    {	id       = {  type = 12600 id = 105  } 
		name     = "MiG-23s" 
		type     = interceptor 
		model    = 3
		strength = 10
	}
	Division = 
    {	id       = {  type = 12600 id = 106  } 
		name     = "Su-24s" 
		type     = multi_role
		model    = 5
		strength = 80
	}
	Division = 
    {	id       = {  type = 12600 id = 107  } 
		name     = "Su-22s" 
		type     = multi_role
		model    = 5
		strength = 80
	}
	Division = 
    {	id       = {  type = 12600 id = 108  } 
		name     = "MiG-29s" 
		type     = multi_role
		model    = 6
		strength = 40
	}
	Division = 
    {	id       = {  type = 12600 id = 109  } 
		name     = "Tu-16s" 
		type     = strategic_bomber
		model    = 0
		strength = 10
	}
	Division = 
    {	id       = {  type = 12600 id = 110  } 
		name     = "Su-25s" 
		type     = cas
		model    = 4
		strength = 60
	}
	Division = 
    {	id       = {  type = 12600 id = 111  } 
		name     = "Il-76s" 
		type     = transport_plane
		model    = 3
		strength = 60
	}
  }
}
 