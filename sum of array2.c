#include<stdio.h>
void main(){
	int sum=0,i;
	int a[]={10,20,30};
	for(i=0;i<3;i++){
		sum=sum+a[i];
		printf("\n %d",a[i]);		
	}
	printf("\n sum=%d",sum);
	
}
