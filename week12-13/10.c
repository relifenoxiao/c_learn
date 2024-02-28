//10.  求10 - 200之间所有的回文数，要求每行输出5个。(作业10.c)
//要求：回文数的判断过程用函数实现。

#include<stdio.h>

void judge(int num);
void print_newline(int num);

int main(void)
{
	int num = 10;

	for (; num < 201; ++num) {
		judge(num);//判断10-200
	}
	return 0;
}

void judge(int num) {
	int keep = num;
	int fin = 0;
	static int i = 0;//静态变量，防止出入循环时被释放
	if (num == 0) {
		return 0;
	}//为0则不是
	for (; num > 0; num /= 10) {
		fin += num % 10;

		if (fin == keep) {//若等于说明是回文数，输出是，++计数器，根据计数器判断是否换行，跳出循环
			printf("%d是回文数\t", keep);
			++i;
			print_newline(i);
			break;
		}//如果是回文数则计数器+1，并将其输出
		fin *= 10;
	}


}
void print_newline(int i) {
	(i % 5 == 0) ? printf("\n") : 0;//若被五整除则换行
}