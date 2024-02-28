#include<stdio.h>
#include<math.h>
/*
	目的：求f(x)
	定义n = 100(int), k = 50(int), m = 10(int)
	记录循环次数的变量test = 1（int）
	使用for循环来求和
	结果为result1 = 0（int),result2 = 0（int),result3 = 0(double)
*/
int main(void)
{
	int n, k, m;
	int test;
	int result1, result2;
	double result3;

	for (n = 100, test = 1, result1 = 0; test <= n;) {
		result1 += test++;
	}

	for (k = 50, test = 1, result2 = 0; test <= k;) {
		result2 += pow(test++, 2);
	}

	for (m = 10, test = 1, result3 = 0; test <= m;) {
		result3 += 1 / (double)test++;
	}

	printf("三式结果为%d %d %lf", result1, result2, result3);

	return 0;
}