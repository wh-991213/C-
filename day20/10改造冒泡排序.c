#include<stdio.h>

//����
void Swap(char*buf1, char*buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
//������ʵ��Bubble_Sort1�����ĳ���Ա������֪��δ��������������� - �������������ܹ������������͵ĵ�ַ
//void*base - �����������͵�ַ��sz - ���յ�Ԫ�ظ�����width - ���յ���Ԫ�ش�С��int(*cmp)(void*e1,void*e2) - �����������͵���������
void Bubble_Sort1(void*base, int sz, int width, int(*cmp)(void*e1, void*e2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			//���������������if(*>*)��������ǽṹ���������Ҫ������ơ�������������Ҫ���һ��ͨ�õĹ�ϵ 
			//Ҫ�Ƚϵ�������Ԫ������ҵ�����һ������ 
			//if(cmp(base,(int*)base+1) - �����ǿ��Ե� - ������һ���ľ�����(�û������Ǳ������)
			//if(cmp(base,(char*)base+width)��baseǿ������ת����char*��(һ���ֽ�)���ټ���Ŀ��Ԫ����ռ�ֽڴ�С(int��������int���ֽڣ�double��������double���ֽ�)
			//Ҫ�ҵ������Ԫ��λ�ã�
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
			{
				//�ҵ�Ԫ�غ󽻻�
				//����ȥchar*��char*��ֵ����Ӧ����char*��char*���ա�width - �ѿ�ȴ���ȥ
				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			} 
		}
	}
}

int cmp_int1(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test10()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//������ʹ��Bubble_Sort1�ĳ���Աһ��֪���Լ�������������� - ��Ӧ��֪����αȽϴ����������е�Ԫ��
	Bubble_Sort1(arr, sz, sizeof(arr[0]), cmp_int1);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct Stu
{
	char name[20];
	int age1;
};
int cmp_stu_by_age1(const void*e1, const void*e2)
{
	return ((struct Stu*)e1)->age1 - ((struct Stu*)e2)->age1;
}
void test11()
{
	struct Stu s[3] = { {"zhangshan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	Bubble_Sort1(s, sz, sizeof(s[0]), cmp_stu_by_age1);
}

//����ð�������� - ����ͬ���͵�����
int main(void)
{
	//test10();
	test11();
	return 0;
}
