#include<stdio.h>

int main()
{
	int ascii;

	printf("ASCII code값을 입력하시오 : ");

	scanf("%d", &ascii);

	printf("%d는 '%c'의 ASCII code 입니다.", ascii, ascii);


	return 0;
}