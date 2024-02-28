#include<stdio.h>
#include<math.h>

/*
'表示需要初始化
目的：通过一个泰勒展开来获得sin（x）的近似值要求最后一项小于1e-5,并统计此时累计了多少项num'=1（int）。

1.编写需要的函数fac（计算阶乘），turn（变换输入值x），sgn（判断输入值x正负）
2.定义需要的常量PI(long double)
3.定义需要通过键盘输入的值x(long double),定义x1用于接收x初始值。
4.定义某一项为term' = 1(double)（为了进入循环，需要初始化为1），用于变换正负的项为tra = 1(int)
5.阶乘的值为fac_n'=1（long long int),阶乘的某一项为n' = 1（int) 此时累计了多少项num' = 1（int）
6.最后结果为sin（x）= result（double）
*/

const long double PI = 3.1415926535897932384;

long long int fac(int n);//计算阶乘的函数。n即为n！的n。(但是，这里不用） 
double turn(long double x);//用于变换三角函数中x到（-pi/2，pi/2)之间的函数。
int sgn(double num);//声明一个判断正负的函数，若输入正则输出1反之为-1.(但是，这里不用） 

int main(void)
{
    long double x, x1;
    double term;
    int tra = 1, n = 1, num = 1;
    long long int fac_n;
    double result;

    printf("请输入实数x的值:\n");
    scanf_s("%Lf", &x);
    x1 = x;


    //long double debug = sin(x);
    //printf("DEBUG:c标准库方法运算结果为%lf\n\n", debug);



    x = turn(x);
    //变换三角函数中x到（-pi/2，pi/2)之间,并将初始的x赋给result作为泰勒展开第一项。
    result = x;
    term = x;
    fac_n = 1;
    //初始化阶乘的值以进入循环

    while (fabs(term / (long double)fac_n) >= 1e-5)
    {
        tra = -tra;
        fac_n *= (n + 1) * (n + 2);
        n += 2;
        term *= (x * x);
        result += tra * (term / (double)fac_n);

    }
    //为了节省性能，这里不多次重算阶乘
    num = (n + 1) / 2;

    printf("sin(%lf) = %lf\n", x1, result);
    printf("此时累计了%d项\n", num);

    return 0;
}

long long int fac(int n) {
    int num = 1;
    long long int num1 = 1;
    while (num <= n) {
        num1 *= num++;
    }
    return num1;
}

double turn(long double x) {
    long double mid;
    int check = x < 0 ? -1 : 1;
    //由奇函数的性质得f(-x) = - f(x),故若小于零则最后取相反数即可（即*-1）

    x = fabs(x);
    //已经判断过正负后续一律按正计算
    mid = x / (2.0 * PI);
    mid = mid - (long long int)mid;
    //用于中间运算的mid是先用 x/（2*PI），结果再减去整数，得到小数部分。
    //根据正弦函数的性质，分别将 0-0.25，0.25-0.5，0.5-0.75，0.75-1四个部分转化为原点左右四分之一个周期会对应的x

    x = mid * (2.0 * PI);

    if (mid > 0.75) {
        x = 2 * PI - x;
        check *= -1;
    }
    else if (mid > 0.5) {
        x -= PI;
        check *= -1;
    }
    else if (mid > 0.25) {
        x = PI - x;
    }
    //这段用的话就可以泰勒少算几项约束到（0，PI/2)，不用就是约束到(0,2*PI)


    x *= check;
    return x;
}

int sgn(double num) {

    return num < 0 ? -1 : 1;
}
