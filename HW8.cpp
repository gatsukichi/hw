#include<stdio.h>

int main()
{
	int his, lit, art, total;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &art);

	total = his + lit + art;

	printf("������ %d�̰� ����� %.2lf �Դϴ�.", total, total / 3.0);

	return 0;
}
