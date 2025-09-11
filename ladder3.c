//WAP to calculate the avg score of last 3 cricket match and print well
// done if avg is greater than 25 else print better luck next time 
#include<stdio.h>
void main(){
	int match1,match2,match3;
	float avg;
	printf("Enter match1 score:");
	scanf("%d",&match1);
	
	printf("Enter match2 score:");
	scanf("%d",&match2);
	
	printf("Enter match3 score:");
	scanf("%d",&match3);
	
	avg=(match1+match2+match3)/3;
	
	if(avg>=25){
		printf("well done");
	}
	else{
		printf("Better luck next time");
	}
}
