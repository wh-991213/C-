#include<stdio.h>

int main0401()
{
	//������������������(�������)
	int arr[]= { 9,1,5,7,2,10,8,4,6,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����:ÿ����1����ѭ��,������һ�����ֵ���Ƶ������ұ�
	//����:ÿ����1����ѭ��,������һ����Сֵ���Ƶ������ұ�
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j+1])//����>Ϊ����;<Ϊ����
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}

	return 0;
}



void Bubble_Sort(int arr[],int sz)
{
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//�Զ��庯��ʵ��ð������
int main0402()
{
	int arr[] = { 9,1,5,7,2,10,8,4,6,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_Sort(arr,sz);
	for (int i = 0; i < sz; i++)
	{	
		printf("%d ", arr[i]);
	}
	return 0;
}



//��ʵ����������ַ���������ʵ
int main0403(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//���������������ʵ����ȫ����
			}
		}
		if (flag==1)
		{
			break;//����д�ĺô���������������{1,2,3,5,4,6,7,8,9,10}ֻ��Ҫ������ѭ��(��1�����ڽ�����������ֵ;��2��ѭ�������������������),��������Ч��
			//if������ǲ���break��,�����if��ѭ����,break��ʾ�����������,������ѭ��
		}
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
}