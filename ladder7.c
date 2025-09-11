// nested if else
#include<stdio.h>
void main()
{
	char c='M';
	int age=19;
	
	if(c=='M')
	{
		if(age>18)
		{
			printf("Men");
		}
		else{
			printf("boy");
		}
	}
	else{
		if(age>18){
			printf("women");
		}
		else{
			printf("girl");
		}
	}
}
