#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 常量
//	MALE,
//	FEMALE = 9,
//	SECRET
//};
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}


//联合 - 联合体 - 共用体
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return *(char*)&a;
//}
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//返回1表示小端
	//返回0表示大端
	return u.c;
}
int main()
{
	//int a = 0x11223344;
	//低地址--------------->高地址
	//....[][][][][11][22][33][44][][][][]...  大端字节序存储模式
	//....[][][][][44][33][22][11][][][][]...  小端字节序存储模式
	//讨论一个数据，放在内存中的存放的字节顺序
	//大小端字节序问题
	int ret = check_sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}