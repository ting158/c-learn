#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	FILE* fp = fopen("test.dat", "w");
//	FILE* fp2 = fopen("test2.dat", "w");
//	char ch = { 0 };
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	if (fp2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	scanf("%c", &ch);
//	while (ch != '#')
//	{
//		putchar(ch);
//		fputc(ch, fp);
//		fputc(ch, fp2);
//		scanf("%c", &ch);
//		
//	}
//	printf("\n");
//	fclose(fp);
//	fclose(fp2);
//	fp2 = NULL;
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test.dat", "r");
//	FILE* fp2 = fopen("test2.dat", "w");
//	char ch = { 0 };
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	if (fp2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	ch = fgetc(fp);
//	while (!feof(fp))     //feof函数可以检测文件尾标志是否已被读取过
//	{                     //没有读到文件尾标志为假，读到为真
//		fputc(ch, fp2);
//		ch = fgetc(fp);
//	}
//	fclose(fp);
//	fclose(fp2);
//	fp2 = NULL;
//	fp = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//}stu[10];
//
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%s%d", stu[i].name, &(stu[i].age));
//	}
//	FILE* fp = fopen("test.dat", "wb");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0;i < 10;i++)
//	{
//		fwrite(&stu[i], sizeof(struct S), 1, fp);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%s  %d\n", stu[i].name, stu[i].age);
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//}stu[10];

//int main()
//{
//	FILE* fp = fopen("test.dat", "rb");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		fread(&stu[i], sizeof(struct S), 1, fp);
//		printf("%s  %d\n", stu[i].name, stu[i].age);
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//}stu[10];
//
//int main()
//{
//	FILE* fp1 = fopen("test.dat", "rb");
//	FILE* fp2 = fopen("test2.dat", "wb");
//	if (fp1 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	if (fp2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		fread(&(stu[i]), sizeof(struct S), 1, fp1);
//		printf("%s  %d\n", stu[i].name, stu[i].age);
//	}
//	rewind(fp1);
//	for (i = 0;i < 10;i++)
//	{
//		fread(&(stu[i]), sizeof(struct S), 1, fp1);
//		fwrite(&(stu[i]), sizeof(struct S), 1, fp2);
//	}
//	fclose(fp1);
//	fclose(fp2);
//	fp1 = NULL;
//	fp2 = NULL;
//	return 0;
//}

struct S
{
	char name[20];
	int age;
}stu[10];

int main()
{
	FILE* fp = fopen("test.dat", "rb");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	int i = 0;
	for (i = 0;i < 10;i += 2)
	{
		fseek(fp, i * sizeof(struct S), 0);
		fread(&(stu[i]), sizeof(struct S), 1, fp);
		printf("%s  %d\n", stu[i].name, stu[i].age);
		rewind(fp);
	}
	fclose(fp);
	fp = NULL;
	return 0;
}