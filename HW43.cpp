#include<stdio.h>
#pragma warning (disable : 4996)
#include<math.h>
int input();
int primeNumber(int);
void myflush();

int main()
{
	int in;
	int i;
	int cnt=0;
	in = input();

	printf("1~%d까지의 소수 값은 다음과 같습니다.\n",in);
	for (i = 2; i <= in; i++)
	{
		switch (primeNumber(i))
		{
		case 1: cnt++; if (cnt % 5 == 0) { printf("\n"); }
		case 0:;
		}
	}
	printf("\n1~%d까지의 총 소수는 %d개 입니다.",in,cnt);

	return 0;
}


int input(void)
{
	int input;
	while (1)
	{
		printf("*정수값 하나를 입력하시오 : ");
		scanf("%d", &input);
		if (input >= 1&&getchar() == '\n')
		{
			break;
		}
			myflush();
	}
	return input;
}

int primeNumber(int i)
{
	double max = sqrt(i);
	int j;

	for (j= 2; j <= max; j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
	}
	printf("%-5d", i);
	return 1;
}

void myflush(void) {
	while (getchar() != '\n') {
		;
	}
	return;
}