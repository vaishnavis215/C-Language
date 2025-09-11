//WAP to check if character is constant or vowel
#include<stdio.h>
void main()
{
	char c;
	printf("Enter a Alphabet:");
	scanf("%c",&c);
	
	if(c>= 'a' && c<= 'z'){
		if(c== 'a' || c== 'e' || c== 'i' || c== 'o' || c== 'u'){
			printf("%c is vowel alphabet",c);
		}
		else{
			printf("%c is constant alphabet",c);
		}
	}
	else{
		printf(" %c is a not alphabet character",c);
	}
}
