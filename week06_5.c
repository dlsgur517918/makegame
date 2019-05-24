/*
	Filename	:week06_5.c
	Project		:week06
	Date		:2019-4-9
	Auhtor		:20191513 민형문
	
*/

#include<stdio.h>

int main()
{
	int num;
	printf("번호를 선택하세요 : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("1번선택\n");
			break;//switch나 반복문에 {중괄호}를 벗어날 때 사용
		case 2:
			printf("2번선택\n");
			break;
		case 3:
			printf("3번선택\n");
		default:
			printf("잘못 선택하셨습니다");
	}
	
	return 0;
}
