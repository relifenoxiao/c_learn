#include<math.h>

int find_max(int* arr, int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++)
		max = fmax(max, arr[i]);

	return max;
}

int find_min(int* arr, int n) {
	int min = arr[0];
	for (int i = 1; i < n; i++)
		min = fmin(min, arr[i]);

	return min;
}
