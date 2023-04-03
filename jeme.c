#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);

int main()

{
	int a, b;
	printf("Enter two numbers\t");
	scanf("%d %d",&a, &b);

	printf("addition of two numbers is %d\n",add(a,b));

	printf("subtraction of two numbers is %d\n", sub(a,b));

	printf("product of two numbers is %d\n", mult(a,b));

	printf("division of two numbers is %d", div(a,b));
	return 0;
}
		int add(int a, int b)
		{
		int sum=a+b;
		return sum;
	    }

		int sub(int a, int b)
		{
		int sub=a-b;
		return sub;
        }

	    int mult(int a, int b)
	    {
		int mult=a*b;
		return mult;
        }

		int div(int a, int b)
	    {
		int div=a/b;
		return div;
    }
