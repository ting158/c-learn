#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

//��Ϸ�˵�����ʼ���棩
void menu()
{
	printf("*********************\n");
	printf("***1.play   0.exit***\n");
	printf("*********************\n");
}



//��ʼ������
void Board(char board[ROW][COL], int row, int col)
{
	int i = 0;//��
	int j = 0;//��
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
		
	}
}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;//��
	int j = 0;//��
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}			
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0;j < col - 1;j++)
			{
				if (j < col - 1)
				{
					printf("---|");
				}
			}
			printf("---\n");
		}
	}
}

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("��ҿ�ʼ\n");
	while (1)
	{
		printf("����������: > ");
		scanf("%d%d", &i, &j);
		//�ж�����Ϸ���
		if (i >= 1 && j >= 1 && i <= row && j <= col)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("���겻���ڣ�����������\n");
		}
	}
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("������\n");
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}

//�ж�ƽ��
int Is_Draw(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0;x < row;x++)
	{
		for (y = 0;y < col;y++)
		{
			if (board[x][y] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//�ж���Ӯ
//1 ���Ӯ
//0 ����Ӯ
//2 ƽ��
//3 ����
int Is_Win(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	//�ж���
	for (x = 0;x < row;x++)
	{
		if (board[x][0] == board[x][1] && board[x][0] == board[x][2] && board[x][0] == '*')
		{
			return 1;
		}
		if (board[x][0] == board[x][1] && board[x][0] == board[x][2] && board[x][0] == '#')
		{
			return 0;
		}
	}
	//�ж���
	for (y = 0;y < row;y++)
	{
		if (board[0][y] == board[1][y] && board[0][y] == board[2][y] && board[0][y] == '*')
		{
			return 1;
		}
		if (board[0][y] == board[1][y] && board[0][y] == board[2][y] && board[0][y] == '#')
		{
			return 0;
		}
	}
	//�ж�б�����
	if (board[0][0] == board[1][1] && board[0][0] == board[3][3] && board[0][0] == '*')
	{
		return 1;
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == '#')
	{
		return 0;
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] == '*')
	{
		return 1;
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] == '#')
	{
		return 0;
	}
	//�ж�ƽ��
	if (1 == Is_Draw(board, ROW, COL))
	{
		return 2;
	}
	return 3;
}

