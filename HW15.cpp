#include<stdio.h>
double inputWight();
double inputHeight();
double calcBmi(double,double);
void output(double);

int main()
{
	double height, weight, bmi;

	height = inputHeight();
	weight = inputWight();

	bmi = calcBmi(height, weight);

	output(bmi);

	return 0;
}
double inputHeight()
{
	double h;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &h);
	return h;
}
double inputWight()
{
	double w;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%lf", &w);
	return w;
}
double calcBmi(double h, double w)
{
	return h / (w*w);
}
void output(double bmi)
{
	if (bmi < 18.5)
	{
		printf("����� BMI�� %.1lf ���� ��ü�� �Դϴ�.",bmi);
	}
	else if (bmi < 25)
	{
		printf("����� BMI�� %.1lf ���� ����ü�� �Դϴ�.", bmi);
	}
	else if (bmi < 30)
	{
		printf("����� BMI�� %.1lf ���� ��ü�� �Դϴ�.", bmi);
	}
	else if (bmi < 40)
	{
		printf("����� BMI�� %.1lf ���� �� �Դϴ�.", bmi);
	}
	else
	{
		printf("����� BMI�� %.1lf ���� ���� �Դϴ�.", bmi);
	}
	return;
}
