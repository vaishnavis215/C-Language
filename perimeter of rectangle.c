//wap to print perimeter of rectangle given its height and width
#include<stdio.h>
void main()
{
	int height;
	int width;
	float perimeter;
	
	printf("Enter a height of rectangle:",height);
	scanf("%d",&height);
	printf("\n Enter a width of ractangle:",width);
	scanf("%d",&width);
	
	perimeter=2*(height+width);
	printf("\n The perimeter of rectangle is %f",perimeter);
}
