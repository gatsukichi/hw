#include<stdio.h>
#include<string.h>
void myflush();

int main()
{
	int fl;
	char fn[20], ln[20]; // first name , last name
	printf("# ���� �Է��Ͻÿ� :");
	scanf("%s", fn);
	myflush();
	printf("# �̸��� �Է��Ͻÿ� :");
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