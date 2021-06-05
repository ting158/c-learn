#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define N 3

struct Stu
{
	int num;
	char name[20];
	float score[3];
	float aver;
};

int main()
{
	void input(struct Stu* ps);
	int max(struct Stu* ps);
	void print(int m, struct Stu* ps);
	struct Stu arr[N];
	struct Stu* ps = arr;
	input(ps);
	int m = max(ps);
	print(m, ps);
	return 0;
}

//void input(struct Stu arr[3])
//{
//	printf("请输入个学生的学号、姓名和三门课的成绩：\n");
//	int i;
//	for (i = 0;i < N;i++)
//	{
//		scanf("%d%s%f%f%f", 
//			&arr[i].num,
//			arr[i].name,
//			&arr[i].score[0],
//			&arr[i].score[1],
//			&arr[i].score[2]);
//		arr[i].aver = (arr[i].score[0] + arr[i].score[1] + arr[i].score[2]) / 3.0;
//	}
//}
void input(struct Stu* ps)
{
	printf("请输入个学生的学号、姓名和三门课的成绩：\n");
	int i;
	for (i = 0;i < N;i++)
	{
		scanf("%d%s%f%f%f",
			&(ps + i)->num,
			(ps + i)->name,
			&(ps + i)->score[0],
			&(ps + i)->score[1],
			&(ps + i)->score[2]);
		(ps + i)->aver = ((ps + i)->score[0] + (ps + i)->score[1] + (ps + i)->score[2]) / 3.0;
	}
}

int max(struct Stu* ps)
{
	int i, m = 0;
	for (i = 0;i < N;i++)
	{
		if ((ps + i)->aver > (ps + m)->aver)
		{
			m = i;
		}
	}
	return m;
}

void print(int m, struct Stu* ps)
{
	printf("\n平均成绩最高的学生为：\n");
	printf("学号：%d  姓名：%s  三门课成绩：%f %f %f\n",
		(ps + m)->num,
		(ps + m)->name,
		(ps + m)->score[0],
		(ps + m)->score[1],
		(ps + m)->score[2] );
}