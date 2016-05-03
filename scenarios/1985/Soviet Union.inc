
 ##############################
 # Country definition for SOV #
 ##############################

 province = { id =	209	air_base = { size =	5 current_size = 5 } } # Base Aérea Grodno
 province = { id =	503	air_base = { size =	5 current_size = 5 } } # Base Aérea Brest-Litovsk
 province = { id =	1571 air_base = { size = 3 current_size = 3 } } # Base Aérea Tiraspol
 province = { id =	198	air_base = { size =	3 current_size = 3 } } # Base Aérea Valmiera
 province = { id =	1543 air_base = { size = 5 current_size = 5 } } # Base Aérea Novosibirsk
 province = { id =	1427 air_base = { size = 5 current_size = 5 } } # Base Aérea Tashkent
 province = { id = 1845 air_base = { size =	4 current_size = 4 } } # Base Aérea Sukhumi
 province = { id = 212 air_base = { size = 10 current_size = 10 } } # Base Aérea Minsk

 #####################
 # Country main data #
 #####################

 country =
 { tag                    = SOV
   regular_id             = RUS
   intrinsic_gov_type     = stalinist
   capital                = 175
   ai = "sov_1985.ai"
   ai_settings = {flags = {
			MOB1 = yes
			MOB2 = yes
			MOB3 = yes
			MOB4 = yes
		}
	}
   # Resource Reserves
   energy                 = 50000
   metal                  = 20000
   rare_materials         = 10000
   oil                    = 5000
   supplies               = 20000
   money                  = 50000
   manpower               = 2452 #1953
   dissent                = 15
   transports             = 2000
   escorts                = 100
   #research_mod = 0.75
   industrial_modifier 	  = 0.9	#Brezhnev Stagnation.
   peacetime_ic_mod       = 0.9
   wartime_ic_mod       = 1.0

   diplomacy =
   {
		# Warsaw Pact
		relation = {  tag = BUL value = 150  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		relation = {  tag = CZE value = 100  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		relation = {  tag = DDR value = 200  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		relation = {  tag = POL value = 100  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		relation = {  tag = HUN value = 100  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		relation = {  tag = ROM value = 100  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		relation = {  tag = AFG value = 100  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		relation = {  tag = MON value = 150  access = yes  guaranteed = {  day = 21 month = december year = 2012  } }
		# Other
		relation = {  tag = SCH value = 100  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = TUR value = 100  }
		relation = {  tag = CHC value = -100  }
		#Naval Bases
		relation = {  tag = CUB value = 200  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = SYR value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = U92 value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = LBY value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = ALG value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = PRK value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = VIE value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = U47 value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = U85 value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = ANG value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = ETH value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = U43 value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = MOZ value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = IND value = 100  access = yes  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = MAN value = 100  access = yes  }
		relation = {  tag = IRQ value = 100  access = yes  }
		#West
		relation = {  tag = BRA value = -100  }
		relation = {  tag = ENG value = -100  }
		relation = {  tag = FIN value = -100  guaranteed = {  day = 29 month = december year = 1984  } }
		relation = {  tag = FRA value = -50  }
		relation = {  tag = GRE value = -50  }
		relation = {  tag = IRE value = -50  }
		relation = {  tag = JAP value = -150  }
		relation = {  tag = PER value = -100  }
		relation = {  tag = SAU value = -100  }
		relation = {  tag = URU value = -100  }
		relation = {  tag = USA value = -200  }
    }
	
   SpyInfo                = {  country = "SOV" NumberOfSpies = 15  }

   nationalprovinces      = { 1372  1371 1370 1369 1367 1366 1527 1529 1528 1526 1523 1410 1525 1524     1167 1170 1171 1172 
                             1175 1522 1521 1384 1383 1520 1416 1415 1414 1413  1412 1411     1417 1558 1557 1423 1556 1550
                             1549 1547 1546 1559 1561 1560 1562    1538 1545 1544 1548 1543 1540 1539 1536 1535 1533 1534   1156
                             1155 1154 1565 1564 1571 1597 1598  1555  1552 1594 1596 1573 1593 1587 1424 1586 1585
                             1584 1583 1581 1576 1575 1574 1572 1566 1567 1570 1577 1578 1580 1582 1579 1569 1568 1150 1151 1152 1153 1773 1772 1771
                             154  1840 1841 165  153  151  152  150  135  134  133  1838 1847 1857 1849 1850 1848 1845 1844 1846 1843 255  256  257 
                             270  1842 1837 271  164  1833 1834 1836 1839 1827 1828 1829 1832 1831 1830 252  253  254  1777 1778 1776 1775 1780
                             1781 1782 1783 1774 163  162  161  160  159  157  156  158  155  169  168  167  179  180  166  178  177  170  171  172 
                             173  174  175  176  181  182  183  184  190  191  189  185  186  187  188  192  200  201  212  225  226  227  228  231 
                             232  233  234  251  250  235  236  237  238  239  240  220  272  241  273  274  275  276  277  278  279  280  281  282 
                             283  284  249  258  259  260  248  247  243  262  261  269  268  267  266  265  264  263  1490 1491 1485 1487 1488 1427
                             1428 1426 1425 1429 94   215  216  217  218  219  221  242  244  245  246  285  286  287  288  289  1149  1368 1422
                             1489 1856 1858 1907 1541 1542 1551 1874
							 2470 2240 2488 2368
							 2614 2615 2847 2848 2849 2850 2851 2868 2869
							 3341	3342	3343
3345	3346	3347	3348	3349
3399	3400	3401	3402	3403	3404	3405	3406	3407	3408	
3409	3410	3411	3412	3413	3414	3415	3416	3417	3418	
3419	3420	3421	3422	3423	3424	3425	3426	3427	3428	
3429
3431	3432	3433	3434	3435	3436	3437	3438	3439	3440	
3441	3442	3443	3444	3445	3446	3447	3448	3449	3450	
3451	3452	3453	3454	3455	3456	3457	3458	3459	3460	
3461	3462	3463	3464	3465	3466	3467	3468	3469	3470	
3471	3472	3473
3474 3475 3476 3477 3478 3479 3480 3486
3481 3482 3483 3484 3485
3487 3488 3489 3490 3491 3492 3493
3494 3495 3496 3497
3499 3500 3501 3502 3503 3505 3506 3507 3508 3510 3511 3512 3513 3514 3515 3516 3517 3518 3519 3520 3521 3522 3523
3527 3528 3529 3530 3532 3533 3534 3535 3536 3537 3538 3539 3540 3541 3542 3543 3544 3545 3546 3547 3548 3549 3550 3551
3553 3554 3555 3556 3557 3559 3560 3561 3562 3563 3564 3565 3566 3567 3568 3569 3570 3571 3572 
3573 3574 3575 3576 3577 3578 3579 3580 3581 3582 3583 3584 3585 3586 3587 3588 3589 3590 3591 3592 3593
3596 3597 3598 3599 3600 3601 3602 3603 3604 3605 3606 3607 3608 3609 3610 3611 3612
3614 3615 3616 3617 3618 3619 3620 3621 3622 3623 3624 3625 3626 3627 3628 3629 3630 
3631 3632 3633 3634 3635 3636 3637 3638 3639 3640 3641 3642 3643 3644 3645 3646 3647 
3648 3649 3650 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 
3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 
3682 3683 3684 3685 3686 3687 3688 3689 3690 3691 3692 3693 3694 3695 3696 3697 3698 
3699 3700 3701 3702 3703 3704 3705 3706 3707 3708 3709 3710 3711 3712 3713 3714 3715 
3716 3717 3718 3719 3720 3721 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733 3734 3735 3736
4149 5693 6493 6494
6919 6929 6930 6931 6932 6933 6934 6935 6936 6937
6949 6950 6951 6952 6953 6954 6955 6956 6957 6958 
6959 6960 6961 6962 6963 6964 6965 6966 6967 6968 
6969 6970 6971 6972 6973 6974 6975 6976 6977 6978 
6979 6980 6981 6982 6983 6984 6985 6986 6987 6988 
6989 6990 6991 6992 6993 6994 6995 6996 6997 6998 
6999 7000 7001 7002 7003
7065 7066 7067 7073 7074 7075 7076 7077 7078 7079 
7080 7081 7082 7083 7084 7085 7086 7087 7156 7157 
7158 7159 7160 7161 7162 7243 7244 7245 7246 7247 
7248 7249 7250 7251 7252 7253 7254 7272 7273 7308 
7309 7310 7311 7312 7313 7383 7384 7385 7386 7387 
7942 7943 7944 3233 499 2302 5472 5473
#Eastern Poland
209 102 507 500 229 3396 
3273 501 502 506 3274 1885 3395 562 3275 503 
3276 210 95 3277 214 3278 213 1418 3594 3595 
3761 5474 5475 7979
#Estonia
194 193 195 196 199 1886 3286 3287 3288 3394
#Latvia
205 204 203 197 202 198 3283 3284 3285 3289
#Lithuania
207 206 511 577 2606 3280 3281 3282 3279 7980 6517 7263 7264 7336
#East Prussia
223 510
#Finland
123 145 146 3344 132 143 3323
#Ukraine
7984
#Sakhalin and Kurils
7941 7940 7939 1176 3089 1177 7969 7970 7971
#Bessarabia
1401 3390 7070 3391 230 434 3389 2605 435 1173
                           }
   ownedprovinces         = { 1372  1371 1370 1369 1367 1366 1527 1529 1528 1526 1523 1410 1525 1524     1167 1170 1171 1172 
                             1175 1522 1521 1384 1383 1520 1416 1415 1414 1413  1412 1411     1417 1558 1557 1423 1556 1550
                             1549 1547 1546 1559 1561 1560 1562    1538 1545 1544 1548 1543 1540 1539 1536 1535 1533 1534   1156
                             1155 1154 1565 1564 1571 1597 1598  1555  1552 1594 1596 1573 1593 1587 1424 1586 1585
                             1584 1583 1581 1576 1575 1574 1572 1566 1567 1570 1577 1578 1580 1582 1579 1569 1568 1150 1151 1152 1153 1773 1772 1771
                             154  1840 1841 165  153  151  152  150  135  134  133  1838 1847 1857 1849 1850 1848 1845 1844 1846 1843 255  256  257 
                             270  1842 1837 271  164  1833 1834 1836 1839 1827 1828 1829 1832 1831 1830 252  253  254  1777 1778 1776 1775 1780
                             1781 1782 1783 1774 163  162  161  160  159  157  156  158  155  169  168  167  179  180  166  178  177  170  171  172 
                             173  174  175  176  181  182  183  184  190  191  189  185  186  187  188  192  200  201  212  225  226  227  228  231 
                             232  233  234  251  250  235  236  237  238  239  240  220  272  241  273  274  275  276  277  278  279  280  281  282 
                             283  284  249  258  259  260  248  247  243  262  261  269  268  267  266  265  264  263  1490 1491 1485 1487 1488 1427
                             1428 1426 1425 1429 94   215  216  217  218  219  221  242  244  245  246  285  286  287  288  289  1149  1368 1422
                             1489 1856 1858 1907 1541 1542 1551 1874 
							 2470 2240 2488 2368
							 2614 2615 2847 2848 2849 2850 2851 2868 2869
							 3341	3342	3343
3345	3346	3347	3348	3349
3399	3400	3401	3402	3403	3404	3405	3406	3407	3408	
3409	3410	3411	3412	3413	3414	3415	3416	3417	3418	
3419	3420	3421	3422	3423	3424	3425	3426	3427	3428	
3429
3431	3432	3433	3434	3435	3436	3437	3438	3439	3440	
3441	3442	3443	3444	3445	3446	3447	3448	3449	3450	
3451	3452	3453	3454	3455	3456	3457	3458	3459	3460	
3461	3462	3463	3464	3465	3466	3467	3468	3469	3470	
3471	3472	3473
3474 3475 3476 3477 3478 3479 3480 3486
3481 3482 3483 3484 3485
3487 3488 3489 3490 3491 3492 3493
3494 3495 3496 3497
3499 3500 3501 3502 3503 3505 3506 3507 3508 3510 3511 3512 3513 3514 3515 3516 3517 3518 3519 3520 3521 3522 3523
3527 3528 3529 3530 3532 3533 3534 3535 3536 3537 3538 3539 3540 3541 3542 3543 3544 3545 3546 3547 3548 3549 3550 3551
3553 3554 3555 3556 3557 3559 3560 3561 3562 3563 3564 3565 3566 3567 3568 3569 3570 3571 3572 
3573 3574 3575 3576 3577 3578 3579 3580 3581 3582 3583 3584 3585 3586 3587 3588 3589 3590 3591 3592 3593
3596 3597 3598 3599 3600 3601 3602 3603 3604 3605 3606 3607 3608 3609 3610 3611 3612
3614 3615 3616 3617 3618 3619 3620 3621 3622 3623 3624 3625 3626 3627 3628 3629 3630 
3631 3632 3633 3634 3635 3636 3637 3638 3639 3640 3641 3642 3643 3644 3645 3646 3647 
3648 3649 3650 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 
3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 
3682 3683 3684 3685 3686 3687 3688 3689 3690 3691 3692 3693 3694 3695 3696 3697 3698 
3699 3700 3701 3702 3703 3704 3705 3706 3707 3708 3709 3710 3711 3712 3713 3714 3715 
3716 3717 3718 3719 3720 3721 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733 3734 3735 3736
4149 5693 6493 6494
6919 6929 6930 6931 6932 6933 6934 6935 6936 6937
6949 6950 6951 6952 6953 6954 6955 6956 6957 6958 
6959 6960 6961 6962 6963 6964 6965 6966 6967 6968 
6969 6970 6971 6972 6973 6974 6975 6976 6977 6978 
6979 6980 6981 6982 6983 6984 6985 6986 6987 6988 
6989 6990 6991 6992 6993 6994 6995 6996 6997 6998 
6999 7000 7001 7002 7003
7065 7066 7067 7073 7074 7075 7076 7077 7078 7079 
7080 7081 7082 7083 7084 7085 7086 7087 7156 7157 
7158 7159 7160 7161 7162 7243 7244 7245 7246 7247 
7248 7249 7250 7251 7252 7253 7254 7272 7273 7308 
7309 7310 7311 7312 7313 7383 7384 7385 7386 7387 
7942 7943 7944 3233 499 2302
#Eastern Poland
209 102 507 500 229 3396 
3273 501 502 506 3274 1885 3395 562 3275 503 
3276 210 95 3277 214 3278 213 1418 3594 3595 
3761 5474 5475 7979 5472 5473
#Estonia
194 193 195 196 199 1886 3286 3287 3288 3394
#Latvia
205 204 203 197 202 198 3283 3284 3285 3289
#Lithuania
207 206 511 577 2606 3280 3281 3282 3279 7980 6517 7263 7264 7336
#East Prussia
223 510
#Finland
123 145 146 3344 132 143 3323
#Ukraine
7984
#Sakhalin and Kurils
7941 7940 7939 1176 3089 1177 7969 7970 7971
#Bessarabia
1401 3390 7070 3391 230 434 3389 2605 435 1173
   }
   controlledprovinces    = { 1372  1371 1370 1369 1367 1366 1527 1529 1528 1526 1523 1410 1525 1524     1167 1170 1171 1172 
                             1175 1522 1521 1384 1383 1520 1416 1415 1414 1413  1412 1411     1417 1558 1557 1423 1556 1550
                             1549 1547 1546 1559 1561 1560 1562    1538 1545 1544 1548 1543 1540 1539 1536 1535 1533 1534   1156
                             1155 1154 1565 1564 1571 1597 1598  1555  1552 1594 1596 1573 1593 1587 1424 1586 1585
                             1584 1583 1581 1576 1575 1574 1572 1566 1567 1570 1577 1578 1580 1582 1579 1569 1568 1150 1151 1152 1153 1773 1772 1771
                             154  1840 1841 165  153  151  152  150  135  134  133  1838 1847 1857 1849 1850 1848 1845 1844 1846 1843 255  256  257 
                             270  1842 1837 271  164  1833 1834 1836 1839 1827 1828 1829 1832 1831 1830 252  253  254  1777 1778 1776 1775 1780
                             1781 1782 1783 1774 163  162  161  160  159  157  156  158  155  169  168  167  179  180  166  178  177  170  171  172 
                             173  174  175  176  181  182  183  184  190  191  189  185  186  187  188  192  200  201  212  225  226  227  228  231 
                             232  233  234  251  250  235  236  237  238  239  240  220  272  241  273  274  275  276  277  278  279  280  281  282 
                             283  284  249  258  259  260  248  247  243  262  261  269  268  267  266  265  264  263  1490 1491 1485 1487 1488 1427
                             1428 1426 1425 1429 94   215  216  217  218  219  221  242  244  245  246  285  286  287  288  289  1149  1368 1422
                             1489 1856 1858 1907 1541 1542 1551 1874 
							 2470 2240 2488 2368
							 2614 2615 2847 2848 2849 2850 2851 2868 2869
							 3341	3342	3343
3345	3346	3347	3348	3349
3399	3400	3401	3402	3403	3404	3405	3406	3407	3408	
3409	3410	3411	3412	3413	3414	3415	3416	3417	3418	
3419	3420	3421	3422	3423	3424	3425	3426	3427	3428	
3429
3431	3432	3433	3434	3435	3436	3437	3438	3439	3440	
3441	3442	3443	3444	3445	3446	3447	3448	3449	3450	
3451	3452	3453	3454	3455	3456	3457	3458	3459	3460	
3461	3462	3463	3464	3465	3466	3467	3468	3469	3470	
3471	3472	3473
3474 3475 3476 3477 3478 3479 3480 3486
3481 3482 3483 3484 3485
3487 3488 3489 3490 3491 3492 3493
3494 3495 3496 3497
3499 3500 3501 3502 3503 3505 3506 3507 3508 3510 3511 3512 3513 3514 3515 3516 3517 3518 3519 3520 3521 3522 3523
3527 3528 3529 3530 3532 3533 3534 3535 3536 3537 3538 3539 3540 3541 3542 3543 3544 3545 3546 3547 3548 3549 3550 3551
3553 3554 3555 3556 3557 3559 3560 3561 3562 3563 3564 3565 3566 3567 3568 3569 3570 3571 3572 
3573 3574 3575 3576 3577 3578 3579 3580 3581 3582 3583 3584 3585 3586 3587 3588 3589 3590 3591 3592 3593
3596 3597 3598 3599 3600 3601 3602 3603 3604 3605 3606 3607 3608 3609 3610 3611 3612
3614 3615 3616 3617 3618 3619 3620 3621 3622 3623 3624 3625 3626 3627 3628 3629 3630 
3631 3632 3633 3634 3635 3636 3637 3638 3639 3640 3641 3642 3643 3644 3645 3646 3647 
3648 3649 3650 3651 3652 3653 3654 3655 3656 3657 3658 3659 3660 3661 3662 3663 3664 
3665 3666 3667 3668 3669 3670 3671 3672 3673 3674 3675 3676 3677 3678 3679 3680 3681 
3682 3683 3684 3685 3686 3687 3688 3689 3690 3691 3692 3693 3694 3695 3696 3697 3698 
3699 3700 3701 3702 3703 3704 3705 3706 3707 3708 3709 3710 3711 3712 3713 3714 3715 
3716 3717 3718 3719 3720 3721 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733 3734 3735 3736
4149 5693 6493 6494
6919 6929 6930 6931 6932 6933 6934 6935 6936 6937
6949 6950 6951 6952 6953 6954 6955 6956 6957 6958 
6959 6960 6961 6962 6963 6964 6965 6966 6967 6968 
6969 6970 6971 6972 6973 6974 6975 6976 6977 6978 
6979 6980 6981 6982 6983 6984 6985 6986 6987 6988 
6989 6990 6991 6992 6993 6994 6995 6996 6997 6998 
6999 7000 7001 7002 7003
7065 7066 7067 7073 7074 7075 7076 7077 7078 7079 
7080 7081 7082 7083 7084 7085 7086 7087 7156 7157 
7158 7159 7160 7161 7162 7243 7244 7245 7246 7247 
7248 7249 7250 7251 7252 7253 7254 7272 7273 7308 
7309 7310 7311 7312 7313 7383 7384 7385 7386 7387 
7942 7943 7944 3233 499 2302 5472 5473
#Eastern Poland - 3279 was here.
209 102 507 500 229 3396 
3273 501 502 506 3274 1885 3395 562 3275 503 
3276 210 95 3277 214 3278 213 1418 3594 3595 
3761 5474 5475 7979
#Estonia
194 193 195 196 199 1886 3286 3287 3288 3394
#Latvia
205 204 203 197 202 198 3283 3284 3285 3289
#Lithuania
207 206 511 577 2606 3280 3281 3282 3279 7980 6517 7263 7264 7336
#East Prussia
223 510
#Finland
123 145 146 3344 132 143 3323
#Ukraine
7984
#Sakhalin and Kurils
7941 7940 7939 1176 3089 1177 7969 7970 7971
#Bessarabia
1401 3390 7070 3391 230 434 3389 2605 435 1173
   }

   policy =
   { date              = {  year = 0 month = january day = 0  }
     democratic        = 1
     political_left    = 10
     freedom           = 1
     free_market       = 1
     professional_army = 4
     defense_lobby     = 8
     interventionism   = 6
   }

   headofstate            = {  type = 9 id = 99900  }
   headofgovernment       = {  type = 9 id = 99901  }
   foreignminister        = {  type = 9 id = 99902  }
   armamentminister       = {  type = 9 id = 99903  } #Gosplan
   ministerofsecurity     = {  type = 9 id = 99904  }
   ministerofintelligence = {  type = 9 id = 99905  }
   chiefofstaff           = {  type = 9 id = 99906  }
   chiefofarmy            = {  type = 9 id = 99907  }
   chiefofnavy            = {  type = 9 id = 99908  }
   chiefofair             = {  type = 9 id = 99909  }
   
   dormant_ministers = { 
	99920 #Reformed Gosplan
	99922 99923 99924 99925 #Boris Yeltsin (HoS, HoG, FM and MoA) 
	99930 99931 #Vladimir Kryuchikov (Normal and in power)
	99926 99927 #Gennady Yanayev (HoS and HoG)
   } 

   #SOVIET TECHNOLOGY 1985
   blueprints = { }
   techapps = {
   ###################
   #     Infantry    #
   ###################
   #Infantry
   1010 1020 1030 1040 1050 1060
   #Motorized
   1100 1110 1120 1130 1140 1150
   #Mountain
   1160 1170 1180 1190 1200 1210
   #Special Forces
   1250 1260 1270 1280 1290 1300
   #Naval Infantry
   1560 1570 1580 1590 1600 1610
   #Airborne Infantry
   1670 1680 1690 1700 1710 1720
   #Air Cavalry
   1396 1400 1410 1420 1430
   #Armored Cavalry
   13060 13070 13080 1310 1320
   #Mechanized
   1470 1480 1490 1500 1510 1520
   #Irregular Infantry
   1360 1370 1380 1390 1530 1540
   #Combat Engineers
   1830 1840 1850 1860 1870 1880
   #Supply and Repair
   1990 199100 199110 199130 
   ###################
   #Armor & Artillery#
   ###################
   #Main Battle Tanks
   2620 2010 2630 2640 2646 2650 2030 2040
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
   3210 3220 3260
   #Aircraft Carriers
   3510 3520
   #Aircraft Cruiser
   3800 3790 3850
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
   5810
   #Heavy Industry
   5130 5110 5120
   #Material Science
   53050 63160 63070 #63080
   #Industrial Sectors
   5180
   #Construction Eng.
   5800 5080 5090
   #Rocketry
   4280
   #Agriculture
   5700 5710 5010
   #Oil
   5190 5220
   #Computing
   5310 54010 54020 5320 53116 5330 53060 #5340 5920
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
   #Subsidiary Carrier Role
   81300 81310 81320 81330 81340 81350 81360
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
   # #################
   # ###Soviet OOB####
   # #################
   #############################################################
   # Western Group of Forces (Occupation Force of East Germany)#
   #############################################################
   landunit =
   {  id       = {  type = 10848 id = 1  } 				#Dresden
     name     = "1st Guards Tank Red Banner Army"
     location = 311
     Division =
     {  id    = {  type = 10848 id = 2  }
       name  = "9th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 3  }
       name  = "11th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10848 id = 4  }
       name  = "20th Guards Motor Rifle Division"
       strength = 80
       type  = motorized
       model = 5
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 5  } 				#Neuruppin
     name     = "2nd Guards Tank Army"
     location = 297
     Division =
     {  id    = {  type = 10848 id = 6  }
       name  = "16th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 7  }
       name  = "21st Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10848 id = 8  }
       name  = "94th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 9  }
       name  = "207th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 10  } 				#Magdeburg
     name     = "3rd Shock Army"
     location = 3243
     Division =
     {  id    = {  type = 10848 id = 11  }
       name  = "7th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 12  }
       name  = "10th Guards Uralsko-Lvovskaya Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10848 id = 13  }
       name  = "12th Guards Tank Division"
       type  = armor
       model = 5
	   strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 14  }
       name  = "47th Guards Tank Division"
       type  = armor
       model = 5
	   strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 15  } 				#Leipzig
     name     = "8th Guards Order of Lenin Army"
     location = 310
     Division =
     {  id    = {  type = 10848 id = 16  }
       name  = "27th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 17  }
       name  = "39th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10848 id = 18  }
       name  = "57th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 19  }
       name  = "79th Guards Tank Division"
       type  = armor
       model = 5
	   strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 20  } 				#Brandenburg
     name     = "20th Guards Red Banner Army"
     location = 3245
     Division =
     {  id       = {  type = 10848 id = 21  }
       name     = "25th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10848 id = 22  }
       name  = "32nd Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 23  }
       name  = "35th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id    = {  type = 10848 id = 24  }
       name  = "90th Guards Tank Division"
       type  = armor
       model = 5
	   strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 25  } 				#Berlin
     name     = "Group of Soviet Forces in Germany"
     location = 7266
     Division =
     {  id       = {  type = 10848 id = 26  }
       name     = "Western Group of Forces"
       type     = hq
       model    = 5
       strength = 100
	   extra    = engineer
	   brigade_model = 5
      }
	}
    # #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7000 }
	name = "16th Air Army"
	location = 157 # Potsdam
	base = 157 # Potsdam

	division = {
	id = { type = 10848 id = 7001 }
		name = "6th Fighter Aviation Division"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 10848 id = 7002 }
		name = "16th Guards Fighter Aviation Division"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 10848 id = 7003 }
		name = "105th Fighter-Bomber Aviation Division"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7004 }
		name = "125th Fighter-Bomber Aviation Division"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7005 }
		name = "126th Fighter Aviation Division"
		strength = 100
		type = interceptor
		model = 4
			}
	}
	########################################################
	# Northern Group of Forces (Occupation Force of Poland)#
	########################################################
	landunit =
   {  id       = {  type = 10848 id = 27  } 				#Leignitz
     name     = "Northern Group of Forces"
     location = 1400
     Division =
     {  id    = {  type = 10848 id = 28  }
       name  = "6th Guards Motorized Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 29  }
       name  = "20th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	##############################################################
	# Central Group of Forces (Occupation Force of Czechslovakia)#
	##############################################################
	landunit =
   {  id       = {  type = 10848 id = 30  } 				#Ostrava
     name     = "Central Group of Forces"
     location = 474
     Division =
     {  id    = {  type = 10848 id = 31  }
       name  = "18th Guards Motorized Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 32  }
       name  = "15th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 33  }
       name  = "48th Motorized Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 34  } 				#Ostrava
     name     = "28th Army Corps"
     location = 474
     Division =
     {  id    = {  type = 10848 id = 35  }
       name  = "30th Guards Motorized Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
     Division =
     {  id   = {  type = 10848 id = 36  }
       name  = "31st Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	##############################################################
	# Southern Group of Forces (Occupation Force of Hungary)     #
	##############################################################
	landunit =
   {  id       = {  type = 10848 id = 37  } 				#Szekesfehar
     name     = "Southern Group of Forces"
     location = 458
     Division =
     {  id    = {  type = 10848 id = 38  }
       name  = "13th Guards Tank Poltava Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 39  }
       name  = "254th 'Cherkass' Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 40  } 				#Miskolc
     name     = "Southern Group of Forces"
     location = 491
     Division =
     {  id    = {  type = 10848 id = 41  }
       name  = "19th Guards Tank Nikolayevsk-Budapest Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 42  } 				#Szeged
     name     = "Southern Group of Forces"
     location = 492
     Division =
     {  id    = {  type = 10848 id = 43  }
       name  = "93rd Guards Motor Rifle Kharkov Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
    # #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7006 }
	name = "36th Air Army"
	location = 457 # Budapest
	base = 457 # Budapest

	division = {
	id = { type = 10848 id = 7007 }
		name = "14th Guards Fighter Aviation Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 10848 id = 7008 }
		name = "515th Fighter Aviation Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	}
	airunit = {
	id = { type = 10848 id = 7009 }
	name = "36th Air Army"
	location = 224 # Zalsegerszeg
	base = 224 # Zalsegerszeg

	division = {
	id = { type = 10848 id = 7010 }
		name = "5th Guards Fighter Aviation Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	}
	#################################
	# Baltic Military District     #
	################################
	landunit =
   {  id       = {  type = 10848 id = 44  } 				#Klaipeda
     name     = "Baltic Military District"
     location = 2606
     Division =
     {  id    = {  type = 10848 id = 45  }
       name  = "3rd Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 46  }
       name  = "16th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 47  } 				#Riga
     name     = "Baltic Military District"
     location = 197
     Division =
     {  id    = {  type = 10848 id = 48  }
       name  = "24th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 49  } 				#Wilno
     name     = "Baltic Military District"
     location = 214
     Division =
     {  id    = {  type = 10848 id = 50  }
       name  = "107th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 51  } 				#Tallinn
     name     = "Baltic Military District"
     location = 194
     Division =
     {  id    = {  type = 10848 id = 52  }
       name  = "144th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 53  } 				#Kaliningrad
     name     = "11th Guards Army"
     location = 510
     Division =
     {  id    = {  type = 10848 id = 54  }
       name  = "1st Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 55  }
       name  = "1st Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 56  }
       name  = "40th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 57  } 				#Kaunas
     name     = "Baltic Military District"
     location = 207
     Division =
     {  id    = {  type = 10848 id = 58  }
       name  = "7th Guards Cherkassy Airborne Division"
       type     = paratrooper
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
    # #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7011 }
	name = "15th Air Army"
	location = 197 # Riga
	base = 197 # Riga

	division = {
	id = { type = 10848 id = 7012 }
		name = "53rd Guards 'Stalingrad' APIB"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7013 }
		name = "327th APIB"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7014 }
		name = "899th APIB"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	#################################
	# Baltic Military District     #
	################################
    # #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7015 }
	name = "26th Air Army"
	location = 209 # Grodno
	base = 209 # Grodno

	division = {
	id = { type = 10848 id = 7016 }
		name = "1st Guards Bomber Aviation Division"
		strength = 100
		type = cas
		model = 5
			}
	division = {
	id = { type = 10848 id = 7017 }
		name = "151st Independent Aviation Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 10848 id = 7018 }
		name = "10th Independent Reconnaissance Aviation Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	}
	airunit = {
	id = { type = 10848 id = 7019 }
	name = "26th Air Army"
	location = 212 # Minsk
	base = 212 # Minsk

	division = {
	id = { type = 10848 id = 7020 }
		name = "50th Independent Mixed Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7021 }
		name = "61st Fighter Aviation Regiment PVO"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7022 }
		name = "201st Fighter Aviation Regiment PVO"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	airunit = {
	id = { type = 10848 id = 7023 }
	name = "26th Air Army"
	location = 503 # Brest Litovsk
	base = 503 # Brest Litovsk

	division = {
	id = { type = 10848 id = 7024 }
		name = "927th Fighter Aviation Regiment"
		strength = 100
		type = cas
		model = 5
			}
	division = {
	id = { type = 10848 id = 7025 }
		name = "378th Independent Assault Aviation Regiment"
		strength = 100
		type = cas
		model = 5
			}
	}
	################################
	# Carpathian Military District #
	################################
	landunit =
   {  id       = {  type = 10848 id = 59  } 				#Zhytomir
     name     = "8th Guards Tank Army"
     location = 227
     Division =
     {  id    = {  type = 10848 id = 60  }
       name  = "23rd Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 61  }
       name  = "30th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 62  } 				#Rowne
     name     = "13th Red Banner Army"
     location = 502
     Division =
     {  id    = {  type = 10848 id = 63  }
       name  = "17th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 64  }
       name  = "51st Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 65  }
       name  = "97th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 66  }
       name  = "161st Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 67  } 				#Tarnopol
     name     = "38th Army"
     location = 240
     Division =
     {  id    = {  type = 10848 id = 68  }
       name  = "70th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 69  }
       name  = "128th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 70  }
       name  = "287th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 71  } 				#Tarnopol
     name     = "66th Artillery Corps"
     location = 229
     Division =
     {  id    = {  type = 10848 id = 72  }
       name  = "26th Artillery Division"
       type     = infantry
       model    = 5
       strength = 100
	   extra    = artillery
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 73  }
       name  = "81st Artillery Division"
       type     = infantry
       model    = 5
       strength = 100
	   extra    = artillery
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 74  } 				#Lwow
     name     = "District Troops"
     location = 501
     Division =
     {  id    = {  type = 10848 id = 75  }
       name  = "24th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 76  }
       name  = "66th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 77  }
       name  = "117th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	############################
	# Odessa Military District #
	############################
	landunit =
   {  id       = {  type = 10848 id = 78  } 				#Odessa
     name     = "14th Guards Army"
     location = 233
     Division =
     {  id    = {  type = 10848 id = 79  }
       name  = "28th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 80  }
       name  = "180th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 81  } 				#Tiraspol
     name     = "14th Guards Army"
     location = 1571
     Division =
     {  id    = {  type = 10848 id = 82 }
       name  = "59th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 83  } 				#Balti
     name     = "14th Guards Army"
     location = 230
     Division =
     {  id    = {  type = 10848 id = 84  }
       name  = "86th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 85  } 				#Simfropol
     name     = "32nd Army Corps 'Koenigsberger'"
     location = 155
     Division =
     {  id    = {  type = 10848 id = 86  }
       name  = "126th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 87  }
       name  = "157th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 88  } 				#Nikolayev
     name     = "District Troops"
     location = 234
     Division =
     {  id    = {  type = 10848 id = 89  }
       name  = "92nd Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 90  }
       name  = "98th Guards Airborne Division"
       type     = paratrooper
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	##########################
	# Kiev Military District #
	##########################
	landunit =
   {  id       = {  type = 10848 id = 91  } 				#Krivoy Rog
     name     = "6th Guards Tank Army"
     location = 235
     Division =
     {  id    = {  type = 10848 id = 92  }
       name  = "17th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 93  }
       name  = "42nd Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 94  }
       name  = "75th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 95  } 				#Chernigov
     name     = "1st Guards Army"
     location = 241
     Division =
     {  id    = {  type = 10848 id = 96  }
       name  = "25th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 97  }
       name  = "41st Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 98  }
       name  = "72nd Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 99  }
       name  = "136th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 100  } 				#Konotop
     name     = "1st Guards Army"
     location = 242
     Division =
     {  id    = {  type = 10848 id = 101  }
       name  = "172nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 102  } 				#Stalino
     name     = "1st Guards Army"
     location = 260
     Division =
     {  id    = {  type = 10848 id = 103  }
       name  = "36th Motor Rifle Divisions"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 104  }
       name  = "48th Motor Rifle Divisions"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 105  } 				#Chernigov
     name     = "48th Guards Tank Division"
     location = 241
     Division =
     {  id    = {  type = 10848 id = 106  }
       name  = "48th Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7026 }
	name = "5th Air Army"
	location = 233 # Odessa
	base = 233 # Odessa

	division = {
	id = { type = 10848 id = 7027 }
		name = "29th Independent Regiment"
		strength = 100
		type = cas
		model = 5
			}
	division = {
	id = { type = 10848 id = 7028 }
		name = "90th Independent Assault Aviation Regiment"
		strength = 100
		type = cas
		model = 5
			}
	division = {
	id = { type = 10848 id = 7029 }
		name = "190th Independent Fighter-Bomber Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7030 }
		name = "290th Independent Assault Aviation Regiment"
		strength = 100
		type = cas
		model = 5
			}
	division = {
	id = { type = 10848 id = 7031 }
		name = "2642nd Guards Independent Fighter-Bomber Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7032 }
		name = "827th Independent Reconnaissance Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	}
	airunit = {
	id = { type = 10848 id = 7033 }
	name = "119th Fighter Aviation Division"
	location = 1571 # Tiraspol
	base = 1571 # Tiraspol

	division = {
	id = { type = 10848 id = 7034 }
		name = "86th Guards Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7035 }
		name = "161st Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7036 }
		name = "684th Guards Orshanskiy Red Banner Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	###############################
	# Leningrad Military District #
	###############################
	landunit =
   {  id       = {  type = 10848 id = 107  } 				#Kandalaska
     name     = "6th Army"
     location = 135 #Kandalaska
     Division =
     {  id    = {  type = 10848 id = 108  }
       name  = "37th Motor Rfle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 109  } 				#Murmansk
     name     = "6th Army"
     location = 133 #Murmansk
	  Division =
     {  id    = {  type = 10848 id = 110  }
       name  = "54th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra	= b_01
	   brigade_model	= 3
      }
	  Division =
     {  id    = {  type = 10848 id = 111  }
       name  = "131st Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra	= engineer
	   brigade_model	= 5
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 112  } 				#Petrozavodsk
     name     = "6th Army"
     location = 152 #Petrozavodsk
	  Division =
     {  id    = {  type = 10848 id = 113  }
       name  = "71st Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 114  } 				#Sorvatala
     name     = "6th Army"
     location = 146 #Sorvatala
	  Division =
     {  id    = {  type = 10848 id = 115  }					#Colocar Brigada de Helicópteros
       name  = "111th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 116  } 				#Leningrad
     name     = "30th Guards Army Corps"
     location = 187 #Leningrad
	  Division =
     {  id    = {  type = 10848 id = 117  }
       name  = "45th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 118  }
       name  = "63rd Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 119  }
       name  = "64th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	  Division =
     {  id    = {  type = 10848 id = 120  }
       name  = "146th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 121  } 				#Vologda
     name     = "26th Army Corps"
     location = 171 #Vologda
	  Division =
     {  id    = {  type = 10848 id = 122  }
       name  = "69th 'Sevskaya' Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 123  } 				#Archangelsk
     name     = "26th Army Corps"
     location = 154 #Archangelsk
	  Division =
     {  id    = {  type = 10848 id = 124  }
       name  = "77th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 125  } 				#Novgorod
     name     = "Leningrad Military District"
     location = 200 #Novgorod
	  Division =
     {  id    = {  type = 10848 id = 126  }
       name  = "115th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7037 }
	name = "27th Corps of the PVO"
	location = 510 # Kaliningrad
	base = 510 # Kaliningrad

	division = {
	id = { type = 10848 id = 7038 }
		name = "689th Guards Fighter Aviation Regiment PVO"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	airunit = {
	id = { type = 10848 id = 7039 }
	name = "27th Corps of the PVO"
	location = 198 # Valmiera
	base = 198 # Valmiera

	division = {
	id = { type = 10848 id = 7040 }
		name = "54th Guards Fighter Aviation Regiment PVO"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	airunit = {
	id = { type = 10848 id = 7041 }
	name = "76th Air Army"
	location = 201 # Pskov
	base = 201 # Pskov

	division = {
	id = { type = 10848 id = 7042 }
		name = "67th Bomber Aviation Regiments"
		strength = 100
		type = cas
		model = 5
			}
	division = {
	id = { type = 10848 id = 7043 }
		name = "722nd Bomber Aviation Regiments"
		strength = 100
		type = cas
		model = 5
			}
	}
	airunit = {
	id = { type = 10848 id = 7044 }
	name = "76th Air Army"
	location = 133 # Murmansk
	base = 133 # Murmansk

	division = {
	id = { type = 10848 id = 7045 }
		name = " 98th Guards Independent Reconnaissance Aviation Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	}
	airunit = {
	id = { type = 10848 id = 7046 }
	name = "76th Air Army"
	location = 187 # Leningrad
	base = 187 # Leningrad

	division = {
	id = { type = 10848 id = 7047 }
		name = "138th Composite Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	##############################
	# Siberian Military District #
	##############################
	landunit =
   {  id       = {  type = 10848 id = 127  } 				#Biysk
     name     = "33rd Army Corps"
     location = 1544 #Biysk
     Division =
     {  id    = {  type = 10848 id = 128  }
       name  = "13th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 129  }
       name  = "62nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 130  } 				#Omsk
     name     = "Siberian Military District"
     location = 1552 #Omsk
     Division =
     {  id    = {  type = 10848 id = 131  }
       name  = "56th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 132  } 				#Kürshin
     name     = "Siberian Military District"
     location = 6969 #Kürshin
     Division =
     {  id    = {  type = 10848 id = 133  }
       name  = "74th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 134  } 				#Novosibirsk
     name     = "Siberian Military District"
     location = 1543 #Novosibirsk
     Division =
     {  id    = {  type = 10848 id = 135  }
       name  = "85th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 136  }
       name  = "67th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 137  }
       name  = "68th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 138  } 				#Abakan
     name     = "Siberian Military District"
     location = 1561 #Abakan
     Division =
     {  id    = {  type = 10848 id = 139  }
       name  = "218th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 140  } 				#Abakan
     name     = "33rd Army Corps"
     location = 1561 #Abakan
     Division =
     {  id    = {  type = 10848 id = 141  }
       name  = "242nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	#################################
	# Transbaikal Military District #
	#################################
	landunit =
   {  id       = {  type = 10848 id = 142  } 				#Chita
     name     = "Transbaikal Military District"
     location = 1520 #Chita
     Division =
     {  id    = {  type = 10848 id = 143  }
       name  = "9th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 144  }
       name  = "105th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 145  }
       name  = "11th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 146  }
       name  = "49th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 147  }
       name  = "5th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 148  } 				#Borzya
     name     = "Transbaikal Military District"
     location = 1384 #Borzya
     Division =
     {  id    = {  type = 10848 id = 149  }
       name  = "38th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 150  }
       name  = "122nd Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 151  }
       name  = "150th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 152  } 				#Irkutsk
     name     = "Transbaikal Military District"
     location = 1414 #Irkutsk
     Division =
     {  id    = {  type = 10848 id = 153  }
       name  = "52nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 154  } 				#Bratsk
     name     = "Transbaikal Military District"
     location = 1417 #Bratsk
     Division =
     {  id    = {  type = 10848 id = 155  }
       name  = "91st Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 156  } 				#Chita
     name     = "29th Army"
     location = 1520 #Chita
     Division =
     {  id    = {  type = 10848 id = 157  }
       name  = "245th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7048 }
	name = "14th Air Army"
	location = 1552 # Omsk
	base = 1552 # Omsk

	division = {
	id = { type = 10848 id = 7049 }
		name = "64th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7050 }
		name = "356th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	airunit = {
	id = { type = 10848 id = 7051 }
	name = "14th Air Army"
	location = 1417 # Bratsk
	base = 1417 # Bratsk

	division = {
	id = { type = 10848 id = 7052 }
		name = "350th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7053 }
		name = "712th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	airunit = {
	id = { type = 10848 id = 7054 }
	name = "14th Air Army"
	location = 1543 #Novosibirsk
	base = 1543 #Novosibirsk

	division = {
	id = { type = 10848 id = 7055 }
		name = "849th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	###################################
	# Central Asian Military District #
	###################################
	landunit =
   {  id       = {  type = 10848 id = 158  } 				#Kabul
     name     = "40th Army"
     location = 1493 #Kabul
	 Division =
     {  id    = {  type = 10848 id = 160  }
       name  = "103rd Guards Airborne Division"
       type     = paratrooper
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 238  } 				#Ghurian
     name     = "40th Army"
     location = 5386 #Ghurian
	Division =
     {  id    = {  type = 10848 id = 239  }
       name  = "5th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 }
	 landunit =
   {  id       = {  type = 10848 id = 240  } 				#Charikar
     name     = "40th Army"
     location = 5398 #Charikar
	 Division =
     {  id    = {  type = 10848 id = 241  }
       name  = "108th Motor Rifle Division	"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 }
	 landunit =
   {  id       = {  type = 10848 id = 242  } 				#Baglan
     name     = "40th Army"
     location = 1484 #Baglan
	 Division =
     {  id    = {  type = 10848 id = 243  }
       name  = "201st Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 }
	landunit =
   {  id       = {  type = 10848 id = 163  } 				#Ashkhabad
     name     = "36th Army Corps"
     location = 1490 #Ashkhabad
     Division =
     {  id    = {  type = 10848 id = 164  }
       name  = "58th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 165  }
       name  = "84th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 166  }
       name  = "88th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 167  }
       name  = "61st Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 168  } 				#Samarkand
     name     = "District Troops"
     location = 1488 #Samarkand
     Division =
     {  id    = {  type = 10848 id = 169  }
       name  = "4th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7056 }
	name = "12th Army of the PVO"
	location = 1427 # Tashkent
	base = 1427 # Tashkent

	division = {
	id = { type = 10848 id = 7057 }
		name = "9th Guards Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7058 }
		name = "152nd Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	airunit = {
	id = { type = 10848 id = 7059 }
	name = "356th Fighter Aviation Regiment"
	location = 1417 # Bratsk
	base = 1417 # Bratsk

	division = {
	id = { type = 10848 id = 7060 }
		name = "179th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7061 }
		name = "712th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	}
	#################################
	# Far Eastern Military District #
	#################################
	landunit =
   {  id       = {  type = 10848 id = 170  } 				#Khabarovsk
     name     = "5th Army"
     location = 1366 #Khabarovsk
     Division =
     {  id    = {  type = 10848 id = 171  }
       name  = "7th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 172  }
       name  = "47th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 173  }
       name  = "81st Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 174  }
       name  = "123rd Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 175  }
       name  = "129th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 176  }
       name  = "199th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 177  }
       name  = "219th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 178  }
       name  = "265th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 179  }
       name  = "277th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 180  }
       name  = "27th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 181  }
       name  = "77th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 182  } 				#Dolinsk(Toyohara)
     name     = "Far Eastern Military District"
     location = 1176 #Dolinsk(Toyohara)
     Division =
     {  id    = {  type = 10848 id = 183  }
       name  = "22nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 184  } 				#Vorosilov
     name     = "Far Eastern Military District"
     location = 1369 #Nikolsk-Ussuriysky
     Division =
     {  id    = {  type = 10848 id = 185  }
       name  = "29th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 186  }
       name  = "33rd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 187  } 				#Ruhlovo
     name     = "35th Army"
     location = 3542 #Ruhlovo
     Division =
     {  id    = {  type = 10848 id = 188  }
       name  = "67th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 189  }
       name  = "266th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 190  } 				#Dolinsk(Toyohara)
     name     = "51st Army"
     location = 1176 #Dolinsk(Toyohara)
     Division =
     {  id    = {  type = 10848 id = 191  }
       name  = "79th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 192  } 				#Petropavlovsk
     name     = "25th Army Corps"
     location = 1172 #Petropavlovsk
     Division =
     {  id    = {  type = 10848 id = 193  }
       name  = "87th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 194  } 				#Novo-Mariinsk
     name     = "25th Army Corps"
     location = 1170 #Novo-Mariinsk
     Division =
     {  id    = {  type = 10848 id = 195  }
       name  = "99th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 196  } 				#Birobidzhan
     name     = "43rd Army Corps"
     location = 1528 #Birobidzhan
     Division =
     {  id    = {  type = 10848 id = 197  }
       name  = "118th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 198  } 				#Lesozavodsk
     name     = "15th Army"
     location = 1175 #Lesozavodsk
     Division =
     {  id    = {  type = 10848 id = 199  }
       name  = "135th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 200  } 				#Blagoveshchensk
     name     = "35th Army"
     location = 1525 #Blagoveshchensk
     Division =
     {  id    = {  type = 10848 id = 201  }
       name  = "192nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 202  }
       name  = "21st Guards Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 203  } 				#Khabarovsk
     name     = "15th Army"
     location = 1366 #Khabarovsk
     Division =
     {  id    = {  type = 10848 id = 204  }
       name  = "194th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 205  }
       name  = "270th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 206  } 				#Khabarovsk
     name     = "35th Army"
     location = 1366 #Khabarovsk
     Division =
     {  id    = {  type = 10848 id = 207  }
       name  = "262nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 208  } 				#Kuybychevka-Vostochnaya
     name     = "43rd Army Corps"
     location = 1526 #Kuybychevka-Vostochnaya
     Division =
     {  id    = {  type = 10848 id = 209  }
       name  = "272nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	####################################
	# Transcaucasian Military District #
	####################################
	landunit =
   {  id       = {  type = 10848 id = 210  } 				#Baku
     name     = "Vozdushno-Desantnye Vojska"
     location = 1907 #Baku
     Division =
     {  id    = {  type = 10848 id = 211  }
       name  = "104th Guards Airborne Division"
       type     = paratrooper
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 212  } 				#Baku
	 name     = "4th Army"
     location = 1907 #Baku
	 Division =
     {  id    = {  type = 10848 id = 213  }
       name  = "23rd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 214  }
       name  = "60th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 215  }
       name  = "216th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 216  }
       name  = "295th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 217  } 				#Kutaisi
	 name     = "9th Army"
     location = 1848 #Kutaisi
	 Division =
     {  id    = {  type = 10848 id = 218  }
       name  = "10th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 219  }
       name  = "145th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 220  }
       name  = "147th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 221  }
       name  = "152nd Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 222  } 				#Yerevan
	 name     = "7th Army"
     location = 1856 #Yerevan
	 Division =
     {  id    = {  type = 10848 id = 223  }
       name  = "15th Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 224  }
       name  = "164th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	# #################
    # ### AIR OOB  ####
    # #################
	airunit = {
	id = { type = 10848 id = 7062 }
	name = "34th Air Army"
	location = 1845 # Sukhumi
	base = 1845 # Sukhumi

	division = {
	id = { type = 10848 id = 7063 }
		name = "36th Bomber Aviation Division"
		strength = 100
		type = cas
		model = 5
			}
	division = {
	id = { type = 10848 id = 7064 }
		name = "283rd Fighter Aviation Division"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7065 }
		name = "529th Fighter Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7066 }
		name = "80th Independent Shturmovaya Aviation Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7067 }
		name = "188th Independent Fighter Regiment"
		strength = 100
		type = multi_role
		model = 6
			}
	division = {
	id = { type = 10848 id = 7068 }
		name = "313rd Independent Reconnaissance Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	division = {
	id = { type = 10848 id = 7069 }
		name = "882nd Independent Reconnaissance Regiment"
		strength = 100
		type = interceptor
		model = 4
			}
	}
	############################
	# Moscow Military District #
	############################
	landunit =
   {  id       = {  type = 10848 id = 225  } 				#Moscow
     name     = "13th Guards Army Corps"
     location = 175 #Moscow
     Division =
     {  id    = {  type = 10848 id = 226  }
       name  = "60th Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 227  } 				#Tambov
	 name     = "13th Guards Army Corps "
     location = 156 #Tambov
	 Division =
     {  id    = {  type = 10848 id = 228  }
       name  = "206th Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 229  } 				#Kalinin
	 name     = "District Troops"
     location = 174 #Kalinin
	 Division =
     {  id    = {  type = 10848 id = 230  }
       name  = "2nd Guards 'Taman' Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 231  }
       name  = "32nd Guards Motor Rifle Division"
       type     = motorized
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 232  } 				#Moscow
	 name     = "District Troops"
     location = 175 #Moscow
	 Division =
     {  id    = {  type = 10848 id = 233  }
       name  = "4th Guards Kantimirov Tank Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 234  } 				#Vladimir
	 name     = "District Troops"
     location = 178 #Vladimir
	 Division =
     {  id    = {  type = 10848 id = 235  }
       name  = "26th Guards Tank Training Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 236  } 				#Tula
	 name     = "District Troops"
     location = 1598 #Tula
	 Division =
     {  id    = {  type = 10848 id = 237  }
       name  = "106th Guards Airborne Division"
       type     = armor
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	}
	landunit =
   {  id       = {  type = 10848 id = 9000  } 				#Moscow
	 name     = "Independent Combat Helicopter Regiments"
     location = 175 #Moscow
	 Division =
     {  id    = {  type = 10848 id = 9001  }
       name  = "Attack Helicopter Squadron"
       type     = d_04
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 9002  }
       name  = "Attack Helicopter Squadron"
       type     = d_04
       model    = 5
       strength = 100
	   extra    = b_01
	   brigade_model = 3
      }
	 Division =
     {  id    = {  type = 10848 id = 9003  }
       name  = "Assault Helicopter Squadron"
       type     = d_04
       model    = 5
       strength = 100
      }
	}
	#########################
	# 	   Soviet Navy 		#
	#########################
	#    Black Sea Fleet    #
	#########################	
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5100  }  
		location = 253  
		base     = 253  
		division = {
			id = {  type = 10848 id = 5101  }  
			name = "Sokol"  
			type = light_cruiser #Koni-class
			model = 4
		}
		#division = {	#Decomissioned in 1960.
		#	id = {  type = 10848 id = 5102  }  
		#	name = "Admiral Nakhimov"  
		#	type = heavy_cruiser  
		#	model = 0
		#}
		division = {
			id = {  type = 10848 id = 5103  }  
			name = "Dzerzhinskiy"  
			type = heavy_cruiser  
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5104  }  
			name = "Mikhail Kutuzo"  
			type = heavy_cruiser  
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5105  }  
			name = "Admiral Ushakov"  
			type = heavy_cruiser  
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5106  }  
			name = "Ordzhonikidze"  
			type = heavy_cruiser  
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5107  }  
			name = "Zhdanov"  
			type = heavy_cruiser  
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5108  }  
			name = "Smely"  
			type = destroyer #Kashin-class 
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5110  }  
			name = "Slava"  
			type = heavy_cruiser  
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5111  }  
			name = "Komsomolets Ukrainy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5112  }  
			name = "Krasny Kavkaz"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5113  }  
			name = "Krasny Krym"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5114  }  
			name = "Provornyy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5115  }  
			name = "Reshitelnyy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5116  }  
			name = "Sderzhannyy"  
			type = destroyer #Modified Kashin-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5119  }  
			name = "Gubitelnyy"  
			type = destroyer #Modified Kashin-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5120  }  
			name = "Lovkiy"  
			type = destroyer #Modified Kashin-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5121  }  
			name = "Nadezhnyy"  
			type = destroyer #Modified Kashin-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5122  }  
			name = "Tvyordyy"  
			type = destroyer #Modified Kashin-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5123  }  
			name = "Tolkovyy"  
			type = destroyer #Modified Kashin-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5124  }  
			name = "Azov"  
			type = heavy_cruiser #Kara-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5125  }  
			name = "Kerch"  
			type = heavy_cruiser #Kara-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5126  }  
			name = "Ochakov"  
			type = heavy_cruiser #Kara-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5127  }  
			name = "Ozornoy"  
			type = destroyer #Ognevoy-class (WWII)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5128  }  
			name = "Seriosny"  
			type = destroyer #Skoryy-class
			model = 1
		}
	}
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5200  }  
		location = 253  
		base     = 253 
		division = {
			id = {  type = 10848 id = 5203  }  
			name = "Sovershenny"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5204  }  
			name = "Solidny"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5208  }  
			name = "Naporistyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5209  }  
			name = "Plamennyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5210  }  
			name = "Bedovyy"  
			type = destroyer #Kildin-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5211  }  
			name = "SKR-53"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5212  }  
			name = "SKR-117"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5213  }  
			name = "SKR-6"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5214  }  
			name = "SKR-13"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5215  }  
			name = "SKR-48"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5216  }  
			name = "SKR-84"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5217  }  
			name = "SKR-51"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5218  }  
			name = "SKR-53"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5219  }  
			name = "SKR-57"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5220  }  
			name = "SKR-66"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5221  }  
			name = "SKR-67"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5222  }  
			name = "Volk"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5223  }  
			name = "Voron"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5224  }  
			name = "Gornostay"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5225  }  
			name = "Grizon"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5226  }  
			name = "Korsak"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5227  }  
			name = "Kunitca"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5228  }  
			name = "Pantera"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5229  }  
			name = "Puma"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5230  }  
			name = "Rys"  
			type = destroyer #Riga-class
			model = 0
		}
	}
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5300  }  
		location = 253  
		base     = 253 
		division = {
			id = {  type = 10848 id = 5301  }  
			name = "Sarych"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5302  }  
			name = "SKR-1"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5303  }  
			name = "SKR-40"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5304  }  
			name = "SKR-94"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5305  }  
			name = "SKR-115"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5306  }  
			name = "SKR-17"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5307  }  
			name = "SKR-27"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5308  }  
			name = "SKR-30"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5309  }  
			name = "SKR-110"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5311  }  
			name = "SKR-112"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5312  }  
			name = "Bezzavetnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5313  }  
			name = "Bezukoriznennyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5314  }  
			name = "Deyatelnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5315  }  
			name = "Ladnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5316  }  
			name = "Pytlivyy"  
			type = light_cruiser #Krivak II-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5317  }  
			name = "Razitelnyy"  
			type = light_cruiser #Krivak II-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5318  }  
			name = "SKR-195"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5319  }  
			name = "SKR-201"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5320  }  
			name = "SKR-451"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5321  }  
			name = "SKR-481"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5322  }  
			name = "Delfin"  
			type = light_cruiser #Koni-class
			model = 4
		}
	}
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5400  }  
		location = 253  
		base     = 253 
		division = {
			id = {  type = 10848 id = 5401  }  
			name = "Leningrad"  
			type = battlecruiser
			model = 2
			extra         = b_03 #ASW
			#extra2        = light_cag #HCAG
			brigade_model = 1
			#brigade_model2 = 1			
		}
		division = {
			id = {  type = 10848 id = 5402  }  
			name = "Moskva"
			type = battlecruiser  
			model = 2
			extra         = b_03 #ASW
			#extra2        = light_cag #HCAG
			brigade_model = 1
			#brigade_model2 = 1	
		}
	}
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5500  }  
		location = 253  
		base     = 253 
		division = {
			id = {  type = 10848 id = 5501  }  
			name = "M-204"  
			type = submarine  
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5502  }  
			name = "M-237"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5503  }  
			name = "M-238"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5504  }  
			name = "M-239"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5505  }  
			name = "M-240"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5506  }  
			name = "M-241"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5507  }  
			name = "M-242"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5508  }  
			name = "M-243"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5509  }  
			name = "M-244"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5510  }  
			name = "M-247"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5511  }  
			name = "M-240"  
			type = submarine  
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5512  }  
			name = "M-78"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5513  }  
			name = "M-348"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5514  }  
			name = "M-63"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5515  }  
			name = "M-65"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5516  }  
			name = "M-67"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5517  }  
			name = "M-69"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5518  }  
			name = "M-70"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5519  }  
			name = "M-72"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5520  }  
			name = "M-74"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5521  }  
			name = "M-76"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5522  }  
			name = "M-89"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5523  }  
			name = "M-96"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5524  }  
			name = "M-97"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5525  }  
			name = "M-100"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5526  }  
			name = "M-151"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5527  }  
			name = "M-229"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5528  }  
			name = "M-230"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5529  }  
			name = "M-233"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5530  }  
			name = "M-234"  
			type = submarine #Whiskey-class
			model = 4
		}
	}
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5600  }  
		location = 253  
		base     = 253
		division = {
			id = {  type = 10848 id = 5601  }  
			name = "M-243"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5602  }  
			name = "M-244"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5603  }  
			name = "M-245"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5604  }  
			name = "M-246"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5605  }  
			name = "M-339"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5606  }  
			name = "M-379"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5607  }  
			name = "M-383"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5608  }  
			name = "M-46"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5609  }  
			name = "M-147"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5610  }  
			name = "M-157"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5611  }  
			name = "M-158"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5612  }  
			name = "M-162"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5613  }  
			name = "M-164"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5614  }  
			name = "M-165"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5615  }  
			name = "M-172"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5616  }  
			name = "M-185"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5617  }  
			name = "M-186"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5618  }  
			name = "M-197"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5619  }  
			name = "M-199"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5620  }  
			name = "M-232"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5621  }  
			name = "M-274"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5622  }  
			name = "M-282"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5623  }  
			name = "M-283"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5624  }  
			name = "M-284"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5625  }  
			name = "M-287"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5626  }  
			name = "M-289"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5627  }  
			name = "M-338"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5628  }  
			name = "M-344"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5629  }  
			name = "M-346"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5630  }  
			name = "M-376"  
			type = submarine #Whiskey-class
			model = 4
		}
	}
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5700  }  
		location = 253  
		base     = 253
		division = {
			id = {  type = 10848 id = 5701  }  
			name = "M-377"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5702  }  
			name = "M-382"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5703  }  
			name = "M-149"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5704  }  
			name = "M-353"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5705  }  
			name = "M-269"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5706  }  
			name = "M-295"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5707  }  
			name = "M-297"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5708  }  
			name = "M-298"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5709  }  
			name = "M-299"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5710  }  
			name = "M-300"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5711  }  
			name = "M-351"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5712  }  
			name = "B-153"  
			type = submarine #Whale-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5713  }  
			name = "S-36"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5714  }  
			name = "S-37"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5715  }  
			name = "S-38"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5716  }  
			name = "S-53"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5717  }  
			name = "S-128"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5718  }  
			name = "S-212"  
			type = submarine #Romeo-class
			model = 4
		}
	}
	navalunit =  {
		name = "Black Sea Fleet"  
		id = {  type = 10848 id = 5800  }  
		location = 253  
		base     = 253
		division = {
			id = {  type = 10848 id = 5801  }  
			name = "B-177"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5802  }  
			name = "B-459"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5803  }  
			name = "B-471"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5804  }  
			name = "B-800"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5805  }  
			name = "B-801"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5806  }  
			name = "B-871"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5807  }  
			name = "B-36"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5808  }  
			name = "B-116"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5809  }  
			name = "B-498"  
			type = submarine #Tango-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5810  }  
			name = "B-380"  
			type = submarine #Tango-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5811  }  
			name = "K-67"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5812  }  
			name = "K-318"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5813  }  
			name = "S-226"  
			type = submarine #Bravo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5814  }  
			name = "B-177"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5815  }  
			name = "B-459"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5816  }  
			name = "B-471"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5817  }  
			name = "B-800"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5818  }  
			name = "B-801"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5819  }  
			name = "B-871"  
			type = submarine #Kilo-class
			model = 5
		}
	}
	#########################
	#    Northern Fleet     #
	#########################
	navalunit =  {
		name = "Northern Fleet"  
		id = {  type = 10848 id = 5900  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 5901  }  
			name = "Kiev"  
			type = battleship #Kiev-class (Aircraft Cruiser)
			model = 0
			#extra         = light_cag #HCAG
			#brigade_model = 1
			extra2         = b_08 #VTOL
			brigade_model2 = 1
		}
		division = {
			id = {  type = 10848 id = 5902  }  
			name = "Baku"  
			type = battleship #Kiev-class (Aircraft Cruiser)
			model = 1
			#extra         = light_cag #HCAG
			#brigade_model = 1
			extra2         = b_08 #VTOL
			brigade_model2 = 1
		}
		division = {
			id = {  type = 10848 id = 5903  }  
			name = "Alexandr Nevskiy"  
			type = heavy_cruiser #Sverdlov-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5904  }  
			name = "Murmansk"  
			type = heavy_cruiser #Sverdlov-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5905  }  
			name = "Admiral Zozulya"  
			type = heavy_cruiser #Kresta I-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5906  }  
			name = "Kirov"  
			type = d_12 #Kirov-class (Nuclear Cruiser)
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5907  }  
			name = "Kalinin"  
			type = d_12 #Kirov-class (Nuclear Cruiser)
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5908  }  
			name = "Pyotr Veliky"  
			type = d_12 #Kirov-class (Nuclear Cruiser)
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5909  }
			name = "Admiral flota Lobov"	#Change name to Marshal Ustinov on 23/03/1985
			type = heavy_cruiser #Slava-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5910  }  
			name = "Ognevoy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5911  }  
			name = "Soobrazitelnyy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5912  }  
			name = "Smyshlenyy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5913  }  
			name = "Stroynyy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5914  }  
			name = "Admiral Isakov"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5915  }  
			name = "Admiral Isachenkov"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5916  }  
			name = "Admiral Makarov"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5917  }  
			name = "Admiral Nakhimov"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5918  }  
			name = "Admiral Yumashev"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5919  }  
			name = "Kronshtadt"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5920  }  
			name = "Marshal Timoshenko"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5921  }  
			name = "Admiral Kharlamov"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5922  }  
			name = "Admiral Chabanenko"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5923  }  
			name = "Vice-Admiral Kulakov"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5924  }  
			name = "Marshal Vasilevskiy"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5925  }  
			name = "Admiral Kharlamov"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5926  }  
			name = "Simferopol"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5927  }  
			name = "Udaloy"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5928  }  
			name = "Admiral Levchenko"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5929  }  
			name = "Okhranyayuschiy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5930  }  
			name = "Spokoynyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
	}
	navalunit =  {
		name = "Northern Fleet"  
		id = {  type = 10848 id = 6000  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6001  }  
			name = "Byvalvyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6002  }  
			name = "Smyshlenyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6003  }  
			name = "Nesokrushimyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6004  }  
			name = "Gremyashchiy"  
			type = destroyer #Kanin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6005  }  
			name = "Derzkiy"  
			type = destroyer #Kanin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6006  }  
			name = "Zhguchiy"  
			type = destroyer #Kanin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6007  }  
			name = "Bezuderzhnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6008  }  
			name = "Bezuprechnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6009  }  
			name = "Besstrashnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6010  }  
			name = "Veduschiy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6011  }  
			name = "Okrylyonnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6012  }  
			name = "Otlichnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6013  }  
			name = "Otchayannyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6014  }  
			name = "Rastoropnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6015  }  
			name = "Sovremennyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 6016  }  
			name = "Sokol"  
			type = light_cruiser #Kola-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6017  }  
			name = "SKR-60"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6018  }  
			name = "SKR-58"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6019  }  
			name = "SKR-63"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6020  }  
			name = "SKR-70"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6021  }  
			name = "SKR-71"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6022  }  
			name = "SKR-72"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6023  }  
			name = "SKR-76"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6024  }  
			name = "SKR-80"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6025  }  
			name = "SKR-81"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6026  }  
			name = "SKR-17"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6027  }  
			name = "SKR-22"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6028  }  
			name = "SKR-26"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6029  }  
			name = "SKR-33"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6030  }  
			name = "SKR-34"  
			type = light_cruiser #Petya-class
			model = 0
		}
	}
	navalunit =  {
		name = "Northern Fleet"  
		id = {  type = 10848 id = 5931  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 5932  }  
			name = "Grozny"  
			type = heavy_cruiser #Kynda-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5933  }  
			name = "Admiral Golovko"  
			type = heavy_cruiser #Kynda-class
			model = 1
		}
	}
	navalunit =  {
		name = "Northern Frigate Fleet"  
		id = {  type = 10848 id = 6100  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6101  }  
			name = "SKR-9"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6102  }  
			name = "SKR-106"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6103  }  
			name = "SKR-29"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6104  }  
			name = "SKR-47"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6105  }  
			name = "SKR-98"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6106  }  
			name = "SKR-103"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6107  }  
			name = "SKR-120"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6108  }  
			name = "SKR-123"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6109  }  
			name = "SKR-126"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6110  }  
			name = "Bessmennyy"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6111  }  
			name = "Gromkiy"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6112  }  
			name = "Doblestnyy"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6113  }  
			name = "Dostoynyy"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6114  }  
			name = "Zharkiy"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6115  }  
			name = "Zadornyy"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6116  }  
			name = "Leningradskiy Komsomolets"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6117  }  
			name = "Rezvyy"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6118  }  
			name = "SKR-126"  
			type = light_cruiser #Krivak-class (in game Petya)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6119  }  
			name = "Norka"  
			type = light_cruiser #Riga-class (in game Petya)
			model = 0
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6200  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6201  }  
			name = "K-3"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6202  }  
			name = "K-5"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6203  }  
			name = "K-11"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6204  }  
			name = "K-21"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6205  }  
			name = "K-50"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6206  }  
			name = "K-52"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6207  }  
			name = "K-159"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6208  }  
			name = "K-181"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6209  }  
			name = "K-27"  
			type = nuclear_submarine #Project 645
			model = 1
		}
		division = {
			id = {  type = 10848 id = 6210  }  
			name = "K-16"  
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6211  }  
			name = "K-19"  
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6212  }  
			name = "K-33"  
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6213  }  
			name = "K-40"  
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6214  }  
			name = "K-145"  
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6215  }  
			name = "K-149"  
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6216  }  
			name = "K-222"  
			type = nuclear_submarine #Papa-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6217  }  
			name = "K-26"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6218  }  
			name = "K-32"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6219  }  
			name = "K-137"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6220  }  
			name = "K-140"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6221  }  
			name = "K-207"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6222  }  
			name = "K-210"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6223  }  
			name = "K-214"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6224  }  
			name = "K-216"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6225  }  
			name = "K-219"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6226  }  
			name = "K-228"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6227  }  
			name = "K-241"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6228  }  
			name = "K-245"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6229  }  
			name = "K-249"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6230  }  
			name = "K-253"  
			type = d_11 #Yankee-class
			model = 2
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6300  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6301  }  
			name = "K-395"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6302  }  
			name = "K-403"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6303  }  
			name = "K-411"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6304  }  
			name = "K-418"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6305  }  
			name = "K-420"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6306  }  
			name = "K-423"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6307  }  
			name = "K-426"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6308  }  
			name = "K-444"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6309  }  
			name = "K-279"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6310  }  
			name = "K-385"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6311  }  
			name = "K-447"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6312  }  
			name = "K-450"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6313  }  
			name = "K-457"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6314  }  
			name = "K-460"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6315  }  
			name = "K-465"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6316  }  
			name = "K-472"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6317  }  
			name = "K-475"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6318  }  
			name = "K-92"  
			type = d_11 #Delta II-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6319  }  
			name = "K-182"  
			type = d_11 #Delta II-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6320  }  
			name = "K-193"  
			type = d_11 #Delta II-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6321  }  
			name = "K-421"  
			type = d_11 #Delta II-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6322  }  
			name = "K-44"  
			type = d_11 #Delta III-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6323  }  
			name = "K-129"  
			type = d_11 #Delta III-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6324  }  
			name = "K-424"  
			type = d_11 #Delta III-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6325  }  
			name = "K-441"  
			type = d_11 #Delta III-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6326  }  
			name = "K-449"  
			type = d_11 #Delta III-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6327  }  
			name = "K-487"  
			type = d_11 #Delta III-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6328  }  
			name = "K-496"  
			type = d_11 #Delta III-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6329  }  
			name = "K-18"  
			type = d_11 #Delta IV-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6330  }  
			name = "K-51"  
			type = d_11 #Delta IV-class (in game Hotel-class)
			model = 0
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6400  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6401  }  
			name = "K-64"  
			type = d_11 #Delta IV-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6402  }  
			name = "K-84"  
			type = d_11 #Delta IV-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6403  }  
			name = "K-114"  
			type = d_11 #Delta IV-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6404  }  
			name = "K-117"  
			type = d_11 #Delta IV-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6405  }  
			name = "K-407"  
			type = d_11 #Delta IV-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 6406  }  
			name = "K-302"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6407  }  
			name = "K-308"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6408  }  
			name = "K-313"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6409  }  
			name = "K-209"  
			type = nuclear_submarine #Charlie II-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6410  }  
			name = "K-452"  
			type = nuclear_submarine #Charlie II-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6411  }  
			name = "K-458"  
			type = nuclear_submarine #Charlie II-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6412  }  
			name = "K-479"  
			type = nuclear_submarine #Charlie II-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6413  }  
			name = "K-503"  
			type = nuclear_submarine #Charlie II-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6414  }  
			name = "K-508"  
			type = nuclear_submarine #Charlie II-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6415  }  
			name = "K-38"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6416  }  
			name = "K-53"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6417  }  
			name = "K-69"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6418  }  
			name = "K-147"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6419  }  
			name = "K-306"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6420  }  
			name = "K-323"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6421  }  
			name = "K-367"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6422  }  
			name = "K-370"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6423  }  
			name = "K-398"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6424  }  
			name = "K-438"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6425  }  
			name = "K-462"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6426  }  
			name = "K-481"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6427  }  
			name = "K-371"  
			type = nuclear_submarine #Victor II-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6428  }  
			name = "K-387"  
			type = nuclear_submarine #Victor II-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6429  }  
			name = "K-467"  
			type = nuclear_submarine #Victor II-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6430  }  
			name = "K-488"  
			type = nuclear_submarine #Victor II-class
			model = 4
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6500  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6501  }  
			name = "K-495"  
			type = nuclear_submarine #Victor II-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6502  }  
			name = "K-513"  
			type = nuclear_submarine #Victor II-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6503  }  
			name = "K-517"  
			type = nuclear_submarine #Victor II-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6504  }  
			name = "K-138"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6505  }  
			name = "K-218"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6506  }  
			name = "K-244"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6507  }  
			name = "K-254"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6508  }  
			name = "K-292"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6509  }  
			name = "K-298"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6510  }  
			name = "K-299"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6511  }  
			name = "K-358"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6512  }  
			name = "K-388"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6513  }  
			name = "K-414"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6514  }  
			name = "K-448"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6515  }  
			name = "K-502"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6516  }  
			name = "K-524"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6517  }  
			name = "K-527"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6518  }  
			name = "K-255"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6519  }  
			name = "K-324"  
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6520  }  
			name = "K-1"  
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6521  }  
			name = "K-22"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6522  }  
			name = "K-28"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6523  }  
			name = "K-35"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6524  }  
			name = "K-47"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6525  }  
			name = "K-74"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6526  }  
			name = "K-90" 
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6527  }  
			name = "K-104"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6528  }  
			name = "K-125"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6529  }  
			name = "K-128"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6530  }  
			name = "K-131"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6600  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6601  }  
			name = "K-135"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6602  }  
			name = "K-166"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6603  }  
			name = "K-170"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6604  }  
			name = "K-172"
			type = nuclear_submarine #Echo II-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6605  }  
			name = "K-278"
			type = nuclear_submarine #Mike-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6606  }  
			name = "K-123"
			type = nuclear_submarine #Alfa-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6607  }  
			name = "K-316"
			type = nuclear_submarine #Alfa-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6608  }  
			name = "K-373"
			type = nuclear_submarine #Alfa-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6609  }  
			name = "K-432"
			type = nuclear_submarine #Alfa-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6610  }  
			name = "K-463"
			type = nuclear_submarine #Alfa-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6611  }  
			name = "K-493"
			type = nuclear_submarine #Alfa-class (in game Echo I-class)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 6612  }  
			name = "TK-208"
			type = d_11 #Typhoon-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6613  }  
			name = "TK-202"
			type = d_11 #Typhoon-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6614  }  
			name = "TK-12"
			type = d_11 #Typhoon-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6615  }  
			name = "K-239"
			type = nuclear_submarine #Sierra I-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6616  }  
			name = "TK-525"
			type = d_11 #Oscar I&II-class (in game Typhoon-class)
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6617  }  
			name = "K-206"
			type = d_11 #Oscar I&II-class (in game Typhoon-class)
			model = 3
		}
		division = {
			id = {  type = 10848 id = 6618  }  
			name = "B-64"
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 6619  } #Decomissioned in 1988
			name = "B-75"
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 6620  } #Decomissioned in 1986
			name = "B-77"
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 6621  }
			name = "S-343"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6622  }
			name = "S-43"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6623  }
			name = "S-217"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6624  }
			name = "S-231"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6625  }
			name = "S-281"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6626  }
			name = "S-144"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6627  }
			name = "S-146"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6628  }
			name = "S-148"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6629  }
			name = "S-192"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6630  }
			name = "S-195"
			type = submarine #Whiskey-class
			model = 4
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6700  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6701  }
			name = "SM-81"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6702  }
			name = "S-266"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6703  }
			name = "S-340"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6704  }
			name = "S-342"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6705  }
			name = "S-378"
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6706  }
			name = "BS-107"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6707  }
			name = "B-118"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6708  }
			name = "BS-110"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6709  }
			name = "S-32"
			type = submarine #Romeo-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6710  }
			name = "S-353"
			type = submarine #Romeo-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6711  }
			name = "S-354"
			type = submarine #Romeo-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6712  }
			name = "B-2"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6713  }
			name = "B-4"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6714  }
			name = "B-6"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6715  }
			name = "B-7"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6716  }
			name = "B-25"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6717  }
			name = "B-31"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6718  }
			name = "B-34"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6719  }
			name = "B-38"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6720  }
			name = "B-40"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6721  }
			name = "B-41"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6722  }
			name = "B-46"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6723  }
			name = "B-53"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6724  }
			name = "B-59"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6725  }
			name = "B-94"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6726  }
			name = "B-95"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6727  }
			name = "B-98"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6728  }
			name = "B-103"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6729  }
			name = "B-105"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6730  }
			name = "B-107"
			type = submarine #XXX-class
			model = 5
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6800  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6801  }
			name = "B-109"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6802  }
			name = "B-130"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6803  }
			name = "B-139"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6804  }
			name = "B-153"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6805  }
			name = "B-169"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6806  }
			name = "B-205"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6807  }
			name = "B-409"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6808  }
			name = "B-413"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6809  }
			name = "B-416"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6810  }
			name = "B-440"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6811  }
			name = "B-456"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6812  }
			name = "B-37"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6813  }
			name = "B-156"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6814  }
			name = "B-30"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6815  }
			name = "B-146"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6816  }
			name = "B-319"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6817  }
			name = "B-437"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6818  }
			name = "B-443"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6819  }
			name = "B-498"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6820  }
			name = "B-215"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6821  }
			name = "B-225"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6822  }
			name = "B-312"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6823  }
			name = "B-396"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6824  }
			name = "B-474"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6825  }
			name = "B-515"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6826  }
			name = "B-519"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6827  }
			name = "B-546"
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 6828  }  
			name = "K-58"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6829  }
			name = "K-68"
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6830  }
			name = "K-156"
			type = submarine #Juliett-class
			model = 4
		}
	}
	navalunit =  {
		name = "Northern Submarine Fleet"  
		id = {  type = 10848 id = 6900  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 6901  }
			name = "K-304"
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 6902  }
			name = "B-29"
			type = submarine #XXX-class
			model = 5
		}
	}
	navalunit =  {
		name = "Baltic Fleet"  
		id = {  type = 10848 id = 5000  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 5001  }
			name = "Obraztsovyy"
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5002  }
			name = "Slavnyy"
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5003  }
			name = "SM-132"
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5004  }
			name = "Skoryy"
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5005  }  
			name = "Smetlivy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5006  }  
			name = "Sposobnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5007  }  
			name = "Stepenny"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5008  }  
			name = "Opasnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5009  }  
			name = "Surovyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5010  }  
			name = "Otchayannyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5011  }  
			name = "Nastoychivyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5012  }  
			name = "Svetlyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5013  }  
			name = "Speshnyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5014  }  
			name = "Spravedlivyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5015  }  
			name = "Blagorodnyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5016  }  
			name = "Prozorlivyy"  
			type = destroyer #Kildin-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5017  }  
			name = "Zorkiy"  
			type = destroyer #Kanin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5018  }  
			name = "Bespokoynyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 5019  }  
			name = "Vazhnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 5020  }  
			name = "Vdumchivyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 5021  }  
			name = "Vechnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 5022  }  
			name = "Vnushitelnyy"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 5023  }  
			name = "Moskovskiy Komsomolets"  
			type = destroyer #Sovremenny-class
			model = 7
		}
		division = {
			id = {  type = 10848 id = 5024  }  
			name = "SKR-7"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5025  }  
			name = "SKR-12"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5026  }  
			name = "SKR-19"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5027  }  
			name = "SKR-20"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5028  }  
			name = "SKR-24"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5029  }  
			name = "SKR-32"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5030  }  
			name = "SKR-35"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
	}
	navalunit =  {
		name = "Baltic Fleet"  
		id = {  type = 10848 id = 5031  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 5032  }  
			name = "SKR-39"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5033  }  
			name = "SKR-49"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5034  }  
			name = "SKR-83"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5035  }  
			name = "SKR-86"  
			type = light_cruiser #Mirka-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5036  }  
			name = "SKR-90"  
			type = light_cruiser #Mirka II-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5037  }  
			name = "SKR-5"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5038  }  
			name = "SKR-8"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5039  }  
			name = "SKR-14"
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5040  }  
			name = "SKR-15"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5041  }  
			name = "SKR-64"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5042  }  
			name = "SKR-65"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5043  }  
			name = "SKR-68"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5044  }  
			name = "SKR-69"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5045  }  
			name = "Enot"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5046  }  
			name = "Kobchik"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5047  }  
			name = "Olen`"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5048  }  
			name = "Rosomakha"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5049  }  
			name = "Sobol`"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5050  }  
			name = "Tur"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5051  }  
			name = "Filin"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5052  }  
			name = "SKR-52"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5053  }  
			name = "SKR-38"  
			type = light_cruiser #Petya-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5054  }  
			name = "Bodryy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5055  }  
			name = "Bditelnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5056  }  
			name = "Druzhnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5057  }  
			name = "Neukrotimyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5058  }  
			name = "Svirepyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5059  }  
			name = "Silnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5060  }  
			name = "SKR-35"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5061  }  
			name = "SKR-129"  
			type = light_cruiser #Koni-class
			model = 4
		}
	}
	navalunit =  {
		name = "Baltic Fleet"  
		id = {  type = 10848 id = 5062  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 5063  }  
			name = "SKR-149"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5064  }  
			name = "SKR-471"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5065  }  
			name = "SKR-482"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5066  }  
			name = "Krechet"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5067  }  
			name = "Nerpa"  
			type = light_cruiser #Koni-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5068  }  
			name = "M-206"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5069  }  
			name = "M-215"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5276  }  
			name = "M-235"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5070  }  
			name = "M-245"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5071  }  
			name = "M-246"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5072  }  
			name = "M-270"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5073  }  
			name = "M-279"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5074  }  
			name = "M-290"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5075  }  
			name = "B-81"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5076  }	#Project 613
			name = "S-71"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5077  }  
			name = "S-153"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5078  }  
			name = "S-156"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5079  }  
			name = "S-163"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5080  }  
			name = "S-166"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5081  }  
			name = "S-169"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5082  }  
			name = "S-170"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5083  }  
			name = "S-174"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5084  }  
			name = "S-175"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5085  }  
			name = "S-177"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5086  }  
			name = "S-180"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5087  }  
			name = "M-254"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5088  }  
			name = "S-184"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5089  }  
			name = "M-255"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5090  }  
			name = "S-188"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5091  }  
			name = "S-189"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5092  }  
			name = "S-191"  
			type = submarine #Whiskey-class
			model = 4
		}
	}
	navalunit =  {
		name = "Baltic Submarine Fleet"  
		id = {  type = 10848 id = 5093  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 5094  }  
			name = "S-193"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5095  }  
			name = "S-250"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5096  }  
			name = "S-260"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5097  }  
			name = "S-264"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5098  }  
			name = "S-265"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5099  }  
			name = "S-271"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5131  }  
			name = "S-279"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5132  }  
			name = "S-280"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5133  }  
			name = "S-171"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5134  }  
			name = "S-355"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5135  }  
			name = "S-356"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5136  }  
			name = "S-357"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5137  }  
			name = "S-358"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5138  }  
			name = "S-360"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5139  }  
			name = "S-364"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5140  }  
			name = "S-374"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5141  }  
			name = "M-263"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5142  }  
			name = "S-226"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5143  }  
			name = "S-227"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5144  }  
			name = "S-228"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5145  }  
			name = "S-241"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5146  }  
			name = "S-242"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5147  }  
			name = "S-45"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5148  }  
			name = "S-142"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5149  }  
			name = "S-143"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5150  }  
			name = "S-152"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5151  }  
			name = "S-154"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5152  }  
			name = "S-155"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5153  }  
			name = "S-159"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5154  }  
			name = "S-160"  
			type = submarine #Whiskey-class
			model = 4
		}
	}
	navalunit =  {
		name = "Baltic Submarine Fleet"  
		id = {  type = 10848 id = 5155  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 5156  }  
			name = "S-161"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5157  }  
			name = "S-168"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5158  }  
			name = "S-181"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5159  }  
			name = "S-190"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5160  }  
			name = "S-194"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5161  }  
			name = "S-200"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5162  }  
			name = "S-267"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5163  }  
			name = "S-268"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5164  }  
			name = "S-269"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5165  }  
			name = "S-272"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5166  }  
			name = "S-273"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5167  }  
			name = "S-277"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5168  }  
			name = "S-283"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5169  }  
			name = "S-285"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5170  }  
			name = "S-291"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5171  }  
			name = "M-264"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5172  }  
			name = "S-298"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5173  }  
			name = "S-300"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5174  }  
			name = "S-329"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5175  }  
			name = "S-338"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5176  }  
			name = "S-341"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5177  }  
			name = "S-345"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5178  }  
			name = "S-349"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5179  }  
			name = "S-361"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5180  }  
			name = "S-362"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5181  }  
			name = "S-363"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5182  }  
			name = "S-375"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5183  }  
			name = "S-380"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5184  }  
			name = "S-381"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5185  }  
			name = "S-161"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5186  }  
			name = "M-265"  
			type = submarine #Quebec-class
			model = 4
		}
	}
	navalunit =  {
		name = "Baltic Submarine Fleet"  
		id = {  type = 10848 id = 5187  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 5188  }  
			name = "M-266"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5189  }  
			name = "M-267"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5190  }  
			name = "M-268"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5191  }  
			name = "M-301"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5192  }  
			name = "M-321"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5193  }  
			name = "M-352"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5194  }  
			name = "M-354"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5195  }  
			name = "M-355"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5196  }  
			name = "M-356"  
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5197  }
			name = "B-40"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5198  }
			name = "B-41"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5199  }
			name = "B-45"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5231  }
			name = "B-92"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5232  }
			name = "K-93"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5233  }
			name = "B-142"
			type = submarine #Golf-class (in game Tango-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5234  }  
			name = "S-101"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5235  }  
			name = "S-351"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5236  }  
			name = "S-352"  
			type = submarine #Romeo-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5237  }  
			name = "S-28"  
			type = submarine #Romeo-class
			model = 4
		}
	}
	navalunit =  {
		name = "Baltic Submarine Fleet"  
		id = {  type = 10848 id = 5249  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 5264  }  
			name = "B-311"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5265  }  
			name = "B-330"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5266  }  
			name = "B-533"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5267  }  
			name = "B-587"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5268  }  
			name = "B-588"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5269  }  
			name = "B-590"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5270  }  
			name = "B-49"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5271  }  
			name = "B-57"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5272  }  
			name = "B-400"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5273  }  
			name = "K-24"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5274  }  
			name = "K-81"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5275  } #5276 already used.  
			name = "K-85"  
			type = submarine #Juliett-class
			model = 4
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5330  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5331  }  
			name = "Minsk"  
			type = battleship #Kiev-class
			model = 0
			#extra         = light_cag #HCAG
			#brigade_model = 1
			extra2         = b_08 #VTOL
			brigade_model2 = 1
		}
		division = {
			id = {  type = 10848 id = 5332  }  
			name = "Novorossiysk"  
			type = battleship #Kiev-class
			model = 0
			#extra         = light_cag #HCAG
			#brigade_model = 1
			extra2         = b_08 #VTOL
			brigade_model2 = 1
		}
		division = {
			id = {  type = 10848 id = 5333  }  
			name = "Varyag"  
			type = heavy_cruiser #Kynda-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5334  }  
			name = "Admiral Fokin"  
			type = heavy_cruiser #Kynda-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5335  }  
			name = "Admiral Lazarev"  
			type = heavy_cruiser #Sverdlov-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5336  }  
			name = "Admiral Senyavin"  
			type = heavy_cruiser #Sverdlov-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5337  }  
			name = "Alexandr Suvorov"  
			type = heavy_cruiser #Sverdlov-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5338  }  
			name = "Dmitriy Pozharskiy"  
			type = heavy_cruiser #Sverdlov-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5339  }  
			name = "Frunze"  
			type = d_12 #Kirov-class (Nuclear Cruiser)
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5340  }  
			name = "Sposobny"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5341  }  
			name = "Steregushchy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5342  }  
			name = "Strogiy"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5343  }  
			name = "Odarenny"  
			type = destroyer #Kashin-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5344  }  
			name = "Admiral Oktyabr`skiy"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5345  }  
			name = "Vasiliy Chapaev"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5346  }  
			name = "Marshal Voroshilov"  
			type = heavy_cruiser #Kresta II-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5347  }  
			name = "Petropavlovsk"  
			type = heavy_cruiser #Kara-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5348  }  
			name = "Tallin"  
			type = heavy_cruiser #Kara-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5349  }  
			name = "Tashkent"  
			type = heavy_cruiser #Kara-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5350  }  
			name = "Admiral Vinogradov"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5351  }  
			name = "Admiral Zakharov"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5352  }  
			name = "Admiral Panteleyev"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5353  }  
			name = "Admiral Spiridonov"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5354  }  
			name = "Admiral Tributs"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5355  }  
			name = "Marshal Shaposhnikov"  
			type = heavy_cruiser #Udaloy I-class
			model = 6
		}
		division = {
			id = {  type = 10848 id = 5356  }  
			name = "Besshumnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5357  }  
			name = "Vechnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5358  }  
			name = "Vertkiy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5359  }  
			name = "Vidnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5360  }  
			name = "Vnezapnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5362  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5363  }  
			name = "Vstrechnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5365  }  
			name = "Skrytnyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5366  }  
			name = "Besslednyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5367  }  
			name = "Blestyashchyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5368  }  
			name = "Burlivyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5369  }  
			name = "Vdokhnovennyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5370  }  
			name = "Veskiy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5371  }  
			name = "Vliyatelnyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5372  }  
			name = "Vozbuzhdennyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5373  }  
			name = "Vozmuschennyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5374  }  
			name = "Vyderzhannyy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5375  }  
			name = "Vyzyvayushchiy"  
			type = destroyer #Kotlin-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5376  }  
			name = "SKR-4"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5377  }  
			name = "SKR-10"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5378  }  
			name = "SKR-50"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5379  }  
			name = "SKR-54"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5380  }  
			name = "SKR-55"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5381  }  
			name = "SKR-59"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5382  }  
			name = "SKR-61"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5383  }  
			name = "SKR-62"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5384  }  
			name = "SKR-74"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5385  }  
			name = "SKR-75"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5386  }  
			name = "Los`"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5387  }  
			name = "Lun`"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5388  }  
			name = "Aist"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5389  }  
			name = "Bizon"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5390  }  
			name = "Gepard"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5391  }  
			name = "Giena"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5392  }  
			name = "Zubr"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5393  }  
			name = "Pelikan"  
			type = destroyer #Riga-class
			model = 0
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5431  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5432  }  
			name = "Pingvin"  
			type = destroyer #Riga-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5433  }  
			name = "Razumnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5434  }  
			name = "Rezkiy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5435  }  
			name = "Storozhevoy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5436  }  
			name = "Gordelivy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5437  }  
			name = "Grozyashchiy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5438  }  
			name = "Letuchiy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5439  }  
			name = "Poryvistyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5440  }
			name = "Razyashchiy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5441  }
			name = "Revnostnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5442  }
			name = "Retivy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5443  }
			name = "Ryavnyy"  
			type = light_cruiser #Krivak I-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5444  }  
			name = "K-14"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5445  }  
			name = "K-42"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5446  }  
			name = "K-115"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5447  }  
			name = "K-133"  
			type = nuclear_submarine #November-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5448  }  
			name = "K-55"  
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5449  }  
			name = "K-178"
			type = d_11 #Hotel-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5450  }  
			name = "K-45"  
			type = nuclear_submarine #Echo I
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5451  }  
			name = "K-59"  
			type = nuclear_submarine #Echo I
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5452  }  
			name = "K-66"  
			type = nuclear_submarine #Echo I
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5453  }  
			name = "K-151"  
			type = nuclear_submarine #Echo I
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5454  }  
			name = "K-408"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5455  }  
			name = "K-415"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5456  }  
			name = "K-236"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5457  }  
			name = "K-252"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5458  }  
			name = "K-258"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5459  }  
			name = "K-389"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5460  }  
			name = "K-399"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5461  }  
			name = "K-430"  
			type = d_11 #Yankee-class
			model = 2
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5462  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5463  }  
			name = "K-434"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5464  }  
			name = "K-436"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5465  }  
			name = "K-446"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5466  }  
			name = "K-451"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5467  }  
			name = "Vnimatelnyy"  
			type = destroyer #Skoryy-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5468  }  
			name = "K-171"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5469  }  
			name = "K-497"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5470 }  
			name = "K-366"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5471  }  
			name = "K-477"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5472  }  
			name = "K-500"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5473  }  
			name = "K-512"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5474  }  
			name = "K-523"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5475  }  
			name = "K-530"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5476  }  
			name = "K-180"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5477  }  
			name = "K-223"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5478  }  
			name = "K-433"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5479  }  
			name = "K-455"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5480  }  
			name = "K-490"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5481  }  
			name = "K-506"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5482  }  
			name = "K-211"  
			type = d_11 #Delta I-class (in game Hotel-class)
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5483  }  
			name = "K-25"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5484  }  
			name = "K-43"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5485  }  
			name = "K-87"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5486  }  
			name = "K-143"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5487  }  
			name = "K-201"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5488  }  
			name = "K-320"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5489  }  
			name = "K-325"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5490  }  
			name = "K-429"  
			type = nuclear_submarine #Charlie I-class (in game Echo I)
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5491  }  
			name = "K-314"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
		division = {
			id = {  type = 10848 id = 5492  }  
			name = "K-454"  
			type = nuclear_submarine #Victor I-class
			model = 3
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5531  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5532  }  
			name = "K-469"  
			type = d_11 #Yankee-class
			model = 2
		}
		division = {
			id = {  type = 10848 id = 5533  }  
			name = "K-242"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5534  }  
			name = "K-247"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5535  }  
			name = "K-251"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5536  }  
			name = "K-264"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5537  }  
			name = "K-305"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5538  }  
			name = "K-355"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5539  }  
			name = "K-360"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5540  }  
			name = "K-412"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5541  }  
			name = "K-492"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5542  }  
			name = "K-507"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5543  }  
			name = "K-7"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5544  }  
			name = "K-10"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5545  }  
			name = "K-23"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5546  }  
			name = "K-31"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5547  }  
			name = "K-34"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5548  }  
			name = "K-48"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5549  }  
			name = "K-56"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5550  }  
			name = "K-57"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5551  }  
			name = "K-94"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5552  }  
			name = "K-108"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5553  }  
			name = "K-175"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5554  }  
			name = "K-184"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5555  }  
			name = "K-189"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5556  }  
			name = "K-116"
			type = nuclear_submarine #Victor III-class (in game Victor II-class)
			model = 4
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5631  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5632  }  
			name = "M-248"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5633  }  
			name = "M-252"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5634  }  
			name = "M-253"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5635  }  
			name = "M-276"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5636  }  
			name = "M-277"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5637  }  
			name = "M-278"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5638  }  
			name = "M-280"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5639  }  
			name = "M-291"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5640  }  
			name = "M-293"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5641  }  
			name = "M-294"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5642  }  
			name = "M-234"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5643  }  
			name = "M-236"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5644  }  
			name = "M-250"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5645  }  
			name = "M-285"  
			type = submarine #Project 96
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5646  }  
			name = "B-62"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5647  }  
			name = "B-68"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5648  }  
			name = "B-69"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5649  }  
			name = "B-70"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5650  }  
			name = "B-71"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5651  }  
			name = "B-72"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5652  }  #Decomissioned in 1985.
			name = "B-88"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5653  }  #Decomissioned in 1985.
			name = "B-89"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5654  }  #Decomissioned in 1985.
			name = "B-90"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5655  }  #Decomissioned in 1988.
			name = "B-91"  
			type = submarine #Zulu-class
			model = 1
		}
		division = {
			id = {  type = 10848 id = 5656  } #Decomissioned in 1985.
			name = "B-63"  
			type = submarine #Zulu-class
			model = 1
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5657  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5658  }  
			name = "S-263"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5659  }  
			name = "S-278"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5660  }  
			name = "S-288"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5661  }  
			name = "S-66"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5662  }  
			name = "S-68"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5663  }  
			name = "S-88"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5664  }  
			name = "S-90"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5665  }  
			name = "S-91"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5666  }  
			name = "S-98"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5667  }  
			name = "S-222"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5668  }  
			name = "S-235"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5669  }  
			name = "S-44"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5670  }  
			name = "S-77"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5671  }  
			name = "S-79"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5672  }  
			name = "S-86"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5673  }  
			name = "S-141"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5674  }  
			name = "S-145"  
			type = submarine #Whiskey-class
			model = 4
		}	
		division = {
			id = {  type = 10848 id = 5675  }  
			name = "S-150"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5676  }  
			name = "S-198"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5677  }  
			name = "S-218"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5678  }  
			name = "S-219"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5679  }  
			name = "S-220"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5680  }  
			name = "S-221"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5681  }  
			name = "S-236"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5682  }  
			name = "S-262"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5683  }  
			name = "S-275"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5684  }  
			name = "S-290"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5685  }  
			name = "S-292"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5686  }  
			name = "S-293"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5687  }  
			name = "S-325"  
			type = submarine #Whiskey-class
			model = 4
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5688  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5689  }  
			name = "S-326"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5690  }  
			name = "S-359"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5691  }  
			name = "S-365"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5692  }  
			name = "S-62"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5693  }  
			name = "S-75"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5694  }  
			name = "S-78"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5695  }  
			name = "S-140"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5696  }  
			name = "S-173"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5697  }  
			name = "S-176"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5698  }  
			name = "S-179"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5699  }  
			name = "S-237"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5731  }  
			name = "S-239"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5732  }  
			name = "S-240"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5733  }  
			name = "S-261"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5734  }  
			name = "S-286"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5735  }  
			name = "S-294"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5736  }  
			name = "S-327"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5737  }  
			name = "S-328"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5738  }  
			name = "S-333"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5739  }  
			name = "S-336"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5740  }  
			name = "S-337"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5741  }  
			name = "S-391"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5742  }  
			name = "S-392"  
			type = submarine #Whiskey-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5743  }  
			name = "B-29"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5744  }  
			name = "B-42"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5745  }  
			name = "B-95"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5746  }  
			name = "B-125"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5747  }  
			name = "B-146"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5748  }  
			name = "K-91"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5749  }  
			name = "B-46"
			type = submarine #Quebec-class
			model = 4
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5750  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5751  }  
			name = "B-51"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5752  }  
			name = "B-93"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5753  }  
			name = "B-103"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5754  }  
			name = "B-113"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5755  }  
			name = "K-163"
			type = submarine #Quebec-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5756  }  
			name = "B-187"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5757  }  
			name = "B-190"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5758  }  
			name = "B-229"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5759  }  
			name = "B-248"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5760  }  
			name = "B-260"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5761  }  
			name = "B-345"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5762  }  
			name = "B-394"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5763  }  
			name = "B-404"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5764  }  
			name = "B-405"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5765  }  
			name = "B-439"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5766  }  
			name = "B-445"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5767  }  
			name = "B-464"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5768  }  
			name = "B-470"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5769  }  
			name = "B-494"  
			type = submarine #Kilo-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5770  }  
			name = "B-15"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5771  }  
			name = "B-55"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5772  }  
			name = "B-39"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5773  }  
			name = "B-101"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5774  }  
			name = "B-112"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5775  }  
			name = "B-8"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5776  }  
			name = "B-28"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5777  }  
			name = "B-33"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5778  }  
			name = "B-50"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5779  }  
			name = "B-85"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5780  }  
			name = "B-133"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5781  }  
			name = "B-135"  
			type = submarine #XXX-class
			model = 5
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5782  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5783  }  
			name = "B-143"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5784  }  
			name = "B-164"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5785  }  
			name = "B-213"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5786  }  
			name = "B-397"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5787  }  
			name = "B-427"  
			type = submarine #XXX-class
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5788  }  
			name = "K-63"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5789  }  
			name = "K-70"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5790  }  
			name = "K-73"  
			type = submarine #Juliett-class
			model = 4
		}
		division = {
			id = {  type = 10848 id = 5791  }  
			name = "K-120"  
			type = submarine #Juliett-class
			model = 4
		}
	}
	navalunit =  {
		name = "Pacific Fleet"  
		id = {  type = 10848 id = 5792  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5793  }  
			name = "S-24"  
			type = submarine #IX-BIS Series-class
			model = 0
		}
		division = {
			id = {  type = 10848 id = 5794  }  
			name = "S-25"  
			type = submarine #IX-BIS Series-class
			model = 0
		}
	}
	navalunit =  {
		name = "Pacific Transport Fleet"  
		id = {  type = 10848 id = 5795  }  
		location = 1372 #Vladivostok
		base     = 1372 #Vladivostok
		division = {
			id = {  type = 10848 id = 5796  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5797  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5798  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 5799  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8000  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8001  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8002 }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8003  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8004  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8005  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8006  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8007  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8008  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8009  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8010  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8011  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8012  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8013  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8014  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8015  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8016  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8017  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8018  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8019  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8020  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8021  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8022  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8023  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8024  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8025	}  
			name = "Transport"  
			type = transport
			model = 5
		}
	}
	navalunit =  {
		name = "Baltic Transport Fleet"  
		id = {  type = 10848 id = 8026  }  
		location = 510 #Kaliningrad/Konigsberg
		base     = 510 #Kaliningrad/Konigsberg
		division = {
			id = {  type = 10848 id = 8027  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8028  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8029  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8030  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8031  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8032  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8033 }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8034  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8035  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8036  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8037  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8038  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8039  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8040  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8041  }  
			name = "Transport"  
			type = transport
			model = 5
		}
	}
	navalunit =  {
		name = "Northern Transport Fleet"  
		id = {  type = 10848 id = 8042  }  
		location = 133 #Murmansk
		base     = 133 #Murmansk
		division = {
			id = {  type = 10848 id = 8043  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8044  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8045  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8046  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8047  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8048  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8049 }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8050  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8051  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8052  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8053  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8054  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8055  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8056  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8057  }  
			name = "Transport"  
			type = transport
			model = 5
		}
	}
	navalunit =  {
		name = "Black Sea Transport Fleet"  
		id = {  type = 10848 id = 8058  }  
		location = 253 #Sevastopol
		base     = 253 #Sevastopol 
		division = {
			id = {  type = 10848 id = 8059  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8060  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8061  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8062  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8063  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8064  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8065 }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8066  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8067  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8068  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8069  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8070  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8071  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8072  }  
			name = "Transport"  
			type = transport
			model = 5
		}
		division = {
			id = {  type = 10848 id = 8073  }  
			name = "Transport"  
			type = transport
			model = 5
		}
	}
	division_development = {  
		name  = "Leonid Brezhnev" 
		type = battleship #Kiev-class (Aircraft Cruiser)
		model = 2
		new_model = no
		cost  = 0.1 
		extra1 = light_cag #HCAG
		brigade_model = 1
		extra2         = b_08 #VTOL
		brigade_model2 = 1
		id    = {  type = 10848 id = 10848  } 
		date  = {  year = 1985 month = december day = 3  } 
	}
	division_development = {  
		name  = "TK-13" 
		type = d_11 #Typhoon-class
		model = 3
		new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 10849  } 
		date  = {  year = 1985 month = april day = 29  } 
	}
	division_development = {  
		name  = "TK-17" 
		type = d_11 #Typhoon-class
		model = 3
		new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 10850  } 
		date  = {  year = 1986 month = december day = 11  } 
	}
	division_development = {  
		name  = "TK-20" 
		type = d_11 #Typhoon-class
		model = 3
		new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 10851  } 
		date  = {  year = 1989 month = november day = 3  } 
	}
	division_development = {  
		name  = "TK-210" 
		type = d_11 #Typhoon-class
		model = 3
		new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 10852  } 
		date  = {  year = 1990 month = august day = 15  } 
	}
	division_development = {  
		name  = "K-148" 
		type = d_11 #Typhoon-class
		model = 3
		new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 10853  } 
		date  = {  year = 1986 month = september day = 29  } 
	}
	division_development = {  
		name  = "K-173" 
		type = d_11 #Typhoon-class
		model = 3
		new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 10854  } 
		date  = {  year = 1986 month = december day = 29  } 
	}
	division_development = {  
		name  = "K-276" 
		type = nuclear_submarine #Sierra I-class
		model = 5
		new_model = no
		cost  = 0.1 
		id    = {  type = 10848 id = 10855  } 
		date  = {  year = 1987 month = october day = 27  }
	}
} # FECHADOR