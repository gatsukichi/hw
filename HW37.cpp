#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;
	int k = 0;
	for (i = 10; i <= 100; i+=10)
	{
		for (j = 1; j <= 10; j++)
		{
			k = k + 1;
			if (k  % 5 == 0 && k%3!=0) //5�ǹ���� (3�� ����̸� ������ε� ù��° if������ �ɸ��°��� ����)
			{
				printf("%5c", '#');
			}
			else if (k % 3 == 0 && k%5!=0) //3�� �����  // ��������
			{
				printf("%5c", '*');
			}
			else // 5�� 3�� ������� ������ �������� ���� �������
			{
				printf("%5d", k );
			}
		}
		printf("\n");
	}
	return 0;
}