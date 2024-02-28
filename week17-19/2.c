#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// Declare required header files.
int main(void)
{
	srand(time(NULL));
	int lim = 10;
	int i, j;
	int max;
	printf("Enter the number of elements you need:");
	// scanf_s("%d", &lim);//Determine upper limit
	int *arr = malloc(sizeof(int) * lim);
	if (!arr)
		return -1; // in fact ,it's an useless judgement.

	for (i = 0; i < lim; i++)
		arr[i] = rand() % 101; // fill the arr with randem numbers
	max = arr[0];
	for (i = 1; i < lim; i++)
	{
		max = fmax(max, arr[i]); // find the biggest element
	}
	free(arr);
	printf("The max element is %d\n", max);
	// print the result

	return 0;
}