#include<stdio.h>

//�ṹ���ʼ��
struct T
{
	double weight;
	int age;
};
struct S
{
	char c;
	struct T st;//�ṹ��ĳ�Ա�����Ǳ��������顢ָ�룬�����������ṹ��,�������Ǳ���
	int a;
	double d;
	char arr[20];
};

int main0201()
{
	//�ṹ���ʼ�� - ����û�а���struct T st
	//struct S s = { 'c',100,3.14,"hello" };
	//�ṹ���Ա���� - �ṹ�����.��Ա����
	//printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);

	//�ṹ���еĽṹ��
	struct S s = { 'c',{55.6,42},100,3.14,"hello" };//��ʼ���ṹ���еĽṹ����Ҫ���ϴ����� 
	printf("%lf %d\n", s.st.weight, s.st.age);//���ʽṹ���еĽṹ�� - �ṹ�����.�ṹ���нṹ�����.�ṹ���нṹ���Ա����
	return 0;
}
