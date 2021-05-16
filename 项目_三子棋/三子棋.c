#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"



//��Ϸ�������㷨ʵ��
void game()
{
	int win = 0;
	//���������Ϣ
	char board[ROW][COL] = { '0' };
	//��ʼ������
	Board(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		win = Is_Win(board, ROW, COL);
		if (win == 1)
		{
			printf("��Ӯ��\n");
			break;
		}
		else if (win == 2)
		{
			printf("ƽ��\n");
			break;
		}
		

		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = Is_Win(board, ROW, COL);
		if (win == 0)
		{
			printf("������\n");
			break;
		}
		else if (win == 2)
		{
			printf("ƽ��\n");
			break;
		}

	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������������\n");
		}
	} 	while (input);
	
}

int main()
{
	test();
	return 0;
}