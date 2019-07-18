#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable : 4996)
void sortdatain(int *);
void selectionSort(int *, int);
void printAry(int*);
int main()
{
	int tc; // test case
	int i, j;
	int ary[20];  //밑에서 만에하나 쓰레기값이 0일수도
	int size = sizeof(ary) / sizeof(ary[0]);

	freopen("c:\\data\\hw52_sortData.txt", "rt", stdin);
	scanf("%d", &tc);
	printf("tc = %d\n", tc);
	for (i = 0; i < tc; i++)
	{
		printf("\n\n");
		sortdatain(ary);
		printf("소트 전  데이터 : ");
		for (j = 0; j < 20; j++)
		{
			if (ary[j] == 0) { break; }
			printf("%-3d", ary[j]);
		}
		selectionSort(ary, size);
		printAry(ary);
	}
	
	return 0;
}
void sortdatain(int *ary)
{
	int i;
	for (i = 0; i<20; i++)
	{
		scanf("%d", &ary[i]);
		if (ary[i] == 0)
		{break;}
	}
	return;
}

void selectionSort(int *ary,int size)
{
	int i,j;
	int tmp;
	for (i = 0; i < 20; i++)
	{
		if (ary[i] == 0) { break; }
		for (j = i + 1; j < 20; j++)
		{
			if (ary[j] == 0) { break; }
			if (ary[i] > ary[j])
			{
				tmp = ary[i];
				ary[i] = ary[j];
				ary[j] = tmp;
			}
		}
	}
	return;
}
void printAry(int*ary)
{
	int i;
	printf("\n소트 후 데이터 : ");
	for (i = 0; i < 20; i++)
	{
		if (ary[i] == 0) { return; }
		printf("%-3d", ary[i]);
	}
	return;
}