#include<stdio.h>
#pragma warning (disable : 4996)
int input();

int main()
{
	unsigned bitcheck = 0x80000000; //��Ʈ�� ù��° �� 1�� üũ�� ����
	int n;
	int i;
	
	n = input();

	printf("%d(10)  =  ", n);
	if((bitcheck&n)==0)   //����϶�
	{
		
		for (i = 0; i <= 31; i++)
		{
			if ((bitcheck&n) == 0)
				printf("0");
			else
				printf("1");
			bitcheck = bitcheck >> 1;
		}
	}
	else // �����϶�
	{
		for (i = 0; i <= 31; i++)
		{
			if ((bitcheck&n) == 0)
				printf("0");
			else
				printf("1");
			bitcheck = bitcheck >> 1;
		}
	}
	printf("(2)");
	return 0;
}



int input()
{
	int n;
	while (1)
	{
		printf("* 10�� ������ �Է��Ͻÿ� : ");
		scanf("%d", &n);
		if (getchar() == '\n') { break; }
	}
	return n;
}