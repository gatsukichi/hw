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
	printf("년도를 입력하시오 : ");
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
		printf("%d년은 평년(Common year)입니다.", year);
	}
	else
	{
		printf("%d년은 윤년(Leap year)입니다.",year);
	}

	return;
}