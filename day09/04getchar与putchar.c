#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0401(void)
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	//getchar���ڽ��ռ��̵��ַ�
	//putchar�������
	return 0;
}

int main0402(void)
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//��������EOF��������ֹѭ������Ϊgetchar���Ƚ���E����ӡ���ٽ���O����ӡ... ...
	{
		putchar(ch);	
	}
	//��ν�����ѭ��������
	//�ڿ���̨��(CTRL+Z)
	return 0;
}


//�۲�������� 
int main0403(void)
{
	int ret = 0;
	int ch  = 0;
	char password[20] = { 0 };
	printf("����������:>"); 
	scanf("%s", password);
	printf("��ȷ��(Y/N):>");
	//getchar();//2+
	//getchar();//2+
	//getchar();//2+
	//getchar();//2+
	//getchar();//2+
	//getchar();//1+
	while ((ch=getchar())!='\n')//3+
	{
		;
	}
	ret=getchar(); //����ret��10��ӦASCII��'\n'
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}

	//���ֵ����⣺
	//1.Ϊʲôgetchar��û�еȴ������ַ�������
	/*��Ϊ��scanf��������123456�����洢����Ӧ�ĵ�ַ�������ַ��л�����'\n'��
	���ڻ������б��������Ե����е�getcharʱ�����������������ݣ�getchar������ֹͣ
	ͬʱҲ֪���ˣ�getcharֻ�л�����û������ʱ�Ż�ȴ�
	*/
	/*
	���������
	������ret=getchar()ǰ��һ��getchar()��'\n'����
	*/

	//2.Ϊʲô����123456 ABCDʱ��gecharҲû�еȴ�������
	/*
	��Ϊscanf������տո�ͻ���,�������ﻺ�����ﱣ����' '(�ո�)ABCD'\n'6���ַ�
	���������
	������ret=getchar()ǰ�ܹ���6��getchar()���ΰ� ' '(�ո�)ABCD'\n'����
	*/

	//3.����һֱдgetchar���ջ���������ַ����ڷ�������ʹ�ü���ķ���������
	//whileѭ��
	return 0;
}


//�۲����´���

int main0404(void)
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}