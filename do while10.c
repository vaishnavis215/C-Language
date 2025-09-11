#include<stdio.h>
void main()
{
	int i=1;
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	do{
		printf("\n %d*%d=%d",a,i,i*a);
		i++;
	}
	while(i<=10);
}

