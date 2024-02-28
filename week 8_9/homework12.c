#include<stdio.h>
#include<math.h>

int main(void)
{
	double y;
	int x,test;
	scanf_s("%d", &x);
	if (x < 2) {
		test = -1;
	}
	else {
		test = (x - 2) / 4;
	}
	//给x的不同情况编号
	switch (test)
	{
	case -1 :
		y = x;
		break;
	case 0:
		y = x * x + 1;
		break;
	case 1:
		y = sqrt(x + 1);
		break;
	default:
		y = 1 / (x + 1);
		break;
	}
	//根据不同情况判断进行什么运算
	printf("y = %lf", y);

	return 0;
}
