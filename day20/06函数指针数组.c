#include<stdio.h>

int Add2(int x, int y)
{
	return x + y;
}
int Sub2(int x, int y)
{
	return x - y;
}
int Mul2(int x, int y)
{
	return x * y;
}
int Div2(int x, int y)
{
	return x / y;
}
int main0601()
{
	//������һ�������ͬ�������ݵĴ洢�ռ�
	//ָ������	
	//int* arr[5];

	//���Add3�����ĵ�ַ
	int(*pa)(int, int) = Add2;
	//���Ҫ�Ѷ�������ĵ�ַ�������� - ��Ҫһ�����飬���������Դ���ĸ������ĵ�ַ - ����ָ�������
	int(*parr[4])(int, int) = { Add2,Sub2,Mul2,Div2 };
	//parr��һ�����飬��4��Ԫ�أ�ÿ��Ԫ���Ǻ���ָ�����͡�ÿ�������ķ���ֵ����int��ÿ�������Ĳ�������int,int
	//ʹ��
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", parr[i](2, 3));//����printf("%d ",(*parr[i])(2,3))
	}
	return 0;
}
//char* my_strcpy(char *dest, const char *src)
//{
//	
//}
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char *(*pf)(char*, const char*);//ע�������const���ܶ���
//
////2.дһ������ָ������pfarr���ܹ����4��my_strcpy�����ĵ�ַ
////char *(*pfarr)(char*, const char*); - ��дһ������ָ��
//char* (*pfarr[4])(char*, const char*);// - pfarr��һ��4��Ԫ�ص����� - ÿ��Ԫ�ص������ǣ�ȥ��pfarr[4] - char*(*)(char*,const char*))����ָ������



