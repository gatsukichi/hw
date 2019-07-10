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

	input(num); // 배열의 이름은 곧 그배열의 첫번째방 주소

	//배열 입력 끝

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
			printf("%d번 방 값 : ", i);
			scanf("%lf", &dp[i]);
			if (getchar() == '\n') { break; } // 정상적으로 숫자를 입력받았을경우 stdin 에는 개행문자가 남아있다.
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
	printf("가장 큰값 : %.2lf\n", max);
	printf("가장 작은 값 : %.2lf\n", min);
	return;
}