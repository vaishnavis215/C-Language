//WAP to check grade of students
#include<stdio.h>
void main()
{
	int marks;
	
	printf("Enter marks:");
	scanf("%d",&marks);
	
	if(marks>=85){
		printf("A-Grade");
	}
	else if(marks>=70)
	{
		printf("B-Grade");
	}
	else if(marks>=50)
	{
			printf("C-Grade");
	}
	else if(marks>=35)
	{
		printf("D-Grade");
	}
	else{
		printf("FAIL");
	}	
	
}
