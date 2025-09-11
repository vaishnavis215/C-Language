#include<stdio.h>
void main()
{
	int H,min,minutes;
	
	printf("Enter hours:");
	printf("\n Enter minutes:");
	scanf("%d",&H);
	scanf("%d",&minutes);
	
	min=H*60+minutes;
	printf("%d H %d minutes= %d min",H,minutes,min);
}
