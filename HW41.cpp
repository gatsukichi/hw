#include<stdio.h>
#pragma warning (disable : 4996)
void myflush();

int main()
{
	char input;
	int i, j;
	while (1)
	{
		while (1)
		{
			printf("* 영문자 대문자 입력('A'~ 'Z') : ");
			scanf("%c", &input);
			myflush();
			if ((input >= 'A')&&(input <= 'Z'))
			{
				break;
			}
			else
			{
				return 0;
			}
		}
		for (i = input; i >= 'A'; i--)
		{
			for (j = input; j >= i; j--)
			{
				printf("%c", j);
			}
			printf("\n");
		}

	}
}

void myflush()
{
	while (1) {
		if (getchar() == '\n')
		{
			return;
		}
	}
}