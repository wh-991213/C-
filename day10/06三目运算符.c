#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//define���궨�峣�����궨����ʽ���궨�庯��
#define MAX(a,b) (a)>(b)?(a):(b)

int main0601()
{
	//��Ŀ����������ʽ1? ���ʽ2:���ʽ3   (������ʽ1��ֵΪ�棬ѡ����ʽ2��Ϊ���������ѡ����ʽ3Ϊ���)
	int c=3 > 2 ? 5 : 7;
	printf("%d\n", c);


	//�궨��
	int a = 10;
	int b = 20;
	printf("%d\n", MAX(a,b));
	return 0;
}