#include<stdio.h>
#pragma warning(disable:4996)

int main0901()
{
	int a, b, c;
	printf("��������ֻС�������\n");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
			printf("С��a����\n");
		else
			printf("С��c����\n");
	}
	else
	{
		if (b > c)
			printf("С��b����\n");
		else
			printf("С��c����\n");
	}
	return 0;
}


