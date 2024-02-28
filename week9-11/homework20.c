//求1900 - 2018之间所有的闰年，每行输出5个
#include<stdio.h>

void ent(int i);//若i被五整除5则输出换行

int main(void)
{
	int year, i = 0;

	for (year = 1900; year < 2019; ++year) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			printf("%d是闰年\t", year);
			++i;
			ent(i);
		}
	}
	//四年一闰，百年不闰，四百年闰
	return 0;
}

void ent(int i) {
	if (i % 5 == 0) {
		printf("\n");
	}

}