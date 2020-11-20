#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>

//����Ĵ��룺
//1.������������
//2.bug��
//3.Ч�ʸ�
//4.�ɶ��Ը�
//5.��ά���Ը�
//6.ע������
//7.�ĵ���ȫ

//������coding����
//1.ʹ��assert
//2.����ʹ��const
//3.�������õı�����
//4.��ӱ�Ҫ��ע��
//5.������������



//ʾ����ģ��ʵ�ֿ⺯��:strcpy - �ַ�������
int main0301()
{
	//������ʹ�ÿ⺯����arr2������ݿ�����arr1��ȥ
	char arr1[] = "**************";
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	//Ϊʲô��arr2������arr1�ﲢû�д�ӡ�����*�ţ����� - ��������ɺ���ʵarr1��������*�ŵģ�û�д�ӡ*�ŵ�ԭ������Ϊ�ڿ�����ʱ��Ҳ��hello�����\0Ҳ������ȥ��

	return 0;
}

 
void my_strcpy(char* dest, char* src)
{
	while (*src!='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;//������Ϊ�˰�'\0'Ҳ������ȥ - ���ַ�ʽͦ��
}
//��һ���汾 - 6��
int main0302(void)
{
	//ģ��ʵ��strcpy
	char arr1[] = "**************";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


void my_strcpy1(char* dest, char* src)
{
	while (*dest++ = *src++)//������'\0'��ASCII����ѭ��ֹͣ
	{
		;
	}
}
//�ڶ����汾 - 7��
int main0303(void)
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	my_strcpy1(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}



void my_strcpy2(char* dest, char* src)
{
	//������ʹ��ָ��ʱ��Ҫ�ж�ָ�����Ч�� - ��ʹ��ָ��ʱ�������߶�ʮһ��ʹ�����������
	//�����һ��ָ���ǿ�ָ�룬��ȻʲôҲû�ɣ�������Ҳ�����ڱ��� - ���ɾͲ��ɣ������ܸ��ƻ�
	//�����������������һ���ж� - �����������������ģ����к���ʲôҲû�ɡ� - �������ǰ���������ܵ��� - ���ǲ����׷����������� 
	//�����������������������ˣ�Ӧ�ü�ʱ�������ҵ��������
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
		{
			;
		}
	}

}

int main0304(void)
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	my_strcpy2(arr1, NULL);//�������ﴫ���˲���
	printf("%s\n", arr1);
	return 0;
}


void my_strcpy3(char* dest, char* src)
{
	assert(dest!=NULL);//���ԣ�assert�����������ͷ�ļ���<assert.h> - ���������ı��ʽΪ���ʲôҲ���� - ���������ı��ʽΪ�پͻᱨ�� - ���ﴫ�����Ĳ������ǿ�ָ��Ϊ����ִ�У�����������Ĳ����ǿ�ָ��Ϊ�پͻᱨ��
	assert(src != NULL);//�����assertȥ�������ʱ����������ʱ������������׳���
	while (*dest++ = *src++)
	{
		;
	}
}
//�������汾 - 8��
int main0305(void)
{
	char arr1[] = "**************";
	char arr2[] = "hello";
	my_strcpy3(arr1, NULL);
	printf("%s ", arr1);
	return 0;
}

 
void my_strcpy4(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*src++ = *dest++)//��������д���ˣ������dest��srcҲ��Ӧ���п������������Ҳ��֪�� - �����ÿ���������ϼ���const�����ܺ���Ч�ķ����������� 
	{
		;
	}
}
//���ĸ��汾 - ������ʾ��
//��������strcpy�����Ĳ��� - char* strcpy(char* strDestination,const char* strSource) - �ڶ���������const
int main0306(void)
{
	char arr1[] = "*****";
	char arr2[] = "hello";
	my_strcpy4(arr1, arr2);
	printf("%s ", arr1);
	return 0;
}


void my_strcpy5(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}
//������汾 - 9��
int main0307(void)
{
	char arr1[] = "*****";
	char arr2[] = "hello";
	my_strcpy5(arr1, arr2);
	printf("%s ", arr1);
	return 0;
}
 

//����const
int main0308(void)
{
	//int num = 10;//�����޸���ֵ
	//const int num = 10;//���ʹ��const����num�������޸� - �������num�ĵ�ַ����ָ�룬��Ϳ�������ָ���޸� - int* p=&num;*p=20
	//num = 20;
	

	const int num = 10;
	const int* const p = &num;//const�����Է����ұߣ����Ǵ�������岻ͬ - const����*�ŵ����ʱ�����ε���*p,��ʾ����ͨ��p���ı�*p(num)��ֵ - const����*�ŵ��ұ�ʱ�����ε���ָ�����p,��ʾ�����޸�ָ��ָ��ĵ�ַ
	//*p = 20;//err - num�ĵ�ַ�Ѿ������Ƴɳ�����

	printf("%d\n", num);
	return 0;
}


char* my_strcpy6(char* dest, const char* src)//char* strcpy(char* strDestination,const char* strSource) - ��������Ĺ�����Ҫ��ԭ�ַ���������Ŀ����ȥ - ����������Ŀ��ĵ�ַ����
{
	char* ret = dest;//Ԥ�ȱ���һ��dest��ʼλ�õĵ�ַ - ���ڷ���
	assert(dest != NULL);//��ָ֤�����Ч��
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
//�������汾 -  �Ὣ��Ҫ��ע��д��(���Ʒ�) - 10��
int main0309(void)
{
	char arr1[] = "************";
	char arr2[] = "hello";
	printf("%s ", my_strcpy6(arr1, arr2));//������֮�󣬷���Ŀ���ַ - ֱ�ӷŽ�ȥ��ӡ
	//����������Ա�֮ǰ�Ĵ��룺
	//1.���ַ����������Ϳ����Լ�'\0'�Ŀ���������whileѭ�����ж�������
	//2.ʹ����assert
	//3.ʹ����const
	//4.�����ķ���������Ƴ���char*
	return 0;
}



int my_strlen(const char* str)
{
	int count = 0;//������
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str++)
	{
		count++;
	}
	return count;
}
//ģ��ʵ��strlen���� - ����
int main0310()
{
	char arr[] = "abcdef";
	printf("%d\n",  my_strlen(arr));
	return 0;
}

//��̳�������
//1.�����ʹ���ֱ�ӿ���������ʾ��Ϣ - �����˵��
//2.�����ʹ��󣺱�����ʹ�õĺ���û�е���ͷ�ļ������Ĵ��� - �޷������ⲿ���ţ�  ���ִ���Ĳ�����Ҫô���Ǹú���δ���壬Ҫô���Ǻ�����д����
//3.����ʱ���󣺱������������ʹ���Ա�����ʱ�����Ƕ����д���  - ����ʱ���󣺽����Ԥ�ڲ���  ����������������ԣ��𲽶�λ����
//���������Ĵ���ƽʱӦ�û����Ŵ�ľ���