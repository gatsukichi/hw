#include<stdio.h>
#pragma warning (disable : 4996)
int prt(int, int, int);

int main()
{
	int input;
	int cre=0, shi=0, col=0; //크림빵,쉬림프,콜라
	int cnt=0;
	while (1)
	{
		printf("현재 당신의 소유 금액 입력 : ");
		scanf("%d", &input);
		if (getchar() == '\n'&&input >= 0)
		{
			;
		}
		else
		{
			return 0;
		}
		cnt = 0;
		for (cre = 1; (cre*500) < input; cre++)
		{
			for (shi = 1; (shi*700)+(cre*500) < input; shi++)
			{
				for (col = 1;(col*400)+(shi*700)+(cre*500)<= input;col++)
				{
					if (( (cre*500)+(shi*700)+(col*400))== input){cnt =prt(cre, shi, col);}
				}
			}
		}
		if(cnt>=1){ printf("어떻게 구입하시겠습니까?\n"); }
	}
}

int prt(int cre, int shi, int col)
{
	printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", cre, shi, col);
	return 1;
}