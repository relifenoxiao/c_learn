#include<stdio.h>

long long int fac(unsigned n);//计算阶乘的函数。n即为n！的n

int main(void)
{
	unsigned n;
	long long result;
	//定义一个无符号整型变量
	printf("请输入正整数n：\n");
	scanf_s("%u", &n);
	result = fac(n);
	printf("n!=%lld\n", result);
	//调用计算阶乘的函数
	return 0;
}


long long int fac(unsigned n) {
	int num = 1;
	long long int num1 = 1;
	while (num <= n) {
		num1 *= num++;
	}
	return num1;
}