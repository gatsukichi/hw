#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j += 10)
		{
			printf("%3d", j + i);
		}
		printf("\n");
	}


	return 0;


}