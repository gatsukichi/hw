#include<stdio.h>
#pragma warning (disable : 4996)

int input();

int main()
{
	int weight;  //���� ����
	int total=0;  //���尹�� �ʱ�ȭ 0

	while (1)
	{
		weight = input();
	
			if (weight >= 150 && weight <= 500)
			{
				printf("* ���� �ް��� �� :  %d\n", ++total);
			}
			else if (weight < 150)
			{
				printf("* ���߸��� ������ �峭���� ���ÿ� ~ ^^\n");
			}
			else
			{
				printf("* Ÿ���� ������ �峭���� ���ÿ�~ ^^ \n");
			}
		
			if (total == 10) { break; }

	}
	

	printf("*** �ް� ������ �������ϴ�. \n");



	return 0;
}


int input()
{
	int num;
	while (1)  // ���� �Է� ���� �ڵ�
	{
		printf("# ����� ���Ը� �Է��ϼ��� (���� : g) : ");
		scanf("%d", &num);
		if (getchar() == '\n' && num >= 0) { break; }   //Ȥ�ó� �������ü��ֱ⿡ ����
	}

	return num;
}