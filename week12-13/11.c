//11. 从键盘上输入一个四位整数year，判断该年是否闰年。(作业11.c)
//要求：判断年份是否为闰年用函数实现。
#include<stdio.h>

void judge(unsigned num);//声明函数

int main(void)
{
	unsigned year;

	scanf_s("%d", &year);//输入年份

	if (year < 1000 || year >9999) {
		printf("wrong digital");
		return 0;
	}

	judge(year);//判断

	return 0;
}

void judge(unsigned num) {
	if (num % 400 == 0 || num % 4 == 0 && num % 100 != 0)//整除四百为闰年，或者被四整除且不被一百整除
		printf("yes");
	else
		printf("no");
}