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
	
	printf("50000원권 => %d개\n", m50000);
	printf("10000원권 => %d개\n", m10000);
	printf("5000원권 => %d개\n", m5000);
	printf("1000원권 => %d개\n", m1000);
	printf("500원권 => %d개\n", m500);
	printf("100원권 => %d개\n", m100);
	printf("50원권 => %d개\n", m50);
	printf("10원권 => %d개\n", m10);

	return 0;





}