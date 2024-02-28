/*
	将一个正整数分解质因子输出。例如，输入36，输出36 = 2 * 2 * 3 * 3。
*/
#include<stdio.h>

int main(void)
{
	unsigned num;
	int i;

	printf("输入一个正数：\n");
	scanf_s("%u", &num);

	printf("%u=", num);
	//开始分解质因数
	for (i = 2; i <= num; ++i) {
		while (num % i == 0) {
			printf("%d", i);
			num /= i;
			if (num != 1) {
				printf("*");
			}
		}//从2开始试除到不能被除，换下个数
	}
	printf("\n");

	return 0;
}

