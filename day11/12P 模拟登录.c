#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//ģ���û���¼������ֻ�ܵ�¼���Σ�ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ��������˳�����
int main1201()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//ע��==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}

