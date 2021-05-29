#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S* s)
{
	s->a = 100;
	s->c = 'w';
	s->d = 3.14;
}
int main()
{
	struct S s = { 0 };
	Init( &s );
	printf("%d\n", s.a);
	printf("%c\n", s.c);
	printf("%f\n", s.d);
	return 0;
}