#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"

void menu()
{
	printf("**********************************************\n");
	printf("*********1.add                  2.def*********\n");
	printf("*********3.search               4.modify******\n");
	printf("*********5.show                 6.sort********\n");
	printf("*********0.exit                 **************\n");
	printf("**********************************************\n");

}
int main()
{
	int input = 0;
	//�˵�ѭ��ǰ����ͨѶ¼ - ����һ���û�����Ϣ - ���֡����䡢�Ա𡢵绰����ַ - �ṹ��
	struct Contact con;//con����ͨѶ¼�����������1000��Ԫ�غ�size
	//ͨѶ¼��ʼ��
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DefContact(&con);
			break;
		case SEARCH: 
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			break;
			printf("�˳�ͨѶ¼\n");
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
