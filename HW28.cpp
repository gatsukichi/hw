#include<stdio.h>
#pragma warning (disable : 4996)


int main()
{
	char sentence; //���� ������
	char ch;
	int abcnum = 0; // ���� ����
	int num = 0; // ���� ����
	int spaceNum = 0; // ���鹮�� ����
	int otherNum = 0; // ������ ����


	printf("# ���� ������ �Է� �Ͻÿ� : \n");
	scanf("%c",&sentence);
	if ((sentence >= 'A'&&sentence <= 'Z') || (sentence >= 'a'&&sentence <= 'z'))
	{
		abcnum++;
	}
	else if (sentence >= '0'&&sentence <= '9')
	{
		num++;
	}
	else if (sentence == '\n' || sentence == '\t' || sentence == ' ')
	{
		spaceNum++;
	}
	else
	{
		otherNum++;
	}

	while((ch = getchar()) != EOF)
	{
		if ((ch >= 'A'&&ch <= 'Z') || (ch >= 'a'&&ch <= 'z'))
		{
			abcnum++;
		}
		else if (ch >= '0'&&ch <= '9')
		{
			num++;
		}
		else if (ch == '\n' || ch == '\t' || ch == ' ')
		{
			spaceNum++;
		}
		else
		{
			otherNum++;
		}

	}

	printf("* ������ ��ҹ��� ���� : %d\n", abcnum);
	printf("* ���ڹ��� ���� : %d\n", num);
	printf("* ���鹮��(space, tab, enter) ���� : %d\n", spaceNum);
	printf("* �� �� ��Ÿ���� ���� : %d\n", otherNum);

	return 0;
}