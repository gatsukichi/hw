#include<stdio.h>
#pragma warning (disable : 4996)
int input(double *);
double calc(double ,int);
void output(double ,double,int);


int main()
{
	double inton;
	double total;
	int type;

	switch (type = input(&inton))
	{
	case 1: total=calc(inton, type); break;//가정용
	case 2: total = calc(inton, type); break;//상업용
	case 3: total = calc(inton, type); break;//공업용
	default: break;
	}

	output(total, inton,type);

	return 0;
}

int input(double *pay)
{
	int input;
	int inton;
	while (1)
	{
		printf("* 사용자 코드를 입력하시오 (1:가정용/2:상업용/3:공업용) : ");
		scanf("%d",&input );
		if (getchar() == '\n'&&input >=1&&input<=3) { break; }
	}
	while (1)
	{
		printf("* 사용량을 입력하시오(ton단위) :  ");
		scanf("%d", &inton);
		if (getchar() == '\n'&&inton >= 0) { break; }
	}
	*pay = inton;
	return input;
}
double calc(double inton,int type)
{
	double res = 0;
	switch (type)
	{
	case 1: res = (inton * 50); break;
	case 2:res = (inton * 45); break;
	case 3:res = (inton * 30); break;
	default: break;
	}
	res += (5 * (res / 100));
	return res;
}


void output(double total,double inton,int type)
{
	switch (type)
	{
	case 1: {
		printf("#사용자 코드 : 1(가정용)\n");
		printf("#사용량 : %.2lf ton\n", inton);
		printf("#총수도요금 : %.2lf", total);
		break;
	}
	case 2: {
		printf("#사용자 코드 : 2(상업용)\n");
		printf("#사용량 : %.2lf ton\n", inton);
		printf("#총수도요금 : %.2lf", total);
		break;
	}


	case 3: {
		printf("#사용자 코드 : 2(공업용)\n");
		printf("#사용량 : %.2lf ton\n", inton);
		printf("#총수도요금 : %.2lf", total);
		break;
	}
	default:break;
	}
	return;
}
