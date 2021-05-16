#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//1.计算n的阶乘
//不考虑溢出情况

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 0;
//	printf("请输入需要求阶乘的整数：>");
//	scanf("%d", &n);
//	j = n;
//	for (;n > 0;n--)
//	{
//		i = i * n;
//	}
//	printf("%d的阶乘为：%d\n", j,i);
//	return 0;
//}


//2.计算1!+2!+3!+......+10!

//int main()
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		ret = 1;
//		for (i = 1;i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = ret * n;
//		//n的阶乘
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//3.在一个有序数组中查找具体的某个数字n。
//编写int binsearch(int x, int v[,int n);
//功能︰在v[0]<=v[1]<=v[2]<= ....<=v[n-1]的数组中
//查找x.

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle] < k)
//		{
//			left = middle + 1;
//		}
//		else if (arr[middle] > k)
//		{
//			right = middle - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", middle);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("不存在\n");
//	}
//	return 0;
//}


//4.编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	//welcome to bit!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//
//	//char[] = "abc"
//	//[a b c \0]
//	// 0 1 2 3
//	//4-2
//
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//每打印一次暂停一秒(一千毫秒）
//		system("cls");//执行系统命令的一个函数 cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	
//
//	return 0;
//}


//5.编写代码实现，模拟用户登录情景，并且只能登录三次。
//(只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。)
int main()
{
	int sc = 8888;//密码
	int np = 0;//输入密码
	int n = 1;//输入次数

	while (n <= 3)
	{
		printf("请输入密码：>");
		scanf("%d", &np);
		if (np == sc)
		{
			printf("密码正确\n");
			break;
		}
		else if(n <= 2)
		{
			printf("密码错误，您还有%d次机会\n", 3 - n);
		}
		else
		{
			printf("密码错误\n对不起，您的账户已被锁定\n\n");
		}
		n++;
	}
	return 0;
}