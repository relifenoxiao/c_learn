#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int arr[3][4];
	int cnt[10] = { 0 };
	int* p = &arr;
	int i, j;
	//创建需要运算的数组和pointer

	srand(time(NULL));
	for (i = 0; i < 12; ++i) {
		*p++ = rand() % 101;
	}//生成0-100之间的随机数
	////DEBUG
	//for (i = 0, p = &arr; i < 12; ++i)
	//	printf("%d\t", *p++);

	for (i = 0, p = &arr; i < 12; ++i, ++p) {
		if (!*p) ++cnt[0];//若为0则cnt[0]+1
		while (*p) {
			++cnt[*p % 10];
			*p /= 10;
		}//分解每个数位上的数并记录到数组中
	}

	for (i = 0; i < 10; ++i)
		printf("%d出现的次数是%d次\n", i, cnt[i]);
	//just print the result
	return 0;
}
