#include<stdio.h>
#pragma warning (disable : 4996)
int input();

int main()
{
	unsigned bitcheck = 0x80000000; //비트열 첫번째 만 1인 체크용 변수
	int n;
	int i;
	
	n = input();

	printf("%d(10)  =  ", n);
	if((bitcheck&n)==0)   //양수일때
	{
		
		for (i = 0; i <= 31; i++)
		{
			if ((bitcheck&n) == 0)
				printf("0");
			else
				printf("1");
			bitcheck = bitcheck >> 1;
		}
	}
	else // 음수일때
	{
		for (i = 0; i <= 31; i++)
		{
			if ((bitcheck&n) == 0)
				printf("0");
			else
				printf("1");
			bitcheck = bitcheck >> 1;
		}
	}
	printf("(2)");
	return 0;
}



int input()
{
	int n;
	while (1)
	{
		printf("* 10진 정수를 입력하시오 : ");
		scanf("%d", &n);
		if (getchar() == '\n') { break; }
	}
	return n;
}