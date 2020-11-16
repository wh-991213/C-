#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Bubble_Sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main0901(void)
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_Sort(arr, sz);//Bubble_Sort���˸��������飬��������������գ�ֻ����������
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}



//�������� - qsort - �⺯�� - ���õ��㷨˼���� - quick sort
//qsort����ԭ��
//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));
//�ֽ������
//void qsort(void *base, - Start of target array:Ŀ���������ʼλ��
//			 size_t num, - Array size in elements:�����е�Ԫ�ظ���
//			 size_t width, - Element size in bytes:Ԫ�ش�С�����ֽ�Ϊ��λ
//			 int( *cmp)(const void *e1,const void *e2) - Comparison function:  ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ		
//����д��void*�����ã����Խ����������͵ĵ�ַ	
//el1 less than el2 - return - < 0
//el1 equivalent to el2 - return - 0
//el1 greater than el2 - return - > 0
//qsort��������ͷ�ļ�<stdlib.h>

//(((
int cmp_int(const void *e1, const void *e2)//����qsort�ĵ�4������ - ���ڱȽ���������ֵ - e1��e2���ڽ�������ֵ���Ƚ�
{
	//*e1 �� *e2 - ��Ϊ����void*����ָ�룬���Բ��ܽ�����
	return  *(int*)e1 - *(int*)e2;//��e1ǿ������ת����int* - �ͱ��һ�����͵ĵ�ַ - �ٽ����÷�������
}
void test6()
{
	//ʹ��qsort��������arr
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//������ǰ�1�ĵ�ַ��3�ĵ�ַ������cmp_int - Ȼ����cmp_int�����������ָ�����
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//)))

//(((
int cmp_float(const void* e1, const void* e2)
{
	/*if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;*/
		//or
		//return *(float*)e1 - *(float*)e2;//warning:��floatת����int�����ܶ�ʧ����
	return(int)*(float*)e1 - *(float*)e2;//���⾯�� - ��floatǿ������ת����int 
}
void test7()
{
	//ʹ��qsort��������f������
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}
//)))

//(((
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//ǿ������ת�� - �ṹ�����͵�ָ��
}
void test8()
{
	//����ṹ������
	struct Stu s[3] = { {"zhangshan",20}, {"lisi",30}, {"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
//)))

//(((
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����� - �Ƚ��ַ��� - ����ֱ����> < = - Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test9()
{
	struct Stu s[3] = { {"zhangshan",20}, {"lisi",30}, {"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
//)))

int main0902(void)
{
	//test6();//����arr��������
	//test7();//����f����������
	//test8();//����ṹ���е�����
	test9();//����ṹ���е�����
	return 0;
}

//void*����
int main0903(void)
{
	int a = 10;
	int* pa = &a;
	char* pc = &a;//warning:��int*��char*������char*�����Ͳ�����

	//��û��һ��ָ���ܹ���������һ�����͵�Ԫ�ص�ַ������ - void*
	char ch = 'w';
	void* p = &a;// - ������ָ�� - ����ָ��
	p = &ch;
	//void*���͵�ָ�� - ���Խ����������͵ĵ�ַ
	//*p = 0; //err - ��������˵��ָ�����;����˽����õ�ʱ����ʼ����ֽ� - ��������������ָ�� 
	//p++;//err - ָ����мӼ�������ʱ��ҲҪȷ����������
	//����void*���͵�ָ�� - ���ܽ��н����ò��� - ���ܽ��мӼ������Ĳ���
	return 0;
}



//(((
//void Bubble_Sort1(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}


