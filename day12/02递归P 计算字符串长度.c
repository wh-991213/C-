#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int my_strlen(char*str)
//{
//	//�����ַ������ȣ�ʹ������ʱ����count
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char*str)
{
	//�ݹ� (���»�С��
	//my_strlen("bit");
	//1+my_strlen("it");
	//1+1+my_strlen("t");
	//1+1+1+my_strlen("");
	//1+1+1+0
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;

}
//P��д��������������ʱ���������ַ�������
int main0203()
{
	char arr[] = "bit";
	//int len = strlen(arr);
	//printf("%d\n", len);

	//�Զ��庯��ʵ��strlen�Ĺ���
	int len = my_strlen(arr);//���鴫�Σ�����ȥ�Ĳ����������飬������Ԫ�ص�ַ
	printf("%d\n", len);
	return 0;
}

