//WAP to take two numbers if no is greater than no1 only then perform substractions

#include<stdio.h>
void main()
{
	int num1;
	int num2;
	int sub;
	
	printf("Enter two Integer numbers:");
	scanf("%d %d", &num1,&num2);
	
	if(num1>num2)
	{
		sub=num1-num2;
		printf("Substraction of %d and %d is %d",num1,num2,sub);
	}
}
