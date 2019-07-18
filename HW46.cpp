#include<stdio.h>
#pragma warning (disable : 4996)
void input(int*,int*,int*,int*);
int yearCheck(int );
int cntDay(int*, int*, int*, int*);
void wsprint(int);

int main()
{
	int sum;
	int year_in, month_in, day_in;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // 각 달수 2월은평년인상태

	input(&year_in,&month_in,&day_in,month); // 주소 세개 보내서 입력 받기 + 매달 배열
	//입력받음
	sum = cntDay(&year_in, &month_in, &day_in, month); // 일수 세주는 함수


	printf("%d년 %d월 %d일 은 ",year_in,month_in,day_in);

	wsprint(sum);

	return 0;
}
void input(int *year,int* month,int *day,int *monthCh)
{
	while (1)
	{
		printf("년 월 일을 입력하시오 : ");
		scanf("%d %d %d", year, month, day);
		if (*year >= 1900 )
		{
			if (*month >= 1 && *month <= 12)
			{
				if (yearCheck(*year) == 0) // 평년
				{
					if (*day >= 1 && *day <= monthCh[*month - 1])
					{
						break;
					}
				}
				else // 윤년
				{
					if (*month == 2)
					{
						if (*day >= 1 && *day <= 29)
						{
							break;
						}
					}
					else
					{
						if (*day >= 1 && *day <= monthCh[*month - 1])
						{
							break;
						}
					}
				}
			}
		}
		printf("다시 입력하세요 \n");
	}
	return;
}
int yearCheck(int year)  //r : 0평년 , 1:윤년
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


int cntDay(int*year, int*month, int*day, int*monthCh)
{
	int sum = 0;
	int i;

	for (i = 1900; i <= (*year - 1); i++) //년의합
	{
		if (yearCheck(i) == 1) // 윤년
		{
			sum += 366;
			
		}
		else //평년
		{
			sum += 365;
		}
	}
	for (i = 1; i <= (*month - 1); i++) // 달의합
	{
		sum += monthCh[i - 1];
	}
	for (i = 1; i <= *day; i++)//일의합
	{
		sum++;
	}
	if (yearCheck(*year) == 1 && *month > 2)
	{
		sum++;
	}
	return sum;
}

void wsprint(int sum)
{
	switch (sum % 7)
	{
	case 0:printf("일요일 입니다."); break;
	case 1:printf("월요일 입니다."); break;
	case 2:printf("화요일 입니다."); break;
	case 3:printf("수요일 입니다."); break;
	case 4:printf("목요일 입니다."); break;
	case 5:printf("금요일 입니다."); break;
	case 6:printf("토요일 입니다."); break;
	}
	return;
}