#include<stdio.h>
int main(void)
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};//store 10 integers
	int i,j = 0, max = arr[0];
	
	for (i = 0; i < 10; ++i) {
		if (max >= arr[i])
			continue;//若max大则进入下个循环
		else {
			max = arr[i];//反之，记录更大值和其下标
			j = i;
		}

	}
	i = arr[9];//exchange
	arr[9] = max;
	arr[j] = i;

	return 0;
}
