#include<stdio.h>

/*
输入两个正整数m，n。求其最大公约数和最小公倍数
先用辗转相除法求最大公约数gcd（int）
最初的m,n不宜被改变，因此定义m1,m2（int）用于运算
运算中需要交换两数的值故定义变量,余数res（int）ps:即residue
再将最初的两数相乘除以求得的最大公约数得到最小公倍数lcm(int)
*/


void judge(unsigned m, unsigned n);

int main(void)
{
	int m, n;

	printf("请输入两个正整数\n");
	scanf_s("%d%d", &m, &n);

	judge(m, n);//调用判断函数，函数会输出结果

	return 0;
}

void judge(unsigned m, unsigned n) {
	int gcd, lcm;//最大公因数和最小公倍数
	int m1, n1, res;//前后项，余数


	if (m <= 0 || n <= 0) {
		printf("Error!");
		return 0;
	}//本程序不处理负数

	if (m > n) {
		m1 = m, n1 = n;
	}
	else {
		m1 = n, n1 = m;
	}
	//保证较大值为前一项m1

	res = 0;
	//初始化后以便进入循环

	while (1)//当除数变为1时结束循环，说明最大公因数是1
	{
		res = m1 % n1;//用大数除以小数
		if (res == 0) break;//若被整除了则输出后一项，即为最大公因数
		m1 = n1;//除数变为被除数
		n1 = res;//余数变为除数
	}

	gcd = n1;//
	lcm = m * n / n1;//最小公倍数为（两数之积/最大公因数）

	printf("最大公约数为：%d\n最小公倍数为：%d\n", gcd, lcm);//输出结果

}