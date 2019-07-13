#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int input;
	int i, j, cnt = 0;
	int sum = 0;

	while (1) //문자입력,음수입력 방지 반복문
	{
		printf("* 기사의 근무일수를 입력하시오 :  ");
		scanf("%d", &input);
		if (getchar() == '\n'&&input > 0)
		{
			break;
		}
		else if (input == 0)
		{
			printf("근무를 하지않아서 금화를 받지않습니다.");
		}

	}
	for (i = 1; i <= input;i++ ) //  근무일수만큼 찍는 반복문
	{
		for (j = 1; j <=i ; j++ ) // 근무일수만큼
		{
			sum += i;
			cnt++;
			if (cnt == input)
			{
				break;
			}
		}
		if (cnt == input)
		{
			break;
		}
	}
	printf("근무일 : %d일  / 총 금화  수 : %d 개", input, sum);

	return 0;
}