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
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &h);
	return h;
}
double inputWight()
{
	double w;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &w);
	return w;
}
double calcBmi(double h, double w)
{
	return w / (h*h);
}
void output(double bmi)
{
	if (bmi < 18.5)
	{
		printf("당신의 BMI는 %.1lf 으로 저체중 입니다.",bmi);
	}
	else if (bmi < 25)
	{
		printf("당신의 BMI는 %.1lf 으로 정상체중 입니다.", bmi);
	}
	else if (bmi < 30)
	{
		printf("당신의 BMI는 %.1lf 으로 과체중 입니다.", bmi);
	}
	else if (bmi < 40)
	{
		printf("당신의 BMI는 %.1lf 으로 비만 입니다.", bmi);
	}
	else
	{
		printf("당신의 BMI는 %.1lf 으로 고도비만 입니다.", bmi);
	}
	return;
}
