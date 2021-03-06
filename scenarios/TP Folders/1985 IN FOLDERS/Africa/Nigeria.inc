##############################
# Country definition for NIG #
##############################

country =
{ tag                 = NIG
  energy              = 100
  metal               = 100
  rare_materials      = 500
  oil                 = 50
  supplies            = 500
  money               = 100
  capital             = 1010
  manpower            = 100
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 4
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  diplomacy = { 
	relation = { tag = USA value = 25 }
	}
  headofstate            = {  type = 9 id = 715001  } 
  headofgovernment       = {  type = 9 id = 715002  } 
  foreignminister        = {  type = 9 id = 715003  } 
  armamentminister       = {  type = 9 id = 715004  } 
  ministerofsecurity     = {  type = 9 id = 715005  } 
  ministerofintelligence = {  type = 9 id = 715006  } 
  chiefofstaff           = {  type = 9 id = 715007  } 
  chiefofarmy            = {  type = 9 id = 715008  } 
  chiefofnavy            = {  type = 9 id = 715009  } 
  chiefofair             = {  type = 9 id = 715010  } 
  
  ownedprovinces      = {
		1010 1011 1008 1012 1085 1007 999 1009 1145 2765 2767 2766 2769 2768 2743 2744 2770 2771
4764 4765 4766 4767 4768 4769 4770 4771 4772 4773 4774 4775 4776 4777 4778 4779 4780 4781 4782 4783 4784 4785 4786 4787 4788 4789 4790 4791 4792 4793 4794 4795 4796 4797 4798 4799 4800 4801
7923 7348 7328 7338 
	}
  controlledprovinces = {
		1010 1011 1008 1012 1085 1007 999 1009 1145 2765 2767 2766 2769 2768 2743 2744 2770 2771
4764 4765 4766 4767 4768 4769 4770 4771 4772 4773 4774 4775 4776 4777 4778 4779 4780 4781 4782 4783 4784 4785 4786 4787 4788 4789 4790 4791 4792 4793 4794 4795 4796 4797 4798 4799 4800 4801
7923 7348 7328 7338 
	}
  nationalprovinces   = {
		1010 1011 1008 1012 1085 1007 999 1009 1145 2765 2767 2766 2769 2768 2743 2744 2770 2771
4764 4765 4766 4767 4768 4769 4770 4771 4772 4773 4774 4775 4776 4777 4778 4779 4780 4781 4782 4783 4784 4785 4786 4787 4788 4789 4790 4791 4792 4793 4794 4795 4796 4797 4798 4799 4800 4801
7923 7348 7328 7338 1126 4802
	}
  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020
   #Motorized
   1100 1110
   #Mountain
   1160 1170
   #Special Forces
   1250 1260
   #Naval Infantry
   1560 1570
   #Airborne Infantry
   1670 1680
   #Air Cavalry
   1396 #1400
   #Armored Cavalry
   13060
   #Mechanized
   1470 1480
   #Irregular Infantry
   1360 1370
   #Combat Engineers
   1830 1840
   #Supply and Repair
   1990 199100
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630
   #Infantry Fighting Vehicles	
   2100
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450
   #Armored Personnel Carriers
   2170 2180 2850
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
   3900 3910
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
   15040 15050 4360
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
   4450
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
   5810
   #Heavy Industry
   5130
   #Material Science
   53050 63160
   #Construction Eng.
   5800
   #Rocketry
   5560 5910
   #5426 5440 5430
   #Agriculture
   5700 5710
   #Oil
   5190 5220
   #Computing
   5310 54010 54020
   #Nuclear
   5470 5480
   #Cryptography
   5350 5360
   #Medicine
   5600 5610
   #5630
   5660 5730
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1650
   #6900 6730 6750 6820 6740 6810 6760 6210 6220 6230 6240 6250 6260 6270 6280 6290 14100 #NATO
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
   82500 82510
   #Naval Capability
   8010
   #Amphibious Warfare
   82300 82310 
   ###################
   #  Air Doctrines  #
   ###################
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 16900 id = 1 }
    location = 1008 #929
    name     = "Nigerian Army"
    division =
    { id       = { type = 16900 id = 2 }
      name     = "1st Infantry Division"
      strength = 100
      type     = infantry
      model    = 2
    } 
    division =
    { id       = { type = 16900 id = 3 }
      name     = "2nd Infantry Division"
      strength = 100
      type     = infantry
      model    = 2
    }
    division =
    { id       = { type = 16900 id = 4 }
      name     = "3rd Armored Division"
      strength = 100
      type     = armor
      model    = 2
    } 
    division =
    { id       = { type = 16900 id = 5 }
      name     = "81st Marine Division"
      strength = 100
      type     = marine
      model    = 1
    }
    division =
    { id       = { type = 16900 id = 6 }
      name     = "82nd Airborne Division"
      strength = 100
      type     = paratrooper
      model    = 1
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 16900 id = 300 }
    location = 1011 #939
    base     = 1011 #939
    name     = "Nigerian Navy"
    division =
    { id       = { type = 16900 id = 301 }
      name     = "NNS Ekum"
      type     = light_cruiser
      strength = 100
      model    = 1
    }
    division =
    { id    = { type = 16900 id = 302 }
      name  = "1st Transport Flotilla"
      type  = transport
      model = 3
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 16900 id = 200 }
    location = 1008 #929
    base     = 1008 #929
    name     = "1st Air Force"
    division =
    { id       = { type = 16900 id = 201 }
      name     = "1st Squadron"
      type     = interceptor
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 16900 id = 202 }
      name     = "2nd Squadron"
      type     = interceptor
      strength = 100
      model    = 2
    }
  }
}