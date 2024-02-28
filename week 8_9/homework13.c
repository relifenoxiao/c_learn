#include<stdio.h>
#include<math.h>

int main(void)
{
	int a, c;//输入操作数1和2
	char b;//定义一个运算符b
	double result;//定义结果变量
	scanf_s("%d %c%d", &a, &b, 1, &c);


	switch (b) {
	case '+':
		result = a + c;
		break;
	case '-':
		result = a - c;
		break;
	case '*':
		result = a * c;
		break;
	case '/':
		if (c == 0) {
			printf("Error\n");
		}
		else {
			result = (double)a / c;
		}
		break;
	default:
		printf("不合法的操作符!\n");
		return 0;
	}

	printf("结果为%lf\n", result);


	return 0;
}
