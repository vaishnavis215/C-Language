#include<stdio.h>
void main(){
	int open,food,payment;
	
	printf("Go to cafe(yes=1 and no=0)");
	scanf("%d",&open);
	
	if(open==1){
		printf("Do you have some breakfast?");
		scanf("%d",&food);
		if(food==1){
			printf("yes,here is a menu..");
			scanf("%d",&payment);
			if(payment==1){
				printf("done your payment succesfully send..");
			}
			else{
				printf("don't have a change'..");
			}
		}
		else{
		   printf("Make something please.");

		}
	}
	else{
		printf("Go any other cafe.");
	}
}
