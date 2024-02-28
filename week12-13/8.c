#include<stdio.h>
//8. 从键盘上输入一个整数n，求1!+ 2!+ 3!+ … + n!。(作业8.c)
//long long fac(int n);

int main(void) {

	long long result = 0, mid = 1;
	int i, n;

	scanf_s("%d", &n);

	for (i = 1; i <= n; ++i) {
		mid *= i;//Calculate factorial results
		result += mid;//sum
	}

	printf("result = %lld", result);//print

	return 0;
	//Recalculate factorial every time，
	//time complexity (n^O(n!)) is too high
	/*
	int j = 1;
	long long result1 = 0;

	for (; j < n; ++j) {
		result1 += fac(j);
	}
	printf("result = %lld", result);//print

	return 0；
	*/
}
/*
long long fac(int n) {
	int i = 2;
	int mid = 1
	for (; i <= n; ++i) {
		mid *= i;
	}
	return mid;
}
*/