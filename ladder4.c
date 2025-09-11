//WAP to accept a charcacter c and display category of input character if c is between:
//0-9 then digit
//a-z then lowercase
//A-Z then uppercase
#include<stdio.h>
void main(){
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	
	if(c>='0' && c<='9'){
		printf("%c is Digit",c);
	}
	else if(c>= 'a' && c<= 'z'){
		printf("%c is Lowerspace",c);
	}
	else if(c>= 'C' && c<= 'Z'){
		printf("%c is Uppercase",c);
	}
	else{
		printf("Character is unvalid or whitespace");
	}
}
