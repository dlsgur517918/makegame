/*
	Filename	:week06_3.c
	project		:week06
	Date		:2019-4-8
	Author		:20191513 ������
	Connect		:if �� 
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
	printf("�� ������ ��:%d\n",tot);
	avg=tot/2;
	printf("�� ������ ���:%.2f\n",avg);
	//����� 80�̻��̸� �հ�, �׷��� ������ ���հ�
	if(avg>=80)
		printf("�հ�\n");
	else
		printf("���հ�\n");
	//80�̻��̸� �հ� �����մϴ�, 80�̸��̸� ���հ� ����ϼ��� ���
	if(avg>=80)
	{
		printf("�հ�\n");
		printf("�����մϴ�"); 
	} 
	else
	{
		printf("���հ�\n");
		printf("����ϼ���"); 
	}
	
	if(���ǽ�){
		//���๮ 
	}
	if(���ǽ�){
		//���϶����๮ 
	}	
	else{
		//�����϶� ���๮ 
	} 
	return 0; 
}
