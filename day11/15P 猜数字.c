#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//ͨ����������õ�һ��1��100֮�ڵ�����ͨ������һ����������Ӧ����Ӧ�����ѭ�����������ѭ��
int main1501()
{
	//srand������������ӣ�rand��ȡ���������������ͷ�ļ�<stdlib.h>
	srand((unsigned int)time(NULL));
	int value = rand() % 100 + 1;
	int input = 0;

	for (;;)
	{
		printf("����������\n"); 
		scanf("%d", &input);
		if (input > value)
		{
			printf("���������̫����\n");
		}
		else if (input < value)
		{
			printf("���������̫С��\n");
		}
		else
		{
			printf("��ϲ�����¶���\n");
			break;
		}
	}
	return 0;
}