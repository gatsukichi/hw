#include<stdio.h>
#pragma warning (disable : 4996)

int menu();
void openFan(unsigned char*);
void  offFan(unsigned char*);
void reverseFan(unsigned char*);
void displayFan(unsigned char**);

int main()
{
	unsigned char fanNow = 0; //��Ʈ�� 0000 0000
	int menuRes; //�޴��� ���ϰ� ���� ����
	while (1)
	{
		menuRes = menu();
		switch (menuRes)
		{
		case 1: openFan(&fanNow); break;
		case 2: offFan(&fanNow); break;
		case 3: reverseFan(&fanNow); break;
		case 4: goto LB1;
		default:; break;
		}
	}
	LB1:
	return 0;
}

int menu()
{
	int input;
	while (1)
	{
		printf("1. ȯǳ�� ���� / 2 . ȯǳ�� �ݱ� / 3. ȯǳ�� ��ü ��Ȳ / 4. ���� : ");
		scanf("%d", &input);
		if (getchar() == '\n')
		{
			switch (input)
			{
			case 1: { return 1; } 
			case 2: { return 2; }
			case 3: { return 3; }
			case 4: { return 4; }
			default:;
			}
		}
	}
}
void openFan(unsigned char*p)
{
	int openfannum;
	unsigned char fanshift = 0x80; // 1000 0000
	printf("-----------------------------------------------------\n");
	printf("              Fan ���� �۾� ���� ȭ��                \n");
	printf("-----------------------------------------------------\n");
	while (1)
	{
		printf("* OPEN�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
		scanf("%d", &openfannum);
		if (getchar() == '\n'&&openfannum >= 1 && openfannum <= 8)
		{
			break;
		}
	}

	switch (openfannum)
	{
	case 1: {*p = fanshift | *p; } {break; }
	case 2: {*p = fanshift >> 1 | *p; } {break; } // �켱���� ����ؼ� �Ұ�ȣġ������ 1����Ʈ 2or���� 3���Կ���
	case 3: {*p = fanshift >> 2 | *p; } {break; }
	case 4: {*p = fanshift >> 3 | *p; } {break; }
	case 5: {*p = fanshift >> 4 | *p; } {break; }
	case 6: {*p = fanshift >> 5 | *p; } {break; }
	case 7: {*p = fanshift >> 6 | *p; } {break; }
	case 8: {*p = fanshift >> 7 | *p; } {break; }
	default: break;
	}

	displayFan(&p);

	return;
}
void offFan(unsigned char*p)
{
	int offfannum;
	unsigned char fanshift = 0x80; // 1000 0000
	unsigned char tmp;
	printf("-----------------------------------------------------\n");
	printf("              Fan �ݱ� �۾� ���� ȭ��                \n");
	printf("-----------------------------------------------------\n");
	while (1)
	{
		printf("* OFF�� FAN ��ȣ�� �Է��Ͻÿ�(1-8) : ");
		scanf("%d", &offfannum);
		if (getchar() == '\n'&&offfannum >= 1 && offfannum <= 8)
		{
			break;
		}
	}

	switch (offfannum)
	{
	case 1: if ((tmp = fanshift & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift ^ *p;
	} {break; }
	case 2: if ((tmp = fanshift >> 1 & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift >> 1 ^ *p;
	} {break; }
	case 3: if ((tmp = fanshift >> 2 & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift >> 2 ^ *p;
	} {break; }
	case 4: if ((tmp = fanshift >> 3 & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift >> 3 ^ *p;
	} {break; }
	case 5: if ((tmp = fanshift >> 4 & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift >> 4 ^ *p;
	} {break; }
	case 6: if ((tmp = fanshift >> 5 & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift >> 5 ^ *p;
	} {break; }
	case 7: if ((tmp = fanshift >> 6 & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift >> 6 ^ *p;
	} {break; }
	case 8: if ((tmp = fanshift >> 7 & *p) == 0)
	{
		break;
	}
			else
	{
		*p = fanshift >> 7 ^ *p;
	} {break; }
	default: break;
	}

	displayFan(&p);

	return;

}
void reverseFan(unsigned char*p)
{
	
	printf("-----------------------------------------------------\n");
	printf("           Fan ��ü ��ȯ �۾� ���� ȭ��             \n");
	printf("-----------------------------------------------------\n");
	printf("��ü FAN�� ���°� ��ȯ�Ǿ����ϴ�.(ON,OFF ���� �ڹٲ�)\n");

	*p = ~*p;
	displayFan(&p);
	return;
}
void displayFan(unsigned char**p)
{
	unsigned char check = 0x01;
	unsigned char tmp;
	printf("%10s", "8��FAN");
	printf("%10s", "7��FAN");
	printf("%10s", "6��FAN");
	printf("%10s", "5��FAN");
	printf("%10s", "4��FAN");
	printf("%10s", "3��FAN");
	printf("%10s", "2��FAN");
	printf("%10s", "1��FAN");
	printf("\n");
	while (1)
	{
		
		tmp = **p & check;
		if (tmp == check)
		{
			printf("%10s", "ON");
		}
		else
		{
			printf("%10s", "OFF");
		}
		check = check << 1;
		if (check == 0x00) { break; }
	}
	printf("\n");

	return;
}
