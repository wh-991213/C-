#include<stdio.h>

test1(int arr[])
{
	//�����arr��ָ�룬��sizeof(arr)�Ĵ�С��4����8����32(x86)λ����ϵͳ����4����64(x64)λ����ϵͳ����8���ҵ���x64ƽ̨
	printf("%d\n", sizeof(arr));
}
test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}
//�۲��ж������������Ľ��
int main0501()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(ch));//10
	//�����������ŵ�sizeof�ڼ��������������Ĵ�С����λ���ֽ� 

	test1(arr);//8
	//�����ڴ��ε�ʱ����������ȥ����������Ԫ�ص�ַ��ֻҪ�ǵ�ַ�������ķ�ʽ����һ��ָ�������ա�
	test2(ch);//8
	return 0;
}