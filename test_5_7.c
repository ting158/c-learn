#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	return 0;
}

//int main()
//{
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* �����ò�����
//	printf("%d\n", a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//    //printf("%p\n", &a);
//
//	return 0;
//}


//#define �����ʶ������
#define MAX 100
//#define �����Զ����-������

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 1;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��
//	max = Max(a, b);
//	//max = (a>b?a:b)
//	printf("max = %d\n", max);
//	return 0;
//}

//3.static���κ���
//Ҳ�Ǹı��˺����������򣨲�׼ȷ��
//static�ı��˺�������������
//�ⲿ�������� -> �ڲ���������

//�����ⲿ����
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//2.static ����ȫ�ֱ���
//�ı��˱�����������
//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û�취��ʹ����
//int main()
//{
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//1.static ���ξֲ�����
//�ֲ��������������ڱ䳤
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	//typedef - ���Ͷ��� - �����ض���
//	typedef unsigned int u_int;
//	u_int num = 2;
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int����ı������з��ŵ�
//	//signed int
//	unsigned int num = 1;//�޷���
//	//struct - �ṹ��ؼ���
//	//union - ������/������
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
////	int arr[10] = { 0 };
////	arr[4];//[] �±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//() �������ò�����
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//��Ŀ������
//	//       1     2   3    ��Ŀ
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	printf("max = %d\n", max);
//
//	return 0;
//}