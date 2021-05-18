#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s));
//	printf("%d\n", sizeof(s = a + 5));//sizeof内部的表达式不参与运算
//	printf("%d\n", s);
//
//	/*int a = 0;
//	char b = 'ws';
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//~ 按位（二进制位）取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111(补码)
//	//10000000000000000000000000000001(原码)
//	//-1
//	//printf("%d\n", ~a);
//
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，再++
//	printf("%d\n", a);
//	//--效果相同
//	return 0;
//}

//int main()
//{
//	int a =(int) 3.14;
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
//	//1 2 3 4
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//
//	b = (a > 5 ? 3 : -1);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("%d\n", c);
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//创建一个结构体类型-struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"20210518" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名
//	return 0;
//}

int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}