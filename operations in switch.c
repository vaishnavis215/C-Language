//switch statement 
#include<stdio.h>
void main(){
	int num1,num2;
	char ope;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	
	printf("Which operation would you perform:");
	scanf(" %c",&ope);
	
	switch (ope){
	case '+':
		printf("Addition is %d",num1+num2);
		break;
	case '-':	
		printf("substraction is %d",num1-num2);
	    break;
	case '/':
		printf("division is %d",num1/num2);
	    break; 
	case '*':
		printf("multiplication is %d",num1*num2);
		break;
	
		default:
		printf("Invalid input..");					    
	}

}
