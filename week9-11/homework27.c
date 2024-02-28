/*
	从键盘上输入一个正整数n ，求1！+2！+3！+…n！
*/
#include<stdio.h>

int main(void)
{
	int n, i;
	long long result = 0, fac = 1;
	//用于承接阶乘的结果
	printf("请输入一个正整数\n");
	scanf_s("%d", &n);

	for (i = 1; i <= n; ++i) {
		fac *= i;
		result += fac;
	}//每次循环阶乘项数+1，并将其加给result
	printf("result=%lld", result);
	//输出结果
	return 0;
}

