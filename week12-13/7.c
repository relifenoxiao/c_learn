#include<stdio.h>
//7. 从键盘上输入一个整数n，求n!。(作业7.c)
//要求：n!过程用函数实现。

long long result = 1;//定义阶乘的结果

long long fac(int n);

int main(void)
{
    int n;

    scanf_s("%d", &n);
    result = fac(n);//get the result
    printf("n! = %lld", result);

    return 0;
}

long long fac(int n) {
    int i;//counter

    for (i = 2; i <= n; ++i) {
        result *= i;
    }//caculate factorial
    return result;//Return results
}
