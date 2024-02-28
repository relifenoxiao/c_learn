//12.求1900～2000中所有的闰年，每行输出5个年份。(作业12.c)
//要求：判断年份是否为闰年用函数实现。

#include<stdio.h>

void judge(unsigned num);//声明函数
void print_newline(int num);
int main(void)
{
	unsigned year = 1900;


	for (; year < 2001; ++year) {
		judge(year);//判断

	}
	return 0;
}

void judge(unsigned num) {
	static int i = 0;
	if (num % 400 == 0 || num % 4 == 0 && num % 100 != 0) {//整除四百为闰年，或者被四整除且不被一百整除
		printf("%d是闰年", num);
		print_newline(++i);
	}
}
void print_newline(int i) {
	(i % 5 == 0) ? printf("\n") : 0;//若被五整除则换行
}