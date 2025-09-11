// switch statement
#include<stdio.h>
void main()
{
	int num1,num2,choice;
	printf("Enter two integer numbers:");
	scanf("%d %d",&num1,&num2);
	
	printf("Enter choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		printf("Addition is %d",num1+num2);
		break;
		case 2:
		printf("Substraction is %d",num1-num2);
		break;
		case 3:
		printf("multiplication is %d",num1*num2);
		break;
		case 4:
		printf("division is %d",num1/num2);
		break;
		default:
		printf("Invalid choice");	
	}
}
