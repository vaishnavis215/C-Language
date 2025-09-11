// WAP to print designatoin of employee accroding to yr of experience

#include<stdio.h>
void main()
{
	int years;
	printf("Enter a years of experience:");
	scanf("%d",&years);
	
	if(years>0 && years<1){
		printf("Trainee");
	}
	else if(years>1 && years<3){
		printf("Junier Debveloper");
	}
	else if(years>3 && years<7){
		printf("Senior Developer");
	}
	else if(years>7)
	{
		printf("Team leader");
	}
	else{
		printf("Unemployee");
	}
}
