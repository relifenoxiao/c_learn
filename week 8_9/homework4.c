#include<stdio.h>

int main(void)
{	
	double speed;
	scanf("%lf", &speed);
	//输入速度

	if (speed > 60) {
		printf("超速");
	}//判断是否超速并输出结果
	else {
		printf("正常");
	}
	return 0;
}
