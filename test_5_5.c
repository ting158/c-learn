#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 4;
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
	//0-9
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
										 
										 
	//printf("%d", arr[0]);//�±�ķ�ʽ����Ԫ��
	//arr[�±�];

	//char ch[20];
	//float arr2[5];

	return 0;
}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 34;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("��Ϊ��%d\n", sum);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	printf("�������\n");
//
//	while (i < 20000)
//	{
//		printf("%d����һ�д���\n", i);
//		i++;
//	}
//	if (i >= 20000)
//		printf("��offer\n");
//
//	return 0;
//}


//int main()
//{
//	int include = 0;
//	printf("������أ���Ҫ��\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��");
//	scanf("%d", &include);
//	if (include == 1)
//		printf("��offer");
//	else
//		printf("����");
//
//	return 0;
//}