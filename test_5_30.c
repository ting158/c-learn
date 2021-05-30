#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[101] = { 0 };
//	int i, j;
//	for (i = 1;i <= 100;i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 2;i <= 100;i++)
//	{
//
//		for (j = i + 1;j <= 100;j++)
//		{
//			if (j % i == 0)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	for (i = 2;i <= 100;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%3d\n", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	printf("请输入十个不同的正整数：\n");
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}                              //输入的两个数之间可以用空格，输入第十个数后回车
//	for (i = 0;i < 9;i++)
//	{
//		for (j = i + 1;j < 10;j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	printf("\n排序后为：\n");
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int r = arr[0][0] + arr[1][1] + arr[2][2];
//	int l = arr[0][2] + arr[1][1] + arr[2][0];
//	printf("r: %d\n", r);
//	printf("l: %d\n", l);
//	printf("sum: %d\n", r + l);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 8,6,5,4,1 };
//	int i = 0;
//	int j = 4;
//	int tmp;
//	while (i < j)
//	{
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		j--;
//		i++;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int x, y;
//	for (x = 0; x < 10;x++)
//	{
//		y = x;
//		arr[x][y] = 1;
//	}
//	for (x = 1;x < 10;x++)
//	{
//		arr[x][0] = 1;
//	}
//	for (x = 2;x < 10;x++)
//	{
//		for (y = 1;y < 9;y++)
//		{
//			arr[x][y] = arr[x - 1][y - 1] + arr[x - 1][y];
//		}
//	}
//	for (x = 0;x < 10;x++)
//	{
//		for (y = 0;y < 10; y++)
//		{
//			if (arr[x][y] != 0)
//			{
//				printf("%5d", arr[x][y]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{

	return 0;
}