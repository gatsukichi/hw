#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#pragma warning (disable : 4996)
void initArray(int(*)[4]);
void sumPrint(int(*)[4]);

int main()
{
	int ary[3][4];
	srand((unsigned)time(NULL));
	initArray(ary); //ary �Լ� ������ �ʱ�ȭ�Ϸ�
	sumPrint(ary);


	return 0;
}

void initArray(int(*p)[4])
{
	int i, j;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			p[i][j] = (rand() % 9) + 1;// 1~9������ ���� �߻�
		}
	}
}
void sumPrint(int(*p)[4])
{
	int i, j;
	int arysum = 0;
	for (i = 0; i <= 2; i++)
	{
		printf("%-3d%-3s:", i, "��");
		for (j = 0; j <= 3; j++)
		{
			printf("%5d", p[i][j]);
			arysum += p[i][j];
		}
		printf("\t%d���� �� : %3d\n", i, arysum);
		arysum = 0;
	}

	printf("���� �� : ");
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 2; j++) // 3�����ƶ� 0,1,2 // 1����
		{
			arysum += p[j][i];
		}
		printf("%-5d", arysum);
		arysum = 0;
	}

	return;
}