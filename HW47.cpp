#include<stdio.h>
#pragma warning (disable : 4996)

void input(double *);
double maxD(double[]);
double minD(double[]);
void output(double,double);

int main()
{
	double num[5];
	double max, min;

	input(num); // �迭�� �̸��� �� �׹迭�� ù��°�� �ּ�

	//�迭 �Է� ��

	max = maxD(num);
	min = minD(num);

	output(max, min);

	return 0;
}
void input(double *dp)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		while (1)
		{
			printf("%d�� �� �� : ", i);
			scanf("%lf", &dp[i]);
			if (getchar() == '\n') { break; } // ���������� ���ڸ� �Է¹޾������ stdin ���� ���๮�ڰ� �����ִ�.
		}
	}

	return;
}
double maxD(double num[])
{
	int i;
	double max = 0;
	for (i = 0; i < 5; i++)
	{
		if (num[i] > max) 
		{ max = num[i]; }
	}
	return max;
}
double minD(double num[])
{
	int i;
	double min = 0;
	for (i = 0; i < 5; i++)
	{
		if (num[i] < min) 
		{ min = num[i]; }
	}
	return min;
}
void output(double max, double min)
{
	printf("���� ū�� : %.2lf\n", max);
	printf("���� ���� �� : %.2lf\n", min);
	return;
}