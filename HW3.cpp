#include<stdio.h>

int main()
{
	int sec = 74324;
	int m=0, h=0, s=0;

	h = (sec / 60)/60;
	m = (sec / 60) % 60;
	s = sec % 60;

	printf(" %d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", sec, h, m, s);

	return 0;
}