#include<stdio.h>
#pragma warning (disable : 4996)
void swap(int *,int);
int main()
{
	int i;
	int ary[] = { 1,2,3,4,5};
	int arycnt;
	arycnt = sizeof(ary) / sizeof(ary[0]);

	printf("ó�� �迭�� ����� �� :");
	for (i = 0; i <= arycnt - 1; i++)
	{
		printf("%3d", ary[i]);
	}
	swap(ary,arycnt);
	printf("\n�ٲ� �迭�� ����� �� :");
	for (i = 0; i <= arycnt - 1; i++)
	{
		printf("%3d", ary[i]);
	}
	return 0;
}
void swap(int *p,int arycnt)
{
	int i;
	int tmp;
		for (i = 1; i <= (arycnt / 2); i++)
		{
			tmp = p[i - 1];							////////////////////
			p[i - 1] = p[arycnt - i];			   //���� �˰���//
			p[arycnt - i] = tmp;                ////////////////////
		}
	return;
}