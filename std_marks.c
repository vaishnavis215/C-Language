//WAP to find wether a student is pass or fail

#include<stdio.h>
void main()
{
	float std_marks;
	printf("Enter a marks:");
	scanf("%f",&std_marks);
	
	if(std_marks>35){
		printf("%.2f=PASS",std_marks);
	}
	else{
		printf("%f=FAIL",std_marks);
	}
}
