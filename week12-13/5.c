#include<stdio.h>
#include<math.h>
/*
从键盘上输入一个三位整数n，判断n是否是水仙花数！(作业5.c)
要求：水仙花数的判断过程用函数实现。
*/
int judge(unsigned num);

int main(void)
{
	unsigned n;

	printf("请输入一个三位整数\n");
	scanf_s("%3u", &n);

	if (judge(n)) {
		printf("%u是水仙花数\n", n);
	}
	else {
		printf("%u不是水仙花数\n", n);
	}
	return 0;
}
int judge(unsigned num) {
	int sum = 0;
	int num1 = num;
	while (num) {
		sum += pow(num % 10, 3);
		num /= 10;
		//sum = 输入数每一位的三次方
	}
	if (sum == num1) {
		return 1;
	}//符合自幂数的条件则返回1
	else {
		return 0;
	}
}