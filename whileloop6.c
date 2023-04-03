//An application to print the multiples of 9
#include<stdio.h>
int main()
{
    int multiple,num,n;
    printf("Input a number");
    scanf("%d",&n);
    num=1;
    while(num<=12)
    {
        num = num + 1;
        multiple=num*n;
        printf("%d x %d= %d\n",n,num,multiple);
    }
}
