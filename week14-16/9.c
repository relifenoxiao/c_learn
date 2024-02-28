#include<stdio.h>
#include<math.h>


int main(void)
{
	int arr1[4][4], arr2[4][4];
	int i, j;
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			scanf_s("%d", &arr1[i][j]);
	//输入矩阵
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j)
			arr2[j][i] = arr1[i][j];
	//转置矩阵（关于主对角线对称）
	for (i = 0; i < 4; ++i)
		for (j = 0; j < 4; ++j) {
			printf("%d\t", arr2[i][j]);
			if (j == 3)
				printf("\n");
		}

	//输出变换后的矩阵
	return 0;
}
