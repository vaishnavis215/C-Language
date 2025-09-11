#include<stdio.h>
void main(){
	int s,i;
	printf("Enter size of array:");
    scanf("%d",&s);
    int a[s];
    printf("Enter array element:");
    for(i=0;i<s;i++){
	scanf("%d",&a[i]); 
	}
	printf("array elements:");
    for(i=0;i<s;i++){
	printf("\n %d",a[i]);
}
}
