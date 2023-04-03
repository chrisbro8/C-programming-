#include<stdio.h>

#include<time.h>
int main()
{
    int dicerolla,dicerollb,dicerollc,dicerolld,totalscore,age;
    char guess;
    srand(time(NULL));
    printf("You are about to perform in a betting game\n ");

    dicerolla =( rand()%6)+1 ;
    printf("Dice roll A = %d\n ", dicerolla);

    dicerollb =( rand()%6)+1 ;
    printf("Dice roll B = %d\n ", dicerollb);

    dicerollc =( rand()%6)+1 ;
    printf("Dice roll C= %d\n ", dicerollc);

    totalscore=dicerolla+dicerollb+dicerollc;
    printf("The total score = %d\n",totalscore);
    printf("Guess if the preceding number to come out would  be   higher or lower than the sum above\n");
    printf("Guess 'H' for higher or 'L' for lower or 'S' for same:");
    scanf("%s",&guess);
    dicerolld=(rand()%20+1);
    printf("preceding answer = %d\n",dicerolld);

    if((dicerolld>totalscore)&(guess=='H'))
    {

        printf("Hurray  your a born boss");
    }
    else if((dicerolld<totalscore)&(guess=='L'))
    {
        printf("Hurray  your a winner");

	}
	 else if((dicerolld==totalscore)&(guess=='S'))
    {
        printf("you are one smart person  ,what a guess");
    }


    else
        {
            printf("\nSorry! but you   suck at betting get some friends");
        }
return 0;
}
