#include<stdio.h>
//从键盘上输入一个正整数n，计算n的各位上数字的平方之和。
int main(void)
{
	int num, sum, mid;

	printf("请输入一个正整数：\n");
	scanf_s("%d", &num);

	if (num <= 0) {
		printf("Error!");
		return 0;
	}
	//判断输入是否符合需求
	for (sum = 0; num > 0; num /= 10) {
		mid = num % 10;
		sum += mid * mid;
	}
	//求各位上数字的平方之和
	printf("各位上数字的平方之和为：%d", sum);

	return 0;
}