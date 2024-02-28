#include<stdio.h>
#include<math.h>
/*编写一程序分别用自定义函数和带参数的宏定义求三个数中的最大值
并比较两种实现方法的区别。*/


#define max(a,b) a > b ? a : b


int judge(int x, int y, int z) {
	int fin = 0;
	if (z >= max(x, y)) {
		fin = z;
	}
	else
	{
		fin = max(x, y);
	}
	return fin;

}
int main(void)
{
	int a = 1, b = 2, c = 3;
	int result = 0, true = 0;


	result = max(a, max(b, c));
	//(a > (b > c ? b : c) ? a : b )> c ? b : c
	//(1 > (2 > 3 ? 2 : 3) ? 1 : 2) > 3 ? 2 : 3
	//(1 > 3 ? 1 : 2) > 3 ? 2 : 3
	//2 > 3 ? 2 : 3
	//3
	//怪了，这里结果怎么是1，调试都看不出来。
	printf("%d\n", result);

	true = max((a), (max((b), (c))));

	printf("%d\n", true);



	int x, y, z;
	scanf_s("%d%d%d", &x, &y, &z);

	printf("%d", judge(x, y, z));
	judge(x, y, z);
	return 0;
}