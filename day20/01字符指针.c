#include<stdio.h>


int main0101()
{
	//�ַ�ָ��
	char ch = 'w';
	char* pc = &ch;
	return 0;
}

int main0102(void)
{
	char arr[] = "abcdef";
	char* pc = arr;
	printf("%s\n", arr);
	printf("%s\n", pc);
	return 0;
}

int main0103(void)
{
	char* p = "abcdef";//"abcdef"��һ�������ַ��������ﲻ�ǰ��ַ��������ݸ���p�����ǰ�����ַ������׵�ַ����p
	printf("%c\n", *p);//˵��p��ľ���a�ĵ�ַ
	printf("%s\n", p);//������Ԫ�ص�ַ�������

	//Ϊʲô"abcdef"�ǳ����ַ����أ�����
	//���Ÿı���ֵ 
	*p = 'w';
	printf("%c\n", *p);
	//������Իᷢ�֣���д�����Ȩ�޳�ͻ��Ҳ֤ʵ��"abcdef"��һ������
	//���������׼ȷ��д���Ǽ���const����Ϊpָ�����������ַ��������ǲ����޸ĵģ����������ô�������б�����
	//const char* p = "abcdef";
	return 0;
}

int main0104(void)
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	char* p1 = "abcdef";
	char* p2 = "abcdef";

	//1.
	/*if (arr1 == arr2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}*/
	//����Ǵ�ӡhaha����Ϊ��abcdef������һ���ռ䣬abcdef��������һ���ռ䣬�Ƚϵ�ַ��Ȼ�ǲ�ͬ��

	//2.
	if (p1 == p2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	//����Ǵ�ӡhehe��p1��p2���ǳ����ַ��������ڴ���ʵ����ֻ��һ�ݣ����ﲻ����p1����p2ָ����ͬһ��ռ�
	return 0;
}