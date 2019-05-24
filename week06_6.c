/*
	Filename	:week06_6.c
	Project		:week06
	Date		:2019-4-9
	Auhtor		:20191513 민형문
	Comment		:
*/

#include<stdio.h>

int main()
{
	char op; 
	printf("연산자를 선택하세요 : ");
	scanf("%c",&op);
	
	switch(op)
	{
		case '+':
			printf("+선택\n");
			break;//switch나 반복문에 {중괄호}를 벗어날 때 사용
		case '-':
			printf("-선택\n");
			break;
		case '*':
			printf("*선택\n");
		case '/':
			printf("/선택\n");
		default:
			printf("잘못 선택하셨습니다"); 
	}
	
	return 0;
}
