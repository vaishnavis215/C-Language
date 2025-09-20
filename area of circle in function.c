#include<stdio.h>
#define pi 3.1416
float areaofCircle(){
	float a,r=5;	
	a=pi*r*r;
	return a;
}
int cubeofNumber(){
	int cube,num=7;
	cube=num*num*num;
	return cube;
	
}
int getsquareRoot(){
	int num=0,i;
	for(i=1;i*i<num;i++){

	}
		return i;
}


void main(){
	printf("Area of circle =%.2f\n",areaofCircle());
	printf("cube =%d\n",cubeofNumber());
	printf("squareroot=%d\n",getsquareRoot());


}
