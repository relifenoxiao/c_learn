#include<stdio.h>
#include<math.h>

int main(void)
{
	int num1, num2, num3;
	scanf_s("%1d%1d%1d", &num1, &num2, &num3);
	//输入一个三位整数，并拆解
	if (num1 == num3) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	//判断是否为回文数
	return 0;
}
