#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0;i < sz - 1;i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}			
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

int main()
{
	int a = 30;
	int* pa = &a;

	char ch = 'w';
	void* p = &a;
	p = &ch;
	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
	//void* ���͵�ָ�� ���ܽ��н����ò���
	//void* ���͵�ָ�� ���ܽ��мӼ������Ĳ���
	return 0;
}