/*
    编程求10-1000之间满足各位数字之和是5的的所有数。要求每行输出5个
*/
#include<stdio.h>
void print_newline(int count);
int main(void)
{
    int num, num1;
    int sum;
    int count = 0;
    //num用于遍历10-1000，num1用于承接num的值并参与运算
    //count用于记录输出过的数的数量
    for (num = 10, sum = 0; num < 1001; ++num) {

        for (num1 = num, sum = 0; num1; num1 /= 10) {
            sum += num1 % 10;
        }//sum等于每一位数字之和
        if (sum == 5) {
            printf("%d\t", num);
            print_newline(++count);
        }
    }
    return 0;
}
void print_newline(int count) {
    count % 5 == 0 ? printf("\n") : 0;
}
