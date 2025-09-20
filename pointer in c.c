#include<stdio.h>
void main(){
	int a=10;
	int *p;
	p = &a;
	
	printf("value of a=%d\n",a);
	printf("address  of a=%p\n",&a);
	printf("Pointer  p hold =%p\n",p);
	printf("value at pointer p=%d\n",*p);


}
