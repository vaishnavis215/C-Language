#include<stdio.h>
void main(){
	int s,i;
	printf("Enter size of array:");
    scanf("%d",&s);
    char letter[s];
    printf("Enter vowels:");
    for(i=0;i<s;i++)
	{
	scanf(" %c ",&letter[i]); 
	}
	printf("Print vowels:\n");
    for(i=0;i<s;i++)
	{
   	printf(" %c ",letter[i]);
   }
}
