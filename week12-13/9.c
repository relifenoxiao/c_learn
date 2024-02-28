//9. 从键盘上输入一个整数n，判断n是回文数！(作业9.c)
//要求：回文数的判断过程用函数实现。
#include<stdio.h>

int judge(int n);

int main(void)
{
	int n;

	scanf_s("%d", &n);//enter the value of n

	if (judge(n))//if true
		printf("yes");
	else
		printf("no");

	return 0;
}
int judge(int n) {
	int num = 0;
	int keep = n;

	if (n == 0)//若n为0则结束
		return 0;

	for (; n > 0; n /= 10) {

		num += n % 10; // 将n颠倒
		if (keep == num)
			return 1;//若颠倒后和原数相等，为回文数，返回真
		num *= 10;
	}
	return 0;//反之为假


}