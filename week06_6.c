/*
	Filename	:week06_6.c
	Project		:week06
	Date		:2019-4-9
	Auhtor		:20191513 ������
	Comment		:
*/

#include<stdio.h>

int main()
{
	char op; 
	printf("�����ڸ� �����ϼ��� : ");
	scanf("%c",&op);
	
	switch(op)
	{
		case '+':
			printf("+����\n");
			break;//switch�� �ݺ����� {�߰�ȣ}�� ��� �� ���
		case '-':
			printf("-����\n");
			break;
		case '*':
			printf("*����\n");
		case '/':
			printf("/����\n");
		default:
			printf("�߸� �����ϼ̽��ϴ�"); 
	}
	
	return 0;
}
