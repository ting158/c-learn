#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//ʷ����򵥵ݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
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


//��д��������������ʱ���������ַ����ĳ���
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

//�ݹ�ķ���
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
	//int len = strlen(arr);//���ַ�������
	//printf("%d\n", len);

	//ģ��ʵ����һ��strlen����
	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ������ĵ�ַ
	printf("%d\n", len);
	return 0;
}