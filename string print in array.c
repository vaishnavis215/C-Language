#include<stdio.h>
void main(){
	int i,s;
//	char name [3][10]={"ram","radha","riya"};
    printf("Enter the size of array:");
    scanf("%d",&s);
	char name[s][10];
	printf("Enter name:\n");
//	scanf("%s",&name);
   for(i=0;i<s;i++){
   	scanf("%s",&name[i]);
   }
    for(i=0;i<s;i++){
	printf("Name:%s\n",name[i]);
   }
}
