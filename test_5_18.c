#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s));
//	printf("%d\n", sizeof(s = a + 5));//sizeof�ڲ��ı��ʽ����������
//	printf("%d\n", s);
//
//	/*int a = 0;
//	char b = 'ws';
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	//~ ��λ��������λ��ȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111(����)
//	//10000000000000000000000000000001(ԭ��)
//	//-1
//	//printf("%d\n", ~a);
//
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//ǰ��++����++����ʹ��
//	printf("%d\n", a++);//����++����ʹ�ã���++
//	printf("%d\n", a);
//	//--Ч����ͬ
//	return 0;
//}

//int main()
//{
//	int a =(int) 3.14;
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
//	//1 2 3 4
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//
//	b = (a > 5 ? 3 : -1);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű��ʽ
//	printf("%d\n", c);
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//����һ���ṹ������-struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20,"20210518" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ��->��Ա��
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ�����.��Ա��
//	return 0;
//}

int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}