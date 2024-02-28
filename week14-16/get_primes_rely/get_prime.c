#include <stdio.h>
#include<stdlib.h>

int* prime_arr(const int low, const int up) {
	int  i, j, count = 0;//counters

	int* arr = (int*)calloc(up + 1, sizeof(int));//remember to free it

	if (arr == NULL) {
		// 处理内存分配失败
		return NULL;
	}
	int* primes;
	int* primes1 = (int*)malloc(sizeof(int));
	if (primes1 == NULL) {
		free(arr);
		return NULL;
	}

	for (i = 2; i < up; ++i) {
		if (arr[i] == 0) {
			for (j = i * i; j < up; j += i) {
				arr[j] = 1;
			}
			primes1 = realloc(primes1, sizeof(int) * (count + 1));
			if (primes1 == NULL) {
				free(arr);
				free(primes1);
				return NULL;
			}
			primes1[count++] = i;
			printf("1,primes is %d\n", primes1[count - 1]);
		}
	}
	free(arr);//用于筛素数的表释放

	for (i = 0; i < count; ++i)
		if (primes1[i] > low) break;
	//当找到大于需求的下限的素数时跳出，从而获得下限。

	primes = (int*)calloc(count - i + 1, sizeof(int));
	//for (int i1 = 0; i1 < 23; ++i1) {
	//	printf("第%d是%d\n", i1, primes[i]);
	//}
	if (primes == NULL) {
		free(primes1);
		return NULL;
	}



	for (j = 0; i < count; ++i) {
		primes[j++] = primes1[i];
		printf("2. primes is %d\n", primes[j - 1]);
	}
	printf("2. primes is %d\n", primes[j]);
	free(primes1);

	return primes;//remember to free it
}
