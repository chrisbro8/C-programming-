#include<stdio.h>
float add(float a, float b );
float product(float a, float b );
float divides(float a, float b );
float substra(float a, float b );
float square(float a, float b );

int main()
{
        float a,b;
        printf("Enter two random integers:");
        scanf("%f %f",&a,&b);
        printf("%.2f+%.2f=%.02f\n",a,b,add(a,b));
         printf("%.2fx%.2f=%.2f\n",a,b,product(a,b));
         printf("%.2f-%.2f=%.2f\n",a,b,substra(a,b));
         printf("%.2f/%.2f=%.2f\n",a,b,divides(a,b));
          printf("The square of the added number is :%.2f\n",square(a,b));


return 0;
}
float add(float a, float b)
{
    float sum;
    sum=a+b;
    return sum;
}
float product(float a, float b )
{
    float product;
    product=a*b;
    return product;
}
float substra(float a, float b )
{
    float substra;
    substra=a-b;
    return substra;
}
float divides(float a, float b )
{
    float divides;
    divides=a/b;
    return divides;
}
    float square(float a, float b )

{
    float square;
    square=(a+b)*(a+b);
    return square;
}

