#include<stdio.h>
void main(){
	int i,j;
	float marks[3][3]={
	{40.50,80.00,60.50},
	{85.20,90.00,60.85},
	{60.50,90.20,60.50}
	};
	printf("2D array:\n");
	for(i=0;i<3;i++){
		printf("student no.%d=",i+1);
		for(j=0;j<3;j++){
			printf("%.2f ",marks[i][j]);
		}
		printf("\n");
	}
}
