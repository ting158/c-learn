#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int i;//全局变量 不初始化 默认是0
int main()
{
	i--;
	//-1
	//10000000000000000000000000000001 原码
	//11111111111111111111111111111111 补码
	//转化为无符号数后首位不是符号位 -1就变为一个超大的数字
	if (i > sizeof(i))//sizeof() - 计算变量/类型所占内存的大小为无符号数
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}