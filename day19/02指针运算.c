#include<stdio.h> 
#define N_VALUES 5//����0204

int main0201()
{
	//��ʹ���±���ʣ�ʹ��ָ�����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	/*for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *(arr + i));//1 2 3 4 5 6 7 8 9 10
	}*/
	
	int* p = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *p);//1 3 5 7 9
		p += 2;//ע�ⲻҪԽ��
	}
	printf("\n");
	

	int* q = &arr[8];
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *q);//9 7 5 3 1
		q -= 2;
	}
	return 0;
}

int main0202(void)
{
	//ָ��-ָ��
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);//9
	//ָ��-ָ��õ��Ĳ����ֽ���40-4=36������ָ���ָ��֮��Ԫ�ظ���-1

	//ʹ������ָ��-�ַ�ָ�룿����
	char ch[5] = { 0 };
	printf("%d\n", &arr[9] - &ch[0]);//err
	//����д�ǲ��Եģ���ָ��-ָ�룬��������ָ��һ����ָ��ͬһ��ռ�� 
	return 0; 
}

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;//�����֮���Ԫ�س���
}
int main0203(void)
{
	//���ַ�������
	//1.strlen 
	//2.֮ǰʹ���˵ݹ�ģ��ʵ��strlen
	//3.
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

//ָ���ϵ����
int main0204(void)
{
	float values[N_VALUES];//5
	float* vp;
	//1
	/*for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0; 
	}*/
	//�����޸�����
	//2.
	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
	{
		*vp = 0;
	}
	//����ʹ�õ�1��д��,��Ȼ��1�ֱȵ�2�ֲ������
	//��Ϊʵ���ھ��󲿷ֵı��������ǿ���˳���������ģ�Ȼ�����ǻ���Ӧ�ñ����2��д������Ϊ��׼������֤������
	//��׼�涨��
	/*����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��
	֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�*/
	return 0;
}