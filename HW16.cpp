#include<stdio.h>

int input();
void output(int);
int calc(int);

int main()
{
	int station,value;
	int i = 0;
	while(i < 5)
	{
		station = input();
		value = calc(station);
		output(value);

		i++;
	}

	return 0;
}
int input()
{
	int station;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &station);
	return station;
}
void output(int value)
{
	printf("��� : %d��", value);
	return;
}
int calc(int station)
{
	int value;
	if (station <= 5)
	{
		value = 600;
	}
	else if (station <= 10)
	{
		value = 800;
	}
	else
	{
		if (station % 2 == 0)
		{
			value = 800 + (station - 10) * 50;
		}
		else if (station % 2 == 1)
		{
			value = 800 + (station - 9) * 50;
		}
	}
	return value;
}