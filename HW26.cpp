#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int input();
void output(int, int);
void myflush();
int win = 0, draw = 0;  //전역번수 쓰면 안좋다고 하던데.. 죄송합니다 ㅠㅠ
int main()
{
	int randnum;
	int usersel; // 사용자가 고른 select 약자
	srand((unsigned)time(NULL));



	while (1)
	{
		randnum = (rand() % 3) + 1;// 1~3사이의 난수 발생
		usersel = input();   // 1:바위 2:가위 3:보

		output(usersel, randnum);
		if((usersel < randnum && randnum - usersel == 1)|| (usersel > randnum && usersel - randnum == 2))
		{
			printf("이겼습니다.\n");
			win++;
		}
		else if ((randnum < usersel && usersel - randnum == 1) || (randnum > usersel && randnum - usersel == 2))
		{
			printf("졌습니다.\n");
			break;
		}
		else
		{
			printf("비겼습니다.\n");
			draw++;
		}
	}

	printf("게임결과 : %d 승 %d 무", win, draw);

	return 0;

}

void myflush()
{
	if (getchar() != '\n')
	{
		;
	}
	return;
}
int input()
{
	int num;
	while (1)  // 문자,
	{
		printf("# 바위는 1 , 가위는 2 , 보는 3 중에서 선택하세요 : ");
		scanf("%d", &num);
		if (getchar() == '\n' && num <= 3 && num > 0) { break; }
	}

	return num;
}

void output(int usersel, int randnum)
{
	switch (usersel)
	{
	case 1: printf("당신은 바위 선택,"); break;
	case 2: printf("당신은 가위 선택,"); break;
	case 3: printf("당신은 보 선택,"); break;
	default: break;
	}
	switch (randnum)
	{
	case 1: printf("컴퓨터는 바위 선택 :"); break;
	case 2: printf("컴퓨터는 가위 선택 :"); break;
	case 3: printf("컴퓨터는 보 선택 :"); break;
	default: break;
	}


}