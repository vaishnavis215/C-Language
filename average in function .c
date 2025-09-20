// find average in function 
#include<stdio.h>
float getAverage(int a,int b,int c){
	return a+b+c/3;
}
void main(){
	int x,y,z;
	printf("Enter three numbers:");
	scanf("%d %d %d",&x,&y,&z);
	
	printf("Average=%.2f",getAverage(x,y,z));
}
