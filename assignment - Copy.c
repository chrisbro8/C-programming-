#include<stdio.h>

int main()
{
	float a,b,c,d,e,f,g,sum,avg;
	printf("enter a value for a:");
	scanf("%f",&a);
	printf("enter a value for b:");
	scanf("%f",&b);
	printf("enter a value for c:");
	scanf("%f",&c);
	printf("enter a value for d:");
	scanf("%f",&d);
	printf("enter a value for e:");
	scanf("%f",&e);
	printf("enter a value for f:");
	scanf("%f",&f);
	sum=a+b+c+d+e+f+g;
	printf("The sum  of the output is: %f\n",sum);
	avg=sum/7;
	printf("The average of seven numbers is: %f",avg);
	
}
