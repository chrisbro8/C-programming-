//one dimensional (dynamic)
#include<stdio.h>

int main()
{
int score[];
int index;
for(index=0;index<=4;index++)
{
printf("Input your score\n");
scanf("%d",&score[index]);
}
//printing the array elements
for(index=0;index<=4;index++)
{
    print("%d\t",score[index]);
}
}
