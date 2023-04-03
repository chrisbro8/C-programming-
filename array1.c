//one dimensional (static)
#include<stdio.h>
int main()
{
//declare an array
int score[5];
//score[5]={1,2,3,4,5,};
//initialise an arrray
int age[5]={3,4,5,6};
int index;
//referencing elements
printf("%d\n",age[0]);
printf("%d\n",age[1]);
printf("%d\n",age[2]);
printf("%d\n",age[3]);
printf("%d\n",age[4]);
for(index=0;index<4;index++)
{
    printf("%d\t",age[index]);
}
}
