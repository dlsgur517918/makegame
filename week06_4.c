/*
	Filename	:week06_4.c
	Project		:week06
	Date		:2019-4-9
	Auhtor		:20191513 ������
	
*/

#include<stdio.h>

int main()
{
	int num=85;
	
	if(num>=90)
	{
		printf("���\n");
	}
	else if (num>=80)
	{
		printf("����\n");
	}	
	else
	{
		printf("����\n");	
	}	


//	netford if , ��ø�� if 
	if(num>=90)
	{
		printf("���\n");
	}
	else
	{
		if(num>=80)
		{
			printf("����\n");
		}
		else
		{
			printf("����\n");
		}
	}
	

	if(num>=80)
	{
		if(num>=90)
		{
			printf("���\n");
		}
		else
		{
			printf("����\n");	
		} 
		else
		{
			printf("����\n");
		}
		 
	}	

	
	return 0;	
} 
