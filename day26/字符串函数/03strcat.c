#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main0301()
{
	char arr1[30] = "hello";
	char arr2[] = "world"; 
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	//strcat
	//1.ԭ�ַ���������'\0'����  
	//2.Ŀ��ռ�����㹻��
	//3.Ŀ��ռ������޸�
	//4.�ַ������ܸ��Լ�׷��
	//5.��׷�ӵĹ�������Ŀ���ַ�����'\0'��ʼ����ԭ�ַ�����'\0'����
	return 0;
}

char* my_strcat(char* dest, const char* src)
{
	//���ķ���ֵ��Ŀ���������ʼλ��
	char* ret = dest;
	assert(dest&&src);
	//1.�ҵ�Ŀ���ַ�����'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
//ģ��ʵ��strcat
int main0302()
{
	char arr1[30] = "hello"; 
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}



//strncat
int main0303()
{
	char arr1[30] = "hello\0xxxxx";
	char arr2[] = "world";
	//���Է�����׷����ɺ�Ჹ��һ��'\0'
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}

int main0304()
{
	char arr1[30] = "hello\0xxxxxxxxxx";
	char arr2[] = "wor";
	//��׷��ʱ���ָ��������ԭ�ַ������ȣ�������ԭ�ַ��������һ���ַ���'\0'
	strncat(arr1, arr2, 8);
	printf("%s\n", arr1);
	return 0;
}



char* my_strncat(char* str1, const char* str2, int n)
{
	char* ret = str1;
	assert(*str1&&*str2);
	while (*str1)
	{
		str1++;
	}
	//while (n)
	//{
	//	*str1 = *str2;
	//	str1++;
	//	str2++;
	//	n--;
	//}
	//| | |
	while ((*str1++ = *str2++)&&n)
	{
		n--;
	}
	return ret;
}
//ģ��strncat
int main0305()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strncat(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}

