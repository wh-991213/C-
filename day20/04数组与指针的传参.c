#include<stdio.h>

//һ
//void test(int arr[])//ok - ����������һ���������飬�������������
//{}
//void test(int arr[10])//ok
//{}
//void test(int* arr)//ok - ������������Ԫ�ص�ַ����ָ�����
//{}
//void test2(int* arr[20])//ok - �����Ǻ�
//{}
//void test2(int** arr)//ok - ������������Ԫ�ص�ַҲ����һ��ָ���ַ���ö���ָ�����
//{}
//һά���鴫��
int main0401(void)
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	//test(arr);
	//test2(arr2);
	return 0;
}


//��
//void test(int arr[3][5])//ok
//{}
//void test(int arr[][5])//ok - ���ǿ���ʡ�Ե�
//{}
//void test(int arr[3][])//err - ���ǲ�����ʡ�Ե�
//{}
//void test(int arr[][])//err - �к��в���ͬʱʡ��
//���ڶ�ά������˵�����Բ�֪���ж����У����Ǳ���֪��һ���ж���Ԫ�� - Ҳ����˵ֻ��ʡ�Ե�һ��[]�е�����

//void test1(int* arr)//err - ����֪����ά������׵�ַ��ʵ�ǵ�һ�еĵ�ַ����һ�еĵ�ַ	��һά����ĵ�ַ������������ָ��洢
//{}
//void test1(int* arr[5])//err - ����arr��һ�����飬����5��int*���͵�Ԫ��
//{}
//void test1(int** arr)//err - ����arr��һ������ָ�룬Ӧ�ô��һ��ָ������ĵ�ַ������ĵ�ַ���ܷŵ�����ָ����
//{}
void test1(int(*arr)[5])//ok - ��������һ��һά���飬������ָ�����
{}
//��ά���鴫��
int main0402(void)
{
	int arr[3][5] = { 0 };
	//test(arr);
	test1(arr);
	return 0;
}


//��
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
//ָ�봫��
int main0403(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	return 0;
}

//��
//˼����һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô����������
void test2(int* p)
{
}
void test3(char* p)
{
}
int main0404(void)
{
	int a = 10;
	int* p1 = &a;
	test2(&a);//ok - �����ĵ�ַ
	test2(p1);//ok - һ��ָ�����

	char ch = 'w';
	char* pc = &ch;
	test3(&ch);//ok - �����ĵ�ַ
	test3(pc);//ok - һ��ָ�����
	//�������������һ��ָ�룺���Դ������ĵ�ַ�������Ǵ�һ��ָ�����
	return 0;
}
//ͬ��һ�������Ĳ�������Ϊ����ָ���ʱ�򣬺����ܽ���ʲô����������
void test4(int** ptr)
{
	printf("num=%d\n", **ptr);
}
int main0405(void)
{
	int n = 10;
	int* p = &n;
	int** pp = &p;
	test4(pp);//ok - ����ָ�����
	test4(&p);//ok - һ��ָ������ĵ�ַ
	return 0;
}
void test5(int** p)
{
}
int main0406(void)
{
	int* ptr;
	int** pp = &ptr;
	test5(&ptr);//ok - һ��ָ������ĵ�ַ
	test5(pp);//ok - ����ָ�����

	int* arr[10];
	test5(arr);//ok - ָ������ı���
	//������������Ƕ���ָ�룺���Դ�����ָ������������Ǵ�һ��ָ������ĵ�ַ�������Ǵ�ָ������ı���
	return 0;
}

