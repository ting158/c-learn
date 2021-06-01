#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int age5(int);
//	printf("%d\n", age5(5));
//	return 0;
//}
//
//int age5(int n)
//{
//	int c;
//	if (n == 1)
//	{
//		c = 10;
//	}
//	else
//	{
//		c = age5(n - 1) + 2;
//	}
//	return c;
//}

//int main()
//{
//	int fac(int);
//	int n = 5;
//	printf("%d\n", fac(n));
//}
//
//int fac(int n)
//{
//	if (n == 1 || n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (n * fac(n - 1));
//	}
//}

//int main()
//{
//	void hanoi(int n, char one, char two, char three);
//	int n = 4;
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
//void hanoi(int n, char one, char two, char three)
//{
//	void move(char one, char three);
//	if (n == 1)
//	{
//		move(one,three);
//	}
//	else
//	{
//		hanoi(n - 1, one, three, two);
//		move(one, three);
//		hanoi(n - 1, two, one, three);
//	}
//}
//void move(char one, char three)
//{
//	printf("%c -> %c\n", one, three);
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	for (i = 0;i < 10;i++)   //输入十个整数
//	{
//		scanf("%d", &arr[i]);
//	}
//	m = arr[0];
//	for (i = 1;i < 10;i++)
//	{
//		if (m < arr[i])
//		{
//			m = arr[i];
//			n = i + 1;
//		}
//	}
//	printf("max = %d ,它是第%d个数", m, n);
//	return 0;
//}

//int main()
//{
//	float everage(float* arr);
//	float eve;
//	float arr[10] = { 1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1,1.1 };
//	eve = everage(arr);
//	printf("%f\n", eve);
//	return 0;
//}
//float everage(float* arr)
//{
//	int i;
//	float sum = 0;
//	for (i = 0;i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	sum = sum / 10.0;
//	return sum;
//}

//int main()
//{
//	int max(int arr[][4], int n);
//	int arr[3][4] = { {1,3,5,7},{2,4,6,8},{15,17,34,12} }; 
//	int m = max(arr, 12);
//	printf("%d\n", m);
//}
//int max(int arr[][4], int n)
//{
//	int i = 0, j = 0;
//	int m = arr[0][0];
//	for (i = 1;i < 3;i++)
//	{
//		for (j = 1;j < 4;j++)
//		{
//			if (m < arr[i][j])
//			{
//				m = arr[i][j];
//			}
//		}
//	}
//	return m;
//}

//int main()
//{
//	int gre(int i, int j);
//	int low(int n, int g);
//	int i, j;
//	printf("请输入两个正整数：");
//	scanf("%d%d", &i, &j);
//	int n = i * j;
//	int g = gre(i, j);                 //求最大公约数
//	int l = low(n, g);                      //求最小公倍数
//	printf("最大公约数为：%d\n最小公倍数为：%d\n", g, l);
//	return 0;
//}
//int gre(int i, int j)
//{
//	int n = 0;
//	if (i > j)
//	{
//		int tmp = i;
//		i = j;
//		j = tmp;
//	}
//	n = j % i;
//	for (;(j % i) != 0;j = i, i = n)
//	{
//	}
//	return i;
//}
//int low(int n, int g)
//{
//	return (n / g);
//}

//int main()
//{
//	void maxdt(float dt, float a, float b);
//	void middt(int a, int b);
//	void mindt();
//	float a, b, c, dt;
//	scanf("%f%f%f", &a, &b, &c);
//	dt = b * b - 4 * a * c;
//	if (dt > 0)
//		maxdt(dt, a, b);
//	else if (dt == 0)
//		middt(a, b);
//	else
//		mindt();
//	return 0;
//}
//void maxdt(float dt, float a, float b)
//{
//	float m = (-b) / (2 * a);
//	float n = sqrt(dt) / (2 * a);
//	printf("x1 = %f\n", m + n);
//	printf("x2 = %f\n", m - n);
//}
//void middt(float a, float b)
//{
//	printf("x1 = x2 = %f\n", (-b) / (2 * a));
//}
//void mindt()
//{
//	printf("无实根\n");
//}




//int main()
//{
//	void tra(int arr[ ][3]);
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x, y;
//	tra(arr);
//	for (x = 0;x < 2;x++)
//	{
//		for (y = 0;y < 2;y++)
//		{
//			printf("%3d", arr[x][y]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void tra(int arr[ ][3])
//{
//	int x, y;
//	for (x = 0;x < 3;x++)
//	{
//		for (y = x + 1;y < 3;y++)
//		{
//			int tmp = arr[x][y];
//			arr[x][y] = arr[y][x];
//			arr[y][x] = tmp;
//		}
//	}
//}

//int main()
//{
//	void ant(char ch[], int sz);
//	char ch[30];
//	gets(ch);
//	int i = 0, sz = 0;
//	while (ch[i] != '\0')
//	{
//		i++;
//		sz++;
//	}
//	printf("原字符串：\n");
//	puts(ch);
//	ant(ch, sz);
//	printf("反序后的字符串：\n");
//	puts(ch);
//	return 0;
//}
//void ant(char ch[], int sz)
//{
//	int i = 0;
//	int j = sz - 1;
//	int tmp;
//	while (i < j)
//	{
//		tmp = ch[i];
//		ch[i] = ch[j];
//		ch[j] = tmp;
//		i++;
//		j--;
//	}
//}

int main()
{
	char ch[4] = { '1', '9', '9', '0' };
	
	return 0;
}