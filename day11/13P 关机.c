#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
#pragma warning(disable:4996)

int main1301()
{
	//�ػ�����cmd
	//shutdown -s -t 60   60���ػ�
	//shutdown -a  ȡ���ػ�
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);

	if (strcmp(input, "������") == 0)//��str1 = str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�������
		system("shutdown -a");
	else
		goto again;//goto��ת��䣬��ת�������again:

	return 0;
}