#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void bublle_sort(int arr[], int sz)
//{
//	int i = 0;//冒泡趟数
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;//假设数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//这趟排序的数据不完全有序
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
//	for (i = 0;i < sz;i++)//遍历冒泡排序后的数组
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//2. &数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址

	printf("%p\n", &arr);//取的是整个数组的地址

	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);
	printf("--------------\n");
	printf("%d\n", *arr);*/
	return 0;
}