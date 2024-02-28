#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int arr[4][5];
	double ave[4];
	int* p = &arr;
	int i, j;
	double sum = 0;

	srand(time(NULL));
	//使用当前时间初始化随机数
	for (i = 0; i < 20; ++i)
		*p++ = rand() % 101;
	//使用随机数初始化数组并设定上限为100

	for (i = 0; i < 4; ++i) {
		for (j = 0, sum = 0; j < 5; ++j) {
			sum += arr[i][j];
		}
		ave[i] = sum / 5;
	}
	//求平均数并放入数组
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 5; ++j) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}//输出二维数组
	for (i = 0; i < 4; ++i)
		printf("%lf\t", ave[i]);
	//输出存放平均数的数组
	return 0;
}
