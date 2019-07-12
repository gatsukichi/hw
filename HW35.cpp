#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i;
	int input;
	int sum=0;

	for (i = 1;i<=5; i++)
	{
		LB1:
		printf("0보다 큰수를 입력하시오 (%d번째) : ", i);
		scanf("%d", &input);
		if (getchar() == '\n'&&input >= 0);
		else { goto LB1; }
		sum += input;
	}
	printf("입력된 값의 총 합 : %d", sum);
	return 0;
}