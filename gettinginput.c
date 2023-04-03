#include<stdio.h>
#include<stdlib.h>
int main()
{
    char firstname[20];
    char crush[20];
    int numberofbabies;

    printf("What is your name?\n");
    scanf("%s", firstname);
    printf("Who are you going to marry?\n");
    scanf("%s", crush);
    printf("How many kids will you have?\n");
    scanf("%d", &numberofbabies);


       printf("%s and %s are in love and would have %d babies",firstname,crush,numberofbabies);



return 0;
}
