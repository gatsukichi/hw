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
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // �� �޼� 2��������λ���

	input(&year_in,&month_in,&day_in,month); // �ּ� ���� ������ �Է� �ޱ� + �Ŵ� �迭
	//�Է¹���
	sum = cntDay(&year_in, &month_in, &day_in, month); // �ϼ� ���ִ� �Լ�


	printf("%d�� %d�� %d�� �� ",year_in,month_in,day_in);

	wsprint(sum);

	return 0;
}
void input(int *year,int* month,int *day,int *monthCh)
{
	while (1)
	{
		printf("�� �� ���� �Է��Ͻÿ� : ");
		scanf("%d %d %d", year, month, day);
		if (*year >= 1900 )
		{
			if (*month >= 1 && *month <= 12)
			{
				if (yearCheck(*year) == 0) // ���
				{
					if (*day >= 1 && *day <= monthCh[*month - 1])
					{
						break;
					}
				}
				else // ����
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
		printf("�ٽ� �Է��ϼ��� \n");
	}
	return;
}
int yearCheck(int year)  //r : 0��� , 1:����
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

	for (i = 1900; i <= (*year - 1); i++) //������
	{
		if (yearCheck(i) == 1) // ����
		{
			sum += 366;
			
		}
		else //���
		{
			sum += 365;
		}
	}
	for (i = 1; i <= (*month - 1); i++) // ������
	{
		sum += monthCh[i - 1];
	}
	for (i = 1; i <= *day; i++)//������
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
	case 0:printf("�Ͽ��� �Դϴ�."); break;
	case 1:printf("������ �Դϴ�."); break;
	case 2:printf("ȭ���� �Դϴ�."); break;
	case 3:printf("������ �Դϴ�."); break;
	case 4:printf("����� �Դϴ�."); break;
	case 5:printf("�ݿ��� �Դϴ�."); break;
	case 6:printf("����� �Դϴ�."); break;
	}
	return;
}