#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char input = '0';
	printf("�ú�ѧϰ��(y/n)");
	scanf("%c", &input);
	if (input == 'y')
		printf("��offer\n");
	else
		printf("�ؼ�����");
	return 0;
}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32 -- 32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32Ϊ8���� --> 10����Ϊ26��26��ΪASCII��ֵ������ַ�
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0' };
//	printf("%d\n", strlen(arr1));//strlen - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	// # a v $
//	// a - 97
//	// A - 65
//	// ...
//	// ASCII����
//	// ASCII��ֵ
//	//char arr1[] = "abc";//����
//	////"abc" --> 'a' 'b' 'c' '\0'  ('\0'���ַ����Ľ�����־��
//	//char arr2[] = { 'a','b','c',0 };   //˫�����ַ������������ַ�
//	////'a' 'b' 'c'
//	////'\0' - 0
//	////'a' - 97
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//return 0;
//}