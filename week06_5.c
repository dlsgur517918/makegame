/*
	Filename	:week06_5.c
	Project		:week06
	Date		:2019-4-9
	Auhtor		:20191513 ������
	
*/

#include<stdio.h>

int main()
{
	int num;
	printf("��ȣ�� �����ϼ��� : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("1������\n");
			break;//switch�� �ݺ����� {�߰�ȣ}�� ��� �� ���
		case 2:
			printf("2������\n");
			break;
		case 3:
			printf("3������\n");
		default:
			printf("�߸� �����ϼ̽��ϴ�");
	}
	
	return 0;
}
