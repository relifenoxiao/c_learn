#include<stdio.h>

#define LINE 5 // 定义每行输出的个数
#define MAX 100 // 定义最大的两位数
#define MIN 10 // 定义最小的两位数

/*
	统计并输出能被7整除或能被9整除或能被11整除的所有两位整数。每行输出5个
*/
int main(void)
{
	int num, i = 0, j;
	int divisors[] = { 7, 9, 11 }; // 定义一个数组存储7、9和11
	int len = sizeof(divisors) / sizeof(int); // 定义数组的长度

	for (num = MIN; num < MAX; num++) { // 用最小和最大的两位数作为循环条件
		for (j = 0; j < len; j++) { // 用一个循环判断num是否能被7、9或11整除
			if (num % divisors[j] == 0) {
				printf("%d\t", num);
				i++;
				if (i % LINE == 0) { // 用宏代替常量
					printf("\n");
				}
				break; // 如果能被其中一个整除，就跳出循环，避免重复输出
			}
		}
	}

	return 0;
}