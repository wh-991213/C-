#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main0201()
{
	int day=0;
	scanf("%d", &day);
	if (1 == day)
		printf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	else if (3 == day)
		printf("������\n");
	else if (4 == day)
		printf("������\n");
	//... ...
	return 0;
}
//switch���Ҳ��һ�ַ�֧��䡣�������ڶ��֧�����
int main0202(void)
{
	printf("����������(1-7)\n");
	int day;
	scanf("%d", &day);
	
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}
	return 0;
}

int main0203(void)
{
	printf("����������(1-7)\n");
	int day;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
	//��������֧����ͬ�����ԣ���������д
}


//�������Ƕ��٣�����
int main0204(void)
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d n=%d\n", m, n);//5  ,3
	return 0;
}
int main0205()
{
	int score ;
	scanf("%d", &score);
	switch (score / 10)
	{
	case 10:
		printf("����\n");
		break;
	case 9:
		printf("����\n");
		break;
	case 8:
		printf("����\n");
		break;
	case 7:
		printf("����\n");
		break;
	case 6:
		printf("����\n");
		break;
	default:
		printf("������\n");
		break;
	}

	return 0;
}
//switch���԰ѳ�����ת���������е�һ��ִ�У��������˶��case��ǩ���Լ����һ��default��ǩ��
/*switch(���ͱ��ʽ)��������ı��ʽ�ᱻ����һ�Σ�����case��ǩ�еĳ������ʽ���Ƚϡ�������ʽ��ֵƥ������ĳ��case������
����ͻ���ת����case��ǩ�������䣬���û��ƥ���case����������ͻ���ת��default��ǩ��������*/
//����ж����֧����Ҫbreak����
//switch()��ı��ʽ���������ͱ��ʽ��case������������ͳ������ʽ
//switch����Ƕ��ʹ��
//switch������һ����֧����ü���break��Ϊ������д�����ʱ���ṩһ���õĴ�����


