#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)
void input(char*);
int strcheck(char*,char);
int main()
{
	char ch;
	int ok;
	char str[100] = { 0, }; //������ \0 ���� �����ؼ� ���ڿ��� ���̴� 99����
	input(str);

	printf("# ���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &ch);

	ok=  strcheck(str, ch);
	if (ok == -1)
	{
		printf("\"%s\"���ڿ� �ȿ� '%c' ���ڴ� �������� �ʽ��ϴ�. ", str, ch);
	}
	else
	{
		printf("\"%s\"���ڿ� �ȿ� '%c' ���ڴ� %d �� ��ġ�� �����մϴ�. ", str, ch,ok);
	}

	return 0;
}
void input(char *p)
{
	printf("# ���ڿ��� �Է��Ͻÿ� : ");
	fgets(p, 99, stdin);
	p[strlen(p) - 1] = '\0';
	return;
}

int strcheck(char *p,char ch)
{
	unsigned int i;

	for (i = 0; i <= strlen(p) - 1; i++)
	{
		if (p[i] == ch)
		{
			return i;
		}
	}

	return -1;
}