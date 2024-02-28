#include<stdio.h>

int main(void)
{
	char ch1;
	scanf_s("%c", &ch1);//输入要判断的字符


	if (ch1 >= '0' && ch1 <= '9') {
		printf("数字");
	}
	else if (ch1 >= 'A' && ch1 <= 'Z') {
		printf("大写字母");
	}
	else if (ch1 >= 'a' && ch1 <= 'z') {
		printf("小写字母");
	}
	else if (ch1 < 32 && ch1 > 0) {
		printf("控制字符");
	}
	else {
		printf("其它字符");
	}
	//判断是什么类型的字符并输出结果
	return 0;
}
