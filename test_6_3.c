#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	struct S
//	{
//		int num;
//		char name[20];
//		char sex;
//		int age;
//		float score;
//		char addr[30];
//	};
//	struct S s1;
//	printf("%d\n", sizeof(s1));
//	return 0;
//}

//int main()
//{
//	struct S
//	{
//		int num;
//		char name[20];
//		int score;
//	};
//	struct S s1 = { 1001,"张三",85 };
//	struct S s2 = { 1002,"李四",95 };
//	if (s1.score > s2.score)
//		printf("%d  %s  %d\n", s1.num, s1.name, s1.score);
//	else
//		printf("%d  %s  %d\n", s2.num, s2.name, s2.score);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S s1 = { "张三",20 };
//	printf("%s%  d\n", s1.name, s1.age);
//	struct S s2 = s1;
//	printf("%s%  d\n", s2.name, s2.age);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S s1 = { "张三", 20 };
//	printf("%s  %d\n", s1.name, s1.age);
//	strcpy(s1.name, "李四");
//	//scanf("%s", s1.name);
//	printf("%s  %d\n", s1.name, s1.age);
//	return 0;
//}

//int main()
//{
//	int a = 5, b = 4, c = 3;
//	if (a > b)
//	{
//		a = b + c,
//			b = 2 * c;
//	}
//	else
//	{
//		a = b - c,
//			b = 3 * c;
//
//	}
//	a = b + c;
//	printf("%d %d", a, b);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	char sex;
//	int age;
//};
//int main()
//{
//	struct S s;
//	struct S* p;
//	p = &s;
//	/*strcpy(p -> name, "张三");
//	p -> sex = 'M';
//	p -> age = 18;
//	printf("%s  %c  %d\n", p->name, p->sex, p->age);*/
//	
//	//(*p).name = "张三";//arr
//	
//	strcpy((*p).name, "张三");
//	(*p).sex = 'M';
//	(*p).age = 18;
//	printf("%s  %c  %d\n", (*p).name, (*p).sex, (*p).age);
//	return 0;
//}

struct S
{
	char name[20];
	char sex;
	int age;
};
int main()
{
	struct S arr[3] = { {"张三",'M',18},{"李四",'F',19},{"王五",'M',20} };
	struct S* p = arr;
	int i;
	for (p = arr;p < arr + 3;p++)
	{
		printf("name: %s\nsex: %c\nage: %d\n\n", p->name, p->sex, p->age);
	}
	for (i = 0;i < 3;i++)
	{
		printf("name: %s\nsex: %c\nage: %d\n\n", (*(p + i)).name, (*(p + i)).sex, (*(p + i)).age);
	}
	return 0;
}