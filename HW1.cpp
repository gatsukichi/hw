#include<stdio.h>
void printAge(int);       // ������ ���̵� / �������ڴ� int��
void printHeight(double); // ������ ���̵� / �������ڴ� double��
int main()
{
	char name[20] = "�Ž±�";
	int age = 25;
	double height = 179.9;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age)
{
	printf("���� : %d cm \n", age);
	//void �� ���� �ʿ�x
}
void printHeight(double height)
{
	printf("������ : %.2lf kg \n",height);  //�Ҽ��� 2�ڸ����� ǥ��
	//void �� ���� �ʿ�x
}