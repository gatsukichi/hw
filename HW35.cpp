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
		printf("0���� ū���� �Է��Ͻÿ� (%d��°) : ", i);
		scanf("%d", &input);
		if (getchar() == '\n'&&input >= 0);
		else { goto LB1; }
		sum += input;
	}
	printf("�Էµ� ���� �� �� : %d", sum);
	return 0;
}