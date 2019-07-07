
#include<stdio.h>
#pragma warning (disable : 4996)

int inputUnit();
int transNumber(int);
void output(int);

int main()
{
	int P1, P2; // 최대범위 최소범위 변수
	int tmp; // 
	int n; // 유저가 원하는 고집수 몇
	int num;
	int nut; // num of time : 횟수
	int cyclen = 0; //cyclenumber : 총개수 출력용




	while (1)
	{
		printf("시작 값(100이상) 을 입력하시오 : ");
		scanf("%d", &P1);
		if (getchar() == '\n' && P1 >= 100) { break; } // 시작값 100이상
	}
	while (1)
	{
		printf("끝 값(10000이하) 을 입력하시오 : ");
		scanf("%d", &P2);
		if (getchar() == '\n' && P2 <= 10000 && P2 > P1) { break; } //끝값 지정범위에 시작값보단 커야한다는 조건추가
	}
	n = inputUnit();

	num = P1;



	while (1)
	{
		nut = 1;

		while (1)
		{
			tmp = num;
			while (1)
			{
				tmp = transNumber(tmp);
				if (tmp < 10) { break; } // 배곱수 연산종료 조건
				nut++;
			}
			if (nut == n) { break; }
			else if (num >= P2) // 끝범위에 도달했을때
			{
				goto LB1;
			}
			else
			{
				nut = 1; // 다시 초기화 (횟수)
				num++;
			}
		}

		printf("%d\n", num);
		cyclen++;
		num++;
	}

LB1:
	output(cyclen);


	return 0;
}

int inputUnit()
{
	int n;
	while (1)
	{
		printf("고집수(1~10)를 입력하시오 : ");
		scanf("%d", &n);
		if (getchar() == '\n' && n >= 1 && n <= 10) { break; }
	}

	return n;

}
int transNumber(int num)
{
	if (num == 10000)// 5자리수 인경우 10000인경우
	{
		return 0;
	}
	else if (num < 10000 && num >= 1000) // 4자리
	{
		return ((num / 1000) * ((num % 1000) / 100) * ((num % 100) / 10) * (num % 10));
	}
	else if (num < 1000 && num>100) //3자리
	{
		return ((num / 100) * ((num % 100) / 10) * (num % 10));
	}
	else //2자리
	{
		return (num / 10)*(num % 10);
	}

}
void output(int cyclen)
{
	printf(" 총 개수 : %d", cyclen);
	return;
}