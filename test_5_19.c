#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	/*for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", *p);
//		p+=2;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = &arr[9];
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ָ��ָ�����м��Ԫ�ظ���
//	printf("%d\n", &arr[0] - &arr[9]);//-9
//	//printf("%d\n", &arr[9] - &ch[0]);//err �ӡ�char *������int *�������Ͳ�����
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] =  "hello" ;
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	//int*** pppa = &ppa;//����ָ��
//	//...
//	return 0;
//}

//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	//int arr1[10];
	int* arr2[3] = { &a, &b, &c };//ָ������
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%d ", *(arr2[i]) );
	}
	return 0;
}