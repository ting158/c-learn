#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//结构体
// Python中的类？

//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };

	struct Book* pb = &b1;
	
	//利用pb打印出书名和价格
	// . 结构体变量.成员
	//-> 结构体指针->成员

	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("--------------------\n");
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	printf("--------------------\n");

	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);
	return 0;
}

//int main()
//{
//	//int a = 10;//申请了4个字节的空间
//	//printf("%p\n", &a);
//	//int* p = &a;//p是一个指针变量
//	//printf("%p\n", p);
//	//*p = 20;//* - 解引用操作符/间接访问操作符
//	//printf("%d\n", a);
//	double b = 3.14;
//	double* pd = &b;
//	printf("%p\n", pd);
//	*pd = 6.11;
//	printf("%lf\n", b);
//	printf("%lf\n", *pd);
//
//	return 0;
//}