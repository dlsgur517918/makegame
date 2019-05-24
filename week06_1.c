```c

/*
	Filename	:week06_1.c
	project		:week06
	Date		:2019-4-8
	Author		:20191513 민형문
	Connect		: 
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
	printf("\n두 정수의 합:%d",tot);
	avg=tot/2;
	printf("\n두 정수의 평균:%.2f",avg);
	
	//평균이 80이상이면 합격, 그렇지 않으면 불합격 출력(삼항연산자 사용)
	printf("\n%s",(avg>=80)?"합격":"불합격");
	
	//문자열을 저장한 후 출력 
	z=(avg>=80)?"합격":"불합격";
	printf("\n%s",z); 
	
	return 0;	
} 
/*고쳐지나?*/
```

