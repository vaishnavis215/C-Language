//WAP fine user valid voter or not

#include<stdio.h>
void main()
{
	int age;
	
	printf("Enter age:");
	scanf("%d", &age);
	
	if(age>18){
		printf("Valid voter");
	}
	else{
		printf("Invalid voter");
	}
}
