#include<stdio.h>

/*
	求Fibonacci数列的前20项，每行输出5个。
	Fn = F(n-1) + F(n-2),F1 = 0,F2 = 1
	定义计数器变量i = 3
	定义三个整型 num1 = 0，num2 = 1，num3（int)
*/
int main(void)
{
	int i = 3;
	int num1 = 0, num2 = 1, num3;

	printf("term1 = %d\t", num1);
	printf("term2 = %d\t", num2);

	for (; i <= 20; i++) {
		num3 = num2;
		num2 = num1 + num2;
		num1 = num3;
		//描述后一项等于前两项之和
		printf("term%d = %d\t", i, num2);
		if (i % 5 == 0) {
			printf("\n");
		}
	}

	return 0;
}