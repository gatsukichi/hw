#include<stdio.h>

int main()
{
	int money = 278970;
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10;
	int tmp;

	m50000 = money / 50000;
	tmp = money - 50000 * m50000;
	m10000 = tmp / 10000;
	tmp = tmp - 10000 * m10000;
	m5000 = tmp / 5000;
	tmp = tmp - 5000 * m5000;
	m1000 = tmp / 1000;
	tmp = tmp - 1000 * m1000;
	m500 = tmp / 500;
	tmp = tmp - 500 * m500;
	m100 = tmp / 100;
	tmp = tmp - 100 * m100;
	m50 = tmp / 50;
	tmp = tmp - 50 * m50;
	m10 = tmp / 10;
	
	printf("50000���� => %d��\n", m50000);
	printf("10000���� => %d��\n", m10000);
	printf("5000���� => %d��\n", m5000);
	printf("1000���� => %d��\n", m1000);
	printf("500���� => %d��\n", m500);
	printf("100���� => %d��\n", m100);
	printf("50���� => %d��\n", m50);
	printf("10���� => %d��\n", m10);

	return 0;





}