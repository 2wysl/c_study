#include <stdio.h>

void main()
{
	int aa[4];
	int hap=0;
	int i;

	for(i=0; i<=3; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i+1);
		scanf("%d", &aa[i]);
	}
	
	for(i=0; i<=3; i++)
	{
		hap=hap+aa[i];
	}

	printf("합계 ==> %d \n", hap);
}

