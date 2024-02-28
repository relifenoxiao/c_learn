#include<stdio.h>

int main(void)
{
	printf("输入机动车车速和车道限速值\n");
	double lim, spe;
	scanf_s("%lf%lf", &spe, &lim);//提示输入机动车车速和车道限速值

	if (spe >= lim * 1.5) {
		printf("吊销驾驶证");
	}//如果超了0.5
	else if (spe < lim * 1.5 && spe >= lim * 1.1) {
		printf("罚款200元");
	}//如果超了0.1
	else {
		printf("正常车速");
	}
	//否则无问题
	return 0;
}
