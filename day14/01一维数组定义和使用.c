#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main0101(void)
{
	//���鶨�壺�������� ������[Ԫ�ظ���]={ֵ1��ֵ2��ֵ3}
	//�����±꣺������[�±�]
	//�����±��Ǵ�0��ʼ������Ԫ�ظ���-1
	//int arr1[10] = { 9,4,2,1,8,5,3,6,10,7 };
	//��������һ����������������ֵ
	//arr1 = 100;//err
		

	//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	int arr2[5]={1,2,3,4};
	char arr3[5] = { 'a','b' };//ͬchar arr3[5]={'a',98};
	char arr4[5] =  "ab" ;//����ŵ��������Ԫ����a,b,'\0'(���ֻ�����3��0����ע���1��0�ǷŽ�ȥ��'\0',������Ĭ�ϸ���0)

	//���û��Ԫ�ظ����أ�����
	char arr5[] = "abcde";//������ݳ�ʼ����������ȷ��Ԫ�ظ���


	//�������Ľ��������
	char arr6[] = "abc";
	char arr7[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr6));//4
	printf("%d\n", sizeof(arr7));//3
	printf("%d\n", strlen(arr6));//3
	printf("%d\n", strlen(arr7));//15//������һ�����ֵ��strlen����������ң�ֱ��'\0'

	return 0;
}


int main0102(void)
{
	char arr[] = "abcdef";
	//��ӡ����Ԫ��
	//printf("%c\n", arr[3]);

	//��ӡ��������Ԫ��(ʹ��ѭ��)
	for (int i = 0; i < (int)strlen(arr); i++)//�����и����棬strlen�����޷�����;ǿ������ת��int������ͨ����ôд������������дint len=strlen(arr)	
	{
		printf("%c ", arr[i]);
	}
	printf("\n");


	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}


//һά�������ڴ��еĴ洢
int main0103()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��ӡ����ÿ��Ԫ�صĵ�ַ
	for (int i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i,&arr[i]);
	}
	//��ӡ���
		//&arr[0] = 000000051B5BFBA8
		//&arr[1] = 000000051B5BFBAC
		//&arr[2] = 000000051B5BFBB0
		//&arr[3] = 000000051B5BFBB4
		//&arr[4] = 000000051B5BFBB8
		//&arr[5] = 000000051B5BFBBC
		//&arr[6] = 000000051B5BFBC0
		//&arr[7] = 000000051B5BFBC4
		//&arr[8] = 000000051B5BFBC8
		//&arr[9] = 000000051B5BFBCC
	//���Ƿ�����һά������ÿ��Ԫ�ض����ɵ͵�ַ���ߵ�ַ��������������ռ�ֽڴ�С���ν��д洢�������ģ�
	//��������һ��ָ�������׵�ַ��һ����ַ����,�ɲ���&
	//printf("%p\n", arr);

	return 0;
}


//һά�������ڴ�����ռ�Ĵ�С
int main0104(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("�����С��%d\n", sizeof(arr));//4*10=40B
	printf("����Ԫ�ش�С��%d\n", sizeof(arr[0]));//4*1=4
	printf("����Ԫ�ظ�����%d\n",sizeof(arr) / sizeof(arr[0]));//40/4=10
	return 0;
}