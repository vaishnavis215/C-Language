//file handling 
#include<stdio.h>
int main()
{
	FILE *fp;
	char text[50];
	
	fp=fopen("Radha Suryawanshi.txt","r");//open file read mode
while(fgets(text,sizeof(text),fp) !=NULL){
	printf(" %s ",text);
}
 	
	fclose(fp);
	return 0;
}
