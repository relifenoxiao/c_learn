#include<stdio.h>
int main(void)
{
	int arr[10] = {0};//store 10 integers
	int i, num,test = 0;
	scanf_s("%d", &num);

	for (i = 0; i < 10;) {
		if (num == arr[i++]) {
			test = 1;
			break;//如果条件为真跳出循环
		}
	}
	if (test)//判断真假
		printf("%d", i);
	else
		printf("-1");
	return 0;
}
