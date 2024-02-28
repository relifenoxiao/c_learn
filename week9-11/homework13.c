#include<stdio.h>
//输出所有的“水仙花数”(三位自幂数)
int main(void)
{
	int n, num1, sum;
	int g, s, b;
	//个位，十位，百位
	for (num1 = 100; num1 < 1000; ++num1) {
		g = num1 % 10;
		s = (num1 / 10) % 10;
		b = num1 / 100;
		sum = g * g * g + s * s * s + b * b * b;

		if (num1 == sum) {
			printf("%d是水仙花数\n", num1);
		}
		//如果成立则输出是水仙花数
	}

	return 0;
}


