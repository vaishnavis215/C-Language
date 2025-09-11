#include<stdio.h>
#include<string.h>
void main(){
	char name[]="Radha";
	char copy[10];
	
    strcpy(copy,name);
    printf("copy=%s",copy);
}
