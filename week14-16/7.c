#include<stdio.h>
#include<math.h>


int main(void)
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };//输入数组
	int i, i1, j, j1;
	//定义计数器，以及记录行列号的变量
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 4; ++j) {
			if (arr[0][0] < arr[i][j]) {
				arr[0][0] = arr[i][j];
				i1 = i;
				j1 = j;//若比首项大则赋值给首项，并记录此时行列号
			}
		}
	printf("arr[%d][%d]最大为%d\n", i1, j1, arr[0][0]);//输出结果



	return 0;
}
