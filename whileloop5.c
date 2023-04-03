//Ehimare Brownwell Osemudianmen
//124269
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a Number:");
    scanf("%d" ,&n);
    printf("Multiplication number for %d are:",n);
    i=1;
   do
    {
        j=n*i;
        printf("\n%d x%d=%d",n,i,j);
        i=i+1;

    }
     while(i<=12);
    return 0;

}
