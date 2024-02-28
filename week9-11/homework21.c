#include<stdio.h>
//输出三位整数中第一个能被9整除且个位数是5的数
int main(void)
{
	int num = 105;

	for (; num % 9 != 0; num += 10); {

	}//如果不能被9整除则继续循环反之输出第一个符合结果

	printf("输出三位整数中第一个能被9整除且个位数是5的数为:%d\n", num);


	return 0;
}