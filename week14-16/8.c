#include<stdio.h>
#include<math.h>


int main(void)
{
	int arr[3][4], max[3];
	int i, j;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 4; ++j)
			scanf_s("%d", &arr[i][j]);
	//input values from the keyboard

	for (i = 0; i < 3; ++i)
		max[i] = arr[i][0];
	//每一行的第一项赋给max数组

	for (i = 0; i < 3; ++i)
		for (j = 1; j < 4; ++j)
			max[i] = fmax(max[i], arr[i][j]);
	//max[i]获得arr[i][0-4]中最大的

	for (i = 0; i < 3; ++i)
		printf("第%d行最大的是%d\n", i, max[i]);
	//输出结果
	return 0;
}
