#include<stdio.h>

int main0201()
{
	int arr[10] = { 0 };//��������
	char ch[5] = { 0 };//�ַ�����
	int* p[4];//�������ָ�������
	char* q[5];//����ַ�ָ������� 
	char** arr1[5];//��Ŷ����ַ�ָ�������
	return 0;
}

int main0202(void)
{
	//ָ���������; - ��ֱ�۵�
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	//����ָ�������a,b,c,d�ĵ�ַ������
	int* arr[4] = { &a,&b,&c,&d };
	//��ӡa,b,c,d��ֵ
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}

int main0203(void)
{
	//����ָ���������;ѹ���Ͳ��������õģ�Ҳ�����������ĳ�����
	//ָ��������������;
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	//����Ҫ��arr1��arr2��arr3������������������������������Ԫ�ص�ַ
	int* parr[] = { arr1,arr2,arr3 };
	//��ӡarr1��arr2��arr3����ֵ
	//1.����
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}*/

	//2.ָ��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}