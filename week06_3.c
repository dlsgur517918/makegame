/*
	Filename	:week06_3.c
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
	//평균이 80이상이면 합격, 그렇지 않으면 불합격
	if(avg>=80)
		printf("합격\n");
	else
		printf("불합격\n");
	//80이상이면 합격 축하합니다, 80미만이면 불합격 노력하세요 출력
	if(avg>=80)
	{
		printf("합격\n");
		printf("축하합니다"); 
	} 
	else
	{
		printf("불합격\n");
		printf("노력하세요"); 
	}
	
	if(조건식){
		//실행문 
	}
	if(조건식){
		//참일때실행문 
	}	
	else{
		//거짓일때 실행문 
	} 
	return 0; 
}
