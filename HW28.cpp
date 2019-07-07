#include<stdio.h>
#pragma warning (disable : 4996)


int main()
{
	char sentence; //문장 기억공간
	char ch;
	int abcnum = 0; // 영문 갯수
	int num = 0; // 숫자 갯수
	int spaceNum = 0; // 여백문자 갯수
	int otherNum = 0; // 나머지 갯수


	printf("# 영문 문장을 입력 하시오 : \n");
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

	printf("* 영문자 대소문자 개수 : %d\n", abcnum);
	printf("* 숫자문자 개수 : %d\n", num);
	printf("* 여백문자(space, tab, enter) 개수 : %d\n", spaceNum);
	printf("* 그 외 기타문자 개수 : %d\n", otherNum);

	return 0;
}