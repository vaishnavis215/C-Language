// bitwise operators in c
#include<stdio.h>
void main(){
	int a,b;
	
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	
	printf("And bitwise operator:\n");
	printf("a & b =%d\n",a & b);
	printf("Or bitwise operator:\n");
	printf("a | b =%d\n",a | b);
	printf("Xor bitwise Operator:\n");
	printf("a ^ b =%d\n",a ^ b);
    printf("complement =%d\n",~a);
}
