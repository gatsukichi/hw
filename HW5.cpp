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
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf("%lf", &useKw);

	return useKw;

}
void output(double cost)
{
	printf("���� ������� %lf�� �Դϴ�.", cost);
	return;
}