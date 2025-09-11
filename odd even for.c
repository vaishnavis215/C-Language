#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=1;i<=10;i++)//for row
	{
		
		for(j=1;j<=10;j++)//for column
		{
			if(j%2==0 && i==1){
				printf("%d\n",j);
			}
			else if(j%2!=0 && i==2){
					printf("%d\n",j);

			}	
		}	
	}
}
