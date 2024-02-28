#include <stdio.h>
//编写一程序，求e的近似值
int main()
{
    long i = 1, f = 1;
    double result = 1;

    while (1.0 / f >= 1e-7)
    {
        f *= i;//计算阶乘
        result += 1.0 / f;
        ++i; //i自增1
    }
    printf("e = %lf\n", result); //输出阶乘结果
    return 0;
}
