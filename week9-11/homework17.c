#include<stdio.h>

/*
	从键盘上输入一个整数n，判断n是否是完数(真因子和等于其本身）
	定义计数器i = 1(int)，sum = 0 (int)用于储存n每一项的和
	用for循环来判断结果
	输出结果
*/
int main(void)
{
	int n, n1;
	int i = 1, sum = 0;

	//用于存储n的值
	printf("输入一个整数n：\n");
	scanf_s("%d", &n);

	n1 = n;

	for (; i < n; ++i) {
		if (n % i == 0) {
			sum += i;
		}
	}

	if (sum == n1) {
		printf("%d是完数", n1);
	}
	else {
		printf("%d不是完数", n1);
	}

	return 0;
}