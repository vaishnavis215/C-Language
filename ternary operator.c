// ternary operator

#include<stdio.h>

void main()
{
	int num1,num2,max;
	printf("\n Enter a number:");
	scanf("%d",&num1);
	printf("\n Enter a number:");
	scanf("%d",&num2);
    max=num1>num2 ? num1 : num2;
    printf("\n max=%d",max);

//	num %2==0 ? printf("\n Even number"):printf("\n odd number");
}
