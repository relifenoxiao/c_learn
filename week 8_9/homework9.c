#include<stdio.h>

int main(void)
{
	int year;
	scanf_s("%d", &year);
	//定义年份，并输入
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	//判断是否为闰年
	return 0;
}
