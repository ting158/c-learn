#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

struct S
{
	int n;
	int arr[];//δ֪��С�� - ���������Ա - �����С�ǿ��Ե�����
	//int arr[0];
};
int main()
{
	/*struct S s;
	printf("%d\n", sizeof(s));*/

	struct S* ps = (struct S*)malloc(sizeof(int) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		ps->arr[i] = i;
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}



	//�ͷ�
	free(ps);
	ps = NULL;
	return 0;
}