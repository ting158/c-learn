#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个函数 用二分法查找有序数组中的一个数

//              本质上arr是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间元素下标
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
//	//           传递过去的是数组arr首元素地址
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	return 0;
//}


//写一个函数 每调用一次这个函数 num的值增加1
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

#include "add.h"  //调用自己定义的函数用双引号

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b); //头文件中函数声明，.c中函数定义
	printf("%d\n", sum);
	return 0;
}

