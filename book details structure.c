//Write a program to define a structure Book with members
// title, author, and price. Read details of 5 books and print them.
#include<stdio.h>
struct book{
	char title[40];
	char author[40];
	float price;
};
void main(){
	int i,n;
	printf("Enter number of books for details:");
	scanf("%d",&n);
		struct book B1[n];
	for(i=0;i<n;i++){
	 printf("\nEnter details of Book %d\n", i + 1);
	 printf("\nTitle:");
     scanf("%s",&B1[i].title);
     
     printf("\nAuthor:");
     scanf("%s",&B1[i].author);
     
     printf("\nPrice:");
     scanf("%f",&B1[i].price);
	}
	printf("\n--- Book Details ---\n");
    for (i=0;i<n;i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", B1[i].title);
        printf("Author: %s\n", B1[i].author);
        printf("Price: %.2f\n", B1[i].price);
    }
}
