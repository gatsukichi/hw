#include<stdio.h>

int main()
{
	int his, lit, art, total;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &art);

	total = his + lit + art;

	printf("총점은 %d이고 평균은 %.2lf 입니다.", total, total / 3.0);

	return 0;
}
