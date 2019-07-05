#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int input();
int output(int,int);
void myflush();

int num_max=100, num_min=0; // 전역변수가 편해서 일단 전역변수로 씁니다..

int main()
{
	srand((unsigned)time(NULL));
	int nof = 0; // number of time 의 약자로 횟수를 뜻함
	int num;
	int randnum;
	int res;
	randnum = rand() % 101;// 0~100 사이의 난수 발생

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

	printf("우와~ 맞았당~~~ 추카추카~~%d 번째 만에 맞추셨습니다. ",nof);

	return 0;

}

int input()
{
	int num;
	while (1)  // 문자,
	{
		printf("# 숫자를 입력하시오 : ");
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
		printf("%d보다 크고 %d보다 작습니다\n", num_min, num_max);
		return 1;
	}
	else if (num > randnum)
	{
		num_max = num;
		printf("%d보다 크고 %d보다 작습니다\n", num_min, num_max);
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