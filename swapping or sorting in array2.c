#include<stdio.h>
void main(){

	int s,i,j,temp;
	printf("Enter size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter array element:");
    for(i=0;i<s;i++)
	{  	
    for(j=0;j<s-1;j++)
	{
     if(a[j]>a[j+1])
	 {
    	temp=a[j];
    	a[j]=a[j+1];
    	a[j+1]=temp;
		}
		}		
}
for(i=0;i<s;i++)
	{
     printf("%d",a[i]); 
}
}

