#include<stdio.h>

//编程求s=1+2+...+n，用静态局部变量来实现

int sum(int n);

int main(void)
{
	int n;
	int s;
	scanf_s("%d", &n);//输入上限
	printf("%d", sum(n));

	return 0;
}

int sum(int n) {
	static int i = 1;//你就说用没用吧
	int mid = 0;
	for (i = 1; i <= n; ++i) {
		mid += i;
	}
	return mid;
}