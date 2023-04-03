#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
		float za,zc,xb,zb,xc,zd,xd;
	za=b*b;
	zb=sqrt(za-(4*a*c));
	zc=-b-zb;
	zd=zc/2*a;
	xb=sqrt(za-(4*a*c));
	xc=-b+xb;
	xd=xc/2*a;
	

printf("This is to solve a regular linear quadratic equation\n ");
printf("Enter the a,b and c of the question such that x is not included\n");
 printf("Enter a value of a:");
  scanf("%d",&a);
 printf("Enter a value of b:");
  scanf("%d",&b);
 printf("Enter a value of c:");
 scanf("%d",&c);
 printf("The two possible values of the equation=%.3f and %.3f",zd,xd);
 
	
 	
}

