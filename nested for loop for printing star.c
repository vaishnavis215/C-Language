#include <stdio.h>
void main() {
    int i,j,n = 4;
    //for upper 
    for ( i = 1; i <= n; i++) {
        // spaces
        for ( j = 1; j<=4-i; j++) {
            printf(" ");
        }
        // stars
        for ( j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    //for lower
	for(i=3;i>=0;i--)
	{
		
		for(j=0;j<=3-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		
	printf("\n");	
	}
    
}
