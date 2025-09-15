// if statements
#include<stdio.h>
void main(){
	
	int battery;
	printf("Enter your battery:");
	scanf("%d",&battery);
	if(battery<=20){
		printf("Low battery...please charge your device..");
	}
	else{
		printf("sufficient battery..??????");
	}
	
}
