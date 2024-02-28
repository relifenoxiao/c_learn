//Declare required header files.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int count_up(int i, int* score, double* ave);
int main(void)
{
	int m;
	int i = 0;//loop counters
	int count;
	double ave = 0;
	double* p_ave = &ave;//ponit the average
	printf("Number of students whose grades need to be recorded:");
	scanf_s("%d", &m);

	int* score_arr = calloc(m + 1, sizeof(int));//remember to free it
	if (!score_arr)
		return -1;
	//pormpt
	printf("Enter -1 to stop typing\n");

	for (i = 0; score_arr[i] != -1 && i <= m; ++i) {
		//enter scores
		scanf_s("%d", &score_arr[i]);
		//prevent enter to many elements.
		if (i == m) {
			score_arr[i] = -1;
			break;
		}
	}

	count = count_up(i, score_arr, p_ave);
	printf("The number of students above the average is %d\n", count);
	printf("The average is %lf\n", ave);
	return 0;
}
int count_up(int i, int* score, double* ave) {
	int count = 0;
	int j;
	double sum = 0;
	//sum valid data
	for (j = 0; j < i; ++j) {
		sum += score[j];
	}
	//get the average
	sum /= i;
	//Use pointer to return value.
	*ave = sum;
	//Rcount the number of students above the average
	for (j = 0; j < i; ++j) {
		if (score[j] >= *ave)
			++count;
	}
	return count;
}