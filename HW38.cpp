#include<stdio.h>
#pragma warning (disable : 4996)
int prt(int, int, int);

int main()
{
	int input;
	int cre=0, shi=0, col=0; //ũ����,������,�ݶ�
	int cnt=0;
	while (1)
	{
		printf("���� ����� ���� �ݾ� �Է� : ");
		scanf("%d", &input);
		if (getchar() == '\n'&&input >= 0)
		{
			;
		}
		else
		{
			return 0;
		}
		cnt = 0;
		for (cre = 1; (cre*500) < input; cre++)
		{
			for (shi = 1; (shi*700)+(cre*500) < input; shi++)
			{
				for (col = 1;(col*400)+(shi*700)+(cre*500)<= input;col++)
				{
					if (( (cre*500)+(shi*700)+(col*400))== input){cnt =prt(cre, shi, col);}
				}
			}
		}
		if(cnt>=1){ printf("��� �����Ͻðڽ��ϱ�?\n"); }
	}
}

int prt(int cre, int shi, int col)
{
	printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", cre, shi, col);
	return 1;
}