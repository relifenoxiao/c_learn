#include<stdio.h>


int main(void)
{
	double tax, rate;
	int salary, test;
	scanf_s("%d", &salary);
	//输入薪水

	test = salary / 400;
	//除以最小公约数，将范围化简为数值。
	switch (test)
	{
	case 0:
		tax = 0;
		break;
	case 1:
		tax = 0;
		break;
	case 2:
		tax = (salary - 800) * 0.05;
		break;
	case 3:
		tax = (salary - 1200) * 0.08;
		break;
	case 4:
		tax = (salary - 1200) * 0.08;
		break;
	default:
		tax = (salary - 2000) * 0.2;
		break;
	}
	printf("税收为 %lf", tax);
		//根据不同情况判断进行什么运算


		return 0;
}
