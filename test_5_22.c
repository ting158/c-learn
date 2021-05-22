#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

char* my_strcpy(char* p1, const char* p2)
{
	char* ret = p1;
	assert(p1 != NULL);//¶ÏÑÔ
	assert(p2 != NULL);//¶ÏÑÔ
	//°Ñp2Ö¸ÏòµÄ×Ö·û´®¿½±´µ½p1Ö»ÏëµÄ¿Õ¼ä£¬°üº¬'\0'×Ö·û
	while (*p1++ = *p2++)
	{
		;
	}
	return p1;
}
int main()
{
	//strcpy
	//×Ö·û´®¿½±´
	char arr1[] = "###########";
	char arr2[] = "haha";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}