#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


/*
C������һ�Žṹ���ĳ����������
1.˳��ṹ
2.ѡ��ṹ
3.ѭ���ṹ
*/
/*
ʲô����䣿
��һ���ֺţ������ľ���һ����� �磺
int a=10; ����һ����䣬�����ǿ����
*/
//������ʽ���Ϊ�棬ִ��{}��Ӧ�Ĵ��� 
int main0101()
{
	//������һ�ִ���д��
	/*
	int age = 10;
	if (18<=age<28);//ע����������ִ��18<=10Ϊ�٣�Ȼ��0<28Ϊ�棬��ִ��
	{
		printf("����\n");
	}
	*/
	//��ȷд��
	printf("�������������\n");
	int age;
	scanf("%d", &age);
	if (age < 18)
	{
		//�������ֻ��һ����䣬����ʡ��{}
		printf("δ����\n");
		printf("����̸����\n");
	}
	else
	{
		if (age >= 18 && age < 28)
			printf("����\n");
		else if (age >= 28 && age < 50)
			printf("׳��\n");
		else if (age >= 50 && age < 90)
			printf("����\n");
		else
			printf("�ϲ�����\n");
	}

	return EXIT_SUCCESS;
}

//����else
//��������δ��룬�����ʲô�أ�����
int main0102(void)
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		/*else  ע�������else��if(b==2)ƥ��
			printf("haha\n");*/

		else  //ע�������else����if(a==1)ƥ�䣻����if(b==2)ƥ��
			printf("haha\n");
	//���Ϊ��
	//�ʵ���ʹ��{}����ʹ������߼��������
	return 0;
}

//���´����ܷ��ӡ
int main0103(void)
{
	int sum = 4;
	//if (sum = 5)//�����ܵģ�ע������=�Ǹ�ֵ�������==���ж����
	//{
	//	printf("�Ǻ�\n");
	//}

	//���԰ѳ����ŵ���ߣ�Ԥ��������Ҳ�ǺõĴ�����
	if (5 ==sum)
	{
		printf("�Ǻ�\n");
	}
	return 0;
}


//�ж�һ�����Ƿ�Ϊ�����������1-100֮�������
int main0104(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)//��(i%2!=0);
			printf("%d\n", i);
		i++;
	}
	return 0;
}

//�ܲ���if����𣿣���
int main0105(void)
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d\n", i);
		i += 2;
	}
	return 0;
}

