#include<stdio.h>
#include<math.h>

int fun(int i);

int arr[15] = { 1,1,0 };
int main()
{
	int i = 3;
	int sum = 0, max = 0, min = 0;

	for (i = 3; i < 15; ++i)
		arr[i] = fun(i);
	//使用计算函数并放入数组
	for (i = 0; i < 15; ++i) {
		sum += arr[i];
		max = fmax(max, arr[i]);
		min = fmin(min, arr[i]);
	}//求和同时找出最大值和最小值
	//输出结果
	printf("最大值为：%d\n最小值为%d\n平均值为%lf\n", max, min, sum / 15.0);
	return 0;
}
int fun(int i) {
	int result;

	result = arr[i - 1] - 2 * arr[i - 2] + arr[i - 3];
	return result;
}