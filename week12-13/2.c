/*
	goal：求3 - 200之间所有的素数，要求每行输出5个
	用筛法求解素数
	宏定义数组arr[201],使用其中[3-200]的部分
	宏定义count = 0(int)记录输出的素数个数，编写函数print_newline实现每行输出五个。
	自定义judge函数，其中定义两个需要的计数器i = 2(int), j(int)

	最外层for循环遍历arr[3] to arr [200],从2开始筛
	if arr[i] = 0 则 i 为素数，在符合题目要求大于2时开始输出，++count
	令 j = i ,显然arr[2*j]到 arr[n*j]均不为素数 (n*j > 200时跳出循环），用for将对应项赋值为1
	若遇到 arr[i] = 1,则不进入if，继续循环
	在主函数中调用自定义函数judge对宏定义的数组进行操作
	根据上述判断在主函数中使用for遍历 并输出需要的结果
*/
#include<stdio.h>
#include<math.h>

int arr[201] = { 0 };
int count = 0;

void print_newline(int num);
void judge(int num);

int main(void)
{
	unsigned num;

	judge(1);
	//使用判断函数
	for (num = 3; num < 201; ++num) {
		if (arr[num] == 0) {
			printf("%d是素数 \t", num);
			print_newline(++count);
		}
	}


	return 0;
}
void print_newline(int num) {
	num % 5 == 0 ? printf("\n") : 0;
}

void judge(int num) {
	int  i, j;

	for (i = 2; i < 201; ++i) {

		if (arr[i] == 0) {
			for (j = i * i; j < 201; j += i) {
				arr[j] = 1;
			}
		}
	}
	//数组中合数项被赋值为1，素数项为0
}
