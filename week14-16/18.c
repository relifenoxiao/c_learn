#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void fun(int a[3][3], int b[3][3]);

int main(void)
{
	int a[3][3] = { 0 };
	int b[3][3] = { 0 };
	int i = 0;
	int* p;
	srand(time(NULL));

	for (i = 0; i < 9; ++i)
		a[i / 3][i % 3] = rand() % 101;//initialization

	fun(a, b);

	p = &b[0][0];
	for (i = 0; i < 9; ++i)
		printf("%d\t", *p++);//output result

	return 0;
}

void fun(int a[3][3], int b[3][3]) {
	int i = 0, j = 0;
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			b[j][i] = a[i][j];//turn

	for (i = 0; i < 9; ++i)
		b[i / 3][i % 3] += a[i / 3][i % 3];//sum the matrix
}