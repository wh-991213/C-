#include<stdio.h>

//char			�ַ�����
//short			������
//int			����
//long			������
//long long		��������
//float			�����ȸ�����
//double		˫���ȸ�����

int main0101()
{
	//��ô�������ˣ���Щ�����������ڴ�����ռ���ֽڴ�С�Ƕ��٣�����

	//1Byte=8bit
	//��ͬ�ı�������ռ�ڴ�ռ��С��һ
	printf("�ַ��ͣ�%d\n", sizeof(char));//1B
	printf("�����ͣ�%d\n", sizeof(short));//2B
	printf("���ͣ�%d\n", sizeof(int));//4B
	printf("�����ͣ�%d\n", sizeof(long));//4B
	printf("�������ͣ�%d\n", sizeof(long long));//8B
	printf("�����ȸ����ͣ�%d\n", sizeof(float));//4B
	printf("˫���ȸ����ͣ�%d\n", sizeof(double));//8B
	return 0;
}