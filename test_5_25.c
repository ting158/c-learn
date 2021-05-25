#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", Add(2, 3));
//
//	//printf("%d\n", *pa(2, 3));//err
//
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//	int i = 0;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d\n", (parr[i])(4,2));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

//计算器
void menu()
{
	printf("********************************\n");
	printf("****    1.add     2.sub     ****\n");
	printf("****    3.mul     4.div     ****\n");
	printf("*******   0.exit    ************\n");
	printf("********************************\n");
}
int main()
{
	int input;
	int x, y;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		//pfArr是一个函数指针数组
		int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
		//用函数指针数数组解决
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
		
		/*switch (input)
		{
		case 1:
			printf("请输入两个整数：>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add(x, y));
			break;
		case 2:
			printf("请输入两个整数：>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("请输入两个整数：>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("请输入两个整数：>");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("您的输入有误，请重新输入\n");
			break;
		}*/
	} while (input);
	return 0;
}