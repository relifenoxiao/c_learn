//求10 - 500之间所有的回文数，每行输出10个

#include<stdio.h>

int i = 0;

void judge(int num);
void ent(int i);//每行输出10个

int main(void)
{
	int num = 10;

	for (; num < 500; ++num) {
		judge(num);
	}

	return 0;
}

void judge(int num) {
	int keep = num;
	int fin = 0;

	for (; num > 0; num /= 10) {
		fin += num % 10;
		if (fin == 0) {
			return 0;
		}
		//如果个位为0则不是
		if (fin == keep) {
			printf("%d是回文数\t", keep);
			++i;
			ent(i);
			break;
		}//如果是回文数则计数器+1，并将其输出
		fin *= 10;
	}


}
void ent(int i) {
	if (i % 10 == 0) {
		printf("\n");
	}
}