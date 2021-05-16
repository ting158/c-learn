#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	return 0;
}

//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* 解引用操作符
//	printf("%d\n", a);
//	//有一种变量是用来存放地址的-指针变量
//    //printf("%p\n", &a);
//
//	return 0;
//}


//#define 定义标识符常量
#define MAX 100
//#define 还可以定义宏-带参数

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 1;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏
//	max = Max(a, b);
//	//max = (a>b?a:b)
//	printf("max = %d\n", max);
//	return 0;
//}

//3.static修饰函数
//也是改变了函数的作用域（不准确）
//static改变了函数的链接属性
//外部链接属性 -> 内部链接属性

//声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//2.static 修饰全局变量
//改变了变量的作用域
//让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没办法在使用了
//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//1.static 修饰局部变量
//局部变量的声明周期变长
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//typedef - 类型定义 - 类型重定义
//	typedef unsigned int u_int;
//	u_int num = 2;
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int定义的变量是有符号的
//	//signed int
//	unsigned int num = 1;//无符号
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//() 函数调用操作符
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//三目操作符
//	//       1     2   3    三目
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max = %d\n", max);
//
//	return 0;
//}