#include<stdio.h>


//�����ṹ��
//�ṹ�����͵ĳ�Ա�����ǲ�ͬ���͵ı��� - ��������ĳ�Ա��������ͬ���͵�Ԫ��
//�ṹ���ʽ���£�
//struct tag   -  struct:�ṹ��ؼ���  tag:�ṹ���ǩ(�Զ���)   struct tag:�ṹ������
//{
//	  member - list;  - ��Ա�б�
//}variable - list; - �����б�

//���ﴴ�������Ľṹ�����Ͳ�û��ռ���ڴ�ռ�
struct Stu
{
	char name[20];
	char tele[12];
	char sex[10];
	int age; 
}s4, s5, s6;//����ṹ�����
struct Stu s3;//����s3/s3/s5/s6����ȫ�ֱ���

int main0101()
{
	//�����Ľṹ��ֲ�����s1 
	struct Stu s1;
	struct Stu s2;
	return 0;
}


//�����ṹ�����ͣ�ֻ��ʹ��һ��
struct
{
	int a;
	char c;
}sa;//�����������ṹ��ʱ�����Բ�Ҫ��ǩ�����Ǳ����ڴ˴���������
//�����ṹ��ָ������
struct
{
	int a;
	char c;
}*pa;
int main0102()
{
	pa = &sa;//warning:��*��*�����Ͳ����� - ��Ȼ���������ṹ���Ա��һ���ģ����Ǳ��������������Ϊ�����ֲ�ͬ����������
	return 0;
}
	
 
//�ṹ��������
struct Node
{
	int data;
	struct Node*next;//�ṹ���ҵ�ͬ���������ı���������* + next
	//struct Node n;//err - �ṹ��ĳ�Ա���ܰ����Լ��������԰��������ṹ��
}n;

//typedef�򻯽ṹ������
typedef struct Node1
{
	int data;
	//Node2* next1;//err  - ����ʹ��typedef�������������û�д��������Ի�����ʹ��Node2
	struct Node1*next1;//ok
}Node2;//����ʹ��typedef�ؼ��ְ�struct Node1������������һ�����ֽ�Node2 - ����

int main0103(void)
{
	struct Node n1;
	//| | |
	//| | |
	Node2 n2;
	return 0;
}

