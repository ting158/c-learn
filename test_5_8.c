#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 1;
//	if (1 == num % 2)
//		printf("����\n");
//	else
//		printf("ż��\n");
//
//	return 0;
//}

//���1-100֮�������
int main()
{
	int num = 1;
	while (num < 101)
	{
		if (1 == num % 2)
		{
			printf("%d\n", num);
		}
		num++;
	}
		
	return 0;
}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//		printf("hehe\n");
//
//	/*if (num = 5)
//		printf("hehe\n");*/
//	return 0;
//}

//int main()
//{
//	int age = 14;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("---------\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���\n");
//	}
//	//else if (age >= 18 && age < 28)
//	//	printf("����\n");
//	////...
//	//else
//	//	printf("�ϲ���\n");
//	return 0;
//}

//int main()
//{
//	;//�ǿ����
//
//	return 0;
//}