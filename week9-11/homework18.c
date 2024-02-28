#include<stdio.h>

/*
	统计并输出能被7整除或能被9整除或能被11整除的所有两位整数。每行输出5个
*/
int main(void)
{
	int num1, i = 0;

	for (num1 = 10; num1 < 100; ++num1) {
		if (num1 % 7 == 0 || num1 % 9 == 0 || num1 % 11 == 0) {
			printf("%d\t", num1);
			i++;
			//如果满足条件则输出，并记录输出次数
			if (i % 5 == 0) {
				printf("\n");
			}
		}

	}

	return 0;
}