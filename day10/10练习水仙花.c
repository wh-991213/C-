#include<stdio.h>
#include<math.h>

int main1001()
{
	//ˮ�ɻ�����100��999����λ������������ӵ���������������һ��ˮ�ɻ���

	int i = 100;
	do
	{
		int a = i % 10;//��
		int b = i / 10 % 10;//ʮ
		int c = i / 100;//��
		if (pow(a,3)+pow(b,3)+pow(c,3)==i)//ͬ(a*a*a + b*b*b + c*c*c == i)����ͷ�ļ�<math.h>
			printf("%d\n", i);
		i++;
	} while (i <= 999);
	return 0;
}