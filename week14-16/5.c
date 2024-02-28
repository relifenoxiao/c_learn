#include<stdio.h>
#define LIM 100//定义数组存储上限

int main(void) {
	int arr[LIM];
	int i, j;
	int sum = 0;
	double ave = 0;

	for (i = 0; i < LIM; ++i) {
		arr[i] = 1;
	}//初始化整个数组为1
	i = 0;
	while (arr[i]) {
		scanf_s("%d", &arr[i]);
		if (arr[i] == 0)
			break;
		++i;
	}
	//输入数据
	i = j = 0;
	for (; arr[i]; ++i) {
		sum += arr[i];
		if (arr > 0)
			++j;
	}//求和并记录有正负数数量。
	ave = sum / (double)(i);//求平均
	printf("平均数为%lf\n正数有%d个，负数有%d个\n", ave, j, (i - j));
	//输出结果

	return 0;
}
