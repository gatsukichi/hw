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
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%lf", &degreeF);

	return degreeF;

}
void output(double degreeC)
{
	printf("���� �µ��� %.1lf�� �Դϴ�.",degreeC);

	return;

}