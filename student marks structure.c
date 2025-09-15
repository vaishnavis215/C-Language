/*Write a program to read marks of 3 students in 
3 subjects (3×3 float array) and print the average marks of each student.*/
#include<stdio.h>
struct student{
	float marks[3][3];
	
};
void main(){
	int i,j,n;
	float sum,avg;
	printf("Enter number of student for details:");
	scanf("%d",&n);
	struct student S1[n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		 printf("Subject %d:\n ", j + 1);
            scanf("%f", &S1[i].marks[j]);
	}
	printf("Average of student marks=%d",sum/3);
}

