#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//史上最简单递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//接受一个整型值（无符号），按照顺序打印它的每一位
//void print(int i)
//{
//	if (i > 9)
//	{
//		print(i / 10);
//	}
//	printf("%d ", i%10);
//}
//
//int main()
//{
//	unsigned int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度
#include <string.h>

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}

//递归的方法
int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "hello";
	//int len = strlen(arr);//求字符串长度
	//printf("%d\n", len);

	//模拟实现了一个strlen函数
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个数组的地址
	printf("%d\n", len);
	return 0;
}