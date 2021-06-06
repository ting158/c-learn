#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
	FILE* fp = fopen("text.dat", "w");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	char ch = { 0 };
	scanf("%c", &ch);
	while (ch != '#')
	{
		fputc(ch, fp);
		printf("%c", ch);
		scanf("%c", &ch);
	}
	printf("\n");
	fclose(fp);
	fp = NULL;
	return 0;
}