
#include<stdio.h>
#pragma warning (disable : 4996)

int inputUnit();
int transNumber(int);
void output(int);

int main()
{
	int P1, P2; // �ִ���� �ּҹ��� ����
	int tmp; // 
	int n; // ������ ���ϴ� ������ ��
	int num;
	int nut; // num of time : Ƚ��
	int cyclen = 0; //cyclenumber : �Ѱ��� ��¿�




	while (1)
	{
		printf("���� ��(100�̻�) �� �Է��Ͻÿ� : ");
		scanf("%d", &P1);
		if (getchar() == '\n' && P1 >= 100) { break; } // ���۰� 100�̻�
	}
	while (1)
	{
		printf("�� ��(10000����) �� �Է��Ͻÿ� : ");
		scanf("%d", &P2);
		if (getchar() == '\n' && P2 <= 10000 && P2 > P1) { break; } //���� ���������� ���۰����� Ŀ���Ѵٴ� �����߰�
	}
	n = inputUnit();

	num = P1;



	while (1)
	{
		nut = 1;

		while (1)
		{
			tmp = num;
			while (1)
			{
				tmp = transNumber(tmp);
				if (tmp < 10) { break; } // ����� �������� ����
				nut++;
			}
			if (nut == n) { break; }
			else if (num >= P2) // �������� ����������
			{
				goto LB1;
			}
			else
			{
				nut = 1; // �ٽ� �ʱ�ȭ (Ƚ��)
				num++;
			}
		}

		printf("%d\n", num);
		cyclen++;
		num++;
	}

LB1:
	output(cyclen);


	return 0;
}

int inputUnit()
{
	int n;
	while (1)
	{
		printf("������(1~10)�� �Է��Ͻÿ� : ");
		scanf("%d", &n);
		if (getchar() == '\n' && n >= 1 && n <= 10) { break; }
	}

	return n;

}
int transNumber(int num)
{
	if (num == 10000)// 5�ڸ��� �ΰ�� 10000�ΰ��
	{
		return 0;
	}
	else if (num < 10000 && num >= 1000) // 4�ڸ�
	{
		return ((num / 1000) * ((num % 1000) / 100) * ((num % 100) / 10) * (num % 10));
	}
	else if (num < 1000 && num>100) //3�ڸ�
	{
		return ((num / 100) * ((num % 100) / 10) * (num % 10));
	}
	else //2�ڸ�
	{
		return (num / 10)*(num % 10);
	}

}
void output(int cyclen)
{
	printf(" �� ���� : %d", cyclen);
	return;
}