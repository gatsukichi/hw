#include<stdio.h>
#pragma warning (disable : 4996)

int menu();
void openFan(unsigned char*);
void  offFan(unsigned char*);
void reverseFan(unsigned char*);
void displayFan(unsigned char**);

int main()
{
	unsigned char fanNow = 0; //비트열 0000 0000
	int menuRes; //메뉴의 리턴값 저장 변수
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
		printf("1. 환풍구 열기 / 2 . 환풍구 닫기 / 3. 환풍구 전체 전황 / 4. 종료 : ");
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
	printf("              Fan 열기 작업 실행 화면                \n");
	printf("-----------------------------------------------------\n");
	while (1)
	{
		printf("* OPEN할 FAN 번호를 입력하시오(1-8) : ");
		scanf("%d", &openfannum);
		if (getchar() == '\n'&&openfannum >= 1 && openfannum <= 8)
		{
			break;
		}
	}

	switch (openfannum)
	{
	case 1: {*p = fanshift | *p; } {break; }
	case 2: {*p = fanshift >> 1 | *p; } {break; } // 우선순위 고려해서 소괄호치지않음 1시프트 2or연산 3대입연산
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
	printf("              Fan 닫기 작업 실행 화면                \n");
	printf("-----------------------------------------------------\n");
	while (1)
	{
		printf("* OFF할 FAN 번호를 입력하시오(1-8) : ");
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
	printf("           Fan 전체 전환 작업 실행 화면             \n");
	printf("-----------------------------------------------------\n");
	printf("전체 FAN의 상태가 전환되었습니다.(ON,OFF 상태 뒤바뀜)\n");

	*p = ~*p;
	displayFan(&p);
	return;
}
void displayFan(unsigned char**p)
{
	unsigned char check = 0x01;
	unsigned char tmp;
	printf("%10s", "8번FAN");
	printf("%10s", "7번FAN");
	printf("%10s", "6번FAN");
	printf("%10s", "5번FAN");
	printf("%10s", "4번FAN");
	printf("%10s", "3번FAN");
	printf("%10s", "2번FAN");
	printf("%10s", "1번FAN");
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
