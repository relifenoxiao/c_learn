#include<stdio.h>
#include<math.h>

int main(void)
{
	int g;
	scanf_s("%d", &g);
	//输入成绩
	g = g / 10;
	//将成绩保留十位（百位）
	switch (g)
	{
	case 10:
		printf("A");
		break;
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("E");
		break;
	}
	//判断等第
	return 0;
}
