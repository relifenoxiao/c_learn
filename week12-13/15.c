#include<stdio.h>
#include<math.h>
//编写一程序，用带参数的宏求三角形的面积
#define S(a,b,c) (a+b+c) / 2.0
#define area(a,b,c) sqrt(S(a,b,c)*(S(a,b,c)-a)*( S(a,b,c)-b)*( S(a,b,c)-c))//sb写法
/*
double area_right(double a, double b, double c) {
	double s_2 = (a + b + c) / 2;
	double term = s_2 * (s_2 - a) * (s_2 - b) * (s_2 - c);

	if (term < 0) {
		printf("Cannot form a triangle!");
		return 0;
	}
	else {
		return sqrt(term);
	}


}
*/
int main(void)
{
	unsigned a, b, c;
	double result = 0;
	scanf_s("%d%d%d", &a, &b, &c);

	result = area(a, b, c);
	printf("%lf", result);





	return 0;
}