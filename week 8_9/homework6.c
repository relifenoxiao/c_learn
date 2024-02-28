#include<stdio.h>

int main(void)
{
	int t;
	float d, fee;
	scanf_s("%f", &d);
	//输入里程
	if (d < 3) {
		fee = 10;
	}
	else if (d >= 3 && d <= 10) {
		fee = 10 + (d - 3) * 2;
	}
	else if (d > 10) {
		fee = 10 + 7 * 2 + (d - 10) * 2 * 1.5f;
	}
	else {
		printf("Error!");
	}
	//根据不同里程判定收费
	printf("fee=%.0f", fee);

	return 0;
}
