#include<stdio.h>
#include<math.h>
#include "arr_maxmin.h"

int arr[15] = { 1,1,0 };
int main()
{
	int i = 3;
	int sum = 0;

	for (i = 3; i < 15; ++i)
		arr[i] = fun(i);
	//使用计算函数并放入数组
	for (i = 0; i < 15; ++i) {
		sum += arr[i];
	}//求和
	//输出结果
	printf("最大值为：%d\n最小值为%d\n平均值为%lf\n", find_max(arr, 15), find_min(arr, 15), sum / 15.0);
	return 0;
}
int fun(int i) {
	int result;

	result = arr[i - 1] - 2 * arr[i - 2] + arr[i - 3];
	return result;
}
