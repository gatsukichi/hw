#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int input();
int output(int,int);
void myflush();

int num_max=100, num_min=0; // ���������� ���ؼ� �ϴ� ���������� ���ϴ�..

int main()
{
	srand((unsigned)time(NULL));
	int nof = 0; // number of time �� ���ڷ� Ƚ���� ����
	int num;
	int randnum;
	int res;
	randnum = rand() % 101;// 0~100 ������ ���� �߻�

	while (1)
	{
		num = input();
		nof++;
		
		res = output(num, randnum);
		if(res==0)
		{
			break;
		}
		else { ; }
	}

	printf("���~ �¾Ҵ�~~~ ��ī��ī~~%d ��° ���� ���߼̽��ϴ�. ",nof);

	return 0;

}

int input()
{
	int num;
	while (1)  // ����,
	{
		printf("# ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &num);

		if (getchar() == '\n'&&num<=100){ break; }
	}

	return num;
}
int output(int num,int randnum) 
{
	if (num < randnum)
	{
		num_min = num;
		printf("%d���� ũ�� %d���� �۽��ϴ�\n", num_min, num_max);
		return 1;
	}
	else if (num > randnum)
	{
		num_max = num;
		printf("%d���� ũ�� %d���� �۽��ϴ�\n", num_min, num_max);
		return 1;
	}
	else
	{
		return 0;
	}
}


void myflush()
{
	if (getchar() != '\n')
	{
		;
	}
	return;
}