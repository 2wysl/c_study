#include <stdio.h>

void main(int argc, char* argv[])
{
	int i;

	printf("argc 매개변수 ==> %d \n", argc);

	for(i=0; i<argc; i++)
		printf("argc[%d] 매개변수 ==> %s \n", i, argv[i]);
}

