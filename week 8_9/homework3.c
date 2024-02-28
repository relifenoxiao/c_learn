#include<stdio.h>

int main(void)
{
	int num1, num2, num3,max;
	scanf("%d%d%d",&num1,&num2,&num3);
	//输入要计算的数
	、
	if (num1 >= num2) {
		max = num1;
	}
	else {
		max = num2;
	}
	if (max >= num3) {
		printf("最大值为%d", max);
	}
	else {
		printf("最大值为%d", num3);
	}
	//判断哪个大
	return 0;
}
