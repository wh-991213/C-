#include<stdio.h>
#include<stdlib.h>

int main0201()
{
	//cmd���calc��������notepad���±���mspaint��ͼ��...
	//system����ͷ�ļ�<stdlib.h>�����Դ�һ���ⲿ��Ӧ�ó��������·����Ҫʹ��\\����/
	//����һ����������value����systemִ�еĽ����ֵ��value
	int value=system ("calc");
	//%d����һ��ռλ��,��ӡ����ʮ�������� 
	printf("%d\n", value);
	return 0;
}
