#include<stdio.h>
int inputAge();
int inputNum();
void output(int,int);

int main()
{
	int num, price, age;
	

	age = inputAge();
	num = inputNum();

	if (age <= 7)
	{
		if (num < 5)
		{
			price = num * 500;
			output(price,0);
		}
		else
		{
			price = num * 500;
			output(price, (double)price*0.1);
		}
	}
	else if (age <= 13)
	{
		if (num < 5)
		{
			price = num * 700;
			output(price, 0);
		}
		else
		{
			price = num * 700;
			output(price, (double)price*0.1);
		}
	}
	else if (age <= 19)
	{
		if (num < 5)
		{
			price = num * 1000;
			output(price, 0);
		}
		else
		{
			price = num * 1000;
			output(price, (double)price*0.1);
		}
	}
	else if (num <= 55)
	{
		if (num < 5)
		{
			price = num * 1500;
			output(price, 0);
		}
		else
		{
			price = num * 1500;
			output(price, (double)price*0.1);
		}
	}
	else
	{
		if (num < 5)
		{
			price = num * 500;
			output(price, 0);
		}
		else
		{
			price = num * 500;
			output(price, (double)price*0.1);
		}
	}

	return 0;
}

int inputAge()
{
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}
int inputNum()
{
	int num;
	printf("\n���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}
void output(int price, int discnt)
{
	printf("\n����� = > %d ",price);
	printf("\n���αݾ� = > %d ", discnt);
	printf("\n�����ݾ� = > %d ", price-discnt);

	return;
}