#include<stdio.h>

//编写一程序，输入一个正整数n,计算f(x)的前n项之和

double quo(double num1, double num2);

int main(void)
{
	unsigned n;
	int num1 = 1, num2 = 2, num3;
	int test = 1;
	double term;
	printf("请输入要计算的项数n:\n");
	scanf_s("%u", &n);
	//Requires a positive integer to be entered

	for (term = 0; test <= n; ++test) {
		term += quo(num1, num2);
		//每一项等于num2/num1
		num3 = num2;
		num2 += num1;
		num1 = num3;
		//下一项分母，为前一项分子分母之和，分母为前一项中的分子

	}
	printf("the value of term is: %lf\n", term);
	//输出结果
	return 0;
}

double quo(double num1, double num2) {
	double quo;
	quo = num2 / num1;

	return quo;
}