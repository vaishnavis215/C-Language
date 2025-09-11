
#include<stdio.h>
void main()
{
	int M,hour,minutes;
	
	
	printf("Enter minutes:",M);
	scanf("%d",&M);
	
	hour=M/60;
	minutes=M%60;
	
	printf("%d=%d hour %d minutes",M,hour,minutes);
}
