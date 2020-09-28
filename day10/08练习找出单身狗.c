#include<stdio.h>
#pragma warning(disable:4996)

//��һ��
int main0801()
{
	int arr[] = { 1,2,3,4,5,1,2,3,7,5,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		int count = 0;
		for (int j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("����:%d\n", arr[i]);
			break;
		}
	}
	return 0;
}


//�ڶ���
	//�۲�
	/*
	3^3   011^011  =0
	5^5   101^101  =0
	a^a   =0
	... ...
	*/

	/*
	0^5    000^101 =101=5
	0^3    000^011 =011=3
	0^a    =a
	... ...
	*/

	/*
	3^5^3  011^101^011 = 110^011 = 101=5
	3^3^5  011^011^101 = 000^101 = 101=5
	��������Կ�����������㽻���ɵ�
	*/
int main0802(void)
{
	int arr[] = { 1,2,3,4,5,1,2,3,7,5,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	for (int i = 0; i < sz; i++)
	{
		ret=ret^arr[i];
	}
	printf("����:%d\n",ret);
	return 0;
	//ͬ�����㷨�Ƚϣ������ִ�д�����n��ƽ���������n
}


//���������в�������  ����1����ǰ��������������㷨��������Ҫѭ��n��
int main0803(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ������±�Ϊ%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("û���ҵ�\n");
	return 0;
}


//���������в�������  ����2���۰�����㷨Ҳ�ж��ֲ����㷨  ��Ҫִ�д�Լlog2^n��    ��2^32ֻ��Ҫ��32��
int main0804()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//���±�
	int right =sz-1;//���±�
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}