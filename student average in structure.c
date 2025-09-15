#include<stdio.h>
struct student{
	float marks[3][3];
	
};
void main(){
	int i,j,n;
	float sum=0,avg;
	printf("Enter number of student for average details:");
	scanf("%d",&n);
	struct student S1[n];
	for(i=0;i<n;i++){
		printf("Enter the marks of %d student:\n",i+1);
		for(j=0;j<n;j++){
            scanf("%f", &S1[i].marks[j]);
        }
	}
	
	for(i=0;i<n;i++){
		
		printf("Marks of three student",i+1);
		for(j=0;j<n;j++){
			printf("%.2f",S1[i].marks[j]);
			sum=sum+S1[i].marks[j];
		}
	
	avg=sum/n;
	printf("average marks of student %d %.2f:\n"i+1,avg);
}
}

