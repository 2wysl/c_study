#include <stdio.h>

void main()
{
	int aa[]={10, 20, 30, 40, 50};
	int size;
	int count;

	size=sizeof(aa);
	count=sizeof(aa)/sizeof(int);

	printf("%d", size);
	printf("배열 aa[]의 요소의 개수는 %d 입니다.\n", count);
}

