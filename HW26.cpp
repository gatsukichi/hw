#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int input();
void output(int, int);
void myflush();
int win = 0, draw = 0;  //�������� ���� �����ٰ� �ϴ���.. �˼��մϴ� �Ф�
int main()
{
	int randnum;
	int usersel; // ����ڰ� �� select ����
	srand((unsigned)time(NULL));



	while (1)
	{
		randnum = (rand() % 3) + 1;// 1~3������ ���� �߻�
		usersel = input();   // 1:���� 2:���� 3:��

		output(usersel, randnum);
		if((usersel < randnum && randnum - usersel == 1)|| (usersel > randnum && usersel - randnum == 2))
		{
			printf("�̰���ϴ�.\n");
			win++;
		}
		else if ((randnum < usersel && usersel - randnum == 1) || (randnum > usersel && randnum - usersel == 2))
		{
			printf("�����ϴ�.\n");
			break;
		}
		else
		{
			printf("�����ϴ�.\n");
			draw++;
		}
	}

	printf("���Ӱ�� : %d �� %d ��", win, draw);

	return 0;

}

void myflush()
{
	if (getchar() != '\n')
	{
		;
	}
	return;
}
int input()
{
	int num;
	while (1)  // ����,
	{
		printf("# ������ 1 , ������ 2 , ���� 3 �߿��� �����ϼ��� : ");
		scanf("%d", &num);
		if (getchar() == '\n' && num <= 3 && num > 0) { break; }
	}

	return num;
}

void output(int usersel, int randnum)
{
	switch (usersel)
	{
	case 1: printf("����� ���� ����,"); break;
	case 2: printf("����� ���� ����,"); break;
	case 3: printf("����� �� ����,"); break;
	default: break;
	}
	switch (randnum)
	{
	case 1: printf("��ǻ�ʹ� ���� ���� :"); break;
	case 2: printf("��ǻ�ʹ� ���� ���� :"); break;
	case 3: printf("��ǻ�ʹ� �� ���� :"); break;
	default: break;
	}


}