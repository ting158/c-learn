#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int Fac1(int n)
//{
//	int i = 0;
//	int fac = 1;
//	for (i = 1;i <= n;i++)
//	{
//		fac = fac * i;
//	}
//	return fac;
//}
//
//int Fac2(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac2(n - 1);
//	}
//}
//
//int main()
//{
//	//求n的阶乘，忽略溢出情况
//	int n = 0;
//	printf("请输入一个正整数>:");
//	scanf("%d", &n);
//	int fac = Fac2(n);
//	printf("%d的阶乘为：%d\n", n, fac);
//	return 0;
//}


//斐波那契数列
//1,1,2,3,5,8,13,21,34,...
//列出斐波那契数列的第n项

//int Fib1(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//}
//
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = Fib2(n);
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	//创建一个数组
//	int arr1[10] = {1,2,3};//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = {'a',98};
//	char arr3[5] = "abc";//ok
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7
//	//sizeof计算arr4所占空间的大小
//	//7个元素 7*1 = 7
//
//	printf("%d\n", strlen(arr4));//6
//	//strlen求字符串长度--\0之前的字符个数
//	// [a b c d e f \0]
//	// 	6
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机数
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//char ch[5][6];
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr3[][4] = { {1,2,3,4},{5,6,7,8} };
//	int x = 0;
//	int y = 0;
//	for (x = 0;x < 3;x++)
//	{
//		for (y = 0;y < 4;y++)
//		{
//			printf("%d ",arr[x][y]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int x = 0;
	int y = 0;
	for (x = 0;x < 3;x++)
	{
		for (y = 0;y < 4;y++)
		{
			printf("%p ", &arr[x][y]);
		}
		printf("\n");
	}

	return 0;
}