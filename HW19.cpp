#include<stdio.h>
int input();
int yearCheck(int);
void output(int,int);



int main()
{
	int year;
	int check;

	year = input();

	check = yearCheck(year);

	output(check,year);

	return 0;
}


int input()
{
	int year;
	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year);
	
	return year;
}
int yearCheck(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
void output(int check, int year)
{
	if (check == 0)
	{
		printf("%d���� ���(Common year)�Դϴ�.", year);
	}
	else
	{
		printf("%d���� ����(Leap year)�Դϴ�.",year);
	}

	return;
}