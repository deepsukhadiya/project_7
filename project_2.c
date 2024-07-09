#include<stdio.h>

main()
{
	int score;
	printf("Enter your marks =");
	scanf("%d", &score);
	
	switch(score)
	{
		case 90 ... 100:
			           printf("your grade is A Excellent work");
			           break;
		case 80 ... 89:
			           printf("your grade is B Well done");
			           break;
		case 70 ... 79:
			           printf("your grade is C Good job");
			           break;
		case 60 ... 69:
					   printf("your grade is D You passed but you can do better");
			           break;
		case 46 ... 59:
			           printf("your grade is E need improvment");
			           break;
		case 40 ... 45:
		    	       printf("your grade is F you failed");
			           break;
					   
		default:
		    printf("please enter valid marks");
		   break;
		   			       
	}
}
