

//包含一个叫stdio.h的文件
//std-标准 standard input output
#include<stdio.h>

int main()
{
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//&-取地址符号
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}

//int a = 10;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内部
//	return 0;
//}
//局部变量和全局变量的名字就不建议相同，相同的话容易产生误会，产生bug
//当局部变量和全局变量名字相同的时候，局部变量优先


//int main()
//{
//	int age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 32.5f;//向内存申请4个字节，存放小数
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//	return 0;
//}



//int是整形的意思
//main前面的int表示main函数调用返回一个整形值
/*
int main() //主函数-程序的入口-main函数有且仅有一个
{
	printf("haha\n");
	return 0; //返回0
}
*/

//char-字符类型


//int main()
//{
//	/*
//	char ch = 'A';
//	printf("%c\n", ch); //%c -- 打印字符格式的数据
//	*/
//	//short int 短整型
//	//int 整形
//	//long 长整形
//	int age = 20;
//	printf("%d\n", age); //%d -- 打印整形十进制数据
//	/*
//	double d = 3.14;
//	printf("%lf\n", d);
//	*/
//	return 0;
//}
