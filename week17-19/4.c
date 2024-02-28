#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//Declare required header files.
int main(void)
{
	srand(time(NULL));
	// Declare variables
	int lim;
	int i;
	int max, min;
	//The prompt
	printf("Enter the number of elements you need:");
	//Determine upper limit
	scanf_s("%d", &lim);

	int* arr = calloc(lim, sizeof(int));
	//An useless judgement :).
	if (!arr)
		return -1;

	//Fill the array `arr` with random numbers between -100 and 100.
	for (i = 0; i < lim; i++)
		arr[i] = (rand() % 201 - 100);

	max = min = arr[0];
	for (i = 0; i < lim; ++i) {
		max = fmax(max, arr[i]);
		min = fmin(min, arr[i]);
	}
	// Free the array memory
	free(arr);

	//print the result
	pirntf("The largest element is %d\n", max);
	pirntf("The smallest element is %d\n", min);


	return 0;
}