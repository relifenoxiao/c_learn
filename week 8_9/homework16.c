#include<stdio.h>


int main(void)
{
	int year, month, day, leap = 0;

	scanf_s("%d%d%d", &year, &month, &day);

	//定义年份，并输入
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
		leap = 1;
	}
	//判断闰年

	switch (month) {
	case 1:
		day = day;
		break;
	case 2:
		day = --month * 30 + 1 + day;
		break;
	case 3:
		day = --month * 30 - 1 + day + leap;
		break;
	case 4:
		day = --month * 30 + day + leap;
		break;
	case 5:
		day = --month * 30 + day + leap;
		break;
	case 6:
		day = --month * 30 + 1 + day + leap;
		break;
	case 7:
		day = --month * 30 + 1 + day + leap;
		break;
	case 8:
		day = --month * 30 + +day + leap + 2;
		break;
	case 9:
		day = --month * 30 + day + leap + 3;
		break;
	case 10:
		day = --month * 30 + day + leap + 3;
		break;
	case 11:
		day = --month * 30 + day + leap + 4;
		break;
	case 12:
		day = --month * 30 + day + leap + 4;
		break;
	default:
		printf("Error!");
		return 0;
		break;
	}
	//根据大月和小月分别判断第几天
	printf("是一年的第%d天", day);
	return 0;
}
