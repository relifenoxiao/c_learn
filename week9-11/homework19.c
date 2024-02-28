#include<stdio.h>

/*
	用于计算正负的s=1(int),term = 1(int),
	结果result = 0(double)
*/
int main(void)
{
	int s = 1, term = 1;
	double result = 0;

	for (; term < 100; ++term) {
		result += (1 / (double)term) * s;
		s *= -1;
	}

	printf("value is :%lf", result);

	return 0;
}