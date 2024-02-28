#include<stdio.h>
#include<math.h>
/*
	从键盘上输入一个整数n，判断n是否是完数！(作业3.c)
	要求：完数的判断过程用函数实现。
*/
int judge(unsigned n);

int main(void)
{
	printf("请输入一个正整数");
	unsigned n;
	scanf_s("%u", &n);

	if (judge(n)) {
		printf("%u是完数 \t", n);
	}//若返回值为1则成立
	else {
		printf("%u是不完数 \t", n);
	}



	return 0;
}

int judge(unsigned n) {
	int i, j;
	int sum = 0;

	for (i = 1; i < n; ++i) {
		if (n % i == 0) {
			sum += i;
		}
	}//sum = 输入的数所有因数之和
	if (sum == n) {
		return 1;
	}
	//若符合完数的条件则返回1
	else {
		return 0;
	}
	//反之为0
}