#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define row 3
#define column 4
//求一个二维数组周边一圈元素之和
int fun(int arr[row][column]);

int main(void)
{
	int arr[row][column];
	int sum = 0;
	int* p = arr;
	int i;

	srand(time(NULL));
	for (i = 0; i < row * column; ++i)
		*p++ = rand() % 101;
	//生成一个随机的数组
	sum = fun(arr);//接受返回值

	printf("二维数组周边一圈元素之和为%d", sum);


	return 0;
}

int fun(int arr[row][column]) {
	int i, j;
	int sum = 0;

	for (i = 0; i < row; ++i) {
		sum += arr[i][0];
		sum += arr[i][column - 1];
	}//加上首尾行
	for (j = 1; j < column; ++j) {
		sum += arr[0][j];
		sum += arr[row - 1][j];
	}//除去首尾行的首位列
	return sum;
}
