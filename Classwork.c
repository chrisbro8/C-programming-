//system  for selling  mtn call card
//Ehimare Brownwell
#include<stdio.h>
int main()
{
	int choice;
	printf("\nPick 1 for 100");
	printf("\nPick 2 for 200");
	printf("\nPick 3 for 500");
	printf("\nPick 4 for 1000");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Print 100 naira card");
		break;
		case 2:
			printf("Print 200 naira card");
		break;
		case 3:
			printf("Print 500 naira card");
		break;
		case 4:
			printf("Print 1000 naira card");
		break;
		default:
			printf("Pick the correct option");
			
			
	}
	printf("\nThank you for your patronage");
}
