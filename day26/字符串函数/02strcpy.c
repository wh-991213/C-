#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

int main0201()
{
	//strcpy����⺯����Ҫע��
	//1.ԭ�ַ���������'\0'����
	//2.Ŀ��ռ�����㹻��
	//3.Ŀ��ռ����ɱ䣬�����ǳ����ַ���
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


char* my_strcpy(char* dest, const char* src)
{
	//��ָ֤�����Ч��
	assert(dest != NULL);
	assert(src != NULL);
	//����һ��Ŀ�Ŀռ����ʼ��ַ - ��Ϊstrcpy��������ķ���ֵ��char*
	char* ret = dest;
	//while (*src)
	//{
	//	*dest = *src;
	//	dest++;
	//	src++;
	//}
	//*dest = *src;//����'\0'
	//  |   |
	//  |   |
	while (*dest++ = *src++)
	{
		;
	}
	//����Ŀ��ռ����ʼλ��
	return ret;
}
//ģ��ʵ��strcpy
int main0202()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

//strncpy
int main0203()
{
	char arr1[5] = "abc";
	char arr2[] = "hello world!";
	//���Ȳ������ƣ�ֻ��'\0'Ϊ��־��������ˣ�����Ȼ�ܹ���� - ��������ǲ���ȫ��
	//strcpy(arr1, arr2);
	//���������� - ��԰�ȫ
	strncpy(arr1, arr2, 4);
	printf("%s\n", arr1);
	return 0;
}

int main0204()
{
	char arr1[10] = "abcdef";
	char arr2[] = "hell o";
	//ֻ�´��ָ���ĳ���
	strncpy(arr1, arr2, 5);
	printf("%s\n", arr1);
	return 0;
}

int main0205()
{
	char arr1[10] = "abcdefgh";
	char arr2[] = "bit";
	//ԭ�ַ�������С��Ҫָ������������������油'\0'
	strncpy(arr1, arr2, 6);
	printf("%s\n", arr1);
	return 0;
}

int main0206()
{
	char arr1[10] = "abcdefg";
	//�ڿ����Ĺ����У��������'\0'����Ŀ���ַ�����'\0'��������ݲ��ᱻ��ӡ��
	//char arr2[] = "bit";
	//char arr2[] = "bi\0t";

	//ע�����ֿո�
	char arr2[] = "bit ";
	strncpy(arr1, arr2, 4);
	printf("%s\n", arr1);       
	return 0;
}


char* my_strncpy(char* str1, const char* str2, int n)
{
	assert(*str1&&*str2);
	while (n)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
}
//ģ��strncpy
int main0207()
{
	char arr1[10] = "abcdefg";
	char arr2[] = "bit";
	my_strncpy(arr1, arr2, 4);
	printf("%s\n", arr1);
	return 0;
}