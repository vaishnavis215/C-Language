//switch statement
#include<stdio.h>
void main()
{
	char day;
	printf("Enter day:");
	scanf(" %c",&day);	
    switch(day){
    	case 'A':
    	printf("sunday");
    	break;
    	case 'B':
		printf("monday");
		break;
		case 'C':
		printf("tuesday");
		break;
		case 'D':
		printf("wednesday");
		break;
		case 'E':
		printf("thursday");
		break;
		case 'F':
		printf("friday");
		break;
		case 'G':
		printf("saturday");
		break;	
		default:
			{
				printf("Invalid input");
			}
	}
}
