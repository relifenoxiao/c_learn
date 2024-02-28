#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void fun(int tt[4][3], int pp[3]);
// Function to find the minimum element in each column of a 2D array,
// and store them in another array
int main(void)
{
	int tt[4][3] = { 0 };
	int pp[3];
	int i = 0, j = 0;

	srand(time(NULL));//get randem seed

	for (i = 0; i < 4; ++i)
		for (j = 0; j < 3; ++j) {
			tt[i][j] = rand() % 101;
			// Fill the 2D array with random numbers between 0 and 100
		}


	fun(tt, pp);
	// Call the fun function to find the minimums and store them in pp
	for (i = 0; i < 3; ++i)
		printf("%d\t", pp[i]);

	return 0;
}

void fun(int tt[4][3], int pp[3]) {
	int i = 0, j = 0;
	for (i = 0; i < 3; ++i)
		pp[i] = tt[0][i];//initialization

	for (j = 1; j < 3; ++j)
		for (i = 0; i < 4; ++i) {
			pp[j] = fmin(pp[j], tt[i][j]);// Update minimum if necessary
		}
}