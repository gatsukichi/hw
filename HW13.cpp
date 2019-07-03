#include<stdio.h>
#include<string.h>
void myflush();

int main()
{
	int fl;
	char fn[20], ln[20]; // first name , last name
	printf("# 성을 입력하시오 :");
	scanf("%s", fn);
	myflush();
	printf("# 이름을 입력하시오 :");
	scanf("%s", ln);
	myflush();

	printf("%6s", fn);
	printf("%20s\n", ln);
	fl = strlen(fn);
	printf("%6d", fl);
	fl = strlen(ln);
	printf("%20d\n", fl);


	return 0;
}

void myflush()
{
	if(getchar()!='\n')
	{
		;
	}
	return;
}