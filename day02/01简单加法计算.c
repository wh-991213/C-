#include<stdio.h>

int main(void)
{
	//�������ͱ���a����ֵ10��ֵ������a
	//int a = 10;
	//int b = 20;
	//int c = a + b;

	//������Եļ򵥼���
	//���ڴ��п���a,b,c���������Ŀռ�
	int a;
	int b;
	int c;

	//asm:���Ӣ����д
	__asm
	{
		//��10�ƶ���a��Ӧ���ڴ���;��20�ƶ���b��Ӧ�ڴ���
		//��a��Ӧ��ֵ�ƶ����Ĵ����У���b��Ӧ��ֵ�ƶ����Ĵ����У�����a���
		//�ٽ��Ĵ����е������ƶ���c����ɼӷ�����
		mov a, 10
		mov b, 20
		mov eax, a
		add eax, b
		mov c, eax
	}

	printf("%d\n", c);
	return 0;
}

