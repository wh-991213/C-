#include<stdio.h>
int main0101()
{
	//һ.���͵�����
	//1.ʹ��������Ϳ����ڴ�ռ�Ĵ�С����С������ʹ�÷�Χ��
	//2.��ο����ڴ���ӽ�
	// ||   ||   ||   ||
	int a = 10;//0a 00 00 00
	float f = 10.0;//00 00 20 41
	//ͬ����4���ֽڣ����ǲ�ͬ�����ͣ����ݵĴ��ȴ�Ǵ���ͬ
	return 0;
}


void test1()
{
	printf("hehe\n");
}
void test2(void)
{
	printf("hehe\n");
}
int main0102()
{
	//��.C��������
	//1.�������� - Ҳ�������Ա�����е����� - char��short��int��float...
	//2.�Զ�������(��������) - Ҳ����˵�Լ�����ȥ���������
	//�������� - int arr[10];���������(������ȥ��ʣ�µľ�������) - int[10]����arr������  
	//int[10]:10��int���͵�Ԫ��     int[5]:5��int���͵�Ԫ��       char[5]:5��char���͵�Ԫ��
	//�ṹ������
	//ö������
	//����������
	//3.ָ������ - ��С����4��8���ֽ�
	//int *pi;
	//char *pc;
	//void *pv;
	//4.������
	//void��ʾ������(������),ͨ��Ӧ���ں����ķ������ͣ������Ĳ�����ָ������
	test1();//��������
	test2(100);//�����Ĳ���   
	//����ᷢ���������Ĳ�������û�н���100�������Ҳ�ǿ���������ӡ��
	//�����������ȷ��ָ��test2��������Ҫ����  - void test2(void) - ������ι�ȥwarning:test2��void�����б�����
	
	return 0;
}

int main0103()
{
	//��.���͵Ļ�������
	//1.���ͼ���
	//char - char��ʵ���ڴ��д洢�����ַ�����Ӧ��ASCII��ֵ��ASCII��ֵ������
	//	  unsigned char
	//	  signed char
	//short
	//	   unsigned short[int] - �ڶ���short����ʱ��int����ʡ�Ի�д��
	//	   signed short[int]
	//int
	//     unsigned int
	//	   signed int
	//long 
	//     unsigned long[int]
	//	   signed long[int]
	short a = 10;
	short int b = 10;

	//2.�����ͼ���
	//float
	//double
	return 0;
}