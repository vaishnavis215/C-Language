// if else ladder 
#include<stdio.h>
void main(){
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age<=5){
		printf("free ticket.");
	}
	else if(age>=5  && age<=12){
		printf("Half ticket.");
	}
	else if(age>=12 && age<=60){
		printf("full ticket.");
	}
	else if(age>=60 && age<=75){
		printf("cenier citizon-half");
	}
	else{
		printf("free ticket.");
	}
}
