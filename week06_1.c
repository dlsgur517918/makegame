/*
	Filename	:week06_1.c
	project		:week06
	Date		:2019-4-8
	Author		:20191513 ������
	Connect		: 
*/
#include<stdio.h>
int main()
{
	int a,b;
	int tot=0;
	float avg=0;
 	char* z ="";
	
	//���� 2���� �Է¹ޱ� 
	printf("���� 2���� �Է��ϼ���:");
	scanf("%d %d",&a,&b);
	
	//�� ���� �հ� ��� ���ϱ�
	//�հ�� ��� ����ϱ�(����� �Ҽ��� ���� 2�ڸ�����)
	tot=a+b;
	printf("\n�� ������ ��:%d",tot);
	avg=tot/2;
	printf("\n�� ������ ���:%.2f",avg);
	
	//����� 80�̻��̸� �հ�, �׷��� ������ ���հ� ���(���׿����� ���)
	printf("\n%s",(avg>=80)?"�հ�":"���հ�");
	
	//���ڿ��� ������ �� ��� 
	z=(avg>=80)?"�հ�":"���հ�";
	printf("\n%s",z); 
	
	return 0;	
} 
