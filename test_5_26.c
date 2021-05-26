#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	printf("%d\n", 2);
//	return 0;
//}

//int main()
//{
//	printf("%5d\n%5d\n", 12, -345);
//	char ch = 'a';
//	printf("%5c\n", ch);
//	int a = 121;
//	int b = 377;
//	printf("%c\n", a);
//	printf("%c\n", b);
//	printf("%s\n", "he;;o");
//
//	double c = 1.0;
//	printf("%20.15lf\n", c/3);
//
//	return 0;
//}

//int main()
//{
//	float a = 0;
//	double b = 0;
//	a = 10000 / 3.0;
//	b = 10000 / 3.0;
//	printf("%f\n", a);
//	printf("%f\n", b);
//	printf("------------\n");
//	printf("%-25.15f\n%25.15f\n", a, a);
//	return 0;
//}

//int main()
//{
//	printf("%e\n", 123.456);
//	printf("%13.2e\n", 123.456);
//	/*int a = 0;
//	scanf("a = %d", &a);
//	printf("%d\n", a);*/
//	char a, b, c;
//	scanf("%c%c%c", &a, &b, &c);
//	printf("%c %c %c", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	char a, b, c;
//	a = 'A';
//	b = 'B';
//	c = 'C';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	putchar('\015');
//	return 0;
//}

//int main()
//{
//	char a, b, c;
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	return 0;
//}
//int main()
//{
//	putchar(getchar());
//	putchar(getchar());
//	putchar(getchar());
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	char a;
//	a = getchar();
//	a = a + 32;
//	putchar(a);
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	double p = 1.0, r = 0.07;
//	int n = 10;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		p = p * (1 + r);
//	}
//	printf("%lf\n", p);
//	return 0;
//}

//int main()
//{
//	float d = 300000;
//	float p = 6000;
//	float r = 0.01;
//	float m;
//	p = p / (p - d * r);
//	m = (log(p)) / (log(1 + r));
//	printf("%.1f\n", m);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("%d%d", &a, &b);
//	scanf("%f%e", &x, &y);
//	scanf("%c%c", &c1, &c2);
//	printf("a = %d,b = %d\n", a, b);
//	printf("x = %.1f,y = %.2f\n", x, y);
//	printf("c1 = %c,c2 = %c\n", c1, c2);
//	return 0;
//}

//int main()
//{
//	char c1 = 'C',
//		c2 = 'h',
//		c3 = 'i',
//		c4 = 'n',
//		c5 = 'a';
//	c1 += 4;
//	c2 += 4;
//	c3 += 4;
//	c4 += 4;
//	c5 += 4;
//	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
//	printf("----------------\n");
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	float r = 1.5, h = 3.0, pi = 3.14159;
//	float c, s1, s2, v1, v2;
//	printf("圆周长为：%.2f\n", c = 2 * pi * r);
//	printf("圆面积为：%.2f\n", s1 = pi * r * r);
//	printf("圆球表面积为：%.2f\n", s2 = 4 * pi * r * r);
//	printf("圆球体积为：%.2f\n", v1 = (4 / 3) * pi * r * r * r);
//	printf("圆柱体积为：%.2f\n", v2 = pi * r * r * h);
//	return 0;
//}

int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);	
	putchar('\n');
	printf("%d %d\n", c1,c2);
	return 0;
}