#include<stdio.h>
#include<string.h>
#include<assert.h>

int  main0101()
{
	int len1 = strlen("abcdef");
	printf("%d\n", len1);
	char arr[] = { 'a','b','c','d','e','f' };
	int len2 = strlen(arr);
	printf("%d\n", len2);
	//len1��len2��ֵ�ֱ���6��17(���ֵ) - ˵��strlen�ڼ����ַ�������ʱ������'\0'Ϊ������־��
	return 0;
}


size_t my_strlen1(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
//ģ��ʵ��1strlen - ������ 
int main0102()
{
	char arr[] = "abcdef";
	int ret = my_strlen1(arr);
	printf("%d\n", ret);
	return 0;
}


size_t my_strlen2(char*str)
{
	if (*str != '\0')
		return 1 + my_strlen2(str + 1);
	else
		return 0;
}
//ģ��ʵ��2strlen - �ݹ�
int main0103()
{
	char arr[] = "abcdef";
	my_strlen2(arr);
	return 0;
}

int main0104()
{
	//�����
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	//hehe - ������Ȼ3-6=-3������strlen��������ķ���ֵ��size_t(unsigned int)����>0
	return 0;
}