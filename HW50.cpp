#include<stdio.h>
#include<string.h>
#pragma warning (disable : 4996)
void input(char*);
int strcheck(char*,char);
int main()
{
	char ch;
	int ok;
	char str[100] = { 0, }; //마지막 \0 까지 포함해서 문자열의 길이는 99까지
	input(str);

	printf("# 문자를 입력하시오 : ");
	scanf("%c", &ch);

	ok=  strcheck(str, ch);
	if (ok == -1)
	{
		printf("\"%s\"문자열 안에 '%c' 문자는 존재하지 않습니다. ", str, ch);
	}
	else
	{
		printf("\"%s\"문자열 안에 '%c' 문자는 %d 번 위치에 존재합니다. ", str, ch,ok);
	}

	return 0;
}
void input(char *p)
{
	printf("# 문자열을 입력하시오 : ");
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