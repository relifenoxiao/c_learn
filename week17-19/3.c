#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//Declare required header files.
int main(void)
{
	srand(time(NULL));
	int lim;
	int i;
	double ave = 0;
	printf("Enter the number of elements you need:");
	scanf_s("%d", &lim);//Determine upper limit
	int* arr = calloc(lim + 1, sizeof(int));//你就说是不是以0结束吧（乐）
	if (!arr)
		return -1;//in fact ,it's an useless judgement.

	for (i = 0; i < lim; i++)
		arr[i] = (rand() % 201 - 100);//Fill the array `arr` with random numbers between -100 and 100.

	for (i = 0; i < lim; ++i) {
		arr[i] > 0 ? ave += arr[i] : 0;
	}
	free(arr);//free

	ave /= lim;//Calculate the average.
	printf("The average of all positive numbers is %lf\n", ave);


	//print the result

	return 0;
}