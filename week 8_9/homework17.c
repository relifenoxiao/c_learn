#include<stdio.h>

int main(void)
{
	int serial, num, choice;
	double price = 0;
	//定义需要的变量
	printf("请选择商品类别： 1、日用品 2、文具 3、食品\n");

	scanf_s("%d", &serial);
	switch (serial)
	{
	case 1:
		printf("1、牙刷(3.5元/支） 2、牙膏(9.5元/支） 3、肥皂 (5.0/支)\n");
		printf("请选择商品：");
		scanf_s("%d", &choice);
		printf("请输入数量：");
		scanf_s("%d", &num);

		switch (choice)
		{
		case 1:
			price = 3.5 * num;
			break;
		case 2:
			price = 9.5 * num;
			break;
		case 3:
			price = 5.0 * num;
			break;
		default:
			break;
		}
		break;
	case 2:
		printf("1、铅笔（1.0元/支） 2、橡皮（2.5元/支） 3、直尺 (2.0/支)\n");
		printf("请选择商品：");
		scanf_s("%d", &choice);
		printf("请输入数量：");
		scanf_s("%d", &num);

		switch (choice)
		{
		case 1:
			price = 1.0 * num;
			break;
		case 2:
			price = 2.5 * num;
			break;
		case 3:
			price = 2.0 * num;
			break;
		default:
			break;
		}
		break;
	case 3:
		printf("1、汉堡（10.5元/支） 2、苹果 （9.5元/个） 3、蛋糕 (15.0/个)\n");
		printf("请选择商品：");
		scanf_s("%d", &choice);
		printf("请输入数量：");
		scanf_s("%d", &num);

		switch (choice)
		{
		case 1:
			price = 10.5 * num;
			break;
		case 2:
			price = 9.5 * num;
			break;
		case 3:
			price = 15.0 * num;
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	//嵌套switch语句进行两次多个判定
	printf("总价格为：%.2lf", price);
	//输出保留两位的结果
	return 0;
}
