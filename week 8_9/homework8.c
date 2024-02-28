#include<stdio.h>

int main(void)
{
	double tax, rate, salary;
	scanf_s("%lf", &salary);
	//定义所需变量，并输入
	if (salary <= 1600) {
		rate = 0;
	}
	else if (salary > 1600 && salary <= 2500) {
		rate = 0.05;
	}
	else if (salary > 2500 && salary <= 3500) {
		rate = 0.1;
	}
	else if (salary > 3500 && salary <= 4500) {
		rate = 0.15;
	}
	else{
		rate = 0.2;
	}
	//对不同收入判定税率
	tax = rate * (salary - 1600);//计算结果并输出
	printf("个人所得税为%.2lf",tax);

	return 0;
}
