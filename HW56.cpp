#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#pragma warning (disable : 4996)
void randNumInit(int (*)[5]);
void printOut(int(*)[5],int*);
void arySum(int(*)[5],int *);
int main()
{
	int ary[5][5] = { 0 ,};
	int sum[3] = { 0, };
	srand((unsigned)time(NULL));
	randNumInit(ary);
	arySum(ary, sum);
	printOut(ary,sum);
	return 0;
}
void randNumInit(int (*aryp)[5])
{
	int i, j;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			aryp[i][j] = (rand() % 20 + 1);
		}
	}
}
void printOut(int(*aryp)[5],int *sump)
{
	int i, j;
	for (i = 0; i <= 4; i++)
	{
		printf("%d 번줄의 행 : ",i);
		for (j = 0; j <= 4; j++)
		{
			printf("%3d   ", aryp[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i <= 2; i++)
	{
		printf("sum%d = %d\n", i + 1, sump[i]);
	}
}
void arySum(int(*aryp)[5],int *sump)
{
	int i, j;
	for (i = 0; i <= 4; i++)
	{
		sump[0] += aryp[i][i];
	}
	for (i = 0; i <= 3; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			sump[1] += aryp[i][j];
		}
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j <= i - 1; j++)
		{
			sump[2] += aryp[i][j];
		}
	}
}