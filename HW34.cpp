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
	case 1: total=calc(inton, type); break;//������
	case 2: total = calc(inton, type); break;//�����
	case 3: total = calc(inton, type); break;//������
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
		printf("* ����� �ڵ带 �Է��Ͻÿ� (1:������/2:�����/3:������) : ");
		scanf("%d",&input );
		if (getchar() == '\n'&&input >=1&&input<=3) { break; }
	}
	while (1)
	{
		printf("* ��뷮�� �Է��Ͻÿ�(ton����) :  ");
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
		printf("#����� �ڵ� : 1(������)\n");
		printf("#��뷮 : %.2lf ton\n", inton);
		printf("#�Ѽ������ : %.2lf", total);
		break;
	}
	case 2: {
		printf("#����� �ڵ� : 2(�����)\n");
		printf("#��뷮 : %.2lf ton\n", inton);
		printf("#�Ѽ������ : %.2lf", total);
		break;
	}


	case 3: {
		printf("#����� �ڵ� : 2(������)\n");
		printf("#��뷮 : %.2lf ton\n", inton);
		printf("#�Ѽ������ : %.2lf", total);
		break;
	}
	default:break;
	}
	return;
}
