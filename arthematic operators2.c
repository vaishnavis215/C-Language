#include<stdio.h>

void main()
{
	int num1,num2;
	
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	
	printf("Addition of %d and %d is %d\n",num1,num2,num1+num2);
	printf("Substraction of %d and %d is %d\n",num1,num2,num1-num2);
	printf("Multiplication of %d and %d is %d\n",num1,num2,num1*num2);
	printf("Division of %d and %d is %d\n",num1,num2,num1/num2);
	printf("Modulus of %d and %d is %d\n",num1,num2,num1%num2);

	
}
