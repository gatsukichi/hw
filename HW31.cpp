#include<stdio.h>
#pragma warning (disable : 4996)

char menu();
int inputInt(const char *);
int deposit(int *);
int withdraw(int *);
void myflush();

int main()
{
	char menuCheck;
	int bal=0; //bank balance : 잔액이라는 뜻
	while (1)
	{
		menuCheck = menu();
		if (menuCheck == 'i')
		{
			bal += deposit(&bal);
		}
		else if (menuCheck == 'o')
		{
			bal -= withdraw(&bal);
		}
		else   //q 인경우뿐이므로
		{
			break;
		}
	}
	return 0;
}


char menu()
{
	char input;
		while (1)
		{
			printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
			input = getchar();
			myflush();
			if (input == 'i')
			{
				return input;
			}
			else if (input == 'o')
			{
				return input;
			}
			else if (input == 'q')
			{
				return input;
			}
			else
			{
				printf("* 잘못 입력 하셨습니다.\n");
			}
		}
}
int inputInt(const char *p)
{
	int input;
	
	while (1)
	{
		printf("%s", p);
		scanf("%d", &input);
		if (getchar() == '\n') { break; }
	}
	return input;
}
int deposit(int *bal)
{
	int money;
	money = inputInt("# 입금액을 입력하세요 : ");
	while (1)
	{
		if (money > 0)
		{
			break;
		}
		else
		{
			money = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 :");
		}
	}
	printf("현재 잔액은 %d원 입니다.\n",*bal+money);
	return money;
}
int withdraw(int *bal)
{
	int money;
	money = inputInt("# 출금액을 입력하세요 : ");
	while (1)
	{
		if (money > 0)
		{
			break;
		}
		else
		{
			money = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 :");
		}
	}
	if (*bal < money)
	{
		printf("잔액이 부족합니다.\n");
		printf("현재 잔액은 %d원 입니다.\n", *bal);
		return 0;   //잔액이 부족해서 돈을 못뺀상황
	}
	else
	{
		printf("현재 잔액은 %d원 입니다.\n", *bal - money);
	}
	return money;
}

void myflush()
{
	if (getchar() != '\n')
	{
		;
	}
	return;
}


