#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main0201()
{
	printf(" hehe\n");
	main();//�����һ���ݹ�
	return 0;	
	//�ݹ鳣������ջ���stack overflow
}


	
void print(int n)
{
	//�ݹ��������Ҫ������ȱһ���ɣ�
	//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ�����n>9)
	//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������(n/10)
	if (n > 9)//˵���������������λ����λ���ϵ�����
	{
		print(n / 10);
	}
	printf("%d ", n %10);
}
//P ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺����1234   ���1 2 3 4
int main0202()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//�ݹ�
	print(num);
	//print(1234)
	//print(123) 4
	//print(12)3 4
	//print(1) 2 3 4			
	return 0;
}



