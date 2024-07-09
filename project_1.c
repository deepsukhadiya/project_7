#include<stdio.h>

main()
{
	int score;
	char grade;
	
	printf("Enater your score");
	scanf("%d", &score);
	
	grade = (score>=100) ? 'A' :
		    (score>=90) ? 'B' :
		    (score>=80) ? 'C' :
		    (score>=70) ? 'D' : 'F';
		    
		    printf("your grade is %c\n", grade);
}
