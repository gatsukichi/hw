#include<stdio.h>
int input();
int calc(int);
void output(int,int);
int main()
{
	int deep; // ����
	int date; // Ż��Ⱓ
	deep = input();
	date = calc(deep);
	output(deep,date);
	return 0;
}
int input()
{
	int input;
	printf("�칰�� ���̸� �Է��Ͻÿ�(cm����) :");
	scanf("%d", &input);
	return input;
}
int calc(int deep)
{
	int i; //�����Ǵ� �������� ���� ��ġ , �ݺ���
	int date = 0;

	for (i = 0; deep > 0 && i < deep; i -= 20) //��
	{
		i += 50; // ��
		date++;
		if (i >= deep) { break; } // ���̵Ǳ����� ���� ���������� ���
	}
		return date;
}
void output(int deep,int date)
{
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.", (double)deep/100, date);
	return;
}
