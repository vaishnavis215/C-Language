//union example

#include<stdio.h>
#include<string.h>
union student{
	int id;
	char name[20];
	float marks;
};
void main(){
	union student s1;
	printf("details of student 1:");
	s1.id=2;
	printf("\nstudent id:%d",s1.id);
	
//    strcpy(s1.name, "john");
    sprintf(s1.name,"john");
	printf("\nstudent name:%s",s1.name);
	
	s1.marks = 56;
	printf("\nstudent marks:%.2f:",s1.marks);

	
	
}
