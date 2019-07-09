#include<stdio.h>
#pragma warning (disable : 4996)

char menu();
int inputInt(const char *);
int deposit(int *);
int withdraw(int *);
void myflush();

int main()
{
	char menuCheck;
	int bal=0; //bank balance : �ܾ��̶�� ��
	while (1)
	{
		menuCheck = menu();
		if (menuCheck == 'i')
		{
			bal += deposit(&bal);
		}
		else if (menuCheck == 'o')
		{
			bal -= withdraw(&bal);
		}
		else   //q �ΰ����̹Ƿ�
		{
			break;
		}
	}
	return 0;
}


char menu()
{
	char input;
		while (1)
		{
			printf("# �޴��� �����Ͻÿ�(i-�Ա�, o-���, q-����) : ");
			input = getchar();
			myflush();
			if (input == 'i')
			{
				return input;
			}
			else if (input == 'o')
			{
				return input;
			}
			else if (input == 'q')
			{
				return input;
			}
			else
			{
				printf("* �߸� �Է� �ϼ̽��ϴ�.\n");
			}
		}
}
int inputInt(const char *p)
{
	int input;
	
	while (1)
	{
		printf("%s", p);
		scanf("%d", &input);
		if (getchar() == '\n') { break; }
	}
	return input;
}
int deposit(int *bal)
{
	int money;
	money = inputInt("# �Աݾ��� �Է��ϼ��� : ");
	while (1)
	{
		if (money > 0)
		{
			break;
		}
		else
		{
			money = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
		}
	}
	printf("���� �ܾ��� %d�� �Դϴ�.\n",*bal+money);
	return money;
}
int withdraw(int *bal)
{
	int money;
	money = inputInt("# ��ݾ��� �Է��ϼ��� : ");
	while (1)
	{
		if (money > 0)
		{
			break;
		}
		else
		{
			money = inputInt("* �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ� :");
		}
	}
	if (*bal < money)
	{
		printf("�ܾ��� �����մϴ�.\n");
		printf("���� �ܾ��� %d�� �Դϴ�.\n", *bal);
		return 0;   //�ܾ��� �����ؼ� ���� ������Ȳ
	}
	else
	{
		printf("���� �ܾ��� %d�� �Դϴ�.\n", *bal - money);
	}
	return money;
}

void myflush()
{
	if (getchar() != '\n')
	{
		;
	}
	return;
}


