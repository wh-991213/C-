#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


// ������������Ϸ
void menu()
{
	printf("****************************\n");
	printf("****1. play      0. exit****\n");
	printf("****************************\n");
}

//��Ϸ�������㷨ʵ��
//ע��:����������̵ĳ�ʼ��������Ϸģ�����ش��롣��Ҫ��game.h���ͷ�ļ���������������game.c��ʵ��	
void game()
{
	char ret = 0;
	//������ά����
	char board[ROW][COL] = { 0 };
	//��ʼ�����̣�������������ǿո񣩱����Ͼ��ǳ�ʼ��board������飬���Ҫ����������飬��Ҫ֪����������м��м��У����Ի�Ҫ�������д���ȥ
	InitBoard(board,ROW,COL);
	//��ӡ���� 
	DisplayBoard(board,ROW,COL);
	//����
	while (1)	
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ	
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
			game();
			break;
		case 0:	
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}