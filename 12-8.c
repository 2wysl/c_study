
#include <stdio.h>
#include <malloc.h>


void main()
{
	int *p;
	int i, hap=0;
	int a;

	printf("�Է��� ������ ?");
	scanf("%d", &a);

	p=(int*)malloc(sizeof(int)*a);

	for(i=0; i<a; i++)
	{
		printf("%d ��° ���� : ", i+1);
		scanf("%d", p+i);
	}
	
	for(i=0; i<a; i++)
	{
		if(*(p+1)%2==0){
			hap=hap+*(p+i);
		}
	}
	printf("�Է��� ¦���� : %d", hap);

	free(p);
}
