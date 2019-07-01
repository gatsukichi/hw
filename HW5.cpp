#include<stdio.h>

double input();
void output(double);

int main()
{
	double useKw, total, tax, cost;

	useKw = input();

	total = 660 + (useKw*88.5);

	tax = total * 0.09;

	cost = total + tax;


	output(cost);

	return 0;
}

double input()
{
	double useKw;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%lf", &useKw);

	return useKw;

}
void output(double cost)
{
	printf("전기 사용요금은 %lf원 입니다.", cost);
	return;
}