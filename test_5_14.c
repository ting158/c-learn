#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void bublle_sort(int arr[], int sz)
//{
//	int i = 0;//ð������
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;//���������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 0,5,2,6,8,9,1,3,4,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bublle_sort(arr, sz);
//	for (i = 0;i < sz;i++)//����ð������������
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(������) - ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	//2. &�������������������������飬&��������ȡ��������������ĵ�ַ

	printf("%p\n", &arr);//ȡ������������ĵ�ַ

	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("--------------\n");
	printf("%d\n", *arr);*/
	return 0;
}