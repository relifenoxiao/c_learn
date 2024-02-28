#include <stdio.h>
int main()
{
    int n, i = 1, f = 1; //定义变量n为输入的整数，i为循环变量，f为阶乘结果
    printf("请输入一个整数：\n");
    scanf_s("%d", &n); //从键盘输入n的值
    do
    {
        f = f * i; //计算阶乘
        i++; //i自增1
    } while (i <= n); //当i小于等于n时，重复执行循环体
    printf("%d! = %d\n", n, f); //输出阶乘结果
    return 0;
}
