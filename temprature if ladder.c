// if else ladder 
#include<stdio.h>
void main(){
	int temp;
	printf("Enter temp:");
	scanf("%d",&temp);
	
	if(temp<=10){
		printf("very cold.");
	}
	else if(temp>=10  && temp<=20){
		printf("cold.");
	}
	else if(temp>=20 && temp<=30){
		printf("moderate.");
	}
	else if(temp>=30 && temp<=40){
		printf("hot.");
	}
	else{
		printf("very hot.");
	}
}
