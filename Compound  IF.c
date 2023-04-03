#include<stdio.h>
int main()
{
	int age,score;
	printf("Enter age and score:");
	scanf("%d%d" ,&age,&score);
	
	if(age==5&&score>=50)
	{
		printf("The child is in primary one\n");
	}else
		if(age==6&&score>=60)
		{
			printf("The child in primary two\n");
		}else
			if(age==7&&score>=70)
			{
				printf("The child in primary three\n");
			}else
				if(age==8&&score>=80)
				{
					printf("You're in primary four\n");
				}else
					if(age==9&&score>=90)
					{
						printf("You're in primary  five\n");
					}else
						if(age==10&&score>=95)
						{
							printf("You're in primary six\n");
						}else
							printf("Try another school\n");
}
