#include <stdio.h>
// 脱裤子放屁啊
#define LIN 100
void pt_nl(int num);

int main(void)
{
	int i, j, i1, count = 0; // counters
	int arr[LIN + 1] = {0};	 // required elements in the array
	int result[4][5] = {0};	 // meaningless requirement
	int *p = result;		 // a pointer which point at result[0][0]

	for (i = 2; i < LIN; ++i)
	{
		if (arr[i] == 0)
		{
			for (j = i * i; j < LIN; j += i)
			{
				arr[j] = 1;
			}
		}
	}
	// search primes
	for (i = 20; i < LIN; ++i)
	{
		if (!arr[i])
		{
			*p++ = i;
		}
	}
	// Pass results to target
	// It's worth to mention that the principle is that these arrays are arranged linearly in memory
	for (i1 = 0; i1 < 4; ++i1)
		for (j = 0; j < 5; ++j)
		{
			if (!result[i1][j])
				continue; // judge the limit
			printf("%d\t", result[i1][j]);
			pt_nl(++count);
		}
	// print results
	// In addition,the question is wrong. There are no more than 20 prime numbers between 20 and 100.
	return 0;
}

void pt_nl(int num)
{
	(num % 10 == 0) ? printf("\n") : 0;
}
