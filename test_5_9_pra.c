#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//1.����n�Ľ׳�
//������������

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 0;
//	printf("��������Ҫ��׳˵�������>");
//	scanf("%d", &n);
//	j = n;
//	for (;n > 0;n--)
//	{
//		i = i * n;
//	}
//	printf("%d�Ľ׳�Ϊ��%d\n", j,i);
//	return 0;
//}


//2.����1!+2!+3!+......+10!

//int main()
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		ret = 1;
//		for (i = 1;i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = ret * n;
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//3.��һ�����������в��Ҿ����ĳ������n��
//��дint binsearch(int x, int v[,int n);
//���ܩU��v[0]<=v[1]<=v[2]<= ....<=v[n-1]��������
//����x.

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle] < k)
//		{
//			left = middle + 1;
//		}
//		else if (arr[middle] > k)
//		{
//			right = middle - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", middle);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//int main()
//{
//	//welcome to bit!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//
//	//char[] = "abc"
//	//[a b c \0]
//	// 0 1 2 3
//	//4-2
//
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//ÿ��ӡһ����ͣһ��(һǧ���룩
//		system("cls");//ִ��ϵͳ�����һ������ cls - �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	
//
//	return 0;
//}


//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//(ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����)
int main()
{
	int sc = 8888;//����
	int np = 0;//��������
	int n = 1;//�������

	while (n <= 3)
	{
		printf("���������룺>");
		scanf("%d", &np);
		if (np == sc)
		{
			printf("������ȷ\n");
			break;
		}
		else if(n <= 2)
		{
			printf("�������������%d�λ���\n", 3 - n);
		}
		else
		{
			printf("�������\n�Բ��������˻��ѱ�����\n\n");
		}
		n++;
	}
	return 0;
}