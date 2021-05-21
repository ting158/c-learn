#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//用递归解决
void reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
	{
		reverse_string(arr + 1);
	}
	arr[len - 1] = tmp;
}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

int DigitSum(int i)
{
	if (i > 9)
	{
		return DigitSum(i / 10) + i % 10;
	}
	else
	{
		return i;
	}
	/*int j = i % 10;
	i = i / 10;
	if (i != 0)
	{
		j = j + DigitSum(i);
	}
	return j;*/
}

//int main()
//{
//	int i = 0;
//	printf("请输入一个非负整数：>");
//	scanf("%d", &i);
//	int sum = DigitSum(i);
//	printf("组成它数字的和为%d\n", sum);
//	return 0;
//}

//编写一个函数实现k的n次方
//用递归实现
double Power(int k, int n)
{
	if (n < 0)
	{
		return (1.0 / (Power(k, -n)));
	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{
		return k * Power(k, n - 1);
	}
	/*int power = 1;
	for (;n > 0;n--)
	{
		power = power * k;
	}
	return power;*/
}
int main()
{
	int k = 0;
	int n = 0;
	printf("请输入两个整数：>");
	scanf("%d%d", &k, &n);
	double ret = Power(k, n);
	printf("%d的%d次方为：%lf\n", k, n, ret);
	return 0;
}