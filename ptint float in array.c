#include<stdio.h>
void main(){
	int i,s;
	printf("Enter size of array:");
    scanf("%d",&s);
    float marks[s];
    printf("Enter marks:\n");
    for(i=0;i<s;i++)
	{
	scanf("%f",&marks[i]); 
	}
	printf("Print marks:\n");
    for(i=0;i<s;i++)
	{
   	printf(".2%f",marks[i]);
   }
}
