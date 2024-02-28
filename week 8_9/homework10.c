#include<stdio.h>
#include<math.h>

int main(void)
{
	int num, num1, num2, num3, sum;
	scanf_s("%d", &num);
	//定义需要的变量并输入
	if (num > 999 || num < 100) {
		printf("请输入三位整数");
		return 0;
	}
	//判断是否为三位整数
	num1 = num / 100;
	num2 = (num / 10) % 10;
	num3 = num / 100;
	sum = pow(num1, 3) + pow(num2, 3) + pow(num2, 3);
	//计算各数字的立方和
	if (sum == num) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	//判断是否为水仙花数
	return 0;
}
