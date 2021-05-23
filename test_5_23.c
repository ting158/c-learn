#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//9.0
//1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^S * M * 2^E
//S - 0
//M - 1.001
//E - 3
//
//0.5
//0.1
//(-1)^0 * 1.0 * 2^(-1)
//S = 0
//M = 1.0
//E = -1
//E + 127 = 126

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//	return 0;
//}

int main()
{
	float f = 5.5;
	//5.5
	//101.1
	//(-1)^0 * 1.011 * 2^2
	//S = 0
	//M = 1.011
	//E = 2
	//0100 0000 1011 0000 0000 0000 0000 0000
	//0x40b00000
	return 0;
}