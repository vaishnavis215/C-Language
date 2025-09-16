//while loop
#include<stdio.h>
void main(){
	int battery=100;
	while(battery>0){
		printf("battery %d\n",battery);
		battery-=10;
	}
	printf("battery empty");
}
