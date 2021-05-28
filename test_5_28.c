#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i, j = 0, num;
//	for (i = 1;i <= 4;i++)
//	{
//		j = 0;
//		for (num = 1;num <= 5;num++)
//		{
//			j = j + i;
//			printf("%d\t", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 101; i < 200;i++)
//	{
//		int tmp = (int)sqrt(i);
//		for (j = 2;j < tmp ;j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j >= tmp)
//		{
//			printf("%4d", i);
//		}
//	}
//	return 0;
//}

//求两个数的最大公约数和最小公倍数
//int main()
//{
//	int i, j, x, y, rem = 1;
//	printf("请输入两个正整数：");
//	scanf("%d%d", &i, &j);
//	x = i;
//	y = j;
//	if (x < y)
//	{
//		while (rem)
//		{
//			rem = y % x;
//			y = x;
//			if (rem != 0)
//			{
//				x = rem;
//			}
//		}
//		printf("最大公约数为：%d\n", x);
//		printf("最小公倍数为：%d\n", i * j / x);
//	}
//	else if (x == y)
//	{
//		printf("最大公约数为：1\n");
//		printf("最小公倍数为：%d\n", x);
//	}
//	else
//	{
//		while (rem)
//		{
//			rem = x % y;
//			x = y;
//			if (rem != 0)
//			{
//				y = rem;
//			}
//		}
//		printf("最大公约数为：%d\n", y);
//		printf("最小公倍数为：%d\n", i * j / y);
//	}
//	return 0;
//}
//int main()
//{
//	int i, j, tmp, n;
//	tmp = 1;
//	printf("请输入两个正整数：");
//	scanf("%d%d", &i, &j);
//	n = i * j;
//	if (i > j)
//	{
//		tmp = i;
//		i = j;
//		j = tmp;
//	}
//	while (tmp)
//	{
//		tmp = j % i;
//		j = i;
//		if (tmp != 0)
//			i = tmp;
//	}
//	printf("最大公约数为：%d\n", i);
//	printf("最小公倍数为：%d\n", n / i);
//	return 0;
//}

//int main()
//{
//	char c;
//	int letter = 0,
//		space = 0,
//		figure = 0,
//		other = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
//			letter++;
//		else if (c >= 48 && c <= 57)
//			figure++;
//		else if (c == 32)
//			space++;
//		else
//			other++;
//	}
//	printf("英文字母有%d个\n", letter);
//	printf("空格有%d个\n", space);
//	printf("数字有%d个\n", figure);
//	printf("其他字符有%d个\n", other);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int Sn = 2;
//	int n = 0;
//	int m;
//	scanf("%d", &m);
//	if (m == 1)
//	{
//		printf("Sn = %d\n", a);
//	}
//	else
//	{
//		for (n = 2;n <= m;n++)
//		{
//			a = a * 10 + 2;
//			Sn = Sn + a;
//		}
//		printf("Sn = %d\n", Sn);
//	}	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	long long int tmp = 1;
//	long long int sum = 1;
//	for (i = 2;i <= 20;i++)
//	{
//		tmp = tmp * i;
//		sum = sum + tmp;
//	}
//	printf("%lld\n", sum);
//	return 0;
//}

//int main()
//{
//	double i = 0;
//	double m1 = 0, m2 = 0, m3 = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		m1 = m1 + i;
//	}
//	for (i = 1;i <= 50;i++)
//	{
//		m2 = m2 + i * i;
//	}
//	for (i = 1;i <= 10;i++)
//	{
//		m3 = m3 + (1 / i);
//	}
//	printf("%.6f\n", m1 + m2 + m3);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a, b, c;
//	for (i = 100;i <= 999;i++)
//	{
//		a = (i / 100) * (i / 100) * (i / 100);
//		b = (i / 10 % 10) * (i / 10 % 10) * (i / 10 % 10);
//		c = (i % 10) * (i % 10) * (i % 10);
//		if (i == a + b + c)
//		{
//			printf("%d\n", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int tmp, j, i;
//	for (i = 2;i <= 1000;i++)
//	{
//		tmp = 0;
//		for (j = 1;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				tmp = tmp + j;
//			}
//		}
//		if (i == tmp)
//		{
//			printf("%d\t", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	double i, tmp, j, sum;
//	int n;
//	i = 2;
//	j = 1;
//	sum = 0;
//	for (n = 1;n <= 20;n++)
//	{
//		sum = sum + i / j;
//		tmp = i;
//		i = i + j;
//		j = tmp;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	float h = 100, s = 100, r = 100;
//	int n;
//	for (n = 2;n <= 10;n++)
//	{
//		r = r / 2;
//		s = s + 2 * r;
//	}
//	printf("%f\n", s);
//	printf("%f\n", r / 2);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int i;
//	for (i = 1;i < 10;i++)
//	{
//		n = (n + 1) * 2;
//	}
//	printf("%d\n", n);
//	return 0;
//}

int main()
{

	return 0;
}