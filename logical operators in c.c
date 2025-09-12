// logical operators in c 
#include<stdio.h>
void main(){
	int a,b,d,c=5;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&d);
	
	printf("\nLogical operations Result:");
	printf("\nAND result:%d\n",(a>c && b>c && d>c));
	printf("AND result:%d\n",(a<c && b>c && d<c));
	printf("AND result:%d\n",(a>c && b<c && d>c));
	printf("AND result:%d\n",(a<c && b<c && d<c));
	
	printf("\nOR result:%d\n",(a>c || b>c || d>c));
	printf("OR result:%d\n",(a<c || b>c || d<c));
	printf("OR result:%d\n",(a>c || b<c || d>c));
	printf("OR result:%d\n",(a<c || b<c || d<c));
	
	printf("\nNOT result:%d\n",!(a>b));


}
