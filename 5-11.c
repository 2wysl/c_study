#include <stdio.h>

void main()
{
	int a, b;
 	char x;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &x, &b);

	switch(x)
	{
		case '+' : printf("%d + %d = %d �Դϴ�.\n", a, b, a+b); break;
		case '-' : printf("%d - %d = %d �Դϴ�.\n", a, b, a-b); break;
		case '*' : printf("%d * %d = %d �Դϴ�.\n", a, b, a*b); break;
		case '/' : printf("%d / %d = %d �Դϴ�.\n", a, b, a/b); break;
		case '%' : printf("%d %% %d = %d �Դϴ�.\n", a, b, a%b); break;
		default : printf("�����ڸ� �߸� �Է��߽��ϴ�.\n"); break;
	}
	
}

