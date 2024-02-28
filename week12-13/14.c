#include <stdio.h>

int fibonaci(int i)
{
	if (i == 0)
	{
		return 0;//first item
	}
	if (i == 1)
	{
		return 1;//second item
	}
	return fibonaci(i - 1) + fibonaci(i - 2);//Calculation of previous items
}

int main(void)
{
	int n;
	scanf_s("%u", &n);

	printf("%d\t\n", fibonaci(n));//output results

	return 0;
}