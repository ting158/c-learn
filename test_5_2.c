#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//const - 常属性
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[10] = { 0 };
//	n = 20;
//
//
//	//const修饰的常变量
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	//字面常量
//	//3;
//	//100;
//	//3.14;//
//
//	return 0;
//}

#include<stdio.h>

//4.枚举常量
//枚举 -- 一一列举

//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1,2,3,4,5,6,7

//枚举关键字 - enum

enum Sax
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET - 枚举常量
int main()
{
	//enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	return 0;
}



//3.#define 定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}