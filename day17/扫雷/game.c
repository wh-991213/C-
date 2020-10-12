#include"game.h"

//ʵ��
//��ʼ��mine��show����
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < rows; i++)
	{
		for ( j = 0; j < cols; j++)
		{
			board[i][j] =set;
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{	
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n"); 
	for ( i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ", i);

		for ( j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);               
		}
		printf("\n"); 
	}
}

//������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//ɨ��(������Χ�м����ף�
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	//��Ϊ������Χ����1����0�����԰�����Χ��8������������������м����ס������ַ�����������ַ�����������
	//���Ƿ���
	//'1'-'0'=1
	//'3'-'0'=3
	//��Χ8������֮��-8*'0'�൱�ڸ��Լ���һ���ַ�0
	//0   0   1
	//0  x,y  0
	//1   0   0
	//'0'+'0'+'0'+'1'+'0'+'0'+'0'+'1'-8*'0'=386-384=2
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

//ʹ�õݹ�չ�������������̲�չ����������ĳλ����Χ���ס���
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	int ret = 0;
	ret= get_mine_count(mine, x, y);
	if (ret == 0)
	{
		show[x][y] = ' ';
		if (x > 0 && y + 1 <= col && show[x][y + 1] == '*')
		{
			OpenMine(mine, show, row, col, x, y + 1);
		}
		if (x - 1 > 0 && y + 1 <= col && show[x - 1][y + 1] == '*')
		{
			OpenMine(mine, show, row, col, x - 1, y + 1);
		}
		if (x - 1 > 0 && y > 0 && show[x - 1][y] == '*')
		{
			OpenMine(mine, show, row, col, x - 1, y);
		}
		if (x - 1 > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
		{
			OpenMine(mine, show, row, col, x - 1, y - 1);
		}
		if (x > 0 && y - 1 > 0 && show[x][y - 1] == '*')
		{
			OpenMine(mine, show, row, col, x, y - 1);
		}
		if (x + 1 <= row && y - 1 > 0 && show[x + 1][y - 1] == '*')
		{
			OpenMine(mine, show, row, col, x + 1, y - 1);
		}
		if (x + 1 <= row && y > 0 && show[x + 1][y] == '*')
		{
			OpenMine(mine, show, row, col, x + 1, y);
		}
		if (x + 1 <= row && y + 1 <= col && show[x + 1][y + 1] == '*')
		{
			OpenMine(mine, show,row, col, x + 1, y + 1);
		}
	}
	else
	{
		show[x][y] = ret + '0';//2 + 48 = 50 = 2
	}
}


//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10=71�������̳�����֮����71��λ��
	while (win<ROW*COL-EASY_COUNT )
	{
		printf("�������Ų��׵�����\n");
		scanf("%d%d", &x, &y);              
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2.����
			else
			{
				//��װһ���������ڼ���x��y������Χ�м�����
				int count=get_mine_count(mine, x, y);
				//չ������--�ݹ�
				OpenMine(mine, show, row, col, x, y);
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	}
		if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			DisplayBoard(mine, row, col);
		}
}
