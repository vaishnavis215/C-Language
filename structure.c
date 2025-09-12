#include<stdio.h>
struct Student{
	int id;
	char name[20];
	float marks;
};
void main(){
	struct Student s1={1,"Radha",80};
	printf("\nStudent 1");
	printf("\nRoll_no:%d",s1.id);
	printf("\nName:%s ",s1.name);
	printf("\nMarks:%.2f",s1.marks);
	
	struct Student s2={2,"Vaishnavi",90};
	printf("\nStudent 1");
	printf("\nRoll_no:%d",s2.id);
	printf("\nName:%s ",s2.name);
	printf("\nMarks:%.2f",s2.marks);
}
