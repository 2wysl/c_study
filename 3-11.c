#include <stdio.h>

void main()
{
	float a=0.123456789123456789123456789f;
	double b=0.123456123456123456123456123;

	printf("%30.25f \n", a);
	printf("%30.25lf \n", b);
}

