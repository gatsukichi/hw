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

	numrange(&max,&min);  // �ִ� �ּ� ������
	
	eocheck = eocheckin(&max,&min);

	output(eocheck, &max, &min);

	return 0;
}

void numrange(int*maxp, int*minp)
{
	int input;
	while (1)
	{
		printf("# ���� ���� �Է��Ͻÿ� : ");
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
		printf("# �� ���� �Է��Ͻÿ� : ");
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
		printf("%d~%d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ�� ? (¦��:e/Ȧ��:o) : ",*minp,*maxp);
		scanf("%c", &input);
		if (input=='e') //¦������
		{
			return 'e';
		}
		else if (input == 'o') //Ȧ������
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
		printf("%d~%d ������ ¦��(",*minp,*maxp);
		for (i = *minp; i <= *maxp; i++)
		{
			if (i % 2 == 0) { printf("%d  ", i); sum += i; }
		}
		printf(")�� ���� %d �Դϴ�.", sum);
	}
	else // 'o' �ΰ��
	{
		printf("%d~%d ������ Ȧ��(", *minp, *maxp);
		for (i = *minp; i <= *maxp; i++)
		{
			if (i % 2 == 1) { printf("%d  ", i); sum += i; }
		}
		printf(")�� ���� %d �Դϴ�.", sum);
	}
}

void myflush(void) {
	while (getchar() != '\n') {
		;
	}
	return;
}