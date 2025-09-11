//WAP max between two numbers
#include<stdio.h>

void main()
{
	int num1;
	int num2;
	
	printf("Enter two Integer:");
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2)
	{
		printf("%d is maximum",num1);
	}
	else{
		printf("%d is maximum",num2);
	}
	
}
