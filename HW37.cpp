#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;
	int k = 0;
	for (i = 10; i <= 100; i+=10)
	{
		for (j = 1; j <= 10; j++)
		{
			k = k + 1;
			if (k  % 5 == 0 && k%3!=0) //5의배수냐 (3도 배수이면 공배수인데 첫번째 if문에서 걸리는것을 방지)
			{
				printf("%5c", '#');
			}
			else if (k % 3 == 0 && k%5!=0) //3의 배수냐  // 마찬가지
			{
				printf("%5c", '*');
			}
			else // 5와 3의 공배수를 포함한 나머지는 전부 정상출력
			{
				printf("%5d", k );
			}
		}
		printf("\n");
	}
	return 0;
}