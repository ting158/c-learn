#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//#define N 3
//int array[N][N];
//int main()
//{
//	void convert(int array[][3]);
//	int i, j;
//	printf("input array:\n");
//	for (i = 0;i < N;i++)
//	{
//		for (j = 0;j < N;j++)
//		{
//			scanf("%d", &array[i][j]);
//		}
//	}
//	printf("\nnoriginal array:\n");
//	for (i = 0;i < N;i++)
//	{
//		for (j = 0;j < N;j++)
//		{
//			printf("%5d", array[i][j]);
//		}
//		printf("\n");
//	}
//	convert(array);
//	printf("convert array:\n");
//	for (i = 0;i < N;i++)
//	{
//		for (j = 0;j < N;j++)
//		{
//			printf("%5d", array[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void convert(int array[][3])
//{
//	int i, j, t;
//	for (i = 0;i < N;i++)
//	{
//		for (j = i + 1;j < N;j++)
//		{
//			t = array[i][j];
//			array[i][j] = array[j][i];
//			array[j][i] = t;
//		}
//	}
//}

//#include <string.h>
//int main()
//{
//	void insert(char ch);
//	char ch[80];
//	scanf("%s", &ch);
//	insert(ch);
//	return 0;
//}
//void insert(char ch[])
//{
//	int i;
//	for (i = strlen(ch);i > 0;i--)
//	{
//		ch[2 * i] = ch[i];
//		ch[2 * i - 1] = ' ';
//	}
//	printf("%s\n", ch);
//}

//int main()
//{
//	float leg(int n, int x);
//	int n, x;
//	float pnx;
//	scanf("%d%d", &n, &x);
//	pnx = leg(n, x);
//	printf("%.2f\n", pnx);
//	return 0;
//}
//float leg(int n, int x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else
//	{
//		return ((2 * n - 1) * x - leg(n - 1, x) - (n - 1) * leg(n - 2, x) / n);
//	}
//}

//int main()
//{
//	void swap(int* p1, int* p2);
//	int i, j;
//	int* p1, * p2;
//	scanf("%d%d", &i, &j);
//	p1 = &i;
//	p2 = &j;
//	if (i < j)
//		swap(p1, p2);
//	printf("max = %d\nmin = %d\n", i, j);
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int tmp;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}

//int main()
//{
//	void exchange(int* p1, int* p2, int* p3);
//	int a, b, c;
//	int* p1, * p2, * p3;
//	scanf("%d%d%d", &a, &b, &c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	exchange(p1, p2, p3);
//	printf("%d  %d  %d\n", a, b, c);
//	return 0;
//}
//void exchange(int* p1, int* p2, int* p3)
//{
//	void swap(int* p1, int* p2);
//	if (*p1 < *p2) swap(p1, p2);
//	if (*p1 < *p3) swap(p1, p3);
//	if (*p2 < *p3) swap(p2, p3);
//}
//void swap(int* p1, int* p2)
//{
//	int tmp;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%5d", *(p + i));
//	}
//	printf("\n");
//}

//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", arr + i);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	void rev(int arr[], int sz);
//	int arr[9] = { 0,1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	rev(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void rev(int arr[], int sz)
//{
//	int i, tmp;
//	for (i = 0;i < sz / 2;i++)
//	{
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + sz - 1 - i);
//		*(arr + sz - 1 - i) = tmp;
//	}
//}

//int main()
//{
//	void sort(int arr[], int sz);
//	int i, arr[10];
//	printf("请输入十个整数：");
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, 10);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//}
//void sort(int arr[], int sz)
//{
//	int i, j, tmp;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = i + 1;j < sz;j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}

//int main()
//{
//	void sort(int *p, int sz);
//	int i, arr[10], * p;
//	p = arr;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", p++);
//	}
//	p = arr;
//	sort(p, 10);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%5d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int *p, int sz)
//{
//	int i, j, tmp;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = i + 1;j < sz;j++)
//		{
//			if (*(p + i) < *(p + j))
//			{
//				tmp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = tmp;
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int *p;
//	for (p = arr[0];p < arr[0] + 12;p++)
//	{
//		if ((p - arr[0]) % 4 == 0)
//			printf("\n");
//		printf("%4d", *p);
//	}
//	printf("\n");
//	return 0;
//}

int main()
{
	int arr[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
	int ( *p )[4];
	p = arr;
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n", *(*(p + x) + y));
	return 0;
}