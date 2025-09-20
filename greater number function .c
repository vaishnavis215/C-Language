#include<stdio.h>

int maxoffThree(){
	int a=10, b=25, c=15;
	
	if(a>b && a>c){
		return a;
	}
	else if(b>c){
		return b;
	}
	else{
		return c;
	}
}
void main(){
     printf("Max of Three is=%d \n",maxoffThree());
     printf("number=%d",maxoffThree());
}
