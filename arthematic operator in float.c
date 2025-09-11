#include<stdio.h>

void main()
{
	float n1,n2,result; 

	printf("Enter two float numbers:");
	scanf("%f %f",&n1,&n2);
	result=n1+n2;
	printf("\n Addition of %.2f and %.2f is=%.2f",n1,n2,result);
	
}
