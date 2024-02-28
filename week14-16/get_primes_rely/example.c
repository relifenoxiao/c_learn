#include <stdio.h>
#include<stdlib.h>
#include "get_prime"
//返回一个素数数组


int main(void)
{
	int* arr_P;
	int i = 0;
	int low = 10, up = 100;
	
	arr_P = prime_arr(low, up);//enter limit

	for (i = 0; arr_P[i] != 0; ++i)
		printf("The prime numbers between %d and %d are: %d\n", low, up, arr_P[i]);//output results

	printf("There are %d primes between %d and %d\n", i, low, up);//count how many elements are there
	free(prime_arr);
	return 0;
}


