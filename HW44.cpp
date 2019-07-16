#include<stdio.h>
#pragma warning (disable : 4996)
void numrange(int*,int*);
char eocheckin(int*,int*);
void output(char ,int*, int*);
void myflush();

int main()
{
	int max, min;
	char eocheck;

	numrange(&max,&min);  // 최대 최소 정해짐
	
	eocheck = eocheckin(&max,&min);

	output(eocheck, &max, &min);

	return 0;
}

void numrange(int*maxp, int*minp)
{
	int input;
	while (1)
	{
		printf("# 시작 값을 입력하시오 : ");
		scanf("%d", &input);
		if (input >= 0 && getchar() == '\n')
		{
			*minp = input;
			break;
		}
		myflush();
	}
	while (1)
	{
		printf("# 끝 값을 입력하시오 : ");
		scanf("%d", &input);
		if (input > *minp && getchar() == '\n')
		{
			*maxp = input;
			break;
		}
		myflush();
	}
}
char eocheckin(int *maxp,int *minp)
{
	char input;
	while (1)
	{
		printf("%d~%d까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요 ? (짝수:e/홀수:o) : ",*minp,*maxp);
		scanf("%c", &input);
		if (input=='e') //짝수실행
		{
			return 'e';
		}
		else if (input == 'o') //홀수실행
		{
			return 'o';
		}
		myflush();
	}

}
void output(char eo, int *maxp, int *minp)
{
	int i;
	int sum = 0;
	if (eo == 'e')
	{
		printf("%d~%d 까지의 짝수(",*minp,*maxp);
		for (i = *minp; i <= *maxp; i++)
		{
			if (i % 2 == 0) { printf("%d  ", i); sum += i; }
		}
		printf(")의 합은 %d 입니다.", sum);
	}
	else // 'o' 인경우
	{
		printf("%d~%d 까지의 홀수(", *minp, *maxp);
		for (i = *minp; i <= *maxp; i++)
		{
			if (i % 2 == 1) { printf("%d  ", i); sum += i; }
		}
		printf(")의 합은 %d 입니다.", sum);
	}
}

void myflush(void) {
	while (getchar() != '\n') {
		;
	}
	return;
}