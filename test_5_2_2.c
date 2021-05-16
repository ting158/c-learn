#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char input = '0';
	printf("好好学习？(y/n)");
	scanf("%c", &input);
	if (input == 'y')
		printf("好offer\n");
	else
		printf("回家养猪");
	return 0;
}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32 -- 32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32为8进制 --> 10进制为26，26作为ASCII码值代表的字符
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	// # a v $
//	// a - 97
//	// A - 65
//	// ...
//	// ASCII编码
//	// ASCII码值
//	//char arr1[] = "abc";//数组
//	////"abc" --> 'a' 'b' 'c' '\0'  ('\0'是字符串的结束标志）
//	//char arr2[] = { 'a','b','c',0 };   //双引号字符串，单引号字符
//	////'a' 'b' 'c'
//	////'\0' - 0
//	////'a' - 97
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//return 0;
//}