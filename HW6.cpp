#include<stdio.h>

double input();
void output(double);

int main()
{
	double degreeC, degreeF;


	degreeF = input();

	degreeC = 5.0 / 9.0*(degreeF - 32.0);

	output(degreeC);

	return 0;

}

double input()
{
	double degreeF;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%lf", &degreeF);

	return degreeF;

}
void output(double degreeC)
{
	printf("섭씨 온도는 %.1lf도 입니다.",degreeC);

	return;

}