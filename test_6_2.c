#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*char ch[] = "I love China!";
//	int i, sz;
//	sz = sizeof(ch) / sizeof(ch[0]);
//	char* p;
//	p = ch;
//	printf("%s\n", ch);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%c", *(p++));
//	}
//	printf("\n");*/
//
//	char* ch = "I love China!";
//	printf("%s\n", ch);
//
//	return 0;
//}

//int main()
//{
//	void my_strcpy(char a[], char b[]);
//	char a[] = "I am a student.";
//	char b[50];
//	my_strcpy(a, b);
//	printf("%s\n", b);
//	return 0;
//}
//void my_strcpy(char a[], char b[])
//{
//	int i;
//	for (i = 0;*(a + i) != '\0';i++)
//	{
//		*(b + i) = *(a + i);
//	}
//	*(b + i) = '\0';
//}

//int main()
//{
//	void my_strcpy(char pa[], char pb[]);
//	char a[] = "I am a student.";
//	char b[50];
//	char* pa = a;
//	char* pb = b;
//	my_strcpy(pa, pb);
//	printf("%s\n", b);
//	return 0;
//}
//void my_strcpy(char pa[], char pb[])
//{
//	int i;
//	for (i = 0;pa[i] != '\0';i++)
//	{
//		pb[i] = pa[i];
//	}
//	pb[i] = '\0';
//}

//int main()
//{
//	void my_strcpy(char* pa, char* pb);
//	char* pa = "I am a student.";
//	char b[50];
//	char* pb = b;
//	my_strcpy(pa, pb);
//	printf("%s\n", pb);
//	return 0;
//}
//void my_strcpy(char* pa, char* pb)
//{
//	while ((*pb = *pa) != '\0')
//	{
//		pa++;pb++;
//	}
//	/*for (;*pa != '\0';pa++, pb++)
//	{
//		*(pb) = *(pa);
//	}
//	*(pb) = '\0';*/
//}

//int main()
//{
//	int a = 0;
//	int* pa = a;
//	printf("%d\n", sizeof(pa));//vs中指针占4个字节空间
//	return 0;
//}

//int main()
//{
//	char* p = "hello world";
//	printf("%c\n", p[1]);//p[1] 等价于 *(p + 1)
//	p += 3;
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2;
//	char ch[] = "a = %d , b = %d";
//	printf(ch, a, b);
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a, b, c, tmp;
//	int* pa, * pb, * pc;
//	scanf("%d%d%d", &a, &b, &c);
//	pa = &a;
//	pb = &b;
//	pc = &c;
//	if (*pa > *pb)
//	{
//		tmp = *pa;
//		*pa = *pb;
//		*pb = tmp;
//	}
//	if (*pa > *pc)
//	{
//		tmp = *pa;
//		*pa = *pc;
//		*pc = tmp;
//	}
//	if (*pb > *pc)
//	{
//		tmp = *pb;
//		*pb = *pc;
//		*pc = tmp;
//	}
//	printf("%d  %d  %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char ch1[20] = { 0 }, ch2[20] = { 0 }, ch3[20] = { 0 }, tmp[30] = { 0 };
//	char* p1, * p2, * p3, * pt;
//	scanf("%s", ch1);
//	scanf("%s", ch2);
//	scanf("%s", ch3);
//	p1 = ch1; p2 = ch2; p3 = ch3; pt = tmp;
//	if (strcmp(ch1, ch2) > 0)
//	{
//		strcpy(pt, p1);
//		strcpy(p1, p2);
//		strcpy(p2, pt);
//	}
//	if (strcmp(ch1, ch3) > 0)
//	{
//		strcpy(pt, p1);
//		strcpy(p1, p3);
//		strcpy(p3, pt);
//	}
//	if (strcmp(ch2, ch3) > 0)
//	{
//		strcpy(pt, p2);
//		strcpy(p2, p3);
//		strcpy(p3, pt);
//	}
//	printf("%s\n%s\n%s\n", p1, p2, p3);
//	return 0;
//}

//int main()
//{
//	void input(int* p, int sz);
//	void manage(int* p, int sz);
//	void print(int* p, int sz);
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	input(p, sz);
//	p = arr;
//	manage(p, sz);
//	print(p, sz);
//	return 0;
//}
//void input(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		scanf("%d", p + i);
//	}
//}
//void manage(int* p, int sz)
//{
//	int i = 0;
//	int tmp;
//	for (i = 1;i < sz;i++)
//	{
//		if (*p > *(p + i))
//		{
//			tmp = *p;
//			*p = *(p + i);
//			*(p + i) = tmp;
//		}
//	}
//	for (i = 0;i < sz - 1;i++)
//	{
//		if (*(p + sz - 1) < *(p + i))
//		{
//			tmp = *(p + sz - 1);
//			*(p + sz - 1) = *(p + i);
//			*(p + i) = tmp;
//		}
//	}
//}
//void print(int* p, int sz)
//{
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%5d", *(p + i));
//	}
//	printf("\n");
//}

//# define N 4
//int main()
//{
//	void count(int* arr, int n);
//	int arr[N] = { 0 }, i;
//	for (i = 0;i < N;i++)
//	{
//		*(arr + i) = 1;
//	}
//	count(arr, N);
//	return 0;
//}
//void count(int* arr, int n)
//{
//	int i, j, num;
//	while (1)
//	{
//		for (i = 0,j = 0;i < n;i++)
//		{
//			if (*(arr + i) == 1)
//			{
//				j++;
//				num = i + 1;
//			}
//		}
//		if (j == 1)
//			break;
//		for (i = 0, j = 1;i < N;i++)
//		{
//			if (*(arr + i) != 0)
//			{
//				j++;
//				if (j / 3 == 0)
//				{
//					*(arr + i) = 0;
//				}
//			}
//		}
//	}
//	printf("最后留下的是第%d位\n", num);
//}

//int main()
//{
//	int my_strlen(char* p);
//	char ch[20];
//	gets(ch);
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}
//int my_strlen(char* p)
//{
//	int i = 0;
//	for (;*(p + i) != '\0';i++) {}
//	return i;
//}

int main()
{
	void tra(int arr[3][3], int x, int y);
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	tra(arr, 3, 3);
	int i, j;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void tra(int arr[3][3], int x, int y)
{
	int i, j, tmp;
	for (i = 0;i < x; i++)
	{
		for (j = i + 1;j < y;j++)
		{
			tmp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = tmp;
		}
	}
}