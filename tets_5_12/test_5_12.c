#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//дһ������ �ö��ַ��������������е�һ����

//              ������arr��һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//           ���ݹ�ȥ��������arr��Ԫ�ص�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	return 0;
//}


//дһ������ ÿ����һ��������� num��ֵ����1
//void Add(int* num)
//{
//	(*num)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}

#include "add.h"  //�����Լ�����ĺ�����˫����

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b); //ͷ�ļ��к���������.c�к�������
	printf("%d\n", sum);
	return 0;
}

