#include<stdio.h>
void main(){
	int age;
	
	printf("Enter Age:\n");
	scanf("%d",&age);
	
	printf("Eligible for vote?\n%d",age>=18);
}
