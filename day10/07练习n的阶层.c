#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//n�Ľײ�
int main0701()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for ( i = 1; i <=n; i++)
	{
		ret = ret * i;
	}
	printf("ret=%d\n", ret);
	return 0;
}



//����1�Ľײ㵽10�Ľײ�ĺ�
//ret=1*1=1
//ret=1*1*2=2
//ret=1*1*2*3=6
int main0702(void)
{
	int i = 0;
	int n = 0;
	int sum = 0;
	int ret = 1;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		//n�Ľ׳�
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}


//�۲죬���뻹�кܴ���Ż��ռ�
//ret=1*1=1      ��������   ret=1*1=1
//ret=1*1*2=2	 ��������	ret=1*2=2
//ret=1*1*2*3=6	 ��������	ret=2*3=6
int main0703(void)
{
	int i = 0;
	int n = 0;
	int sum = 0;
	int ret = 1;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}

