#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Fac1(int n)
//{
//	//ѭ��
//	int i = 0;
//	int ret = 1;
//	for ( i = 1; i <=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//�׳������и���ʽ��Fac(n)
			  //n<=1   1
			  //n>1	   n*Fac(n-1)
int Fac(int n)
{
	//�ݹ�
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
//�ݹ������ 
//��n�Ľ׳ˣ������������
int main0204()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}