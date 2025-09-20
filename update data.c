//file handling 
#include<stdio.h>
int main()
{
	FILE *fp;
	char text[50];
	
	fp=fopen("Radha Suryawanshi.txt","a");//open file update mode

    fprintf(fp,"Control Statement.\n");
    fprintf(fp,"loop Statement.\n");

    
 	
	fclose(fp);
	return 0;
}
