#include<stdio.h>
#pragma warning (disable:4996)

//����ָ���������;��ת�Ʊ�
//������
void menu()
{
	printf("****************************\n");
	printf("**** 1.add        2.sub ****\n");
	printf("**** 3.mul        4.div ****\n");
	printf("****       0.exit      *****\n");
	printf("****************************\n");
}

int Add3(int x, int y)
{
	return x + y;
}
int Sub3(int x, int y)
{
	return x - y;
}
int Mul3(int x, int y)
{
	return x * y;
}
int Div3(int x, int y)
{
	return x / y;
}

//һ
//int main0701(void)
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//		if (input == 0)//ȷ�����������0��
//			goto again;
//		else if(input < 1 || input >4)//ȷ�����������ѡ�����
//			goto again1;
//		//��������������Ҫ��ÿ��case��ǩ������printf("��������������>\n"); scanf("%d%d", &x, &y);
//
//		printf("��������������>\n");
//		scanf("%d%d", &x, &y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add3(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub3(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul3(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div3(x, y));
//			break;
//		case 0:
//			again:
//			printf("�˳�\n");
//			break;
//		default:
//			again1:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//����д���룬���軹Ҫ����������֮�䰴λ�롢��λ�򡢰�λ������ơ����Ƶ�����ʱ������Ҫ���case���


//��
//int main0702(void)
//{
//	int input = 0;
//	int x = 0;
//	int y = 0; 
//	//pfArr��һ������ָ������ - ͨ���±��ҵ�Ԫ�أ�Ȼ����ȥ�ҵ����Ԫ����ָ��������������ȥ - ���Ծ��������ֺ���ָ���������ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0,Add3,Sub3,Mul3,Div3 };
//	do
//	{
//		menu();
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("��������������>\n");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);//����(*pfArr[input])(x,y);	
//			printf("�����%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	}while(input);
//	//����д�ĺô��������Ҫ���������������������Ҫ��switch�������case��ǩ��ֻ��Ҫ���ԸĶ�
//	return 0;
//}


//�ٻص�����Ĵ���һ - �Ż�	
/*�ص�����������һ��ͨ������ָ����õĺ����������Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ�������������
ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض�
���¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ*/
//����ÿ��case��ǩΨһ��ͬ���ǵ��õĺ�����һ�� - ��װһ��Calc����

void Calc(int(*pf)(int, int))//�ú���ָ����մ������Ĳ�ͬ�ĺ�����ַ - ʵ���˲�ͬ�Ĺ���
{
	int x = 0;
	int y = 0;
	printf("��������������>\n");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main0701(void)
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add3);
			/*printf("��������������>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add3(x, y));*/
			break;
		case 2:
			Calc(Sub3);
			/*printf("��������������>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub3(x, y));*/
			break;
		case 3:
			Calc(Mul3);
			/*printf("��������������>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul3(x, y));*/
			break;
		case 4:
			Calc(Div3);
			/*printf("��������������>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div3(x, y));*/
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	//��һ�������ĵ�ַ���ݸ�һ��ָ��pf - �ں����ڲ�ͨ�����ָ��ȥ�����Ǹ����� - �Ǹ������õĺ����ͳ�Ϊ�ص����� - �ܺõĽ���˴������������
	return 0;
}


//���ڻص�����
void print3(char *str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))//2.test�����Ĳ��������ú���ָ����� - �������ָ��ָ��ĺ���������char*���ͣ�����������void
{
	printf("test\n");
	p("hello");//3.��test�����ڲ�ͨ���������ĺ����ĵ�ַp��Ȼ��ȥ��������ָ����Ǹ�����
}
int main0704(void)
{
	test(print3);//1.�����ڵ���test����ʱ���˸�print3��������print3�����ĵ�ַ��Ϊtest�����Ĳ���

	//�ܵ���˵��
	//print3������������ȥ�������� - ���ǰ�print3�����ĵ�ַ��Ϊtest�����Ĳ���
	//- ��test�����ڲ�ĳ�ֳ�����ȥ����print3������� - ��������ĺ���print3�ͱ���Ϊ�ص�����
	//- ���ֻ��ƾͱ���Ϊ�ص���������
	return 0;
}
