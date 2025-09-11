// Wap to swap to numbers without using third variable 

#include<stdio.h>

void main()

{
	int a=10;
	int b=20;
	
	printf("\n before swapping a=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=b-a;
	printf("\n after swapping a=%d,b=%d",a,b);
}
