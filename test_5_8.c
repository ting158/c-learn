#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//判断一个数是否为奇数
//int main()
//{
//	int num = 1;
//	if (1 == num % 2)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}

//输出1-100之间的奇数
int main()
{
	int num = 1;
	while (num < 101)
	{
		if (1 == num % 2)
		{
			printf("%d\n", num);
		}
		num++;
	}
		
	return 0;
}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//		printf("hehe\n");
//
//	/*if (num = 5)
//		printf("hehe\n");*/
//	return 0;
//}

//int main()
//{
//	int age = 14;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("---------\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老不死\n");
//	}
//	//else if (age >= 18 && age < 28)
//	//	printf("青年\n");
//	////...
//	//else
//	//	printf("老不死\n");
//	return 0;
//}

//int main()
//{
//	;//是空语句
//
//	return 0;
//}