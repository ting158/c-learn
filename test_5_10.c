#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	printf("hello world\n");
//	goto again;
//	printf("hehe\n");
//again:
//	printf("haha\n");
//	return 0;
//}

#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	//shutdowm -s -t 60
//	//system() ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("���ĵ��Խ���һ���Ӻ�ػ���������������������ȡ��\n������>:");
//	scanf("%s", &input);
//	if (strcmp(input , "����������") == 0)//�Ƚ������ַ��� strcmp()
//	{
//		system("shutdown -a");
//		printf("ȡ���ػ��ɹ�\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "hehe";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	//memset
//	//memory - �ڴ�  set - ����
//
//	char arr[] = "hello world";
//	memset(arr, '#', 6);
//	printf("%s\n", arr);
//
//	return 0;
//}


//дһ������ �ҳ�������֮������ֵ

//int Compare(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = Compare(a, b);
//	printf("�ϴ�ֵΪ��%d\n", max);
//
//	return 0;
//}


//дһ������ �����������α���������
//void Change(int* x, int* y) //void��ʾû�з���ֵ 
//{
//	int z = 0;
//	z = *x;  //�����ò���
//	*x = *y;
//	*y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;  
//	printf("%d %d\n", a, b);
//	Change(&a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//��д���� ��ӡ100-200֮��ĺ���
#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(n);j++)//sqrt() ��ƽ��
//	{
//		if (n % j == 0)
//			return 0;		
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			num++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", num);
//	return 0;
//}


//дһ�������ж�һ���Ƿ�Ϊ����
//int is_rn(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (is_rn(year) == 1)
//		{
//			printf("%d  ", year);
//		}
//	}
//
//	return 0;
//}

