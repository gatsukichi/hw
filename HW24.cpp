#include<stdio.h>
int input();
int calc(int);
void output(int,int);
int main()
{
	int deep; // 깊이
	int date; // 탈출기간
	deep = input();
	date = calc(deep);
	output(deep,date);
	return 0;
}
int input()
{
	int input;
	printf("우물의 깊이를 입력하시오(cm단위) :");
	scanf("%d", &input);
	return input;
}
int calc(int deep)
{
	int i; //누적되는 달팽이의 현재 위치 , 반복자
	int date = 0;

	for (i = 0; deep > 0 && i < deep; i -= 20) //밤
	{
		i += 50; // 낮
		date++;
		if (i >= deep) { break; } // 밤이되기전에 먼저 나가버리는 경우
	}
		return date;
}
void output(int deep,int date)
{
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.", (double)deep/100, date);
	return;
}
