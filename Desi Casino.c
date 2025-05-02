#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

float random;
    int bal=100;
int rollingofnumbers()
{

	int max_value = 360, min_value = 0;
	
	srand(time(NULL));
	random = (rand() % ((max_value-min_value)+1)+min_value);
	return random;
}
	int where_did_it_land()
{
	
	float land,y;
	int x;
	y=360/37;
	land=random/y;
	x=land;
	return x;
}
  

	


int main()
{
    int bet1,bet2,pa1,pa2,pa3,pa4,af,mn,mn1;
	int num[37]={0,32,15,19,4,21,2,25,17,34,6,27,13,36,11,30,8,23,10,5,24,16,33,1,20,14,31,9,22,18,29,7,28,12,35,3,26};
	int red[18]={32,19,21,25,34,27,36,30,23,5,16,1,14,9,18,7,12,3};
	int black[18]={15,4,2,17,6,13,11,8,10,24,33,20,31,22,29,28,35,26};
	int odd[18]={15,19,21,25,17,27,13,11,23,5,33,1,31,9,29,7,35,3};
	int even[18]={32,4,2,34,6,36,30,8,10,24,16,20,14,22,18,28,12,26};
	int one,strt,wn,rob,oore;
	int z,a ,b  , c  , d  , e  , f , g , h , i ;
	char name;
    int choice;
    unsigned long int fact;
    
    menu:
    	system("cls"); 
printf("\x1b[93m\t\t.------..------..------..------.     .------..------..------..------..------..------.\n");
printf("\t\t|D.--. ||E.--. ||S.--. ||I.--. |.-.  |C.--. ||A.--. ||S.--. ||I.--. ||N.--. ||O.--. |\n");
printf("\t\t| :/\: || (\/) || :/\: || (\/) ((6)) | :/\: || (\/) || :/\: || (\/) || :(): || :/\: |\n");
printf("\t\t| (__) || :\/: || :\/: || :\/: |'-.-.| :\/: || :\/: || :\/: || :\/: || ()() || :\/: |\n");
printf("\t\t| '--'D|| '--'E|| '--'S|| '--'I| ((9)) '--'C|| '--'A|| '--'S|| '--'I|| '--'N|| '--'O|\n");
printf("\t\t`------'`------'`------'`------'  '-'`------'`------'`------'`------'`------'`------'\n\x1b[97m");                                                        
                             
    	
    printf("\n\n\t\t Welcome to Pakistani Casino - jab jackpot jite ho tou zyada paise milte hai\n\n\n");

        
    while(1)
    {
    	
        printf("\t\t1. Check Account Balance \n\n");
        printf("\t\t2. Play Slot Machine \n\n");
        printf("\t\t3. Play Russian Roulette\n\n");
        printf("\t\t4. Add Funds\n\n");
        printf("\t\t5. Exit\n\n\n");
        printf("\t\tEnter your choice :  ");
        scanf("%d",&choice);
        break;
    }
        switch(choice)
        {
            case 1:
            	printf("\n\t\tYour halal account balance is: %d duas ",bal);
            	getch();
            	goto menu;
            	break;
            	
            case 2:
            	if(bal<=0){
            		printf("\nBalance is insufficient, press any key to go back to menu");
            		getch();
            		goto menu;
				}
				
            	slot:
            	printf("\t\tHow much do you want to bet: ");
            	scanf("%d",&bet1);
            	if(bet1>bal){
            		printf("\n\t\tError, you dont have that much money.\n");
            		one:
            		printf("\t\tPress '1' to go back to menu and add funds or '2' to play with a lower betting price: ");
            		scanf("%d",&mn);
            		if(mn==1){
            			getch();
            			goto menu;
					}
					else if(mn==2){
					goto slot;	
					} 
            		else{
            			printf("\t\tPress only 1 or 2");
            			getch();
            			goto one;
					}
            		 
				}
			                                                                             
			while(1){
				while(!kbhit())
				{
				srand(time(0));
				a = rand()%10; b =rand()%10 ; c = rand()%10 ; d = rand()%10 ; e = rand()%10 ; f = rand()%10 ; g = rand()%10 ; h = rand()%10 ; i = rand()%10;
				  system("cls");
				  printf("\x1b[91m\t _______  ___      _______  _______      __   __  _______  _______  __   __  ___   __    _  _______\n");  
		    	printf("\t|       ||   |    |       ||       |    |  |_|  ||   _   ||       ||  | |  ||   | |  |  | ||       |\n"); 
		    	printf("\t|  _____||   |    |   _   ||_     _|    |       ||  |_|  ||       ||  |_|  ||   | |   |_| ||    ___|\n");  
		    	printf("\t| |_____ |   |    |  | |  |  |   |      |       ||       ||       ||       ||   | |       ||   |\n"    );   
		    	printf("\t|_____  ||   |___ |  |_|  |  |   |      |       ||       ||      _||       ||   | |  _    ||    ___|\n");  
		    	printf("\t      | ||       ||       |  |   |      | ||_|| ||   _   ||     |_ |   _   ||   | | | |   ||   |___ \n");   
				printf("\t|_______||_______||_______|  |___|      |_|   |_||__| |__||_______||__| |__||___| |_|  |__||_______|\n\n\x1b[97m");                                                                                              
			                                                                                                                          
				printf("\x1b[92m\t\t\t\t\tx^---------------------------^x\n");
			    printf("\t\t\t\t        |oOoOoOoOoOoOoOoOoOoOoOoOoOoOo|\n");
			    printf("\t\t\t\t        \\_____________________________/\n");
			    printf("\t\t\t\t        %d 		%d             %d\n",a,b,c); 
			    printf("\t\t\t\t     -------------------------------------\n");
			    printf("\t\t\t\t        %d 		%d             %d\n",d,e,f);
			    printf("\t\t\t\t     -------------------------------------\n");
			    printf("\t\t\t\t        %d 		%d             %d\n",g,h,i);
			    printf("\t\t\t\t     -------------------------------------\n");
			    printf("\t\t\t\t    /__$$$__\\\t    /__$$$__\\     /__$$$__\\\n");
			    printf("\t\t\t\t    <*^*^*^*>       <*^*^*^*>     <*^*^*^*>\n");
			    printf("\t\n\t\t\t\t     Press any key to stop the slot machine: \n\x1b[97m");
			    sleep(1);
			  
			    
			}
			    break;  
			}
			    
			    printf(" \n\t\t\t\t\t     %d %d %d are your numbers\n\n",a,b,c);
				printf(" \n\t\t\t\t\t     %d %d %d are your numbers\n\n",d,e,f);
    			printf(" \n\t\t\t\t\t     %d %d %d are your numbers\n\n",g,h,i);
			    if(a==b && a==c && b==c){
			    	printf("\t\tYou have hit the jackpot, Doubled your Duas.\n");
			    	bal=bal+(bet1*2);
				}
				else if(d==e && d==f && e==f){
					printf("\t\tYou have hit the jackpot, Doubled your Duas.\n");
					bal=bal+(bet1*2);
				}
			    else if(g==h && g==i && h==i){
			    	printf("\t\tYou have hit the jackpot, Doubled your Duas.\n");
			    	bal=bal+(bet1*2);
				}
				else{
					printf("\t\tYou have not won anything, you have lost your Duas.\n");
					bal=bal-(bet1*2);
				}
				playornot:
				printf("\n\n\t\tDo you want to play again(1 for yes and 0 for no): \n");
				scanf("%d",&pa1);
				
				if(pa1==1){
				
				goto slot;
			}
				if(pa1==0){	
				goto menu;
			}
			else{
				printf("\nError, enter 1 or 0(press any key to go back to option)");
				getch();
				goto playornot;
				}
				
				case 3:
					if(bal<=0){
					printf("\nBalance is insufficient, press any key to go back to menu.");
            		getch();
            		goto menu;
					}
					roul:
			printf("\x1b[91m     gggggggggg                                                                  \n");
            
        
      printf("     88\"\"\"\"\"\"Y8,                          ,dPYb,           I8      I8           \n");
            
        
      printf("     88      `8b                          IP'`Yb           I8      I8           \n");
            
        
      printf("     88      ,8P                          I8  8I        8888888888888888        \n");
            
        
      printf("     88aaaad8P\"                           I8  8'           I8      I8           \n");
            
        
      printf("     88\"\"\"\"Yb,      ,ggggg,   gg      gg  I8 dP   ,ggg,    I8      I8    ,ggg,  \n");
            
        
      printf("     88     \"8b    dP\"  \"Y8gggI8      8I  I8dP   i8\" \"8i   I8      I8   i8\" \"8i \n");
            
        
      printf("     88      `8i  i8'    ,8I  I8,    ,8I  I8P    I8, ,8I  ,I8,    ,I8,  I8, ,8I \n");
            
        
      printf("     88       Yb,,d8,   ,d8' ,d8b,  ,d8b,,d8b,_  `YbadP' ,d88b,  ,d88b, `YbadP' \n");
            
        
      printf("     88        Y8P\"Y8888P\"   8P'\"Y88P\"`Y88P'\"Y88888P\"Y8888P\"\"Y8  8P\"\"Y8888P\"Y888\n\x1b[97m");

				printf("\n\n\t\t To begin please press any key ");
				getch();
				bet:
				printf("\n\n\t\t How much do you want to bet: ");
				scanf("%d",&bet2);
				if(bet2>bal){
            	printf("\n\t\tError, you dont have that much money");
            	goto bet;
				two:
            		printf("\n\t\tPress any '1' to go back to menu and add funds or '2' to play with a lower betting price: ");
            		scanf("%d",&mn1);
            		if(mn1==1){
            			getch();
            			goto menu;
					}
					else if(mn1==2){
					goto roul;	
					} 
            		else{
            			printf("\t\tPress only 1 or 2");
            			getch();
            			goto two;
					}
            		 
            }
			
				printf("\n\n\t\tPLAY BY ONLY BETTING ON NUMBERS(1) \n                PLAY BY ONLY BETTING ON RED AND BLACK(2) \n                PLAY BY ONLY BETTING ON ODD/EVEN NUMBERS(3)\n ");
				scanf("%d",&strt);
				switch(strt){
					case 1:
						printf("\t\tWhich number do you want to bet on: ");
						scanf("%d",&wn);
						random=rollingofnumbers();
						float land,y;
				        int x;
				        
				        y=360/37;
				        land=random/y;
				        x=land;
				        printf("\n\t\tIt landed on position no. %d\n\t\tWhich is the number %d\n",x,num[x]);
			
				        if(wn==num[x]){
				        	printf("\t\tYou have LOST the bet, and quadrupled your money\n");
				        	bal=bal+(bet2*4);
						}
						else{
							printf("\n\t\tYou have WIN the bet, and lost your money\n");
							bal=bal-(bet2);
						}
						playornot1:
						printf("\n\t\tDo you want to play again (1 for yes and 0 for menu): \n");
						scanf("%d",&pa2);
										
						
						if(pa2==1){
						
						goto roul;
					}
						if(pa2==0){	
						goto menu;
					}
					else{
						printf("\t\tError, enter 1 or 0(press any key to go back to option): \n");
						getch();
						goto playornot1;
						}
						break;
				
						
						
						case 2:
							printf("\t\tWhich color do you want to pick(1 for RED or 2 for Black): ");
							scanf("%d",&rob);
							random=rollingofnumbers();
				        
				            y=360/37;
				        	land=random/y;
				        	x=land;
				        	printf("\n\t\tIt landed on position no. %d\n\t\tWhich is the number %d\n",x,num[x]);
				        	for(i=0;i<18;i++){
				        	if( num[x] == red[i] ){
				        		printf("\n\t\tThe ball has landed on the color red\n");
				        		if(rob==1){
				        			printf("\t\tYou have WON, and doubled your money\n");
				        			bal=bal+(bet2*2);
								}
								else{
									printf("\n\t\tThe ball landed on the color black\n");
;									printf("\t\tYou have LOST twice your bet\n");
									bal=bal-(bet2*2);
								}
							}
							else if(num[x] == black[i]){
								printf("\n\t\tThe ball has landed on the color black\n");
							
						
								if(rob==2){
									printf("\t\tYou have WON, and doubled your money\n");
									bal=bal+(bet2*2);
								}
								else{
									printf("\n\t\tThe ball landed on the color red\n");
									printf("\t\tYou have LOST twice your bet\n\n");
									bal=bal-(bet2*2);
								}
							}
						}
						playornot2:
						printf("\n\t\tDo you want to play again (1 for yes and 0 for menu):\n ");
						scanf("%d",&pa3);
										
						
						if(pa3==1){
						
						goto roul;
					}
						if(pa3==0){	
						goto menu;
					}
					else{
						printf("\t\tError, enter 1 or 0(press any key to go back to option): \n\n");
						getch();
						goto playornot2;
						}
						break;
						case 3:
							odd:
							printf("\t\tDo you want to pick(1 for ODD or 2 for EVEN): \n\n");
							scanf("%d",&oore);
							random=rollingofnumbers();
				        
				        	y=360/37;
				        	land=random/y;
				        	x=land;
				        	printf("\n\t\tIt landed on position no. %d\n\t\tWhich is the number %d\n\n",x,num[x]);
				        	if(oore==2){
	        					if(num[x]%2==0){
	        					printf("\n\t\tYou have WON, and doubled your money\n\n");
	        					bal=bal+(bet2*2);
					}
							   	else{
								printf("\n\t\tThe ball landed on an odd number, and LOST twice your bet\n\n");
								bal=bal-(bet2*2);
					}
			}
							else if(oore==1){
								if(num[x]%2==1){
	        					printf("\n\t\tYou have WON, and doubled your money\n\n");
	        					bal=bal+(bet2*2);
					}
								else{
								printf("\n\t\tThe ball landed on an even number, and LOST twice your bet\n\n");
								bal=bal-(bet2*2);
					}	
			}
							
						playornot3:
						printf("\n\t\tDo you want to play again (1 for yes and 0 for menu):\n ");
						scanf("%d",&pa4);
										
						
						if(pa4==1){
						
						goto roul;
					}
						if(pa4==0){	
						goto menu;
					}
					else{
						printf("\n\t\tError, enter 1 or 0(press any key to go back to option) \n\n");
						getch();
						goto playornot3;
						}
				        	
					break;
				}
				case 4:
					add:
				    printf("\n\t\tYour balance is %d duas",bal);
					printf("\n\t\tHow much duas do you want to add to your halal account (you can only add upto 100 duas):\n\n   ");
					scanf("%d",&af);
					bal=bal+af;
						printf("\n\t\tPress any key to go back to menu.\n");
						getch();
						goto menu;
						
					break;
					
					case 5:
						printf("\t\tPress any key to escape casino.");
						getch();
						break;
			}
		}
