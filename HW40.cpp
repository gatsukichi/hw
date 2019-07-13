#include<stdio.h>
#pragma warning (disable : 4996)


int main()
{
	while (1) //문자입력,음수입력 방지 반복문
	{
		int input;
		int i, j, k, l;
		while (1)
		{
			printf("# 출력 라인수를 입력하시오 :  ");
			scanf("%d", &input);
			if (getchar() == '\n'&&input > 0)
			{
				break;
			}
			else if(input <=0)
			{
				;
			}
			else{ return 0; }
		}
		for (i = 1; i <= input; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("*");
			}
			for (k = 1; k <= (2 * (input - i)); k++) //여백 반복문
			{
				printf(" ");
			}
			for (l = 1; l <= i; l++)
			{
				printf("*");
			}
			printf("\n");
		}


	}
}