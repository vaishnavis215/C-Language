// WAP to decribe variables 

#include<stdio.h>

int main()
{
	int a=10;
	float b=10.10;
	char c='c';
	double d=53.40;
	printf("\n int:%d" ,a);
	printf("\n float:%f",b);
	printf("\n char:%c",c);
	printf("\n double: %f",d);	
	printf("\n div=%f",800000/2000);
	
	return 0;
}
/* # rules for declaring variable name
   -Cannot start from any digit or special charecter.
   -Cannot contain any symbol in between name expect "_".
   -Cannot contain space.
   -Keyword cannot be variable name
#format specifier
   -%d for integer value
   -%c for charecter value
   -%f for floating value
   -%s for string
   -%d for double value
#size of datatype
  -int 4 bytes
  -char 1 bytes
  -float 4 bytes
  -double 8 bytes */
