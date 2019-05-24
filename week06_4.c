/*
	Filename	:week06_4.c
	Project		:week06
	Date		:2019-4-9
	Auhtor		:20191513 민형문
	
*/

#include<stdio.h>

int main()
{
	int num=85;
	
	if(num>=90)
	{
		printf("우수\n");
	}
	else if (num>=80)
	{
		printf("보통\n");
	}	
	else
	{
		printf("부족\n");	
	}	


//	netford if , 중첩된 if 
	if(num>=90)
	{
		printf("우수\n");
	}
	else
	{
		if(num>=80)
		{
			printf("보통\n");
		}
		else
		{
			printf("부족\n");
		}
	}
	

	if(num>=80)
	{
		if(num>=90)
		{
			printf("우수\n");
		}
		else
		{
			printf("보통\n");	
		} 
		else
		{
			printf("부족\n");
		}
		 
	}	

	
	return 0;	
} 
