#include<stdio.h>

//#define RED 0
//#define GREEN 1
//#define BLUE 2

//#define - enum
//���ǿ���ʹ��#define���峣����Ϊ��ô��Ҫʹ��ö�٣�����
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���ö���о�������ͣ������;������ƣ����Ը��Ͻ�
//3.��ֹ������Ⱦ����װ��,����������ͻ
//4.���ڵ���
//5.ʹ�÷��㣬ö��һ�οɶ��������� 

enum Color
{
	RED, 
	GREEN,
	BLUE,
};
int main0801(void)
{
	enum Color c;
	return 0;
}


//�����ٿ�һ��enum���ڴ��С
//����enum���ڴ��С����4���ֽ�
enum Sex
{
	MALE,
	FEMALE,
	SECRET,
};
int main0802(void)
{
	//��һ������ȡֵ��s��ֵ��MALE��һ��������s��һ�����ͱ���
	enum Sex s = MALE;
	printf("%d\n", sizeof(s));//4
	return 0;
}