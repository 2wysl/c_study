#include <stdio.h>

void main()
{
	int aa[]={10, 20, 30, 40, 50};
	int size;
	int count;

	size=sizeof(aa);
	count=sizeof(aa)/sizeof(int);

	printf("%d", size);
	printf("�迭 aa[]�� ����� ������ %d �Դϴ�.\n", count);
}

