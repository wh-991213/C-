#include<stdio.h>
#include<stddef.h>

//�ڶ��뷽ʽ�����ʵ�ʱ�����ǿ����Լ�����Ĭ�϶�����
//�޸�Ĭ�϶�����#pragma pack()
//����Ĭ�϶�����4 - һ������Ĭ�϶�������ż��
#pragma pack(4)
//ȡ�����õ�Ĭ�϶�����,��ԭΪĬ��
//#pragma pack()
struct S5
{
	char c;//1       //1
	//7				 //3
	double d;//8	 //8
};
int main0401()
{
	struct S5 s;
	printf("%d\n", sizeof(s));
	return 0;
}


//���������Ҫ֪��c�������ʼλ�õ�ƫ������d�������ʼλ�õ�ƫ������a�������ʼλ�õ�ƫ����������
//offsetof����������ṹ���Ա����ڽṹ����ʼλ��ƫ����
//offsetof()��size_t offsetof(structName,memberName);����ͷ�ļ�<stddef.h>��offsetof���Ǻ���������һ����;
struct S6
{ 
	char c;
	int d;
	double a;
};
int main0402(void)
{
	//���ص��ǳ�Ա������ʼλ�õ�ƫ����
	printf("%d\n", offsetof(struct S6, c));//0
	printf("%d\n", offsetof(struct S6, d));//4
	printf("%d\n", offsetof(struct S6, a));//8
	return 0;
}