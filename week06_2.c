/*
	Filename	:week06_2.c
	project		:week06
	Date		:2019-4-8
	Author		:20191513 민형문
	Connect		:if 문 
*/ 
#include<stdio.h> 
int main()
{
	
	int a,b;
	int tot=0;
	float avg=0;
 	char* z ="";
	//정수 2개를 입력받기 
	printf("정수 2개를 입력하세요:");
	scanf("%d %d",&a,&b);
	//두 수의 합과 평균 구하기
	//합계와 평균 출력하기(평균은 소수점 이하 2자리까지)
	tot=a+b;
	printf("두 정수의 합:%d\n",tot);
	avg=tot/2;
	printf("두 정수의 평균:%.2f\n",avg);
	//기본 if문: 참일때만 고려 
	//평균이 80이상이면 합격
	if(avg>=80) 
		printf("합격\n");
	//참일때 실행하는 문장이2개 이상인 경우 중괄호로 묶는다 
	if(avg>=80) 
	{
	    printf("합격\n");
		printf("축하합니다"); 
    }
	return 0;
}
