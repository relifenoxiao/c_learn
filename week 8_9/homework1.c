#include<stdio.h>

int main(void)
{	
	double x,y;
	printf("enter the value of x\n");//输入要运算的值 
	scanf("%lf",&x);

	if (x <= 2.5) {
	y = 1.5 * x + 7.5;
	} 
	else {
	y = 9.32 * x - 34.2;
	}
	//判断输出哪个 
	printf("the value of y is:%lf\n",y);
	//输出结果 
}
