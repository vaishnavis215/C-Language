#include<stdio.h>
#include<string.h>
void main(){
	char name[20]="vaishnavi";
	char lastname[]="suryawanshi";
	
    strcat(name,lastname);
    printf("Fullname=%s",name);
    printf("fullname=%s",strcat(name,lastname));
}
