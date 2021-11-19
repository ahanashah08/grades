#include <stdio.h>
#include <iostream.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	float marks;
	char grade;
	 
		printf("Enter your marks : ");
		scanf("%f" , &marks);
		
		
		if (marks >= 85)
		{
			grade = 'A';
		}
		
		else if (marks >= 70 && marks <= 84)
		{
			grade = 'B';
		}
		
		else if (marks >= 55 && marks <= 69)
		{
			grade = 'C';
		}
		
		else if (marks >= 40 && marks <= 54)
		{
			 grade = 'D';
		}
		else
		{
			 grade = 'F';
		}
		
		printf ("Your grade is %c" , grade);
		
		return 0;
	
}
