//with parameter with return

#include<stdio.h>
int add(int num1,int num2){
	return num1+num2;
}
int sub(int num1,int num2){
	return num1-num2;
}
int mul(int num1,int num2){
	return num1*num2;
}
int evenOdd(int num1,int num2){
	
	if(num1%2==0){
		return num1;
	}
	else{
		return num2;
	}
}


void main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
//	int result=add(a,b);
	printf("Addition =%d\n",add(a,b));
	printf("Subsrtaction =%d\n",sub(a,b));
	printf("Subsrtaction =%d\n",mul(a,b));
    
    printf("even=%d\n",evenOdd(a,b));

	
}
