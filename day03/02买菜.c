//��VS��ʹ��scanf��strcpy��sprintf�����ȣ�����ʾC4996����
//����1������ڿ�ͷ��
#define _CRT_SECURE_NO_WARNINGS
//����2
#pragma warning(disable:4996)
#include<stdio.h>

int main0201(viod)

{
	//�ƹ�3Ԫ/�� 
	//�������ڳ������й����У���ֵ���ܷ����ı����
	//const��Լ��ʹ��Ϊ����
	const int price = 3;
	//price = 5;//err

	//�������ڳ������й����У���ֵ���Է����ı����
	int weight;
	printf("�����빺�������\n");
	//scanf��ͨ���������븳ֵ��&��ȡ��ַ�����
	scanf("%d", &weight);

	int sum = price * weight;

	printf("%d\n", sum);
	return 0;
}
