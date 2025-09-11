#include<stdio.h>

void main()
{
	int apple_price=100, oil_price=155, milk_price=60;
	int apple_Q, oil_Q, milk_Q,total,paid;
	
	printf("Enter apple,oil,milk quantity:\n");
	scanf("%d %d %d",&apple_Q,&oil_Q,&milk_Q);
	
    total=(apple_price*apple_Q)+(oil_price*oil_Q)+(milk_price*milk_Q);	
	printf("\nTotal bill=%d",total);
	printf("\nEnter paid bill:");
	scanf("%d",&paid);
	printf("\n%d is paid return %d",paid,paid-total);
}
