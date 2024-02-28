#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	int *pa = &a, *pb = &b; // ʹָ��ָ���Ӧ����

	scanf("%d", pa);
	scanf("%d", pb);

	// printf("a=%db=%d\n", a, b);//DEBUG
	printf("a + b = %d\n", *pa + *pb);
	printf("a - b = %d\n", *pa - *pb);
	printf("a * b = %d\n", *pa * *pb);
	printf("a / b = %lf\n", ((double)*pa / *pb));

	if (*pa <= *pb)
	{
		pa = &b;
		pb = &a;
	} // ʹָ����Զָ���ı���

	return 0;
}