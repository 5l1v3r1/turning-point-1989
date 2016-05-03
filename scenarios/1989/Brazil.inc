#####################
# Country main data #
#####################

country =
{ tag                    = BRA
  # Resource Reserves
  ai = "bra_1985.ai"
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 200
  capital                = 4093
  dissent                = 20
  
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5
     political_left    = 2
     free_market       = 8 
     freedom           = 4
     professional_army = 5 
     defense_lobby     = 6 
     interventionism   = 4
  }
  nationalprovinces      = { 848 847 835 834 825 823 822 820 872 824 826 878 
876 877 879 883 887 886 885 884 882 880 881 2027
2656 2659 2661 2662 2663 2664 2665 2666 2667 2668
2669 2670 2671 2672 2737 2739 2740 2741 2742 2992
2961 2282 2469 2320
3950 3951 3952 3953 3954 3955 3956 3957 3958 3959 
3960 3961 3962 3963 3964 3965 3966 3967 3968 3969 
3970 3971 3972 3973 3974 3975 3976 3977 3978 3979 
3980 3981 3982 3983 3984 3985 3986 3987 3988 3989 
3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 
4000 4001 4002 4003 4004 4005 4006 4007 4008 4009 
4010 4011 4012 4013 4014 4015 4016 4017 4018 4019 
4020 4021 4022 4023 4024 4025 4026 4027 4028 4029 
4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 
4040 4041 4042 4043 4044 4045 4046 4047 4048 4049 
4050 4051 4052 4053 4054 4055 4056 4057 4058 4059 
4060 4061 4062 4063 4064 4065 4066 4067 4068 4069 
4070 4071 4072 4073 4074 4075 4076 4077 4078 4079 
4080 4081 4082 4083 4084 4085 4086 4087 4088 4089 
4090 4091 4092 4093 4094 4095 4096 4117
5424 5425 5426 5427 5428 5429 5430 5431 5432 5433 
5434 5435 5436 5437 5438 5439 5440 5441 5442 5443 
5444 5445 5461 5463 5422 6491 7422 7420 7090
  }
  ownedprovinces         = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 2027
 2656 2659 2661 2662 2663 2664 2665 2666 2667 2668
2669 2670 2671 2672 2737 2739 2740 2741 2742 2992
2961 2282 2469 2320
3950 3951 3952 3953 3954 3955 3956 3957 3958 3959 
3960 3961 3962 3963 3964 3965 3966 3967 3968 3969 
3970 3971 3972 3973 3974 3975 3976 3977 3978 3979 
3980 3981 3982 3983 3984 3985 3986 3987 3988 3989 
3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 
4000 4001 4002 4003 4004 4005 4006 4007 4008 4009 
4010 4011 4012 4013 4014 4015 4016 4017 4018 4019 
4020 4021 4022 4023 4024 4025 4026 4027 4028 4029 
4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 
4040 4041 4042 4043 4044 4045 4046 4047 4048 4049 
4050 4051 4052 4053 4054 4055 4056 4057 4058 4059 
4060 4061 4062 4063 4064 4065 4066 4067 4068 4069 
4070 4071 4072 4073 4074 4075 4076 4077 4078 4079 
4080 4081 4082 4083 4084 4085 4086 4087 4088 4089 
4090 4091 4092 4093 4094 4095 4096 4117
5424 5425 5426 5427 5428 5429 5430 5431 5432 5433 5434 5435 5436 5437 5438 5439 5440 5441 5442 5443 5444 5445 5461 5463
6491
7090 7422
 }
  controlledprovinces    = { 848 847 835 834 825 823 822 820 872 824 826 878 876 877 879 883 887 886 885 884 882 880 881 2027
 2656 2659 2661 2662 2663 2664 2665 2666 2667 2668
2669 2670 2671 2672 2737 2739 2740 2741 2742 2992
2961 2282 2469 2320
3950 3951 3952 3953 3954 3955 3956 3957 3958 3959 
3960 3961 3962 3963 3964 3965 3966 3967 3968 3969 
3970 3971 3972 3973 3974 3975 3976 3977 3978 3979 
3980 3981 3982 3983 3984 3985 3986 3987 3988 3989 
3990 3991 3992 3993 3994 3995 3996 3997 3998 3999 
4000 4001 4002 4003 4004 4005 4006 4007 4008 4009 
4010 4011 4012 4013 4014 4015 4016 4017 4018 4019 
4020 4021 4022 4023 4024 4025 4026 4027 4028 4029 
4030 4031 4032 4033 4034 4035 4036 4037 4038 4039 
4040 4041 4042 4043 4044 4045 4046 4047 4048 4049 
4050 4051 4052 4053 4054 4055 4056 4057 4058 4059 
4060 4061 4062 4063 4064 4065 4066 4067 4068 4069 
4070 4071 4072 4073 4074 4075 4076 4077 4078 4079 
4080 4081 4082 4083 4084 4085 4086 4087 4088 4089 
4090 4091 4092 4093 4094 4095 4096 4117
5424 5425 5426 5427 5428 5429 5430 5431 5432 5433 5434 5435 5436 5437 5438 5439 5440 5441 5442 5443 5444 5445 5461 5463
6491
7090 7422
 }
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
   6560 6030 6120 6110 #Defensive
   6910 6650 #Asymmetric Warfare / Jungle
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
  inventions = {  } 
  diplomacy =
  { relation = { tag = ARG value = -10 }
    relation = { tag = BOL value = 10 }
    relation = { tag = CHL value = 10 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 50 }
    relation = { tag = IRE value = 20 }
    relation = { tag = PAR value = 10 }
    relation = { tag = POR value = 75 }
    relation = { tag = PRU value = 10 }
    relation = { tag = SOV value = -50 }
    relation = { tag = URU value = 125 }
    relation = { tag = USA value = 120 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 160001 }
  headofgovernment       = { type = 9 id = 160002 }
  foreignminister        = { type = 9 id = 160003 }
  armamentminister       = { type = 9 id = 160004 }
  ministerofsecurity     = { type = 9 id = 160005 }
  ministerofintelligence = { type = 9 id = 160006 }
  chiefofstaff           = { type = 9 id = 160007 }
  chiefofarmy            = { type = 9 id = 160008 }
  chiefofnavy            = { type = 9 id = 160009 }
  chiefofair             = { type = 9 id = 160010 }
 
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 7100 id = 1 }
    location = 883 #2067
    name     = "Comando de Operações Terrestres"
    division =
    { id       = { type = 7100 id = 2 }
      name     = "C O Ter HQ"
      strength = 100
      type     = hq
      model    = 1
    }
  }
  landunit =
  { id       = { type = 7100 id = 3 }
    location = 872 #2005
    name     = "Comando Militar da Amazônia"
    division =
    { id       = { type = 7100 id = 4 }
      name     = "1a Brigada de Selva"
      strength = 100
      type     = d_03
      model    = 5
    }
    division =
    { id       = { type = 7100 id = 5 }
      name     = "2a Brigada de Selva"
      strength = 100
      type     = d_03
      model    = 5
    }
    division =
    { id       = { type = 7100 id = 6 }
      name     = "16a Brigada de Selva"
      strength = 100
      type     = d_03
      model    = 5
    }
    division =
    { id       = { type = 7100 id = 7 }
      name     = "17a Brigada de Selva"
      strength = 100
      type     = d_03
      model    = 5
    }
    division =
    { id       = { type = 7100 id = 8 }
      name     = "23a Brigada de Selva"
      strength = 100
      type     = d_03
      model    = 5
    }
  }
  landunit =
  { id       = { type = 7100 id = 9 }
    location = 826 #2071
    name     = "7a Divisão de Exército" 
    division =
    { id            = { type = 7100 id = 10 }
      name          = "7a Brigada Motorizada"
      strength      = 100
      type          = d_06
      model         = 4
    }
    division =
    { id            = { type = 7100 id = 11 }
      name          = "10a Brigada Motorizada"
      strength      = 100
      type          = d_06
      model         = 4
    }
  }
  landunit =
  { id       = { type = 7100 id = 12 }
    location = 835 #2060
    name     = "Comando Militar do Oeste"
    division =
    { id            = { type = 7100 id = 13 }
      name          = "4a Brigada de Cavalaria Mecanizada"
      strength      = 100
      type          = cavalry
      model         = 4
    }
    division =
    { id            = { type = 7100 id = 14 }
      name          = "13a Brigada Motorizada"
      strength      = 100
      type          = d_06
      model         = 4
    }
    division =
    { id            = { type = 7100 id = 15 }
      name          = "18a Brigada de Fronteira"
      strength      = 100
      type          = garrison
      model         = 2
    }
  }
  landunit =
  { id       = { type = 7100 id = 16 }
    location = 883 #2067
    name     = "Comando Militar do Planalto"
    division =
    { id            = { type = 7100 id = 17 }
      name          = "3a Brigada Motorizada"
      strength      = 100
      type          = d_06
      model         = 4
    }
    division =
    { id            = { type = 7100 id = 18 }
      name          = "Brigada de Operações Especiais"
      strength      = 100
      type          = d_03
      model         = 5
      extra         =  engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 7100 id = 19 }
    location = 885 #2075
    name     = "1a Divisão de Exército" 
    division =
    { id            = { type = 7100 id = 20 }
      name          = "4a Brigada Motorizada"
      strength      = 100
      type          = d_06
      model         = 4
    }
    division =
    { id            = { type = 7100 id = 21 }
      name          = "Brigada Paraquedista"
      strength      = 100
      type          = d_08
      model         = 4
    }
  }
  landunit =
  { id       = { type = 7100 id = 22 }
    location = 886 #2059
    name     = "2a Divisão de Exército" 
    division =
    { id       = { type = 7100 id = 23 }
      name     = "12a Brigada Leve"
      strength = 100
      type     = d_05
      model    = 4
    }
  }
  landunit =
  { id       = { type = 7100 id = 24 }
    location = 848 #2058
    name     = "3a Divisão de Exército"
    division =
    { id       = { type = 7100 id = 25 }
      name     = "1a Brigada de Cavalaria Mecanizada"
      strength = 100
      type     = cavalry
      model    = 4
    }
    division =
    { id       = { type = 7100 id = 26 }
      name     = "2a Brigada de Cavalaria Mecanizada"
      strength = 100
      type     = cavalry
      model    = 4
    }
    division =
    { id       = { type = 7100 id = 27 }
      name     = "6a Brigada Blindada"
      strength = 100
      type     = light_armor
      model    = 4
    }
  }
  landunit =
  { id       = { type = 7100 id = 28 }
    location = 848 #2058
    name     = "5a Divisão de Exército"
    division =
    { id       = { type = 7100 id = 29 }
      name     = "5a Brigada de Cavalaria Blindada"
      strength = 100
      type     = light_armor
      model    = 4
    }
    division =
    { id            = { type = 7100 id = 30 }
      name          = "14a Brigada Motorizada"
      strength      = 100
      type          = d_06
      model         = 4
    }
    division =
    { id            = { type = 7100 id = 31 }
      name          = "15a Brigada Motorizada"
      strength      = 100
      type          = d_02
      model         = 4
    }
  }
  landunit =
  { id       = { type = 7100 id = 32 }
    location = 848 #2058
    name     = "6a Divisão de Exército"
    division =
    { id       = { type = 7100 id = 33 }
      name     = "3a Brigada de Cavalaria Mecanizada"
      strength = 100
      type     = cavalry
      model    = 4
    }
    division =
    { id        = { type = 7100 id = 34 }
      name      = "8a Brigada Motorizada"
      strength  = 100
      type      = d_06
      model     = 4
    }
  }
  landunit =
  { id       = { type = 7100 id = 35 }
    location = 885 #2075
    name     = "Força de Fuzileiros da Esquadra"
    division =
    { id       = { type = 7100 id = 36 }
      name     = "Divisão Anfíbia" # it's a brigade but for some reason it's called division
      strength = 50
      type     = d_05
      model    = 4
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 7100 id = 200 }
    location = 848 #2058
    base     = 848 #2058
    name     = "Marinha do Brasil"
    division =
    { id            = { type = 7100 id = 201 }
      name          = "São Paulo"
      type          = carrier
      model         = 0
    }
    division =
    { id    = { type = 7100 id = 215 }
      name  = "Niterói"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 216 }
      name  = "Defensora"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 213 }
      name  = "Constituição"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 214 }
      name  = "Liberal"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 217 }
      name  = "Independência"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 218 }
      name  = "União"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 202 }
      name  = "Greenhalgh"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 203 }
      name  = "Dodsworth"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 204 }
      name  = "Bosísio"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 7100 id = 205 }
      name  = "Rademaker"
      type  = destroyer
      model = 1
    }
  }
  navalunit =
  { id       = { type = 7100 id = 219 }
    location = 848 #2058
    base     = 848 #2058
    name     = "Força de Submarinos"
    division =
    { id    = { type = 7100 id = 220 }
      name  = "Tupi"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 7100 id = 221 }
      name  = "Tamoio"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 7100 id = 222 }
      name  = "Timbira"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 7100 id = 223 }
      name  = "Tapajó"
      type  = submarine
      model = 5
    }
  }
  navalunit =
  { id       = { type = 7100 id = 224 }
    location = 6491 #2059
    base     = 6491 #2059
    name     = "Amphibious Fleet"
    division =
    { id    = { type = 7100 id = 225 }
      name  = "1a Esquadra de Transporte"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 7100 id = 226 }
      name  = "2a Esquadra de Transporte"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 7100 id = 227 }
      name  = "3a Esquadra de Transporte"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 7100 id = 228 }
      name  = "4a Esquadra de Transporte"
      type  = transport
      model = 5
    }
  }
  # #####################################
  # AIR FORCE
  # #####################################
  #airunit =
  #{ id       = { type = 7100 id = 100 }
  #  location = 886 #2059
  #  base     = 886 #2059
  #  name     = "II FAe"
  #  division =
  #  { id       = { type = 7100 id = 101 }
  #    name     = "7. Grupo de Aviação"
  #    type     = naval_bomber
  #    strength = 100
  #    model    = 2
  #  }
  #}
  airunit =
  { id       = { type = 7100 id = 102 }
    location = 885 #2075
    base     = 885 #2075
    name     = "III FAe"
    division =
    { id       = { type = 7100 id = 103 }
      name     = "1. Grupo de Aviação de Caça"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 7100 id = 104 }
      name     = "1. Grupo de Defesa Aérea"
      type     = multi_role
      strength = 100
      model    = 5
    }
    division =
    { id       = { type = 7100 id = 105 }
      name     = "3. Grupo de Aviação"
      type     = tactical_bomber
      strength = 100
      model    = 2
    }
  }
   airunit =
  { id       = { type = 7100 id = 106 }
    location = 885 #2075
    base     = 885 #2075
    name     = "V FAe"
    division =
    { id       = { type = 7100 id = 107 }
      name     = "1. Grupo de Transporte"
      type     = transport_plane
      strength = 100
      model    = 2
    }
  }
}
 