#include<stdio.h>
void pt_nl(int num);
int main(void)
{
	int arr[3][4], turn[3][4];
	int* p = &arr;
	int i, j;

	for (i = 0; i < 12;)
		*p++ = ++i;
	//初始化数组
	p = &turn;
	//指向turn
	for (i = 0; i < 3; ++i)
		for (j = 3; j >= 0; --j)
			*p++ = arr[i][j];
	//进行按行倒序操作
	for (i = 0, j = 0, p = &turn; i < 12; ++i) {
		printf("%d\t", *p++);
		pt_nl(++j);
	}

	return 0;
}
void pt_nl(int num) {
	(num % 4 == 0) ? printf("\n") : 0;
}