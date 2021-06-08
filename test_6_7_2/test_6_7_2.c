#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	FILE* fp = fopen("test.txt", "w");
//	char ch;
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	scanf("%c", &ch);
//	if (ch != '!')
//	{
//		ch = ch - 32;
//	}
//	while (ch != '!')
//	{
//		fputc(ch, fp);
//		scanf("%c", &ch);
//		if (ch != '!')
//		{
//			ch = ch - 32;
//		}
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test2.txt", "w");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	char ch[20] = { 0 };
//	int i = 0;
//	scanf("%s", ch);
//	int sz = strlen(ch);
//	if (ch[sz - 1] == '!')
//	{
//		ch[sz - 1] = '\0';
//	}
//	for (i = 0;i < sz - 1;i++)
//	{
//		ch[i] = ch[i] - 32;
//	}
//	fputs(ch, fp);
//
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fp3 = fopen("test3.txt", "r");
//	FILE* fp4 = fopen("test4.txt", "r");
//	FILE* fp5 = fopen("test5.txt", "w");
//	if (fp3 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	if (fp4 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	if (fp5 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	char ch3[20], ch4[20], tmp;
//	int i = 0, j;
//	while(!feof(fp3))
//	{
//		ch3[i++] = fgetc(fp3);
//	}
//	ch3[i - 1] = '\0';
//	i = 0;
//	while (!feof(fp4))
//	{
//		ch4[i++] = fgetc(fp4);
//	}
//	ch4[i - 1] = '\0';
//	int sz = sizeof(ch3) + sizeof(ch4);
//	strcat(ch3, ch4);
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = i + 1;j < sz;j++)
//		{
//			if (ch3[i] > ch3[j])
//			{
//				tmp = ch3[i];
//				ch3[i] = ch3[j];
//				ch3[j] = tmp;
//			}
//		}
//	}
//	fputs(ch3, fp5);
//
//	fclose(fp3);
//	fclose(fp4);
//	fclose(fp5);
//	fp3 = NULL;
//	fp4 = NULL;
//	fp5 = NULL;
//	return 0;
//}

