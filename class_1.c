

//����һ����stdio.h���ļ�
//std-��׼ standard input output
#include<stdio.h>

int main()
{
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//&-ȡ��ַ����
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}

//int a = 10;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}���ڲ�
//	return 0;
//}
//�ֲ�������ȫ�ֱ��������־Ͳ�������ͬ����ͬ�Ļ����ײ�����ᣬ����bug
//���ֲ�������ȫ�ֱ���������ͬ��ʱ�򣬾ֲ���������


//int main()
//{
//	int age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 32.5f;//���ڴ�����4���ֽڣ����С��
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//	return 0;
//}



//int�����ε���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
/*
int main() //������-��������-main�������ҽ���һ��
{
	printf("haha\n");
	return 0; //����0
}
*/

//char-�ַ�����


//int main()
//{
//	/*
//	char ch = 'A';
//	printf("%c\n", ch); //%c -- ��ӡ�ַ���ʽ������
//	*/
//	//short int ������
//	//int ����
//	//long ������
//	int age = 20;
//	printf("%d\n", age); //%d -- ��ӡ����ʮ��������
//	/*
//	double d = 3.14;
//	printf("%lf\n", d);
//	*/
//	return 0;
//}
