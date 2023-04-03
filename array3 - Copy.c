#include<stdio.h>

int main()
{
    int index, score,size;
    float tscore=0,avgscore;
    int student[size];
    printf("Input the number of student in your class");
    scanf("%d",&size);

    //populating array
    for(index=1;index<=size;index++)
    {
        printf("input your student score\n");
        scanf("%d",&score);
        tscore=tscore+score;
        avgscore=tscore/size;
    }
    printf("Class average is %.2f",avgscore);

}
