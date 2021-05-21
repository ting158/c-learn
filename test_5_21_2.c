#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//描述一个学生的一些数据
//姓名
//年龄
//电话
//性别

//struct - 结构体关键字
//Stu - 结构体标签
//struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele;
//	char sex[5];
//}s1,s2,s3;//s1.s2.s3 是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele;
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = {"李四", 30, "12388745556", "保密"};//s - 局部的结构体变量
//	Stu s2 = {"张三", 20, "15555556666", "男"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello";
//	struct T t = { "hehe",{100,'w',"haha",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n", s.sex);
}
void Print2(Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);
}
int main()
{
	Stu s = { "张三",23,"13355211555","男" };
	//打印结构体数据
	//Print1和Print2那个更好？
	//Print2更好
	//结论：结构体传参的时候，要传结构体的地址
	Print1(s);
	printf("------------------\n");
	Print2(&s);
	return 0;
}