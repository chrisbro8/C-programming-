//Babcock University 
#include<stdio.h>
int main()
{
	int letter,fees,registration,card;
	printf("Welcome to Babcock University Portal\n  enter '1' for yes and '0' for no\n");
	printf( "do you have admission letter");
	scanf("%d",& letter);
	if ( letter==1){
		printf("have you completed your  fees?\n");
		scanf("%d",& fees);}
			else{
					printf("Kindly pay your full school fees");
				}
		
		if(fees==1){
			printf("Have you completed your registration?\n");
			scanf("%d",&registration);}
				else{
					printf("kindly complete your online registration");
				}
			if(registration==1){
		    printf("do you have an card?\n");
		    scanf("%d",&card);}
		    
		    if( card==1){
		    	printf("you have gotten admission into babcock university");
		    	
		    	
			}
				else{
				printf("Kindly get an ID card");
				}
		
			
		
				  
			
				
				}
			
	
	

