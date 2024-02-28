#include<stdio.h>
//三种汽油不同价3.25，3.00，2.75（元/kg
//两种服务类型，对应折扣0.95和0.9
//输入加油量种类和服务类型
//输出应付金额
int main(void)
{
	double l, m;//加油量，和应付金额
	char ch1, ch2, m1, m2;//判断用户输入需求的变量

	printf("请输入加油量\n");
	scanf_s("%lf", &l);

	printf("请选择加油类型，a，b，c三种，价格由高到低。\n");
	scanf_s(" %c", &ch1);

	printf("请选择服务类型，n(self_help) or m(help)\n");
	scanf_s(" %c", &ch2);

	switch (ch1)
	{
	case 'a':
		if (ch2 == 'n') {
			m = l * 3.25 * 0.95;
		}
		else {
			m = l * 3.25 * 0.9;
		}
		break;
	case 'b':
		if (ch2 == 'n') {
			m = l * 3.0 * 0.95;
		}
		else {
			m = l * 3.0 * 0.9;
		}
		break;
	case 'c':
		if (ch2 == 'n') {
			m = l * 2.75 * 0.95;
		}
		else {
			m = l * 2.75 * 0.9;
		}
		break;
	default:
		break;
	}
	printf("需要的金额是：%lf", m);


	return 0;
}
