#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//�ṹ��
// Python�е��ࣿ

//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };

	struct Book* pb = &b1;
	
	//����pb��ӡ�������ͼ۸�
	// . �ṹ�����.��Ա
	//-> �ṹ��ָ��->��Ա

	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("--------------------\n");
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	printf("--------------------\n");

	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	return 0;
}

//int main()
//{
//	//int a = 10;//������4���ֽڵĿռ�
//	//printf("%p\n", &a);
//	//int* p = &a;//p��һ��ָ�����
//	//printf("%p\n", p);
//	//*p = 20;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("%d\n", a);
//	double b = 3.14;
//	double* pd = &b;
//	printf("%p\n", pd);
//	*pd = 6.11;
//	printf("%lf\n", b);
//	printf("%lf\n", *pd);
//
//	return 0;
//}