//�궨�峣����
//����ӽ�
#define ROW 9
#define COL 9
//����Ա�ӽ�   ����ڵ�ͼ�߽��Ų��׵�ʱ�򣬻�Խ�磬���԰ѵ�ͼ����һȦ
#define ROWS ROW+2
#define COLS COL+2
//�׵ĸ���
#define EASY_COUNT 10


//ͷ�ļ�����
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning (disable:4996)



//����
//��ʼ��
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS],int row,int col);
//������
void SetMine(char board[ROWS][COLS], int row, int col);
//ɨ��
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
//չ������--�ݹ�
void OpenMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col,int x,int y);