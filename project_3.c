#include<stdio.h>

main()
{
	int score;
	char grade;
	
	printf("Enter your grade :");
	scanf("%d",&score);
	grade = (score>= 100)? 'A' :
	        (score>= 90)? 'B' :
	        (score>= 80)? 'C' :
	        (score>= 70)? 'D' : 'F';
	        
	if (grade >='A' && grade <= 'D')
	
	{
		printf("congratulation ! you are eligible for the next level./n");
	} 
	else
	{
		printf("plese try agin next time./n");
	}       
}

