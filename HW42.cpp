#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j, k;

	//2중for문 2set
	for (i = 1; i <= 9; i++)
	{
		for (j=2;j<=5;j++)
		{
			printf("%d * %d = %-5d", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		for (j = 6; j <= 9; j++)
		{
			printf("%d * %d = %-5d", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n");

	//3중 for문 1set
	for (i=2;i<=9;i+=4)
	{
		for (j = 1; j <= 9; j++) 
		{
			for (k = i; k <= i + 3; k++)
				{
				printf("%d * %d = %-5d", k, j, j*k);
				}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}