#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//typedef   �򻯽ṹ��ؼ���
struct Person
{
	char name[63];
	int age;
};
//���ÿ��Խ�struct Person��һ������myPerson
typedef struct Person myPerson;
int main1001()
{
	
	struct Person P1 = { "����",19 };
	myPerson P2 = { "����",20 };

	return EXIT_SUCCESS;
}


//����Ҳ��������д
//��ʽ��typedef  ԭ��  ����
typedef struct Person1
{
	char name[63];
	int age;
}myPerson1;

int main1002(void)
{
	struct Person1 P1 = { "����",19 };
	myPerson1 P2 = { "����",20 };
	return 0;
}