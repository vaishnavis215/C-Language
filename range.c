//WAP to find if a num is in between range or not

#include<stdio.h>

void main()
{
	int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num>30 && num<50)
	{
		printf("%d is In Range between 30 and 50",num);
	}
	else{
		printf("%d Out of Range",num);
	}
}
