#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
	//0-9
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
										 
										 
	//printf("%d", arr[0]);//下标的方式访问元素
	//arr[下标];

	//char ch[20];
	//float arr2[5];

	return 0;
}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 34;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("和为：%d\n", sum);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("加入比特\n");
//
//	while (i < 20000)
//	{
//		printf("%d：敲一行代码\n", i);
//		i++;
//	}
//	if (i >= 20000)
//		printf("好offer\n");
//
//	return 0;
//}


//int main()
//{
//	int include = 0;
//	printf("加入比特，你要？\n");
//	printf("你要好好学习吗？（1/0）");
//	scanf("%d", &include);
//	if (include == 1)
//		printf("好offer");
//	else
//		printf("进厂");
//
//	return 0;
//}