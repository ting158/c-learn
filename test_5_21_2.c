#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�

//struct - �ṹ��ؼ���
//Stu - �ṹ���ǩ
//struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele;
//	char sex[5];
//}s1,s2,s3;//s1.s2.s3 ������ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele;
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = {"����", 30, "12388745556", "����"};//s - �ֲ��Ľṹ�����
//	Stu s2 = {"����", 20, "15555556666", "��"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello";
//	struct T t = { "hehe",{100,'w',"haha",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n", s.sex);
}
void Print2(Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->tele);
	printf("%s\n", ps->sex);
}
int main()
{
	Stu s = { "����",23,"13355211555","��" };
	//��ӡ�ṹ������
	//Print1��Print2�Ǹ����ã�
	//Print2����
	//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
	Print1(s);
	printf("------------------\n");
	Print2(&s);
	return 0;
}