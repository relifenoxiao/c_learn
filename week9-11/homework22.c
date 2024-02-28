//编写程序求数列1，3，3，3，5，5，5，5，5，7，7，7，7，7，7，7的第15项

#include<stdio.h>

int main(void)
{
	int num, i = 1, n = 15;

	for (; n > (i * i); ++i);
	//利用等差数列求和判断某一项是数列中的第几种项
	num = 2 * i - 1;
	//计算第几种项的值
	printf("数列的第15项为：%d", num);

	return 0;
}