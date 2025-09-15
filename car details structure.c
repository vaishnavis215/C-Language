/*Define a structure Car with members model, brand, price, and year.
 Write a program to read and display details of multiple cars.*/
#include<stdio.h>
struct car{
	char model[5][20];
	char brand[5][20];
	float price;
	int year;
};
void main(){
	int i,n;
	printf("Enter number of cars for details:");
	scanf("%d",&n);
	struct car C1[n];
	
	for(i=0;i<n;i++){
	 printf("\nEnter details of car %d\n", i + 1);
	 printf("\nmodel:");
     scanf("%s",&C1[i].model); 
     printf("\nBrand:");
     scanf("%s",&C1[i].brand); 
     printf("\nPrice:");
     scanf("%f",&C1[i].price);
     printf("\nYear:");
     scanf("%d",&C1[i].year);
     
	}
	printf("\n--- Car Details ---\n");
    for (i=0;i<n;i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Model: %s\n", C1[i].model);
        printf("Brand: %s\n", C1[i].brand);
        printf("Price: %.2f\n", C1[i].price);
        printf("Year:%d\n",C1[i].year);
    }
}
