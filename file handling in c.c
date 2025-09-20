//file handling 
#include<stdio.h>
void main(){
	FILE *fp;
	char text[50];
	
	fp=fopen("Radha Suryawanshi.txt","w");//open file read mode
	fprintf(fp,"C Programming Language.\n");
	fprintf(fp,"This is Second line in file Handling..\n");
	
	fclose(fp);
	
}
