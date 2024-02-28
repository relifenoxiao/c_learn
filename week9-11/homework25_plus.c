/**
	@求3 - 200之间所有的素数，要求每行输出5个
	@用筛法求解素数
	@用count = 0(int)记录输出的素数个数，编写函数ent实现每行输出五个。
	@首先定义两个需要的计数器i = 1(int), j(int)
	@定义数组arr[201],使用第4-201项
	@最外层for循环遍历arr[3] 到 arr [200],从2开始筛
	@if arr[i] = 0 则 i 为素数，在符合题目要求大于2时开始输出，++count
	@令 j = i ,显然arr[2*j]到 arr[n*j]均不为素数 (n*j > 200时跳出循环），用for将对应项赋值为1
	@若遇到 arr[i] = 1,则不进入if，继续循环
	@最终所有合数被赋值为1，素数为0
	@特别注意的是最好要从2开始筛
*/
#include<stdio.h>
#include<math.h>
void ent(int num);

int main(void)
{
	int  i, j;
	int count = 0;
	int arr[201] = { 0 };

	for (i = 2; i < 201; ++i) {

		if (arr[i] == 0) {
			for (j = i * i; j < 201; j += i) {
				arr[j] = 1;
			}
			if (i > 2) {
				printf("%d是素数 \t", i);
				ent(++count);
			}

		}
	}
	return 0;
}

void ent(int num) {

	(num % 5 == 0) ? printf("\n") : 0;
}