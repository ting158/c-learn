#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	float a = 5 / 2.0;
//	printf("a = %lf\n", a);//打印浮点数用lf
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int b = a >> 1;//>> 右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	//00000000000000000000000000001000
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//
//	//按位异或
//	//相同为0，相异为1
//	c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	printf("%d\n", c);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0;i < 32;i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	//32bit

	//统计num的补码中有几个1
	/*while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}*/

	return 0;
}