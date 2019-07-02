#include<stdio.h>

double input();
double payCalc(double);
double taxCalc(double);
void output(double,double,double);


int main()
{
	double h, glossPay,taxes, netPay;
	

	h = input();

	glossPay = payCalc(h);

	taxes = taxCalc(glossPay);

	netPay = glossPay - taxes;

	output(glossPay,taxes,netPay);

	return 0;
}
double input()
{
	double h;
	printf("*1���ϰ��� �ٹ� �ð��� �Է��Ͻÿ� :");
	scanf("%lf", &h);
	return h;
}
double payCalc(double h)
{
	double glossPay;
	double rest; // ������
	if (h > 40)
	{
		rest = h - 40;
		glossPay = 40 * 3000 + rest * 3000 * 1.5;
		return glossPay;
	}
	else
	{
		glossPay = h * 3000;
		return glossPay;
	}
}
double taxCalc(double glossPay)
{
	double taxes;
	double rest; // ������

	if (glossPay > 100000)
	{
		rest = glossPay - 100000;
		taxes = 15000 + rest * 0.25;
		return taxes;
	}
	else
	{
		taxes = glossPay * 0.15;
		return taxes;
	}
}
void output(double glossPay, double taxes, double netPay)
{
	printf("#�Ѽ��� : %lg\n", glossPay);
	printf("#��  �� : %lg\n", taxes);
	printf("#�Ǽ���: %lg\n", netPay);

	return;
}