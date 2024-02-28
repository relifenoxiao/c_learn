#include <stdio.h>

/*对一个不大于5位的正整数能：(作业3.c)
（1）判断出它是几位数；
（2）求其逆序数并输出。
判断几位数
使用循环来拆解数并判断数位并同时生成逆序数
*/

int main(void)
{
	int num, digit = 0;
	int num_h = 0;
	printf("请输入一个不大于5位的正整数\n");
	scanf_s("%d", &num);

	if (num < 0 || num >99999) {
		printf("error\n");
		return 0;
	}

	while (num) {
		num_h = num % 10 + num_h * 10;
		digit++;
		num /= 10;
	}
	printf("是%d位数，逆序数是%d\n", digit, num_h);

	return 0;
}
