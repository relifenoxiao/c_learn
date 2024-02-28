#include <stdio.h>

//从键盘上输入10个整数，并求出这10个数所有奇数之和及偶数之和。
//要求：分别用while、do…while
//定义奇数之和及偶数之和对应的变量
//定义一个用于判断循环次数的变量并将其初始化

int main(void)
{
	int num, sum_j = 0, sum_o = 0;
	int test = 0;

	do {
		scanf_s("%d", &num);
		if (num % 2) {
			sum_j += num;
		}
		else {
			sum_o += num;
		}
		test++;
	} while (test < 9);

	printf("奇数之和与偶数之和分别为：%d ,%d\n", sum_j, sum_o);
	return 0;
}
