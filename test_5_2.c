#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	//const - ������
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	//int arr[10] = { 0 };
//	n = 20;
//
//
//	//const���εĳ�����
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//	//���泣��
//	//3;
//	//100;
//	//3.14;//
//
//	return 0;
//}

#include<stdio.h>

//4.ö�ٳ���
//ö�� -- һһ�о�

//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
//���ڣ�1,2,3,4,5,6,7

//ö�ٹؼ��� - enum

enum Sax
{
	MALE,
	FEMALE,
	SECRET
};
//MALE,FEMALE,SECRET - ö�ٳ���
int main()
{
	//enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2
	return 0;
}



//3.#define ����ı�ʶ������
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}