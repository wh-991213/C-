#include<stdio.h>


//��ά�������˼��ָ��ά������ά���ϵ�����
//��ά������г���ߵĸ������˵�㡢�С��еĸ���
int main0301()
{
	//��ά���鶨�壺�������� ������[��][��][��]
	int arr[2][3][4] =
	{
		{
			{1,2,3,4},
			{2,3,4,5},
			{3,4,5,6}
		},
		{
			{4,5,6,7},
			{5,6,7,8},
			{6,7,8,9}
		}

	};
	//��ӡ��ά�����ÿ��Ԫ��
	//��ӡ��ά�����ÿ��Ԫ��
	int tier = sizeof(arr) / sizeof(arr[0]);//��
	int row = sizeof(arr[0]) / sizeof(arr[0][0]);//��
	int column = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);//��
	for (int i = 0; i < tier; i++)
	{
		for (int j = 0; j < row; j++)
		{
			for (int k = 0; k < column; k++)
			{
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;	
}


int main0302(void)
{
	//��ά�������ڴ�����ռ�ֽڴ�С
	int arr[2][3][4] =
	{
		{
			{1,2,3,4},
			{2,3,4,5},
			{3,4,5,6}
		},
		{
			{4,5,6,7},
			{5,6,7,8},
			{6,7,8,9}
		}

	};
	printf("��ά����Ĵ�С��%d\n", sizeof(arr));//��*��*��*��������=2*3*4*int=96
	printf("��ά����һ���С��%d\n", sizeof(arr[0]));//48
	printf("��ά����һ�д�С��%d\n", sizeof(arr[0][0]));//16
	printf("��ά����һ��Ԫ�ش�С��%d\n", sizeof(arr[0][0][0]));//4
	printf("�㣺%d\n", sizeof(arr) / sizeof(arr[0]));//2
	printf("�У�%d\n", sizeof(arr) / sizeof(arr[0][0]));//6
	printf("�У�%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));//4
	
	return 0;
}

