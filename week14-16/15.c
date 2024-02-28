#include <stdio.h>
#include<stdlib.h>

//返回一个素数数组

int cnt_prime(const int limit);

int main(void)
{
	int count = 0;
	int limit = 1000;
	int i = 0;
	count = cnt_prime(++limit);
	printf("There are %d primes between 2 and %d", count, limit);//output results

	return 0;
}

int cnt_prime(const int limit) {
	int  i, j, count = 0;//counters

	int* arr = (int*)calloc(limit, sizeof(int));//remember to free it

	if (arr == NULL) {
		// 处理内存分配失败
		return NULL;
	}

	int* primes = (int*)malloc(sizeof(int));//get an array for primes
	if (primes == NULL) {
		free(arr);
		return NULL;
	}
	primes[0] = 0;

	for (i = 2; i < limit; ++i) {
		if (arr[i] == 0) {
			for (j = i * i; j < limit; j += i) {
				arr[j] = 1;
			}
			primes = realloc(primes, sizeof(int) * (count + 1));//
			if (primes == NULL) {
				free(arr);
				free(primes);
				return NULL;//judge if the pointer is NULL
			}
			primes[count++] = i;
		}
	}//these codes are from other programes,so it seems meaningless.
	//for (i = 0; i < count; ++i)
	//	printf("%d\n", primes[i]);
	free(arr);
	free(primes);//just free those pointers

	return count;//remember to free it
}
