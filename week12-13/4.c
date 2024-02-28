#include<stdio.h>
#include<math.h>
/*
求2-1000之间所有的完数，要求每行输出5个。(作业4.c)
要求：完数的判断过程用函数实现。
*/
int judge(unsigned n);
void print_newline(int num);

int count = 0;

int main(void)
{
	unsigned n;

	for (n = 2; n < 2001; ++n) {
		if (judge(n)) {
			printf("%u是完数 \t", n);
			print_newline(++count);
		}//若返回值为1则成立
	}

	return 0;
}
void print_newline(int num) {
	num % 5 == 0 ? printf("\n") : 0;
	//输出过五个后输出换行
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