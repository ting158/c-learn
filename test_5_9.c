#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//��ӡ1-10
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	return 0;
}

//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	//��ѭ��
//	/*for (;;)
//		printf("hehe\n");*/
//	//forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//	//forѭ�����жϲ��������ʡ�ԣ����ж��������Ǻ�Ϊ��
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//��ʼ�� �� �ж� �� ����
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	/*
//	int ch = 0;
//	//�� ctrl + z ѭ��ֹͣ
//	//EOF - end of file �ļ�������־-> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	*/
//	/*int ch = getchar();
//	putchar(ch);
//	printf("\n%c\n", ch);*/
//	int ret = 0;
//	char passworld[20] = { 0 };
//	int ch = 0;
//	printf("���������룺>");
//	scanf("%s", passworld);//�������룬������password������
//	//��������ʣһ��'\n'
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//
//	//printf("%d", '\n');
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	/*if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");*/
//	//...
//
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	printf("������һ��������>");
//	scanf("%d", &num);
//	if (1 == num % 2)
//		printf("����\n");
//	else
//		printf("ż��\n");
//
//	return 0;
//}

//���1-100֮�������
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		printf("%d ", num);
//		num += 2;
//	}
//
//	/*while (num < 101)
//	{
//		if (1 == num % 2)
//			printf("%d\n", num);
//		num++;
//	}*/
//
//	return 0;
//}