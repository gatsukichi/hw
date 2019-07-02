#include<stdio.h>


int input();


int main()
{
	int star;
	int i = 1;
	

	star = input();

	while(1)
	{
		
		printf("*");
		if (i<5)
		{
			i++;
		}
		else if(i%5 ==0)
		{
			printf("\n");
			i++;
		}
		else
		{
			i++;
		}
		if (i-1 == star)
		{
			break;
		}
	}
	
	return 0;
}

int input()
{
	int star;
	printf("# 정수값을 입력하세요 : ");
	scanf("%d", &star);

	return star;
}
