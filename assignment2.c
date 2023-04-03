#include<stdio.h>
int main()
{
	int nigeriancitizen,travelpurpose,maritalstatus;
	printf("welcome to the Nigerian Immigration\n enter '1' for yes and '0' for no\n");
			printf("Are you a nigeriancitizen ?\n");
			scanf("%d" ,&nigeriancitizen);
				
			if(nigeriancitizen==1)
			{
			printf("You are a citizen you can proceed\n");
			}
			else{
		printf("Regularize your Citizenship");
		
	}
		
		
			printf("what is the purpose of your travel\n");
			scanf("%d",&travelpurpose);
			printf("What is  your maritalstatus?\n"); 
			scanf("%d",&maritalstatus);
	if(maritalstatus==1){
		printf("you have been granted visa");
		}
		else{
			printf("Visa denied");
			}
	
	
}
