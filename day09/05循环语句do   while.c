#include<stdio.h>

int main0501()
{
	int i = 1;
	do
	{
		if (5 == i)
			//break;
			continue;
		printf("%d\n", i);
		i++;
	}
	while (i <= 10);
	//do...whileѭ��������Ϊ��whileѭ����һ������, ������ִ�����Ȼ�����ж��Ƿ����ѭ��
	//���Ƿ�����do  whileѭ����Ҳ����ʹ��break��continue
	//do...whileѭ������ִ��һ�Σ�ʹ�õĳ������ޣ����Բ�����ʹ��
	return 0;
}