#include<stdio.h>
#pragma warning (disable : 4996)


int main()
{
	while (1) //�����Է�,�����Է� ���� �ݺ���
	{
		int input;
		int i, j;
		while (1)
		{
			printf("# ��� ���μ��� �Է��Ͻÿ� :  ");
			scanf("%d", &input);
			if (getchar() == '\n'&&input > 0)
			{
				break;
			}
			else if(input <=0)
			{
				;
			}
			else{ return 0; }
		}
		for (i = 1; i <= input; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("*");
			}
			for (j = 1; j <= (2 * (input - i)); j++) //���� �ݺ���
			{
				printf(" ");
			}
			for (j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}


	}
}