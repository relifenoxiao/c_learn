#include<stdio.h>
int main(void)
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};//store 10 different integers
	int i,j = 0, min = arr[0];
	
	for (i = 0; i < 10; ++i) {
		if (min <= arr[i])
			continue;//若min小则进入下个循环
		else {
			min = arr[i];//反之，记录更小值和其下标
			j = i;
		}

	}
	i = arr[0];//exchange
	arr[0] = min;
	arr[j] = i;

	return 0;
}
