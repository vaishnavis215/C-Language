// Wap to find area and perimeter of circle
#include<stdio.h>
void main()
{
	int radius;
	float area;
	float perimeter;
	
	printf("\n enter a radius of circle",radius);
	scanf("%d",&radius);
	
	area=2*3.14*radius*radius;
	printf("The area of circle is %f",area);
	
	perimeter=2*3.14*radius;
	printf("\n The perimeter of circle is %f",perimeter);
}
