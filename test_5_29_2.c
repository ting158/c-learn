#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>


//冒泡排序
//int main()
//{
//	int arr[] = { 5,4,1,2,8,7,6,3,9,0 };
//	int i, j, tmp;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int arr1[2][3] = { {1,2,3},{4,5,6} };
//	int arr2[3][2];
//	int i, j;
//	for (i = 0;i < 2;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			arr2[j][i] = arr1[i][j];
//		}
//	}
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 2;j++)
//		{
//			printf("%3d", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{9,100,7,6},{-10,10,-5,2} };
//	int i, j, tmp;
//	tmp = arr[0][0];
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			if (tmp < arr[i][j])
//			{
//				tmp = arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", tmp);
//	return 0;
//}

//int main()
//{
//	char ch[] = "hello";
//	printf("%c\n", ch[1]);
//	printf("%s\n", ch);
//	return 0;
//}

//int main()
//{
//	char c1[6], c2[6], c3[6];
//	scanf("%s%s%s", c1, c2, c3);
//	printf("%s%s%s\n", c1,c2,c3);
//	return 0;
//}

//int main()
//{
//	char ch[50];
//	gets(ch);
//	puts(ch);
//	return 0;
//}

//int main()
//
//{
//	char c1[20] = "Hello\0xxxxxxxx";
//	char c2[] = "world";
//	printf("%s\n", strcat(c1, c2));
//	return 0;
//}

//int main()
//{
//	char c1[20] = "Helloxxxxxxxx";
//	char c2[] = "world";
//	//printf("%s\n", strcpy(c1, c2));
//	//printf("%s\n", strncpy(c1, c2, 2));
//	return 0;
//}

//int main()
//{
//	char c1[] = "WorLD\0xxxx";
//	char c2[] = "world";
//	if (strcmp(c1, c2) == 0)
//		printf("相等\n");
//	else if (strcmp(c1, c2) > 0)
//		printf("c1 > c2\n");
//	else
//		printf("c1 < c2\n");
//
//	printf("c1:%d\n", strlen(c1));
//	printf("c2:%d\n", strlen(c2));
//	
//	printf("%s\n", _strlwr(c1));
//	return 0;
//}

//int main()
//{
//	char ch[50] = { 0 };
//	int i, j = 0;
//	char c1 = ' ';
//	char c2 = '\0';
//	char tmp;
//	printf("请输入一个英文句子：");
//	gets(ch);
//	for (i = 0;i < 50;i++)
//	{
//		if (ch[i] == ' ')
//		{
//			j++;
//		}
//		if (ch[i] == '\0')
//		{
//			j++;
//			break;
//		}
//	}
//	printf("单词个数为：%d\n", j);
//	return 0;
//}

//int main()
//{
//	char ch[3][20] = { 0 };
//	int i = 0;
//	printf("输入三个不同的字符串：");
//	for (i = 0;i < 3;i++)
//	{
//		gets(ch[i]);
//	}
//	if (strcmp(ch[0], ch[1]) > 0)
//	{
//
//		if (strcmp(ch[0], ch[2]) > 0)
//		{
//			printf("ch[0]");
//		}
//		else
//		{
//			printf("ch[2]");
//		}
//	}
//	else
//	{
//		if (strcmp(ch[1], ch[2]) > 0)
//		{
//			printf("ch[1]");
//		}
//		else
//		{
//			printf("ch[2]");
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[99] = { 1 };
	int i = 0;
	int j;
	for (i = 2;i <= 100;i++)
	{
		arr[i - 1] = i;
	}
	for (i = 1;i < 100;i++)
	{
		j = i;
		if (j > sqrt(100))
		{
			break;
		}
		for (j = 0;)
	}
	return 0;
}