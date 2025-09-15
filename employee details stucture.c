//WAP to store and display details of 3 employees with the use of stucture

#include<stdio.h>
struct Employee{
	int id;
	char name[20];
	float salary;
};
void main(){
	struct Employee E1={1,"Radha",20000};
	printf("\nEmployee 1");
	printf("\nEmployee_id:%d",E1.id);
	printf("\nEmployee_Name:%s ",E1.name);
	printf("\nEmployee_salary:%.2f",E1.salary);
	
	struct Employee E2={2,"vaishnavi",30000};
	printf("\n\nEmployee 2");
	printf("\nEmployee_id:%d",E2.id);
	printf("\nEmployee_Name:%s ",E2.name);
	printf("\nEmployee_salary:%.2f",E2.salary);
	
	struct Employee E3={3,"vaidehi",40000};
	printf("\n\nEmployee 3");
	printf("\nEmployee_id:%d",E3.id);
	printf("\nEmployee_Name:%s ",E3.name);
	printf("\nEmployee_salary:%.2f",E3.salary);
}
