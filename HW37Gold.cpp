#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int input;
	int i, j, cnt = 0;
	int sum = 0;

	while (1) //�����Է�,�����Է� ���� �ݺ���
	{
		printf("* ����� �ٹ��ϼ��� �Է��Ͻÿ� :  ");
		scanf("%d", &input);
		if (getchar() == '\n'&&input > 0)
		{
			break;
		}
		else if (input == 0)
		{
			printf("�ٹ��� �����ʾƼ� ��ȭ�� �����ʽ��ϴ�.");
		}

	}
	for (i = 1; i <= input;i++ ) //  �ٹ��ϼ���ŭ ��� �ݺ���
	{
		for (j = 1; j <=i ; j++ ) // �ٹ��ϼ���ŭ
		{
			sum += i;
			cnt++;
			if (cnt == input)
			{
				break;
			}
		}
		if (cnt == input)
		{
			break;
		}
	}
	printf("�ٹ��� : %d��  / �� ��ȭ  �� : %d ��", input, sum);

	return 0;
}