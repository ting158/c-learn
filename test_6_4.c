#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d  ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//������̬�����ڴ�ռ�Ĵ�С

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0;i < 5;i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//ֻ����ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	//reallocʹ�õ�ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�Ӻ󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬���ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* ptr = realloc(p, INT_MAX);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0;i < 10;i++)
//		{
//			if (p == NULL)
//			{
//				printf("%s\n", strerror(errno));
//			}
//			else
//			{
//				printf("%d  ", *(p + i));
//			}
//		}
//	}
//
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

int main()
{

	return 0;
}