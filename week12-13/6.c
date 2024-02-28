#include<stdio.h>
#include<math.h>
/*
求所有的水仙花数，要求每行输出5个。(作业6.c)
要求：水仙花数的判断过程用函数实现。

*/
int count = 0;

int judge(unsigned num);
void print_newline(int num);

int main(void)
{
	unsigned n;
	for (n = 100; n < 1000; ++n) {
		if (judge(n)) {
			printf("%u是水仙花数 \t", n);
			print_newline(++count);
		}//用for遍历三位数的所有情况

	}


	return 0;
}
void print_newline(int num) {
	num % 5 == 0 ? printf("\n") : 0;
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