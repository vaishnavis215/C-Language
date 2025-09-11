//WAP to check wether the number is divided by 7 or not
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num%7==0){
		printf("%d  is divided by 7",num);
	}
	else{
		printf("%d is not divided by 7",num);
	}
}
