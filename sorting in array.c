#include<stdio.h>
void main(){

	int s, i, j, temp;
//	int a[]={12, 6, 4, 3};
    printf("Enter size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter array element:\n");
    for(i=0;i<s;i++){
	scanf("%d",&a[i]); 
	}
    for(i=0;i<s;i++)//for indexing 
	{  	
    for(j=0;j<s-1;j++)//for sorting
	{
     if(a[j]>a[j+1])// for ascending order
  //   if(a[j]<a[j+1]) // for decsending order
	 {
    	temp=a[j];
    	a[j]=a[j+1];
    	a[j+1]=temp;
		}
		}		
}
for(i=0;i<s;i++)
	{
     printf("%d ",a[i]); 
}
}

