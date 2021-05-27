#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a, b, c, tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	tmp = (a > b) ? a : b;
//	tmp = (tmp > c) ? tmp : c;
//	printf("max = %d", tmp);
//	return 0;
//}

//int input(int i)
//{
//	scanf("%d", &i);
//	return i;
//}
//int main()
//{
//	int i = 0;
//	int num, k;
//	while (1)
//	{
//		printf("请输入一个小于1000的正数\n");
//		num = input(i);
//		if (num < 1000)
//		{
//			k = sqrt(num);
//			printf("平方根为%d\n", k);
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x < 1)
//		printf("%d\n", x);
//	else if (x >= 1 && x < 10)
//		printf("%d\n", 2 * x - 1);
//	else
//		printf("%d\n", 3 * x - 11);
//	return 0;
//}

//int main()
//{
//
//	int x, y;
//	scanf("%d", &x);
//	y = 0;
//	if (x >= 0)
//		if (x > 0) y = 1;
//		else y = -1;
//	printf("x = %d\ty = %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int score, num;
//	scanf("%d", &score);
//	num = score / 10;
//	if (score >= 90)
//	{
//		printf("A\n");
//	}
//	else
//	{
//		switch (num)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//		{
//			printf("E\n");
//			break;
//		}
//		case 6:
//		{
//			printf("D\n");
//			break;
//		}
//		case 7:
//		{
//			printf("C\n");
//			break;
//		}
//		case 8:
//		{
//			printf("B\n");
//			break;
//		}
//		default:
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	float i = 0;
//	printf("请输入当月利润：");
//	scanf("%f", &i);
//	if (i <= 100000)
//		printf("%.0f\n", i + i / 10);
//	else if (i <= 200000)
//		printf("%.0f\n", 110000 + ((i - 100000) + (i - 100000) * 0.075));
//	//...
//	return 0;
//}

//int main()
//{
//	float i;
//	int tmp;
//	scanf("%f", &i);
//	tmp = i / 100000;
//	if (i > 1000000)
//	{
//		//...
//	}
//	switch (tmp)
//	{
//	case 0:
//	case 1:
//		printf("%.0f\n", i + i / 10);
//		break;
//	//...
//	default:
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	int tmp;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a > d)
//	{
//		tmp = a;
//		a = d;
//		d = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (b > d)
//	{
//		tmp = b;
//		b = d;
//		d = tmp;
//	}
//	if (c > d)
//	{
//		tmp = c;
//		c = d;
//		d = tmp;
//	}
//	printf("%d %d %d %d\n", a, b, c, d);
//	return 0;
//}

int main()
{
	int i = 1;
	int num = 0;
	for (i = 1;i <= 10;i++)
	{
		num = num + i;
	}
	printf("%d\n", num);
	printf("%d\n", i);
	return 0;
}