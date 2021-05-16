#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//打印1-10
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	return 0;
}

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	//死循环
//	/*for (;;)
//		printf("hehe\n");*/
//	//for循环的初始化、调整、判断都可以省略
//	//for循环的判断部分如果被省略，那判断条件就是恒为真
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//初始化 ； 判断 ； 调整
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	/*
//	int ch = 0;
//	//按 ctrl + z 循环停止
//	//EOF - end of file 文件结束标志-> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	*/
//	/*int ch = getchar();
//	putchar(ch);
//	printf("\n%c\n", ch);*/
//	int ret = 0;
//	char passworld[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：>");
//	scanf("%s", passworld);//输入密码，并放在password数组中
//	//缓冲区还剩一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）：>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
//	//printf("%d", '\n');
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	/*if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");*/
//	//...
//
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：>");
//	scanf("%d", &num);
//	if (1 == num % 2)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		printf("%d ", num);
//		num += 2;
//	}
//
//	/*while (num < 101)
//	{
//		if (1 == num % 2)
//			printf("%d\n", num);
//		num++;
//	}*/
//
//	return 0;
//}