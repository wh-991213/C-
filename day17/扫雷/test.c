#include"game.h"


void menu()
{
	printf("*****************************\n");
	printf("*******    1. play    *******\n");
	printf("*******    0. exit    *******\n");
	printf("*****************************\n");
}
void game()
{
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	//2.�Ų�����׵���Ϣ	
	char show[ROWS][COLS] = { 0 };
	//��ʼ��mine��show����
	InitBoard(mine, ROWS, COLS,'0');//��ʼ��'0'
	InitBoard(show,ROWS,COLS,'*');//��ʼ��*
	//��ӡ����
	DisplayBoard(show,ROW,COL);
	//������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ�� 
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>"); 
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
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}