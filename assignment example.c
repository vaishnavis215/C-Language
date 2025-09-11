#include<stdio.h>
void main(){
	int num1,num2;
	
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,num2);
	
	num1+=num2;
	printf("%d",num1);
}
