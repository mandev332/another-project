#include <stdio.h> 
void  maktab()

// Bu dars jadvali maktab uchun

{
	char fan  , oqituvchi[15] ; int mat,fiz,ing,tar,ona,inf,a_kuni2=6,b_kuni2=6,c_kuni2=6,d_kuni2=6,e_kuni2=6,f_kuni2=6,a=1,b=1,c=1,d=1,e=1,f=1,aa=1,bb=1,cc=1,a2=1,b2=1,c2=1,m2=3,n=0;  p:
	printf ("\tJADVAL\nQaysi fandan dars berasiz?\na)Matematika\nb)Fizika\nc)Ingliz tili\nd)Tarix\ne)Ona tili\nf)Informatika\n");
	scanf("%c",&fan);

	switch(fan)
	    {
	    	case 'a':if(a==0){printf("Bu fan uchun o'qituvchi olindi.\n");break;}
			       r: printf ("Qaysi kunlari dars o'tasiz?\n1.Dushanba\n2.Seshanba\n3.Chorshanba\n4.Payshanba\n5.Juma\n6.Shanba\n");a--;
	    				scanf("%d",&mat);
	    				
	    				switch(mat)
	    				{
	    					case 1:char soat1; if(a_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n");
									 scanf(" %c",&soat1); 
									 if(aa==1 && soat1=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;aa--;}
									else if(bb==1 && soat1=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;bb--;}
									else if(cc==1 && soat1=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;cc--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto r;}
									break;
										
							case 2: char soat2; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat2); 
									 if(a2==1 && soat2=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat2=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat2=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto r;} 
									break;
									
							case 3: char soat3; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat3); 
									 if(a2==1 && soat3=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat3=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat3=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto r;} 
									break;
									
							case 4: char soat4; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat4); 
									 if(a2==1 && soat4=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat4=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat4=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto r;} 
									break;
									
							case 5: char soat5; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat5); 
									 if(a2==1 && soat5=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat5=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat5=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto r;} 
									break;

							case 6: char soat6; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat6); 
									 if(a2==1 && soat6=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat6=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat6=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto r;} 
									break;								
                     	
                     	
                                	printf ("Matematikadan %d soat dars oldingiz.\n",n); goto p; 
									}
                  
          case 'b':if(b==0){printf("Bu fan uchu o'qituvchi olindi.\n");break;}
			        rr: printf ("Qaysi kunlari dars o'tasiz?\n1.Dushanba\n2.Seshanba\n3.Chorshanba\n4.Payshanba\n5.Juma\n6.Shanba\n");b--;
	    				scanf(" %d",&fiz);
	    				switch(fiz)
	    				{
	    					case 1:char soat; if(b_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n");
									 scanf(" %c",&soat); 
									 if(aa==1 && soat=='a'){printf ("\nYana dars olasizmi?\n\n");n+1.5;aa--;}
									else if(bb==1 && soat=='b'){printf ("\nYana dars olasizmi?\n\n");n+1.5;bb--;}
									else if(cc==1 && soat=='c'){printf ("\nYana dars olasizmi?\n\n");n+1.5;cc--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;b_kuni2--; if (m2!=0){goto rr;} 
									break;
										
							case 2:char soat2; if(b_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat2); 
									 if(a2==1 && soat2=='a'){printf ("\nYana dars olasizmi?\n\n");n+1.5;a2--;}
									else if(b2==1 && soat2=='b'){printf ("\nYana dars olasizmi?\n\n");n+1.5;b2--;}
									else if(c2==1 && soat2=='c'){printf ("\nYana dars olasizmi?\n\n");n+1.5;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--; b_kuni2--; if (m2!=0){goto rr;} 
									break;
									
									
						
							case 3: char soat3; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat3); 
									 if(a2==1 && soat3=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat3=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat3=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto rr;} 
									break;
									
							case 4: char soat4; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat4); 
									 if(a2==1 && soat4=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat4=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat4=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto rr;} 
									break;
									
							case 5: char soat5; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat5); 
									 if(a2==1 && soat5=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat5=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat5=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto rr;} 
									break;

							case 6: char soat6; if(a_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat6); 
									 if(a2==1 && soat6=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat6=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat6=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;a_kuni2--; if (m2!=0){goto rr;} 
									break;
				    
		                            printf ("Fizikadan %d soat dars oldingiz.\n",n); goto p;
						}
       case 'c':if(c==0){printf("Bu fan uchu o'qituvchi olindi.\n");break;}
			        rrr: printf ("Qaysi kunlari dars o'tasiz?\n1.Dushanba\n2.Seshanba\n3.Chorshanba\n4.Payshanba\n5.Juma\n6.Shanba\n");c--;
	    				scanf(" %d",&ing);
	    				switch(ing)
	    				{
	    					case 1:char soat; if(c_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n");
									 scanf(" %c",&soat); 
									 if(aa==1 && soat=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;aa--;}
									else if(bb==1 && soat=='b'){printf ("\nYana dars olasizmi?\n\n");n+1;bb--;}
									else if(cc==1 && soat=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;cc--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;c_kuni2--; if (m2!=0){goto rrr;} 
									break;
										
							case 2:char soat2; if(c_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat2); 
									 if(a2==1 && soat2=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;a2--;}
									else if(b2==1 && soat2=='b'){printf ("\nYana dars olasizmi?\n\n");n++;b2--;}
									else if(c2==1 && soat2=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--; c_kuni2--; if (m2!=0){goto rrr;} 
									break;
									
									
						
							case 3: char soat3; if(c_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat3); 
									 if(a2==1 && soat3=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat3=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat3=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;c_kuni2--; if (m2!=0){goto rrr;} 
									break;
									
							case 4: char soat4; if(c_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat4); 
									 if(a2==1 && soat4=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat4=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat4=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;c_kuni2--; if (m2!=0){goto rrr;} 
									break;
									
							case 5: char soat5; if(c_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat5); 
									 if(a2==1 && soat5=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat5=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat5=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;c_kuni2--; if (m2!=0){goto rrr;} 
									break;

							case 6: char soat6; if(c_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat6); 
									 if(a2==1 && soat6=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat6=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat6=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;c_kuni2--; if (m2!=0){goto rrr;} 
									break;
				       
		                            printf ("Ingliz tilidan %d soat dars oldingiz.\n",n); goto p;
							}
       case 'd':if(d==0){printf("Bu fan uchu o'qituvchi olindi.\n");break;}
                   rrrr: printf ("Qaysi kunlari dars o'tasiz?\n1.Dushanba\n2.Seshanba\n3.Chorshanba\n4.Payshanba\n5.Juma\n6.Shanba\n");d--;
	    				scanf(" %d",&tar);
	    				switch(tar)
	    				{
	    					case 1:char soat; if(d_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n");
									 scanf(" %c",&soat); 
									 if(aa==1 && soat=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;aa--;}
									else if(bb==1 && soat=='b'){printf ("\nYana dars olasizmi?\n\n");n+1;bb--;}
									else if(cc==1 && soat=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;cc--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;d_kuni2--; if (m2!=0){goto rrrr;} 
									break;
										
							case 2:char soat2; if(d_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat2); 
									 if(a2==1 && soat2=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;a2--;}
									else if(b2==1 && soat2=='b'){printf ("\nYana dars olasizmi?\n\n");n++;b2--;}
									else if(c2==1 && soat2=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--; d_kuni2--; if (m2!=0){goto rrrr;} 
									break;
									
									
						
							case 3: char soat3; if(d_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat3); 
									 if(a2==1 && soat3=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat3=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat3=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;d_kuni2--; if (m2!=0){goto rrrr;} 
									break;
									
							case 4: char soat4; if(d_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat4); 
									 if(a2==1 && soat4=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat4=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat4=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;d_kuni2--; if (m2!=0){goto rrrr;} 
									break;
									
							case 5: char soat5; if(d_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat5); 
									 if(a2==1 && soat5=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat5=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat5=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;d_kuni2--; if (m2!=0){goto rrrr;} 
									break;

							case 6: char soat6; if(d_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat6); 
									 if(a2==1 && soat6=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat6=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat6=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;d_kuni2--; if (m2!=0){goto rrrr;} 
									break;
				       
		                            printf ("Tarixdan %d soat dars oldingiz.\n",n); goto p;
						}
						
		 case 'e':if(e==0){printf("Bu fan uchu o'qituvchi olindi.\n");break;}
                   rrrrr: printf ("Qaysi kunlari dars o'tasiz?\n1.Dushanba\n2.Seshanba\n3.Chorshanba\n4.Payshanba\n5.Juma\n6.Shanba\n");e--;
	    				scanf(" %d",&ona);
	    				switch(ona)
	    				{
	    					case 1:char soat; if(e_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n");
									 scanf(" %c",&soat); 
									 if(aa==1 && soat=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;aa--;}
									else if(bb==1 && soat=='b'){printf ("\nYana dars olasizmi?\n\n");n+1;bb--;}
									else if(cc==1 && soat=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;cc--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;e_kuni2--; if (m2!=0){goto rrrrr;} 
									break;
										
							case 2:char soat2; if(e_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat2); 
									 if(a2==1 && soat2=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;a2--;}
									else if(b2==1 && soat2=='b'){printf ("\nYana dars olasizmi?\n\n");n++;b2--;}
									else if(c2==1 && soat2=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--; e_kuni2--; if (m2!=0){goto rrrrr;} 
									break;
									
									
						
							case 3: char soat3; if(e_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat3); 
									 if(a2==1 && soat3=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat3=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat3=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;e_kuni2--; if (m2!=0){goto rrrrr;} 
									break;
									
							case 4: char soat4; if(e_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat4); 
									 if(a2==1 && soat4=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat4=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat4=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;e_kuni2--; if (m2!=0){goto rrrrr;} 
									break;
									
							case 5: char soat5; if(e_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat5); 
									 if(a2==1 && soat5=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat5=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat5=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;e_kuni2--; if (m2!=0){goto rrrrr;} 
									break;

							case 6: char soat6; if(e_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat6); 
									 if(a2==1 && soat6=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat6=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat6=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;e_kuni2--; if (m2!=0){goto rrrrr;} 
									break;
				       
		                            printf ("Ona tlidan %d soat dars oldingiz.\n",n); goto p;		
	   	                      }
        case 'f':if(f==0){printf("Bu fan uchu o'qituvchi olindi.\n");break;}
                   rrrrrr: printf ("Qaysi kunlari dars o'tasiz?\n1.Dushanba\n2.Seshanba\n3.Chorshanba\n4.Payshanba\n5.Juma\n6.Shanba\n");f--;
	    				scanf(" %d",&inf);
	    				switch(inf)
	    				{
	    					case 1:char soat; if(f_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n");
									 scanf(" %c",&soat); 
									 if(aa==1 && soat=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;aa--;}
									else if(bb==1 && soat=='b'){printf ("\nYana dars olasizmi?\n\n");n+1;bb--;}
									else if(cc==1 && soat=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;cc--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;f_kuni2--; if (m2!=0){goto rrrrrr;} 
									break;
										
							case 2:char soat2; if(f_kuni2==0){printf("Dushanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat2); 
									 if(a2==1 && soat2=='a'){printf ("\nYana dars olasizmi?\n\n");n+1;a2--;}
									else if(b2==1 && soat2=='b'){printf ("\nYana dars olasizmi?\n\n");n++;b2--;}
									else if(c2==1 && soat2=='c'){printf ("\nYana dars olasizmi?\n\n");n+1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--; f_kuni2--; if (m2!=0){goto rrrrrr;} 
									break;
									
									
						
							case 3: char soat3; if(f_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat3); 
									 if(a2==1 && soat3=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat3=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat3=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;f_kuni2--; if (m2!=0){goto rrrrrr;} 
									break;
									
							case 4: char soat4; if(f_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat4); 
									 if(a2==1 && soat4=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat4=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat4=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;f_kuni2--; if (m2!=0){goto rrrrrr;} 
									break;
									
							case 5: char soat5; if(f_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat5); 
									 if(a2==1 && soat5=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat5=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat5=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;f_kuni2--; if (m2!=0){goto rrrrrr;} 
									break;

							case 6: char soat6; if(f_kuni2==0){printf("Seshanba to'lgan. Boshqa kunlarni belgilang.\n");break;} 
									printf ("1 soat 30 daqiqa dars olasiz. Qaysi vaqtni tanlaysiz?\na)8:00\tb)10:00\tc)12:00\n"); 
									 scanf(" %c",&soat6); 
									 if(a2==1 && soat6=='a'){printf ("\nYana dars olasizmi?\n\n");n+=1;a2--;}
									else if(b2==1 && soat6=='b'){printf ("\nYana dars olasizmi?\n\n");n+=1;b2--;}
									else if(c2==1 && soat6=='c'){printf ("\nYana dars olasizmi?\n\n");n+=1;c2--;}
									printf ("Boshqa vaqtni tanlang\n");m2--;f_kuni2--; if (m2!=0){goto rrrrrr;} 
									break;
				       
		                            printf ("Tarix %d soat dars oldingiz.\n",n); goto p;		
	   	                      }                  
	   	   }
}
int main()
{
	printf ("Assalomu alaykum!\nQadrli O'qituvchi Xush ke;libsiz!\n");
	maktab();
	return 0;
}