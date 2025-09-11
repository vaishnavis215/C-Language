#include<stdio.h>
void main(){
	int i;
	int a[]={10,20,30};
	int min_element=a[0];
	for(i=1;i<3;i++){
		if(min_element>a[i]){
		 min_element=a[i];
		}		
	}
	printf("Min element=%d",min_element);
	
	
}
