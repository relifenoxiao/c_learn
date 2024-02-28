#include<stdio.h>
#include<math.h>
/*
	从键盘上输入一个正整数n，判断n是否是素数！ (作业1.c)
	素数的判断过程用函数实现。
*/
int judge(int num);
//声明函数
int main(void)
{
	unsigned n;

	printf("请输入一个正整数");
	scanf_s("%u", &n);

	if (judge(n)) {
		printf("%u是素数\n", n);
	}
	else {
		printf("%u不是素数\n", n);
	}
	//若返回值不为0则输出是，反之为否。

	return 0;
}

int judge(int num) {
	int i, j;
	for (i = 2, j = 0; i <= sqrt(num); ++i) {
		if (num % i == 0) {
			++j;
		}
	}
	if (j) {
		return 0;
	}
	//若被整除过，则说明不是，返回0
	else {
		return 1;
	}
	//反之返回1

}