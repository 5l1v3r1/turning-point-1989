#####################
# Country main data #
#####################

country =
{ tag                    = CHC
  intrinsic_gov_type     = stalinist
  capital                = 1205 # Beijing
  ai = "chc_1985.ai"
  # Resource Reserves
  energy                 = 20000
  metal                  = 10000
  rare_materials         = 5000
  oil                    = 5000
  supplies               = 5000
  money                  = 40000
  manpower               = 200
  transports             = 1000
  escorts                = 50
  
  diplomacy =
  { relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -100 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = SOV value = 100 }
    relation = { tag = MON value = 25 }
    relation = { tag = SIK value = 40 }
  }
  
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
                             1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
                             1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
                             1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
                             1252 1254 1243 1244 1245 1246 1247 1293 1294 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
                             1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
                             1321 1322 1323 1324 1385 1404 1419 1420 1434 1438
							 1903 2559 1984 1993 2560
							 2551 2000 2311 1913 2561
							 2550 2505 1996 2502 1997
							 1995 1910 1922 1921 1914
							 2507 2516 2515 2513 2508
							 1966 2556 2558 1965 1964
							 1939 2571 1936 1937 2572
							 2570 2568 2573 2574 2567
							 2569 1941 1938
							 1728 1406 1878 1877
							 1905 1918 1978 1928 1983
							 695 674 559 557 720 
							 568 570 1880 1912 746
							 1923 696 1316 1315 2503 2504
							 2517 2518 2520 2525 2527
							 2526 2576 2523 2528 2534
							 2522 2533 2531 1215 2530 2529 1214
							 2318 2317 2347 2348 2349 
							 2346 2345 2340 2341 2344
							 2338 2333 2487 2241 2511 2337 2246
							 2486 2281 2485 3133 2941 2942 3090 3110
							 3750 3751 3752 3753 3754 3775
							 3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749
3755 3756 3757 3758 3759 3760 3774
3762 3763 3764 3765 3766 3767 3768 3769 3770 3771 3772 3773
3761 1418 3594 3595 5184 5205 
5472 5473 5474 5475 5476 5477 5478 5479 5480 5481 
5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 
5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 
5502 5503 5504 5505 5506 5507 5508 5509 5510 5511 
5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 
5522 5523 5524 5525 5526 5527 5528 5529 5530 5531 
5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 
5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 
5552 5553 5554 5555 5556 5557 5558 5559 5560 5561 
5562 5563 5564 5565 5566 5567 5568 5569 5570 5571 
5572 5573 5574 5575 5576 5577 5578 5579 5580 5581 
5582 5583 5584 5585 5586 5587 5588 5589 5590 5591 
5592 5593 5594 5595 5596 5597 5598 5599 5600 5601 
5602 5603 5604 5605 5606 5607 5608 5609 5610 5611 
5612 5613 5614 5615 5616 5617 5618 5619 5620 5621 
5622 5623 5624 5625 5626 5627 5628 5629 5630 5631 
5632 5633 5634 5635 5636 5637 5638 5639 5640 5641 
5642 5643 5644 5645 5646 5647 5648 5649 5650 5651 
5652 5656 5657 5658 5659 5660 5661 
5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 
5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 
5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 
5692 5693 6497 6498 6916
7911 7918 7917 6920 5185
                           }
  ownedprovinces         = { 
1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
1252 1254 1243 1244 1245 1246 1247 1293 1294 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
1444 1421 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
1321
1903 2559 1984 1993 2560
2551 2000 2311 1913 2561
2550 2505 1996 2502 1997
1995 1910 1922 1921 1914
2507 2516 2515 2513 2508
1966 2556 2558 1965 1964
1939 2571 1936 1937 2572
2570 2568 2573 2574 2567
2569 1941 1938
1406 
1905 1918 1978 1928 1983
695 674 559 557 720 
568 570 1880 1912 746
696 2503 2504
2517 2518 2520 2525 2527
2526 2576 2523 2528 2534
2522 2533 2531 1215 2530 2529 1214
2318 2317 2347 2348 2349 
2346 2345 2340 2341 2344
2338 2487 2241 2511 2337 2246
2486 2281 2485 2941 2942 3090 3110
3750 3751 3752 3753 3754 3775
3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749
3755 3756 3757 3758 3759 3760 3774  
5481 
5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 
5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 
5502 5503 5504 5505 5506 5507 5508 5509 5510 5511 
5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 
5522 5523 5524 5525 5526 5527 5528 5529 5530 5531 
5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 
5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 
5552 5553 5554 5555 5556 5557 5558 5559 5560 5561 
5562 5563 5564 5565 5566 5567 5568 5569 5570 5571 
5572 5573 5574 5575 5576 5577 5578 5579 5580 5581 
5582 5583 5584 5585 5586 5587 5588 5589 5590 5591 
5592 5593 5594 5595 5596 5597 5598 5599 5600 5601 
5602 5603 5604 5605 5606 5607 5608 5609 5610 5611 
5612 5613 5614 5615 5616 5617 5618 5619 5620 5621 
5622 5623 5624 5625 5626 5627 5628 5629 5630 5631 
5632 5633 5634 5635 5636 5637 5638 5639 5640 5641 
5642 5643 5644 5645 5646 5647 5648 5650
5656 5657 5658 5659 5660 5661 
5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 
5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 
5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 
5692 6497 6498 
6916 7911
#India
6920 1728 1430
#Islands
5872 5836
	   }
  controlledprovinces    = { 
1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
1252 1254 1243 1244 1245 1246 1247 1293 1294 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
1444 1421 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
1321
1903 2559 1984 1993 2560
2551 2000 2311 1913 2561
2550 2505 1996 2502 1997
1995 1910 1922 1921 1914
2507 2516 2515 2513 2508
1966 2556 2558 1965 1964
1939 2571 1936 1937 2572
2570 2568 2573 2574 2567
2569 1941 1938
1406 
1905 1918 1978 1928 1983
695 674 559 557 720 
568 570 1880 1912 746
696 2503 2504
2517 2518 2520 2525 2527
2526 2576 2523 2528 2534
2522 2533 2531 1215 2530 2529 1214
2318 2317 2347 2348 2349 
2346 2345 2340 2341 2344
2338 2487 2241 2511 2337 2246
2486 2281 2485 2941 2942 3090 3110
3750 3751 3752 3753 3754 3775
3737 3738 3739 3740 3741 3742 3743 3744 3745 3746 3747 3748 3749
3755 3756 3757 3758 3759 3760 3774  
5481 
5482 5483 5484 5485 5486 5487 5488 5489 5490 5491 
5492 5493 5494 5495 5496 5497 5498 5499 5500 5501 
5502 5503 5504 5505 5506 5507 5508 5509 5510 5511 
5512 5513 5514 5515 5516 5517 5518 5519 5520 5521 
5522 5523 5524 5525 5526 5527 5528 5529 5530 5531 
5532 5533 5534 5535 5536 5537 5538 5539 5540 5541 
5542 5543 5544 5545 5546 5547 5548 5549 5550 5551 
5552 5553 5554 5555 5556 5557 5558 5559 5560 5561 
5562 5563 5564 5565 5566 5567 5568 5569 5570 5571 
5572 5573 5574 5575 5576 5577 5578 5579 5580 5581 
5582 5583 5584 5585 5586 5587 5588 5589 5590 5591 
5592 5593 5594 5595 5596 5597 5598 5599 5600 5601 
5602 5603 5604 5605 5606 5607 5608 5609 5610 5611 
5612 5613 5614 5615 5616 5617 5618 5619 5620 5621 
5622 5623 5624 5625 5626 5627 5628 5629 5630 5631 
5632 5633 5634 5635 5636 5637 5638 5639 5640 5641 
5642 5643 5644 5645 5646 5647 5648 5650
5656 5657 5658 5659 5660 5661 
5662 5663 5664 5665 5666 5667 5668 5669 5670 5671 
5672 5673 5674 5675 5676 5677 5678 5679 5680 5681 
5682 5683 5684 5685 5686 5687 5688 5689 5690 5691 
5692 6497 6498 
6916 7911
#India
6920 1728 1430
#Islands
5872 5836
	   }
  claimedprovinces 		 = { 5891 5892 5873 5893 5655 }

  techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030 1040 1050
   #Motorized
   1100 1110 1120 1130 1140
   #Mountain
   1160 1170 1180 1190 1200
   #Special Forces
   1250 1260 1270 1280 1290
   #Naval Infantry
   1560 1570 1580 1590 1600
   #Airborne Infantry
   1670 1680 1690 1700 1710
   #Air Cavalry
   1396 1400 1410 1420
   #Armored Cavalry
   13060 13070 13080 1310
   #Mechanized
   1470 1480 1490 1500 1510
   #Irregular Infantry
   1360 1370 1380 1390 1530
   #Combat Engineers
   1830 1840 1850 1860 1870
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646 2650 2030
   #Infantry Fighting Vehicles
   2100 2110 2120
   #Armored Cars
   2860 2870 2950 
   #Anti-Air
   2800 2450 21180 21190
   #Armored Personnel Carriers
   2170 2180 2850 2400 
   #Field Artillery
   2290 2300 2310 2900 
   #Self-Propelled Anti-Air
   2810 2820 2510 2520
   #Man-Portable Air-Defense Systems
   3000 3170 3180
   #Self-Propelled Artillery
   2220 2230 2240 2250 
   #Self-Propelled Rocket Artillery
   2980 2260 2270 2280 
   ###################
   #     Naval       #
   ###################
   #Frigates
   3110 3120 3130 3140 3150
   #Cruisers
   3410 3420 3430 3440 3450 3456 3460
   #Nuclear Cruisers
   3470 3480 12040 3770 3780
   #Destroyers
   3310 3320 3330 3340 3350 12030 3710
   #Light Aircraft Carriers
   12100 12110
   #Helicopter Carrier
   3210 3220 3230
   #Aircraft Carriers
   3510 3520 3530 
   #Supercarriers
   3540 3560 12060 3570
   #Submarines
   3010 3020 3030 3060 3070 3090
   #Nuclear Submarines
   12000 3080 3610 3680 3690
   #Nuclear Ballistic Submarines
   3620 3630 3640 3650
   #Transport Ships
   3900 3910 3920 3930 3940 3950
   ###################
   #    Aircraft     #
   ###################
   #Attack Helicopter
   4900 4910 4920 4930
   #Reconnaissance Aircraft
   4770 4780
   #Strategic Bomber
   4800 4810
   #Strike Bomber
   15040 15050 4360
   #Naval Patrol
   4610 4620
   #ASW Bomber
   4230 4240
   #Attack Aircraft
   4030 4060 4090 15000 15010 15020
   #Multi-Role
   4500 4570 4530 4540 4550 4010 4020
   #Air Superiority Fighter
   4510 4520 4300 4310 4320
   #Carrier Air Groups
   #ACAG
   2320 2330 2340 2350
   #MRCAG
   2140 2150 2160 2190 2200
   #FCAG
   2020 2070 2080 2090 2130
   #Air Transports
   4250 4260 4270 4290
   #AEW&C
   4450 4180
   #VTOL Aircraft
   4350
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
   5810 5820 5050
   #Heavy Industry
   5130 5110 5120
   #Material Science
   53050 63160 63070 #63080
   #Construction Eng.
   5800 5080 5090
   #Rocketry

   #Agriculture
   5700 5710 5010
   #Oil
   5190 5220
   #Computing
   5310 54010 54020 54030 5320 53116 5330 53060 #5340 5920
   #Nuclear
   5470 5480 5490 5500 5510 5520 5530 5540
   #Research
   5316
   #Cryptography
   5350 5360 5370 5380
   #Medicine
   5600 5610 5680
   5630
   5660 5730
   #Renewable Energy
   5720
   ###################
   #  Land Doctrines #
   ###################
   6500 
   6510 6530 
   1660
   6580 6730 6750 6310 6800 6300 6760 6320 6330 6340 6350
   ###################
   #  Secret Weapons #
   ###################
   #
   
   #
   
   #
   ###################
   # Naval Doctrines #
   ###################
   #Carrier Supremacy
   8900 8910 8920 8930 8940 8950 8960
   #Surface Ship Role
   81050 81060 81070 81080 81090 81100 81110 81120
   #Naval Interdiction
   8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8700 8710 8720 8730 8740 8750
   #Naval Supremacy
   8100 8110 8150 8120 8160 8170 8200 8210 8220 8230 8240 8250 8260 8300 8310 8320 8330 8340 8350
   #Logistics Support
   82500 82510 82520 82530
   #Naval Capability
   8010 8020 8030
   #Amphibious Warfare
   82300 82310 82320 82330
   ###################
   #  Air Doctrines  #
   ###################
   9390 9260 9400 9410
   9090 9100 9110 9120 9050 9060 9070
   9190 9200 9210 9220 9310 9320 9330 9340 9230 9240 9250
   9130 9420 9300
   27320 27330 27350 27360 27380 27390
   27000 27140 27150 27160 27170 27180 27190 27200
   9270 27070 27080 27090 27100 27110 27120 27130
   }
  inventions = {  }
  blueprints             = { 1020 }
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 1 
     political_left    = 10 
     free_market       = 1 
     freedom           = 2 
     professional_army = 2 
     defense_lobby     = 10 
     interventionism   = 6
  }
  headofstate            = { type = 9 id = 51001 }
  headofgovernment       = { type = 9 id = 51002 }
  foreignminister        = { type = 9 id = 51003 }
  armamentminister       = { type = 9 id = 51004 }
  ministerofsecurity     = { type = 9 id = 51005 }
  ministerofintelligence = { type = 9 id = 51006 }
  chiefofstaff           = { type = 9 id = 51007 }
  chiefofarmy            = { type = 9 id = 51008 }
  chiefofnavy            = { type = 9 id = 51009 }
  chiefofair             = { type = 9 id = 51010 }
# #####################################
# ARMY
# #####################################
landunit = { id = { type = 8300 id = 1 }
    location = 2340 #1214
    name     = "Shenyang Military Region"
    division = 
	{ id = { type = 8300 id = 2 }
	  name = "Shenyang MR" 
	  strength = 100 
	  type = hq 
	  model = 1 
	}
}
landunit =
  { id       = { type = 8300 id = 3 }
    location = 2340 #1214
    name     = "Shenyang People's Armed Police"
    division =
    { id       = { type = 8300 id = 4 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 5 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
landunit =
  { id       = { type = 8300 id = 6 }
    location = 2241 #1208
    name     = "16th Group Army"
    division =
    { id       = { type = 8300 id = 7 }
      name     = "4th Armored Division"
      strength = 100
      type     = armor
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 8 }
      name     = "46th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 9 }
      name     = "69th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 10 }
      name     = "48th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 11 }
      name     = "69th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
  }
landunit =
  { id       = { type = 8300 id = 12 }
    location = 2349 #1217
    name     = "39th Group Army"
    division =
    { id       = { type = 8300 id = 13 }
      name     = "3rd Armored Division"
      strength = 100
      type     = armor
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 14 }
      name     = "115th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 15 }
      name     = "116th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
    
    }
    division =
    { id       = { type = 8300 id = 16 }
      name     = "190th Mechanized Brigade"
      strength = 100
      type     = cavalry
      model    = 4
    }
    division =
    { experience    = 10
      id            = { type = 8300 id = 17 }
      name          = "'Tigers of Northeast' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 18 }
    location = 2347 #1216
    name     = "40th Group Army"
    division =
    { id       = { type = 8300 id = 19 }
      name     = "118th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 20 }
      name     = "119th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 21 }
      name     = "191st Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 22 }
      name     = "5th Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 23 }
    location = 1205 #1247
    name     = "Beijing Military Region"
    division =
    { id            = { type = 8300 id = 24 }
      name          = "Beijing MR"
      strength      = 100
      type          = hq
      model         = 1
     }
  }
  landunit =
  { id       = { type = 8300 id = 25 }
    location = 1205 #1247
    name     = "Beijing People's Armed Police"
    division =
    { id       = { type = 8300 id = 26 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 27 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 28 }
    location = 2523 #1242
    name     = "27th Group Army"
    division =
    { id       = { type = 8300 id = 29 }
      name     = "80th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 30 }
      name     = "82nd Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 31 }
      name     = "188th Mechanized Brigade"
      strength = 100
      type     = cavalry
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 32 }
      name     = "235th Mechanized Brigade"
      strength = 100
      type     = cavalry
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 33 }
      name     = "U/I Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 34 }
    location = 5688 #1243
    name     = "38th Group Army"
    division =
    { id       = { type = 8300 id = 35 }
      name     = "6th Armored Division"
      strength = 100
      type     = armor
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 36 }
      name     = "112th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 37 }
      name     = "113th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
    }
    division =
    { experience    = 10
      id            = { type = 8300 id = 38 }
      name          = "'Divine Sword' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 39 }
    location = 5676 #1246
    name     = "65th Group Army"
    division =
    { id       = { type = 8300 id = 40 }
      name     = "193rd Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
    
    }
    division =
    { id       = { type = 8300 id = 41 }
      name     = "U/I Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
    division =
    { id       = { type = 8300 id = 42 }
      name     = "U/I Motorized Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 43 }
      name     = "207th Motorized Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 44 }
    location = 1205 #1247
    name     = "Beijing Garrison District"
    division =
    { id       = { type = 8300 id = 45 }
      name     = "1st Guard Division"
      strength = 100
      type     = garrison
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 46 }
      name     = "3rd Guard Division"
      strength = 100
      type     = garrison
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 47 }
    location = 5556 #1261
    name     = "Lanzhou Military Region"
    division =
    { id            = { type = 8300 id = 48 }
      name          = "Lanzhou MR"
      strength      = 100
      type          = hq
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8300 id = 52 }
    location = 2507 #1256
    name     = "21st Group Army"
    division =
    { id       = { type = 8300 id = 53 }
      name     = "12th Armored Division"
      strength = 100
      type     = armor
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 54 }
      name     = "61st Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
     
    }
    division =
    { experience    = 10
      id            = { type = 8300 id = 55 }
      name          = "'Tigers of the Night' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 56 }
    location = 1267 #1258
    name     = "47th Group Army"
    division =
    { id       = { type = 8300 id = 57 }
      name     = "139th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 58 }
      name     = "U/I Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
    division =
    { id       = { type = 8300 id = 59 }
      name     = "55th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 60 }
      name     = "56th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 61 }
    location = 5495 #1281
    name     = "Xinjiang Military District"
    division =
    { id       = { type = 8300 id = 62 }
      name     = "4th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 63 }
      name     = "6th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 64 }
      name     = "8th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 65 }
      name     = "11th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 66 }
    location = 5495 #1281
    name     = "Lanzhou People's Armed Police"
    division =
    { id       = { type = 8300 id = 67 }
      name     = "7th Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 68 }
      name     = "63rd Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 69 }
    location = 5590 #1330
    name     = "Jinan Military Region"
    division =
    { id            = { type = 8300 id = 70 }
      name          = "Jinan MR"
      strength      = 100
      type          = hq
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8300 id = 71 }
    location = 5590 #1330
    name     = "Jinan People's Armed Police"
    division =
    { id       = { type = 8300 id = 72 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 73 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 74 }
    location = 2515 #1319
    name     = "20th Group Army"
    division =
    { id       = { type = 8300 id = 75 }
      name     = "11 Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
    division =
    { id       = { type = 8300 id = 76 }
      name     = "58th Mechanized Brigade"
      strength = 100
      type     = cavalry
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 77 }
      name     = "60th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 78 }
    location = 2530 #1329
    name     = "26th Group Army"
    division =
    { id       = { type = 8300 id = 79 }
      name     = "8th Armored Division"
      strength = 100
      type     = armor
      model    = 4
     
    }
    division =
    { id       = { type = 8300 id = 80 }
      name     = "77th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 81 }
      name     = "138th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 82 }
      name     = "199th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { experience    = 10
      id            = { type = 8300 id = 83 }
      name          = "'Eagle' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 84 }
    location = 2516 #1321
    name     = "54th Group Army"
    division =
    { id       = { type = 8300 id = 85 }
      name     = "11th Armored Division"
      strength = 100
      type     = armor
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 86 }
      name     = "127th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
    
    }
    division =
    { id       = { type = 8300 id = 87 }
      name     = "162nd Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 88 }
    location = 1235 #1337
    name     = "Nanjing Military Region"
    division =
    { id            = { type = 8300 id = 89 }
      name          = "Nanjing MR"
      strength      = 100
      type          = hq
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8300 id = 90 }
    location = 1235 #1337
    name     = "Nanjing People's Armed Police"
    division =
    { id       = { type = 8300 id = 91 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 92 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 93 }
    location = 1238 #1345
    name     = "1st Group Army"
    division =
    { id       = { type = 8300 id = 94 }
      name     = "10th Armored Division"
      strength = 100
      type     = armor
      model    = 4
      
    }
    division =
    { id        = { type = 8300 id = 95 }
      name      = "1st Mechanized Division"  
      strength  = 100
      type      = infantry
      model     = 4
   
    }
    division =
    { id       = { type = 8300 id = 96 }
      name     = "3rd Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { experience    = 10
      id            = { type = 8300 id = 97 }
      name          = "'Flying Dragons' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
    
    }
  }
  landunit =
  { id       = { type = 8300 id = 98 }
    location = 5642 #1339
    name     = "12th Group Army"
    division =
    { id       = { type = 8300 id = 99 }
      name     = "2nd Armored Division"
      strength = 100
      type     = armor
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 100 }
      name     = "34th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 101 }
      name     = "36th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
     division =
    { id       = { type = 8300 id = 102 }
      name     = "179th Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 103 }
    location = 1247 #1360
    name     = "31st Group Army"
    division =
    { id       = { type = 8300 id = 104 }
      name     = "86th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
    
    }
    division =
    { id       = { type = 8300 id = 105 }
      name     = "91st Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
     
    }
    division =
    { id       = { type = 8300 id = 106 }
      name     = "92nd Infantry Brigade"
      strength = 100
      type     = d_06
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 107 }
      name     = "U/I Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 108 }
    location = 1313 #1369
    name     = "Guangzhou Military Region"
    division =
    { id            = { type = 8300 id = 109 }
      name          = "Guangzhou MR"
      strength      = 100
      type          = hq
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8300 id = 110 }
    location = 1313 #1369
    name     = "Guangzhou People's Armed Police"
    division =
    { id       = { type = 8300 id = 111 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 112 }
      name     = "U/I Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 113 }
    location = 1258 #1380
    name     = "41st Group Army"
    division =
    { id       = { type = 8300 id = 114 }
      name     = "121st Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
    
    }
    division =
    { id       = { type = 8300 id = 115 }
      name     = "123rd Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
     
    }
    division =
    { id       = { type = 8300 id = 116 }
      name     = "U/I Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 117 }
    location = 1229 #1325
    name     = "42nd Group Army"
    division =
    { id       = { type = 8300 id = 118 }
      name     = "124th Mechanized Division"
      strength = 100
      type     = infantry
      model    = 4
    
    }
    division =
    { id       = { type = 8300 id = 119 }
      name     = "163rd Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
   
    }
    division =
    { id       = { type = 8300 id = 120 }
      name     = "9th Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
    division =
    { experience    = 10
      id            = { type = 8300 id = 121 }
      name          = "'Sharp Sword' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 122 }
    location = 1255 #1309
    name     = "15th Airborne Corps"
    division =
    { id       = { type = 8300 id = 123 }
      name     = "43rd Airborne Division"
      strength = 100
      type     = paratrooper
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 124 }
      name     = "44th Airborne Division"
      strength = 100
      type     = paratrooper
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 125 }
      name     = "45th Airborne Division"
      strength = 100
     type     = paratrooper
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 126 }
    location = 1360 #1297
    name     = "Chengdu Military Region"
    division =
    { id            = { type = 8300 id = 127 }
      name          = "Chengdu MR"
      strength      = 100
      type          = hq
      model         = 1
    }
  }
  landunit =
  { id       = { type = 8300 id = 128 }
    location = 1360 #1297
    name     = "Chengdu People's Armed Police"
    division =
    { id       = { type = 8300 id = 129 }
      name     = "38th Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 130 }
      name     = "41st Police Division"
      strength = 100
      type     = motorized
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 131 }
    location = 1360 #1297
    name     = "13th Group Army"
    division =
    { id       = { type = 8300 id = 132 }
      name     = "37th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 133 }
      name     = "149th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 134 }
      name     = "U/I Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
    division =
    { experience    = 10
      id            = { type = 8300 id = 135 }
      name          = "'Falcons of Southwest' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 136 }
    location = 5590 #1330
    name     = "14th Group Army"
    division =
    { id       = { type = 8300 id = 137 }
      name     = "31st Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 138 }
      name     = "40th Infantry Division"
      strength = 100
      type     = motorized
      model    = 4
      
    }
    division =
    { id       = { type = 8300 id = 139 }
      name     = "U/I Armored Brigade"
      strength = 100
      type     = light_armor
      model    = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 140 }
    location = 1294 #1289
    name     = "Tibet Military District"
    division =
    { id       = { type = 8300 id = 141 }
      name     = "52nd Mountain Brigade"
      strength = 100
      type     = d_09
      model    = 5
    }
    division =
    { id       = { type = 8300 id = 142 }
      name     = "53rd Mountain Brigade"
      strength = 100
      type     = d_09
      model    = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 143 }
    location = 2551 #1299
    name     = "Chongqing Garrison District"
    division =
    { id       = { type = 8300 id = 144 }
      name     = "2nd Guard Division"
      strength = 100
      type     = garrison
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 145 }
    location = 1204 #1241
    name     = "Tianjin Garrison District"
    division =
    { id       = { type = 8300 id = 146 }
      name     = "4th Guard Division"
      strength = 100
      type     = garrison
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 147 }
    location = 1237 #1338
    name     = "Shanghai Garrison District"
    division =
    { id       = { type = 8300 id = 148 }
      name     = "5th Guard Division"
      strength = 100
      type     = garrison
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 149 }
    location = 1316 #1372
    name     = "Macau Garrison District"
    division =
    { id       = { type = 8300 id = 150 }
      name     = "6th Guard Division"
      strength = 100
      type     = garrison
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 151 }
    location = 1315 #1371
    name     = "Hong Kong Garrison District"
    division =
    { id       = { type = 8300 id = 152 }
      name     = "7th Guard Division"
      strength = 100
      type     = garrison
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 153 }
    location = 1320 #1367
    name     = "PLA Marine Corps"
    division =
    { id       = { type = 8300 id = 154 }
      name     = "1st Marine Brigade"
      strength = 100
      type     = d_05
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 155 }
      name     = "164th Marine Brigade"
      strength = 100
      type     = d_05
      model    = 4
    }
  }
  landunit =
  { id       = { type = 8300 id = 156 }
    location = 1363 #1303
    name     = "Xinjiang Special Operations Group"
    division =
    { experience    = 10
      id            = { type = 8300 id = 157 }
      name          = "'Brave Tigers' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  landunit =
  { id       = { type = 8300 id = 158 }
    location = 1321 #1365
    name     = "Yunnan Special Operations Group"
    division =
    { experience    = 10
      id            = { type = 8300 id = 159 }
      name          = "'Hunting Leopard' Spec. Op. Unit"
      strength      = 100
      type          = d_03
      model         = 5
      extra         = engineer
      brigade_model = 5
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 8300 id = 400 }
    location = 1320 #1367
    base     = 1320 #1367
    name     = "South Sea Fleet"
    division =
    { id    = { type = 8300 id = 401 }
      name  = "Shenzhen"
      type  = light_cruiser
      model = 4
    }
    division =
    { id    = { type = 8300 id = 402 }
      name  = "Zhuhai"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 403 }
      name  = "Changsha"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 404 }
      name  = "Nanning"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 405 }
      name  = "Nanchang"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 406 }
      name  = "Guilin"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 407 }
      name  = "Zhanjiang"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 408 }
      name  = "Anshun"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 409 }
      name  = "Zhaodong"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 410 }
      name  = "Jishou"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 411 }
      name  = "Xiangtan"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 412 }
      name  = "Kangding"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 413 }
      name  = "Dongwan"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 414 }
      name  = "Shantou"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 415 }
      name  = "Jiangmen"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 416 }
      name  = "Foshan"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 417 }
      name  = "Yichang"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 418 }
      name  = "Yulin"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 419 }
      name  = "Yuxi"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 420 }
      name  = "Xiangfan"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 421 }
      name  = "SSK-358"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 422 }
      name  = "SSK-359"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 423 }
      name  = "SSK-360"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 424 }
      name  = "SSK-361"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 425 }
      name  = "SSK-362"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 426 }
      name  = "SSK-363"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 427 }
      name  = "1st Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 428 }
      name  = "2nd Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 429 }
      name  = "3rd Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 430 }
      name  = "4th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 431 }
      name  = "5th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 432 }
      name  = "6th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 520 }
      name  = "7th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 521 }
      name  = "8th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 522 }
      name  = "9th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 523 }
      name  = "10th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 524 }
      name  = "11th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 525 }
      name  = "12th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 526 }
      name  = "13th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 527 }
      name  = "14th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 528 }
      name  = "15th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 529 }
      name  = "16th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 530 }
      name  = "17th Transport Fleet"
      type  = transport
      model = 5
    }
    division =
    { id    = { type = 8300 id = 531 }
      name  = "18th Transport Fleet"
      type  = transport
      model = 5
    }
  }
  navalunit =
  { id       = { type = 8300 id = 433 }
    location = 1214 #1331
    base     = 1214 #1331
    name     = "North Sea Fleet"
    division =
    { id    = { type = 8300 id = 434 }
      name  = "Jinan"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 435 }
      name  = "Xi'an"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 436 }
      name  = "Yinchuan"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 437 }
      name  = "Xining"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 438 }
      name  = "Xining"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 439 }
      name  = "Kaifeng"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 440 }
      name  = "Dalian"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 441 }
      name  = "Harbin"
      type  = light_cruiser
      model = 4
    }
    division =
    { id    = { type = 8300 id = 442 }
      name  = "Qingdao"
      type  = light_cruiser
      model = 4
    }
    division =
    { id    = { type = 8300 id = 443 }
      name  = "Changzhi"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 444 }
      name  = "Linfen"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 445 }
      name  = "Siping"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 446 }
      name  = "Dandong"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 447 }
      name  = "Maoming"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 448 }
      name  = "Yibing"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 449 }
      name  = "SSN-401"
      type  = nuclear_submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 450 }
      name  = "SSN-402"
      type  = nuclear_submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 451 }
      name  = "SSN-403"
      type  = nuclear_submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 452 }
      name  = "SSN-404"
      type  = nuclear_submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 453 }
      name  = "SSN-405"
      type  = nuclear_submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 454 }
      name  = "SSN-407"
      type  = nuclear_submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 455 }
      name  = "SSGN-406"
      type  = nuclear_submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 456 }
      name  = "SSK-213"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 457 }
      name  = "SSK-214"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 458 }
      name  = "SSK-342"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 459 }
      name  = "SSK-352"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 460 }
      name  = "SSK-353"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 461 }
      name  = "SSK-354"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 462 }
      name  = "SSK-356"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 463 }
      name  = "SSK-351"
      type  = submarine
      model = 5
    }
  }
  navalunit =
  { id       = { type = 8300 id = 464 }
    location = 1214 #1331
    base     = 1214 #1331
    name     = "East Sea Fleet"
    division =
    { id    = { type = 8300 id = 465 }
      name  = "Nanjing"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 467 }
      name  = "Hefei"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 468 }
      name  = "Chongqing"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 469 }
      name  = "Zunyi"
      type  = light_cruiser
      model = 3
    }
    division =
    { id    = { type = 8300 id = 470 }
      name  = "Hangzhou"
      type  = light_cruiser
      model = 4
    }
    division =
    { id    = { type = 8300 id = 471 }
      name  = "Fuzhou"
      type  = light_cruiser
      model = 4
    }
    division =
    { id    = { type = 8300 id = 472 }
      name  = "Shaoxing"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 473 }
      name  = "Nantong"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 474 }
      name  = "Wuxi"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 475 }
      name  = "Huaiyin"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 476 }
      name  = "Zhenjiang"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 477 }
      name  = "Xiamen"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 478 }
      name  = "Jiujiang"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 479 }
      name  = "Nanping"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 480 }
      name  = "Ji'an"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 481 }
      name  = "Jiaxing"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 482 }
      name  = "Lianyungang"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 483 }
      name  = "Sanming"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 484 }
      name  = "Putian"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 485 }
      name  = "Luoyang"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 486 }
      name  = "Mianyang"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 487 }
      name  = "Ningbo"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 488 }
      name  = "Jinhua"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 489 }
      name  = "Huangshi"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 490 }
      name  = "Wuhu"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 491 }
      name  = "Cangzhou"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 492 }
      name  = "Anqing"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 493 }
      name  = "Huainan"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 494 }
      name  = "Huaibei"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 495 }
      name  = "Tongling"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 8300 id = 496 }
      name  = "SSK-364"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 497 }
      name  = "SSK-365"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 498 }
      name  = "SSK-366"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 499 }
      name  = "SSK-367"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 500 }
      name  = "SSK-320"
      type  = submarine
      model = 5
  }
    division =
    { id    = { type = 8300 id = 501 }
      name  = "SSK-321"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 502 }
      name  = "SSK-322"
      type  = submarine
      model = 5
    }
}
navalunit =
  { id       = { type = 8300 id = 503 }
    location = 1237 #1338
    base     = 1237 #1338
    name     = "Submarine Reserve Fleet"
    division =
    { id    = { type = 8300 id = 504 }
      name  = "SSK-250"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 505 }
      name  = "SSK-251"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 506 }
      name  = "SSK-252"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 507 }
      name  = "SSK-253"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 508 }
      name  = "SSK-254"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 509 }
      name  = "SSK-255"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 510 }
      name  = "SSK-256"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 511 }
      name  = "SSK-257"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 512 }
      name  = "SSK-258"
      type  = submarine
      model = 5
    }
    division =
    { id    = { type = 8300 id = 513 }
      name  = "SSK-259"
      type  = submarine
      model = 5
    }
}
  #navalunit = #Only if SU sells.
  #{ id       = { type = 8300 id = 514 }
  #  location = 1214 #1331
  #  base     = 1214 #1331
  #  name     = "Liaoning Strike Group"
  #  division =
  #  { id            = { type = 8300 id = 515 }
  #    name          = "Liaoning"   # ex russian varyag
  #    strength      = 50
  #    type          = escort_carrier
  #    model         = 1
  #  }
  #}
# #####################################
# AIR FORCE
# #####################################
  airunit =
  { id       = { type = 8300 id = 200 }
    location = 1205 #1247
    base     = 1205 #1247
    name     = "Beijing Military Region"
    division =
    { id       = { type = 8300 id = 201 }
      name     = "7th Fighter Division"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 202 }
      name     = "15th Fighter Division"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 203 }
      name     = "24th Fighter Division"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 204 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "2nd Fighter Wing"
    division =
    { id       = { type = 8300 id = 205 }
      name     = "4th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 206 }
      name     = "5th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 207 }
      name     = "6th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 208 }
    location = 5495 #1281
    base     = 5495 #1281
    name     = "30th Ground Attack Wing"
    division =
    { id       = { type = 8300 id = 209 }
      name     = "34th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 210 }
      name     = "22nd Ground Attack Squadron"
      type     = tactical_bomber
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 8300 id = 211 }
      name     = "35th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 212 }
    location = 5495 #1281
    base     = 5495 #1281
    name     = "3rd Fighter Wing"
    division =
    { id       = { type = 8300 id = 213 }
      name     = "7th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 214 }
      name     = "8th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 215 }
      name     = "9th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 216 }
    location = 1239 #1346
    base     = 1239 #1346
    name     = "4th Fighter Wing"
    division =
    { id       = { type = 8300 id = 217 }
      name     = "10th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 218 }
      name     = "11th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 219 }
      name     = "12th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 220 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "5th Fighter Wing"
    division =
    { id       = { type = 8300 id = 221 }
      name     = "13th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 222 }
      name     = "14th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 223 }
      name     = "15th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 224 }
    location = 1237 #1338
    base     = 1237 #1338
    name     = "6th Fighter Wing"
    division =
    { id       = { type = 8300 id = 225 }
      name     = "16th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 226 }
      name     = "17th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 227 }
      name     = "18th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 228 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "7th Fighter Wing"
    division =
    { id       = { type = 8300 id = 229 }
      name     = "19th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 230 }
      name     = "20th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 231 }
      name     = "21st Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 232 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "8th Fighter Wing"
    division =
    { id       = { type = 8300 id = 233 }
      name     = "22nd Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 234 }
      name     = "23rd Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 235 }
      name     = "24th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 236 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "9th Fighter Wing"
    division =
    { id       = { type = 8300 id = 237 }
      name     = "25th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 238 }
      name     = "26th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 239 }
      name     = "27th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 240 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "10th Fighter Wing"
    division =
    { id       = { type = 8300 id = 241 }
      name     = "28th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 242 }
      name     = "29th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 243 }
      name     = "30th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 244 }
    location = 1294 #1289
    base     = 1294 #1289
    name     = "11th Ground Attack Wing"
    division =
    { id       = { type = 8300 id = 245 }
      name     = "31st Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 246 }
      name     = "32nd Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 247 }
      name     = "33rd Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
  }
  airunit =
  { id       = { type = 8300 id = 248 }
    location = 1239 #1346
    base     = 1239 #1346
    name     = "44th Ground Attack Wing"
    division =
    { id       = { type = 8300 id = 249 }
      name     = "12th Ground Attack Squadron"
      type     = tactical_bomber
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 8300 id = 250 }
      name     = "36th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 251 }
      name     = "37th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 252 }
    location = 1239 #1346
    base     = 1239 #1346
    name     = "6th Ground Attack Wing"
    division =
    { id       = { type = 8300 id = 253 }
      name     = "13th Ground Attack Squadron"
      type     = tactical_bomber
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 8300 id = 254 }
      name     = "38th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 255 }
      name     = "39th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 256 }
    location = 1452 #1289
    base     = 1452 #1289
    name     = "12th Fighter Wing"
    division =
    { id       = { type = 8300 id = 257 }
      name     = "40th Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 258 }
      name     = "41st Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
    division =
    { id       = { type = 8300 id = 259 }
      name     = "42nd Fighter Squadron"
      type     = multi_role
      strength = 100
      model    = 6
    }
  }
  airunit =
  { id       = { type = 8300 id = 260 }
    location = 1258 #1380
    base     = 1258 #1380
    name     = "13th Fighter Wing"
    division =
    { id       = { type = 8300 id = 261 }
      name     = "43rd Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 262 }
      name     = "44th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 263 }
      name     = "45th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 264 }
    location = 1237 #1338
    base     = 1237 #1338
    name     = "10th Bomber Wing"
    division =
    { id       = { type = 8300 id = 265 }
      name     = "28th Bomber Regiment"
      type     = strategic_bomber
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 8300 id = 266 }
      name     = "29th Bomber Regiment"
      type     = strategic_bomber
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 8300 id = 267 }
      name     = "30th Bomber Regiment"
      type     = strategic_bomber
      strength = 100
      model    = 1
    }
  }
  airunit =
	{ id       = { type = 8300 id = 268 }
	location = 1258 #1380
	base     = 1258 #1380
	name     = "14th Fighter Wing"
	division = { id = { type = 8300 id = 269 } name = "46th Fighter Squadron" type = interceptor strength = 100 model = 4 }
	division = { id = { type = 8300 id = 270 } name = "47th Fighter Squadron" type = interceptor strength = 100 model = 4 }
	division = { id = { type = 8300 id = 271 } name = "48th Fighter Squadron" type = interceptor strength = 100 model = 4 }
  }
  airunit =
  { id       = { type = 8300 id = 272 }
    location = 1258 #1380
    base     = 1258 #1380
    name     = "28th Figther Wing"
    division =
    { id       = { type = 8300 id = 273 }
      name     = "49th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 274 }
      name     = "50th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 275 }
      name     = "51st Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 276 }
    location = 1258 #1380
    base     = 1258 #1380
    name     = "26th Fighter Wing"
    division =
    { id       = { type = 8300 id = 277 }
      name     = "52nd Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 278 }
      name     = "53rd Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 279 }
      name     = "54th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 280 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "44th Fighter Wing"
    division =
    { id       = { type = 8300 id = 281 }
      name     = "55th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 282 }
      name     = "56th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 283 }
      name     = "57th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 284 }
    location = 1319 #1279
    base     = 1319 #1279
    name     = "36th Bomber Wing"
    division =
    { id       = { type = 8300 id = 285 }
      name     = "106th Bomber Regiment"
      type     = strategic_bomber
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 8300 id = 286 }
      name     = "107th Bomber Regiment"
      type     = strategic_bomber
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 8300 id = 312 }
      name     = "108th Bomber Regiment"
      type     = strategic_bomber
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 8300 id = 313 }
      name     = "109th Bomber Regiment"
      type     = strategic_bomber
      strength = 100
      model    = 1
    }
  }
  airunit =
  { id       = { type = 8300 id = 287 }
    location = 1239 #1346
    base     = 1239 #1346
    name     = "46th Air Wing"
    division =
    { id       = { type = 8300 id = 288 }
      name     = "58th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 289 }
      name     = "59th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
    division =
    { id       = { type = 8300 id = 290 }
      name     = "60th Fighter Squadron"
      type     = interceptor
      strength = 100
      model    = 4
    }
  }
  airunit =
  { id       = { type = 8300 id = 291 }
    location = 1205 #1247
    base     = 1205 #1247
    name     = "PLA Air Transport Command"
    division =
    { id       = { type = 8300 id = 292 }
      name     = "1st Air Transport Regiment"
      type     = transport_plane
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 8300 id = 293 }
      name     = "2nd Air Transport Regiment"
      type     = transport_plane
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 8300 id = 294 }
      name     = "3rd Air Transport Regiment"
      type     = transport_plane
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 8300 id = 295 }
      name     = "4th Air Transport Regiment"
      type     = transport_plane
      strength = 100
      model    = 2
    }
  }
  airunit =
  { id       = { type = 8300 id = 296 }
    location = 1205 #1247
    base     = 1205 #1247
    name     = "19th Ground Attack Wing"
    division =
    { id       = { type = 8300 id = 297 }
      name     = "181st Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 298 }
      name     = "322nd Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 299 }
      name     = "75th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 300 }
      name     = "75th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
  }
  airunit =
  { id       = { type = 8300 id = 301 }
    location = 1205 #1247
    base     = 1205 #1247
    name     = "18th Ground Attack Wing"
    division =
    { id       = { type = 8300 id = 302 }
      name     = "99th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 303 }
      name     = "49th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 304 }
      name     = "101st Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 305 }
      name     = "86th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
  }
  airunit =
  { id       = { type = 8300 id = 306 }
    location = 1258 #1380
    base     = 1258 #1380
    name     = "17th Ground Attack Wing"
    division =
    { id       = { type = 8300 id = 307 }
      name     = "182nd Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 308 }
      name     = "327th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 309 }
      name     = "275th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 310 }
      name     = "175th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 8300 id = 311 }
      name     = "78th Ground Attack Squadron"
      type     = cas
      strength = 100
      model    = 3
    }
  }
# ###################################
# Under Development
# ###################################
  division_development =
  { id    = { type = 8300 id = 550 }
    name  = "Ma'anshan"
    type  = destroyer
    model = 1
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 551 }
    name  = "Wenzhou"
    type  = destroyer
    model = 1
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 552 }
    name  = "SSK-323"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 553 }
    name  = "SSK-324"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 554 }
    name  = "SSK-325"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 555 }
    name  = "SSK-326"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 556 }
    name  = "SSK-313"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 557 }
    name  = "SSK-314"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 558 }
    name  = "SSK-368"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 559 }
    name  = "SSK-369"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 560 }
    name  = "SSK-370"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 561 }
    name  = "SSK-371"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 562 }
    name  = "SSK-372"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 563 }
    name  = "SSK-373"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 564 }
    name  = "SSK-374"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 565 }
    name  = "SSK-375"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = september year = 1989 }
  }
  division_development =
  { id    = { type = 8300 id = 566 }
    name  = "SSK-330"
    type  = submarine
    model = 5
    cost  = 5
    date  = { day = 2 month = april year = 1989 }
  }
}
 