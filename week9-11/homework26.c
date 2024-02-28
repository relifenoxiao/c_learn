/*
	求2-1000之间所有的完数，要求每行输出5个
*/
#include<stdio.h>

void print_newline(int num);

int main(void)
{
	int sum;
	int count = 1;
	//每行输出5个
	int i, j;
	//两个用于循环运算的计数器
	for (i = 2; i < 1001; ++i) {
		for (j = 1, sum = 0; j < i; ++j) {
			if (i % j == 0) {
				sum += j;
			}
			//使用for循环拆解并求每个数除了他本身的因数之和
		}
		if (sum == i) {
			printf("%d是完数", i);
			print_newline(++count);
		}
		//判断是否为完数
	}
	return 0;
}

void print_newline(int num) {

	num % 5 == 0 ? printf("\n") : 0;
}