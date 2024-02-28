#include<math.h>
#include<stdio.h>
//判断素数的程序
int main(void)
{
	//定义并初始化计数器i和j
	int i = 0;
	scanf_s("%d", &i);
	int j = 0;

	if (1 == i)
	{
		printf("1不是素数");
		return 0;
	}

	for (j = 2; j < sqrt(i); j++)
	{
		if (i % j == 0)
		{
			printf("%d不是素数\n", i);
			break;
		}

	}
	//能被1或者本身之间的整数整除说明是素数
	if (j == sqrt(i))
	{
		printf("%d是素数\n", i);
	}

	return 0;
}
