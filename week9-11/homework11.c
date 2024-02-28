#include<stdio.h>

//s=a+aa+aaa+…+aaa…aaa的值，其中a是1～ 9之间的某个数字，n是一个正整数
int main(void)
{
	long long s = 0;//用于承接结果
	int a, n, test, mid;//test用于判断加到n，mid用于中间的计算

	printf("请输入a和n的值：\n");
	scanf_s("%d %d", &a, &n);//这个s你不需要
	//输入a和n
	for (mid = a, test = 1; test <= n; ++test) {//令mid = a，初始化test=1，循环n次
		s += mid;//每一次加上test个a相乘
		mid = mid * 10 + a;//例如a就变成aa
	}
	//计算s的值

	printf("s的值为 %lld", s);//输出结果

	return 0;
}