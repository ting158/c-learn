#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE,
//	FEMALE = 9,
//	SECRET
//};
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}


//���� - ������ - ������
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	//����1��ʾС��
//	//����0��ʾ���
//	return *(char*)&a;
//}
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	//����1��ʾС��
	//����0��ʾ���
	return u.c;
}
int main()
{
	//int a = 0x11223344;
	//�͵�ַ--------------->�ߵ�ַ
	//....[][][][][11][22][33][44][][][][]...  ����ֽ���洢ģʽ
	//....[][][][][44][33][22][11][][][][]...  С���ֽ���洢ģʽ
	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
	//��С���ֽ�������
	int ret = check_sys();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}