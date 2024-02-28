#include<stdio.h>
int main(void)
{
	int arr[10];
	int i;

	for (i = 0; i < 10; ++i)
		scanf("%d", &arr[i]);
	for (i = 0; i < 10; ++i)
		printf("%d", arr[i]);
	for (i = 9; i >= 0; --i)
		printf("%d", arr[i]);

	//输入十个元素，并正逆序输出。



	return 0;
}
