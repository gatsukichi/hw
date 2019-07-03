#include<stdio.h>
void myflush();


int main()

{
	int in1, in2; 
	int res;

		while (1)
		{
			printf("# 두개의 정수를 입력하세요 :");
			res = scanf("%d %d", &in1, &in2);
			if (res <= 1) { break; }
			myflush();

			if (in1 < in2)
			{
				printf("%d - %d = %d\n", in2, in1, in2 - in1);
			}
			else
			{
				printf("%d - %d = %d\n", in1, in2, in1 - in2);
			}
		}



		return 0;
}

void myflush()
{
	if (getchar() != '\n')
	{
		;
	}
	return;
}