#include<stdio.h>
#pragma warning (disable : 4996)

int main()
{
	long long a=1; // ����  a
	long long N;
	long long b=1; 
	long long sum=1;
	long long tmp;
	int i;

	while(1)
	{
		printf("�Ǻ���ġ ������ �׼��� �Է��Ͻÿ� : ");
		scanf("%lld", &N);
		if (getchar() == '\n'&&N >= 1&&N<=30)
		{break;}
	}
	while(1)
	{
		if(N==1)
		{printf("%lld",a);}
		else
		{
			printf("%lld",a);
			for(i=1;i<N;i++)
			{
				printf("+%lld",b);
				sum+=b;
				tmp=b;
				b=b+a;
				a=tmp;
				
				
			}
			printf("=%lld",sum);
		}
		break;
	}


	return 0;
}