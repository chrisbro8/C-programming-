//application to determine pupils
//placement in government primary
//school
#include<stdio.h>
int main()
{
	int age,score;
	printf("input your child's age and score\n");
	scanf("%d%d",&age,&score);

	//placement process
	if (age==5&&score>=50)
	{
		printf("The child will be in primary one\n");
	}else
	if (age==6&&score>=60)
   	    {
	    	printf("The child will be in primary two\n");
       	}else
        	if (age==7&&score>=70)
  	         {
		         printf("The child will be in primary three\n");
	         }else
            	if (age==8&&score>=80)
             	{
	            	printf("The child will be in primary four\n");
    	        }else
                	if (age==9&&score>=90)
                	{
	                	printf("The child will be in primary five\n");
                	}else
	
                        	if (age==10&&score>=95)
                    	{
		                         printf("The child will be in primary six\n");	
	                    }else
                                     	printf("Try another school sorry!");
}
	
