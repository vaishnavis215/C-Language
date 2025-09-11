#include<stdio.h>
void main(){
	int num1,num2;
	
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	
	printf("addition %d\n",num1,num2,num1+=num2);
	printf("subtraction %d\n",num1-=num2);
	printf("multiplication %d\n",num1*=num2);
	printf("division %d\n",num1/=num2);
	printf("modulus %d\n",num1%=num2);

}
