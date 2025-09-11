#include<stdio.h>
void main(){
	int i;
	int a[]={10,20,30};
	int max_element=a[0];
	for(i=1;i<3;i++){
		if(max_element<a[i]){
		 max_element=a[i];
		}		
	}
	printf("max=%d",max_element);
	
	
}
