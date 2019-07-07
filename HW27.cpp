#include<stdio.h>
#pragma warning (disable : 4996)

int input();

int main()
{
	int weight;  //무게 변수
	int total=0;  //포장갯수 초기화 0

	while (1)
	{
		weight = input();
	
			if (weight >= 150 && weight <= 500)
			{
				printf("* 현재 달걀의 수 :  %d\n", ++total);
			}
			else if (weight < 150)
			{
				printf("* 메추리알 가지고 장난하지 마시오 ~ ^^\n");
			}
			else
			{
				printf("* 타조알 가지고 장난하지 마시오~ ^^ \n");
			}
		
			if (total == 10) { break; }

	}
	

	printf("*** 달걀 포장이 끝났습니다. \n");



	return 0;
}


int input()
{
	int num;
	while (1)  // 문자 입력 방지 코드
	{
		printf("# 계란의 무게를 입력하세요 (단위 : g) : ");
		scanf("%d", &num);
		if (getchar() == '\n' && num >= 0) { break; }   //혹시나 음수들어올수있기에 방지
	}

	return num;
}