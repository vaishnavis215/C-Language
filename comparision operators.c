#include<stdio.h>
void main(){
	int num1,num2;
	
	printf("Enter two Numbers:\n");
	scanf("%d %d",&num1,&num2);
	
	printf("\nRelational Operators Results:");
	printf("\n%d==%d: %d",num1,num2,num1==num2);
	printf("\n%d!=%d: %d",num1,num2,num1!=num2);
	printf("\n%d>=%d: %d",num1,num2,num1>=num2);
	printf("\n%d<=%d: %d",num1,num2,num1<=num2);
	printf("\n%d>%d : %d",num1,num2,num1>num2);
    printf("\n%d<%d : %d",num1,num2,num1<num2);

}
