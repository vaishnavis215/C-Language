#include<stdio.h>
void main(){
	int i,j,marks,row_size,column_size;
//	float marks[3][3]={
//	{40.50,80.00,60.50},
//	{85.20,90.00,60.85},
//	{60.50,90.20,60.50}
//	};   
    printf("Enter size of row:");
    scanf("%d",&row_size);
    
    printf("\nEnter column size:");
    scanf("%d",&column_size);
    float s_marks[row_size][column_size];

    printf("Enter marks:\n");
    for(i=0;i<row_size;i++)
	{
		for(j=0;j<column_size;j++){
		scanf("%f",&s_marks[i][j]); 
		}
	}
	printf("2D array:\n");
	for(i=0;i<row_size;i++){
		printf("student no.%d=\n",i+1);
		for(j=0;j<column_size;j++){
			printf("%.2f ",s_marks[i][j]);
		}
		printf("\n");
	}
}
