#include<stdio.h>

int input();

int main()
{
	int number;
	number = input();
	printf("�Էµ� ���� 8 ������ %#o �Դϴ�", number);
	printf("�Էµ� ���� 16 ������ %#x �Դϴ�", number);

	return 0;

}

int input()
{
	int number;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &number);
	printf("\n");

	return number;

}